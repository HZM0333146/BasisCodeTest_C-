#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int *box,n,k,num,min,x1=0,x2=0;
	file>>n>>k;
	box=new int[n];
	for(int i=0;i<n;i++){
		file>>box[i];
	}
	//���o�ĥ|�j���Ʀr 
	for(int i=0;i<n;i++){
		num=0;
		for(int j=0;j<n;j++){
			if(box[i]<=box[j]){//���X�j�󵥩�ۤv�Ʀr���ƶq 
				num++;
			}
		}
		if(num==k){//�p�G�O�ĥ|�j�Ʀr 
			min=box[i];
			break;
		} 
	}
	
	num=0;
	for(int i=0;i<n;i++){
		if(box[i]>=min){
			num++;
			if(num<=(k/2)){
				x1+=box[i];
			}else{
				x2+=box[i];
			}
		}
	}
	cout<<x1<<" , "<<x2<<endl;
	cout<<(x1*x2)<<endl;
	
	return 0;
}
