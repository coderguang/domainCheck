#shell
#***********************************************
#
#      Filename: start.sh
#
#      Author: coderguang 
#      Email: royalchen@royalchen.com
#      website: www.royalchen.com
#      Description: ----
#
#     Create: 2016-02-29 18:02:07
#     Last Modified: 2016-02-29 18:02:07
#***********************************************


test -d data/domain||mkdir -p data/domain

#sh find.sh numlist3.txt >>./data/domain/number3 &

#sh find.sh numlist4.txt >> ./data/domain/number4 &

#sh find.sh numlist5.txt >> ./data/domain/number5 &

#sh find.sh list3.txt >> ./data/domain/list3 &

sh find.sh list4.txt >> ./data/domain/list4 &
