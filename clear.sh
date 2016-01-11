#!/bin/bash

function fileClear(){
	for file in `ls $1`
		do 
			if [ -d $1"/"$file ]
			then
				rm -f *.o *.gch *~
				cd $1"/"$file
				rm -f *.o *.gch *~
				fileClear $1"/"$file
			fi
		done
}

runPath=$(cd `dirname $0`;pwd)

fileClear $runPath

