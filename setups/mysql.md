# Set up MySQL server and workbench

This note is for setting up both MySQL server and MySQL workbench for MacOS and
Windows.

## Windows

For windows, please go to the https://dev.mysql.com/downloads/mysql/ to download
MySQL community server.

> Note that it's probably easier for you to use installer like below  
> ![MySQL installer link](imgs/mysql-installer.png)

Set up as development machine.
![mysql development mode](imgs/mysql-development.png)

While installing, please select not starting MySQL service from the start if you prefer not to start.
![Mysql service](imgs/mysql-service.png)

Upon installation, you can start your service by `net start mysql57` and stop by `net stop mysql57`.

> Mysql57 is coming from the earlier service set up screen

## MacOS

Install via [brew](http://brew.sh/)

```sh
brew install mysql
```

And then you can start the server by `mysql.server start`.

When you are done with the server, run `mysql.server stop`
