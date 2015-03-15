#~/bin/bash
echo "fn3 start time is "
date
while read line
do
	whois $line |grep "No match"
done<numlist3.txt
echo "fn3 end time is "
date
