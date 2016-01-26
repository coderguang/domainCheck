#~/bin/bash
echo "f4 start time is "
date
while read line
do
	whois $line |grep "No match"
done<list4.txt
echo "f4 end time is "
date
