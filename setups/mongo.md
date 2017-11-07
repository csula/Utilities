# MongoDB Installation

## Table of content

* [MacOS](#macos)
* [Windows](#windows)
* [Linux](#linux)
* [School Laboratory](#school-laboratory)

## Purpose

This article is meant to go through the installation with MongoDB as simple as possible
while covering all different use cases (using laboratory desktop, using Windows, MacOS or Linux).

By the end of article, you should have MongoDB installed and ready to hack on some Mongo Shell Script.

Most of the installation is based on the official MongoDB installation guide:
https://docs.mongodb.com/getting-started/shell/installation/

## MacOS

### Installation

Installing software is quite easy on MacOS, follow homebrew:

```
brew install mongodb
```

> If you get the brew command not defined, please go to https://brew.sh/ to install

### Prepare data folder

After you install the mongodb, you will need to create a data directory under /data/db by

```
mkdir -p /data/db
```

### Run server

Then, you can start MongoDB by:

```
# rcliao @ Erics-MacBook-Pro in ~ [20:48:59]
$ mongod
2017-11-06T20:49:01.299-0800 I CONTROL  [initandlisten] MongoDB starting : pid=7077 port=27017 dbpath=/data/db 64-bit host=Erics-MacBook-Pro.local
2017-11-06T20:49:01.299-0800 I CONTROL  [initandlisten] db version v3.4.10
2017-11-06T20:49:01.299-0800 I CONTROL  [initandlisten] git version: 078f28920cb24de0dd479b5ea6c66c644f6326e9
2017-11-06T20:49:01.299-0800 I CONTROL  [initandlisten] OpenSSL version: OpenSSL 1.0.2m  2 Nov 2017
2017-11-06T20:49:01.299-0800 I CONTROL  [initandlisten] allocator: system
2017-11-06T20:49:01.299-0800 I CONTROL  [initandlisten] modules: none
2017-11-06T20:49:01.299-0800 I CONTROL  [initandlisten] build environment:
2017-11-06T20:49:01.299-0800 I CONTROL  [initandlisten]     distarch: x86_64
2017-11-06T20:49:01.299-0800 I CONTROL  [initandlisten]     target_arch: x86_64
2017-11-06T20:49:01.299-0800 I CONTROL  [initandlisten] options: {}
2017-11-06T20:49:01.300-0800 I -        [initandlisten] Detected data files in /data/db created by the 'wiredTiger' storage engine, so setting the active storage engine to 'wiredTiger'.
2017-11-06T20:49:01.300-0800 I STORAGE  [initandlisten] wiredtiger_open config: create,cache_size=7680M,session_max=20000,eviction=(threads_min=4,threads_max=4),config_base=false,statistics=(fast),log=(enabled=true,archive=true,path=journal,compressor=snappy),file_manager=(close_idle_time=100000),checkpoint=(wait=60,log_size=2GB),statistics_log=(wait=0),
2017-11-06T20:49:01.795-0800 I CONTROL  [initandlisten]
2017-11-06T20:49:01.795-0800 I CONTROL  [initandlisten] ** WARNING: Access control is not enabled for the database.
2017-11-06T20:49:01.795-0800 I CONTROL  [initandlisten] **          Read and write access to data and configuration is unrestricted.
2017-11-06T20:49:01.795-0800 I CONTROL  [initandlisten]
2017-11-06T20:49:01.797-0800 I FTDC     [initandlisten] Initializing full-time diagnostic data capture with directory '/data/db/diagnostic.data'
2017-11-06T20:49:01.797-0800 I NETWORK  [thread1] waiting for connections on port 27017
```

To make sure it is working, you should see output like above.

### Connect to server

To connect to MongoDB, open a new terminal window and connect by typing:

```
# rcliao @ Erics-MacBook-Pro in ~ [20:57:47]
$ mongo
MongoDB shell version v3.4.10
connecting to: mongodb://127.0.0.1:27017
MongoDB server version: 3.4.10
Server has startup warnings:
2017-11-06T20:57:46.338-0800 I CONTROL  [initandlisten]
2017-11-06T20:57:46.338-0800 I CONTROL  [initandlisten] ** WARNING: Access control is not enabled for the database.
2017-11-06T20:57:46.338-0800 I CONTROL  [initandlisten] **          Read and write access to data and configuration is unrestricted.
2017-11-06T20:57:46.338-0800 I CONTROL  [initandlisten]
>
```

## Windows

### Installation

In Windows, you will need to download from MongoDB site from https://www.mongodb.com/download-center#community

### Prepare data folder

After installation, you will also need to create a data folder by:

```
md \data\db
```

### Run server

Then, you can start the MongoDB by executing the mongod.exe e.g.:

```
C:\Program Files\MongoDB\Server\3.4\bin\mongod.exe
```

### Connect to server

```
C:\Program Files\MongoDB\Server\3.4\bin\mongo.exe
```

## Linux

### Installation

Well, you are using Linux. Follow article here https://docs.mongodb.com/getting-started/shell/tutorial/install-on-linux/

> You know what to do

Just kidding. In the following section, I'm going to assume you are using Ubuntu.

If you are using Ubuntu, install your MongoDB as followed:

```
sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv 0C49F3730359A14518585931BC711F9BA15703C6

echo "deb [ arch=amd64,arm64 ] http://repo.mongodb.org/apt/ubuntu xenial/mongodb-org/3.4 multiverse" | sudo tee /etc/apt/sources.list.d/mongodb-org-3.4.list

sudo apt-get update

sudo apt-get install -y mongodb-org
```

From here, you should have MongoDB installed.

### Run server

```
sudo service mongod start
```

### Connect to server

```
mongo
```

## School Laboratory

If you are using school laboratory, you don't need to worry about the installation
because you cant install anyway (without admin password).

What you need is to run `putty` to ssh into the server I have for you.

You will need credentials from me to know which server to connect to. Please talk to 
me in person to get those credentials.

http://recordit.co/VE38S4S9Pm

In text based instruction, you will need to get the host and port from me
as well as the username and password.

1. Open putty, enter the host and port as ssh connection
2. After ssh connection is satisfied, you can then give the username and password.
3. If everything goes well, then you can type in mongo to start!
