#~/bin/bash
echo "f3 start time is "
date
while read line
do
	whois $line |grep "No match"
done<list3.txt
echo "f3 end time is "
date
