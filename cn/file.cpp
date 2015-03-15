#include <iostream>
#include <fstream>

using namespace std;
int main(){
	string str="abcdefghijklmnopqrstuvwxyz";
	string cn=".cn";

	const int MAX=26;

	ofstream file3;
	file3.open("list3.txt");
	file3<<"thisisatestfile3"<<cn<<endl;

	for(int i=0;i<MAX;i++){
		file3<<"thiis3test"<<str[i]<<cn<<endl;
		for(int j=0;j<MAX;j++)
			for(int k=0;k<MAX;k++){
				file3<<str[i]<<str[j]<<str[k]<<cn<<endl;
			}
	}
	file3<<"list3endtest"<<cn<<endl;	
	cout<<"make list3 done!"<<endl;
	file3.close();

	ofstream file4;
	file4.open("list4.txt");
	file4<<"thisisatestfile4"<<cn<<endl;

	for(int m=0;m<MAX;m++)
		for(int i=0;i<MAX;i++){
			file4<<"thiis4test"<<str[m]<<str[i]<<cn<<endl;
			for(int j=0;j<MAX;j++)
				for(int k=0;k<MAX;k++){
					file4<<str[m]<<str[i]<<str[j]<<str[k]<<cn<<endl;
				}
		}
	file4<<"list4endtest"<<cn<<endl;	
	cout<<"make list4 done!"<<endl;
	file4.close();
	
	ofstream file5;
	file5.open("list5.txt");
	file5<<"thisisatestfile5"<<cn<<endl;

	for(int s=0;s<MAX;s++)
		for(int m=0;m<MAX;m++)
			for(int i=0;i<MAX;i++){
				file5<<"thiis5test"<<str[s]<<str[m]<<str[i]<<cn<<endl;
				for(int j=0;j<MAX;j++)
					for(int k=0;k<MAX;k++){
						file5<<str[s]<<str[m]<<str[i]<<str[j]<<str[k]<<cn<<endl;
					}
			}
	file5<<"list5endtest"<<cn<<endl;	
	cout<<"make list5 done!"<<endl;
	file5.close();
	
	const int NUMMAX=10;
	string strNum="0123456789";

	ofstream numFile3;
	numFile3.open("numlist3.txt");
	numFile3<<"thisisanumTestnumFile3"<<cn<<endl;

	for(int i=0;i<NUMMAX;i++){
		numFile3<<"thiis3numTest"<<strNum[i]<<cn<<endl;
		for(int j=0;j<NUMMAX;j++)
			for(int k=0;k<NUMMAX;k++){
				numFile3<<strNum[i]<<strNum[j]<<strNum[k]<<cn<<endl;
			}
	}
	numFile3<<"numlist3endnumTest"<<cn<<endl;	
	cout<<"make numlist3 done!"<<endl;
	numFile3.close();

	ofstream numFile4;
	numFile4.open("numlist4.txt");
	numFile4<<"thisisanumTestnumFile4"<<cn<<endl;

	for(int m=0;m<NUMMAX;m++)
		for(int i=0;i<NUMMAX;i++){
			numFile4<<"thiis4numTest"<<strNum[m]<<strNum[i]<<cn<<endl;
			for(int j=0;j<NUMMAX;j++)
				for(int k=0;k<NUMMAX;k++){
					numFile4<<strNum[m]<<strNum[i]<<strNum[j]<<strNum[k]<<cn<<endl;
				}
		}
	numFile4<<"numlist4endnumTest"<<cn<<endl;	
	cout<<"make numlist4 done!"<<endl;
	numFile4.close();
	
	ofstream numFile5;
	numFile5.open("numlist5.txt");
	numFile5<<"thisisanumTestnumFile5"<<cn<<endl;

	for(int s=0;s<NUMMAX;s++)
		for(int m=0;m<NUMMAX;m++)
			for(int i=0;i<NUMMAX;i++){
				numFile5<<"thiis5numTest"<<strNum[s]<<strNum[m]<<strNum[i]<<cn<<endl;
				for(int j=0;j<NUMMAX;j++)
					for(int k=0;k<NUMMAX;k++){
						numFile5<<strNum[s]<<strNum[m]<<strNum[i]<<strNum[j]<<strNum[k]<<cn<<endl;
					}
			}
	numFile5<<"numlist5endnumTest"<<cn<<endl;	
	cout<<"make numlist5 done!"<<endl;
	numFile5.close();

	cout<<"all weblist maked!"<<endl;


}
