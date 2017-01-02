#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>

#include <sys/types.h>
#include <unistd.h>

static int world_size;
static int my_rank;
static int name_len;
static char processor_name[MPI_MAX_PROCESSOR_NAME];


void doManager()
{
    MPI_Status status;
    int N = 10;
    int i = 0;
    int stop = -1;
    srand(getpid());
    for (i = 0; i < 10; i++)
    {
        int randomWorker = (rand() % (world_size-1)) + 1;
        MPI_Send(&N, 1, MPI_INT, randomWorker, 0, MPI_COMM_WORLD);
        MPI_Recv(&N, 1, MPI_INT, randomWorker, 0, MPI_COMM_WORLD, &status);
    }
    for (i = 1; i < world_size; i++)
    {
        MPI_Send(&stop, 1, MPI_INT, i, 0, MPI_COMM_WORLD);
    }
}

void doWorker()
{
    MPI_Status status;
    int N = 0;
    int hasReceived = 0;
    
    while (N > -1)
    {
        MPI_Recv(&N, 1, MPI_INT, 0, 0, MPI_COMM_WORLD, &status);
        if (N > -1)
        {
            printf("%s has received N = %d\n", processor_name, N);
            if (!hasReceived){
                N++;
                hasReceived = 1;
            }
            else{
                N--;
                if (N < 0)
                    N = 0;
            }   
            MPI_Send(&N, 1, MPI_INT, 0, 0, MPI_COMM_WORLD); 
        }
    }
}

int main(int argc, char** argv)
{
    MPI_Init(NULL, NULL);
    
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);
    MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);
    MPI_Get_processor_name(processor_name, &name_len);
    
    if (my_rank == 0)
    {
        doManager();
    }
    else
    {
        doWorker();
    }
    
    MPI_Finalize();
    return 0;
}
