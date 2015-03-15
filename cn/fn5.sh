#~/bin/bash
echo "fn5 start time is "
date
while read line
do
	whois $line |grep "No match"
done<numlist5.txt
echo "fn5 end time is "
date
