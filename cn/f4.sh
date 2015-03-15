#~/bin/bash
echo "f4 start time is "
date
while read line
do
	out=$(whois $line|grep "no matching")
	if [ "$out" = "no matching record." ];then
		echo $line
	fi
done<list4.txt
echo "f4 end time is "
date
