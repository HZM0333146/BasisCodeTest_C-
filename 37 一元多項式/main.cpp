#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int n,k,word,squ,num=0;
	int box[100]={0};
	file>>n;
	//���o�Ĥ@�Ӥ�{�� 
	for(int i=0;i<n;i++){
		file>>word;
		file>>squ;
		box[squ]=word;
	}
	file>>n;
	//���o�ĤG�Ӥ�{���ûP�Ĥ@�Ӥ�{���ۥ[
	for(int i=0;i<n;i++){
		file>>word;
		file>>squ;
		box[squ]+=word;
	}
	 file>>n;
	for(int i=9;i>=0;i--){
		if(box[i]!=0){//��X!=0���� 
			num++;
			if(num==n){
				word=box[i];
				squ=i; 
			}
		}
	} 
	cout<<num<<endl;
	cout<<word<<" "<<squ<<endl;
	
	return 0;
}
