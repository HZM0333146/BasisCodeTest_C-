#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int n;
	file>>n;
	int *a;
	a=new int[n];
	for(int i=0;i<n;i++){
		file>>a[i];
	}
	int min,max,mid,index;//�̤p�B�̤j�B ���J�� 
	int temp,count;
	for(int i=1;i<n;i++){
		temp=a[i];
		min=0;
		max=i-1;
		while(min<=max){
			mid=(min+max)/2;
			if(temp>a[mid]){
				min=mid+1;
			}else{
				max=mid-1;
			}
			count++;		
		}
		index=min;
		for(int j=i;j>index;j--){//�q�U���J����l�˥X �̧ǩ��Ჾ 
			a[j]=a[j-1];
		}
		a[index]=temp;
	}
	cout<<count<<endl;
	return 0;
}
