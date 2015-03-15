#~/bin/bash
echo "fn3 start time is "
date
while read line
do
	out=$(whois $line|grep "no matching")
	if [ "$out" = "no matching record." ];then
		echo $line
	fi
done<numlist3.txt
echo "fn3 end time is "
date
