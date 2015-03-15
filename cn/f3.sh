#~/bin/bash
echo "f3 start time is "
date
while read line
do
	out=$(whois $line|grep "no matching")
	if [ "$out" = "no matching record." ];then
		echo $line
	fi
done<list3.txt
echo "f3 end time is "
date
