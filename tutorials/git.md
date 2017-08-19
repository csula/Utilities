# Git Tutorials

It's common for the students not to have any background of using *version control*
system like Git. Therefore, the goal of this article is to cover the basic of Git
and usual Github flow for the course assignments/labs.

## Basics

Before we start talking the detail of Git, it's highly recommend that students
start with the following tutorial first:

https://try.github.io/levels/1/challenges/1

## Github Flow

After finishing the tutorial above, please read the following article to
understand the *Github Flow*. Most of the course will require students to follow
Github Flow for the homework submission:

https://guides.github.com/introduction/flow/ 

## Usual assignment flow

After finished above reading on the Github Flow, we will follow the Github flow
to apply such concept to homework/lab submission. In specific:

1. Make sure master branch is up to date
    * `git checkout master`
    * `git pull origin master`
2. Branch off for the new homework
    * `git checkout -b {homework_name}`
        * Remember to replace *homework_name* to your homework name (e.g. homework1)
3. Start making source code changes and commit
    * `git commit -am "{summary of change}"`
        * This `-a` arguments indicated that you will commit everything at once. If you want to have better granular control, use `git add {filename}` before commit
        * `-m` argument is for providing the commit message directly. Without this option, you will be prompted with a default text editor to enter the commit description.
        * Try to give a good description of your changes in under 50 characters
4. Push changes to *Github*
    * `git push origin {branch_name}`
        * Branch name is probably the same as your homework name created from step 2
        * If you don't remember the branch name, do `git status`
5. When you are done with homework changes, create **pull request** on Github

> It's important to know that on any of the step above, you might be facing any
> sort of issue. The trick is staying calm and read the feedback messages carefully.

## Recording

[![asciicast](https://asciinema.org/a/TkVWBAMHEcixjRmMGFZe2krMJ.png)](https://asciinema.org/a/TkVWBAMHEcixjRmMGFZe2krMJ)
