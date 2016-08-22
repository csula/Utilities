# Java & Gradle environment setup

This note is for the Java and Gradle setup!

## Java

Install [OracleJDK 8](http://www.oracle.com/technetwork/java/javase/downloads/index.html) if you don't already have one.

### Windows User

Click on the link above (OracleJDK 8) to install Java 8. Upon completion of
installation, please set up the `JAVA_HOME` in path environment variable as well.

### Mac User

You can install [brew](http://brew.sh/) and follow the following to install Java 8.

```sh
brew tap caskroom/cask
brew install brew-cask
brew cask install java
```

### Check Java installed

You can use `java -version` and `javac -version` to ensure Java JDK is installed

You should see something like:

```sh
# eric @ Erics-MacBook-Pro
$ java -version
java version "1.8.0_40"
Java(TM) SE Runtime Environment (build 1.8.0_40-b25)
Java HotSpot(TM) 64-Bit Server VM (build 25.40-b25, mixed mode)

# eric @ Erics-MacBook-Pro
$ javac -version
javac 1.8.0_40
```

## Gradle

Install [Gradle](https://gradle.org/) as this will be our primary build tool.

### Windows User

Click on the link above and install Gradle accordingly.

### Mac User

Install via `brew install gradle` assuming you have `brew` installed.

### Linux User

* CentOS users can follow the instruction found in [Github Gist](https://gist.github.com/parzonka/9371885).  
* Ubuntu users take a look at the [Ask Ubuntu Stack Exchange Tutorial](https://askubuntu.com/questions/328178/gradle-in-ubuntu).

### Check Gradle installed

Use `gradle -v` to check your gradle is installed.

Should see something from your terminal like:

```sh
# eric @ Erics-MacBook-Pro
$ gradle -v

------------------------------------------------------------
Gradle 3.0
------------------------------------------------------------

Build time:   2016-08-15 13:15:01 UTC
Revision:     ad76ba00f59ecb287bd3c037bd25fc3df13ca558

Groovy:       2.4.7
Ant:          Apache Ant(TM) version 1.9.6 compiled on June 29 2015
JVM:          1.8.0_40 (Oracle Corporation 25.40-b25)
OS:           Mac OS X 10.11.6 x86_64
```
