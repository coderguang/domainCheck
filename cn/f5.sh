#~/bin/bash
echo "f5 start time is "
date
while read line
do
	out=$(whois $line|grep "no matching")
	if [ "$out" = "no matching record." ];then
		echo $line
	fi
done<list5.txt
echo "f5 end time is "
date
