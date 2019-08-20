domainCheck
====

[![Build Status](https://travis-ci.org/coderguang/domainCheck.svg?branch=master)](https://travis-ci.org/coderguang/domainCheck)


## just a simple check domain 
   
   now you can get a effective domain check tool, **[domainCheck_go](https://github.com/coderguang/domainCheck_go)**

## how to start

### 1. first install whois in your linux ,like centos:
```shell
    yum install -y whois
```
### 2. use make to complie the file
```shell
    make clean
    make
```
     it use clang to build,you also can use g++ to build it,you just need to modify clang++ to g++  in makefile
     
     
### 3. start find domainCheck
```shell
  sh find.sh *.txt
```

     
## others
  * use pwhois can solve the cpu too high problem!
  * finally you can look the log to get the unregit domain
  * you must have install whois before use
  * it will cause the cpu to 100%,this is the jwhois bug in centos,but seems it had fixed in Fedora and other linux.
if you have the better solutions.expect your advises.
