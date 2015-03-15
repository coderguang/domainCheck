#~/bin/bash
echo "fn5 start time is "
date
while read line
do
	out=$(whois $line|grep "no matching")
	if [ "$out" = "no matching record." ];then
		echo $line
	fi
done<numlist5.txt
echo "fn5 end time is "
date
