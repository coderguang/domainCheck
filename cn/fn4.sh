#~/bin/bash
echo "fn4 start time is "
date
while read line
do
	whois $line |grep "No match"
done<numlist4.txt
echo "fn4 end time is "
date
