#~/bin/bash
echo "f5 start time is "
date
while read line
do
	whois $line|grep "match"

done<list5.txt
echo "f5 end time is "
date
