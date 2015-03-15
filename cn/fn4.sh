#~/bin/bash
echo "fn4 start time is "
date
while read line
do
	out=$(whois $line|grep "no matching")
	if [ "$out" = "no matching record." ];then
		echo $line
	fi
done<numlist4.txt
echo "fn4 end time is "
date
