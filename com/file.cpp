#include <iostream>
#include <fstream>

using namespace std;
int main(){
	string str="zyxwvutsrqponmlkjihgfedcba0123456789";
	string com=".com";

	const int MAX=36;

	ofstream file3;
	file3.open("list3.txt");
	file3<<"thisisatestfile3"<<com<<endl;

	for(int i=0;i<MAX;i++){
		file3<<"thiis3test"<<str[i]<<com<<endl;
		for(int j=0;j<MAX;j++)
			for(int k=0;k<MAX;k++){
				file3<<str[i]<<str[j]<<str[k]<<com<<endl;
			}
	}
	file3<<"list3endtest"<<com<<endl;	
	cout<<"make list3 done!"<<endl;
	file3.close();

	ofstream file4;
	file4.open("list4.txt");
	file4<<"thisisatestfile4"<<com<<endl;

	for(int m=0;m<MAX;m++)
		for(int i=0;i<MAX;i++){
			file4<<"thiis4test"<<str[m]<<str[i]<<com<<endl;
			for(int j=0;j<MAX;j++)
				for(int k=0;k<MAX;k++){
					file4<<str[m]<<str[i]<<str[j]<<str[k]<<com<<endl;
				}
		}
	file4<<"list4endtest"<<com<<endl;	
	cout<<"make list4 done!"<<endl;
	file4.close();
	
	ofstream file5;
	file5.open("list5.txt");
	file5<<"thisisatestfile5"<<com<<endl;

	for(int s=0;s<MAX;s++)
		for(int m=0;m<MAX;m++)
			for(int i=0;i<MAX;i++){
				file5<<"thiis5test"<<str[s]<<str[m]<<str[i]<<com<<endl;
				for(int j=0;j<MAX;j++)
					for(int k=0;k<MAX;k++){
						file5<<str[s]<<str[m]<<str[i]<<str[j]<<str[k]<<com<<endl;
					}
			}
	file5<<"list5endtest"<<com<<endl;	
	cout<<"make list5 done!"<<endl;
	file5.close();
	
	const int NUMMAX=10;
	string strNum="0123456789";

	ofstream numFile3;
	numFile3.open("numlist3.txt");
	numFile3<<"thisisanumTestnumFile3"<<com<<endl;

	for(int i=0;i<NUMMAX;i++){
		numFile3<<"thiis3numTest"<<strNum[i]<<com<<endl;
		for(int j=0;j<NUMMAX;j++)
			for(int k=0;k<NUMMAX;k++){
				numFile3<<strNum[i]<<strNum[j]<<strNum[k]<<com<<endl;
			}
	}
	numFile3<<"numlist3endnumTest"<<com<<endl;	
	cout<<"make numlist3 done!"<<endl;
	numFile3.close();

	ofstream numFile4;
	numFile4.open("numlist4.txt");
	numFile4<<"thisisanumTestnumFile4"<<com<<endl;

	for(int m=0;m<NUMMAX;m++)
		for(int i=0;i<NUMMAX;i++){
			numFile4<<"thiis4numTest"<<strNum[m]<<strNum[i]<<com<<endl;
			for(int j=0;j<NUMMAX;j++)
				for(int k=0;k<NUMMAX;k++){
					numFile4<<strNum[m]<<strNum[i]<<strNum[j]<<strNum[k]<<com<<endl;
				}
		}
	numFile4<<"numlist4endnumTest"<<com<<endl;	
	cout<<"make numlist4 done!"<<endl;
	numFile4.close();
	
/*
	ofstream numFile5;
	numFile5.open("numlist5.txt");
	numFile5<<"thisisanumTestnumFile5"<<com<<endl;

	for(int s=0;s<NUMMAX;s++)
		for(int m=0;m<NUMMAX;m++)
			for(int i=0;i<NUMMAX;i++){
				numFile5<<"thiis5numTest"<<strNum[s]<<strNum[m]<<strNum[i]<<com<<endl;
				for(int j=0;j<NUMMAX;j++)
					for(int k=0;k<NUMMAX;k++){
						numFile5<<strNum[s]<<strNum[m]<<strNum[i]<<strNum[j]<<strNum[k]<<com<<endl;
					}
			}
	numFile5<<"numlist5endnumTest"<<com<<endl;	
	cout<<"make numlist5 done!"<<endl;
	numFile5.close();
*/
	cout<<"all weblist maked!"<<endl;


}
