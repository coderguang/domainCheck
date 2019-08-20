#shell
#***********************************************
#
#      Filename: find.sh
#
#      Author: coderguang 
#      Email: royalchen@royalchen.com
#      website: www.royalchen.com
#      Description: ----
#
#     Create: 2016-01-27 12:11:46
#     Last Modified: 2016-01-27 12:11:46
#***********************************************


fileSrc=$1
echo "find $1 data start time is"
date

while read line
do
  result=$(pwhois $line | grep "No match"|wc -l)
  #echo $result
  if [ $result -eq 1 ] 
     echo "host had regist,domain:$line"
  then
     #echo "this host not regist"|mail -s $line royalchen@royalchen.com
     echo "this host not regist,domain:$line"
     echo $line
     sleep 5
  fi
  sleep 2
done<$1

echo "find $1 data end time is"
date
