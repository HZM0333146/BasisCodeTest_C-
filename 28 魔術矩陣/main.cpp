#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt");
	for(int xx=0;xx<2;xx++){//�������⦸ 
		int n;
		file>>n;
		int a[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				file>>a[i][j];
			}
		}
		bool sum_same=true,all_difference=true;//�P�_�]�N���ܼ� 
		int is[n],js[n],s1=0,s2=0;//�a�`�M,���`�M,�﨤�`�M 
		for(int i=0;i<n;i++){//��l�� 
			is[i]=0;
			js[i]=0;
		}		
		for(int i=0;i<n;i++){//�[�` 
			for(int j=0;j<n;j++){
				is[i]+=a[i][j];
				js[j]+=a[i][j];
				if(i==j){//�﨤�@ 
					s1+=a[i][j];
				}
				if(i+j==n-1){//�﨤�G 
					s2+=a[i][j];
				}
			}
		}	
		if(s1!=s2){//�P�_�﨤 
			sum_same=false;
		}
		for(int i=0;i<n;i++){//�P�_��L�[�` 
			for(int j=0;j<n;j++){
				if(is[i]!=js[j]){
					sum_same=false;
				}
			}
		}
		for(int i=0;i<n;i++){//�P�_�}�C�����۲� 
			for(int j=0;j<n;j++){
				for(int k=i+1;k<n;k++){
					for(int l=j+1;l<n;l++){
						if(a[i][j]==a[k][l]){
							all_difference=false;
						}
					}
				}
			}
		}
		int sum=0,mut=1;
		for(int i=0;i<n;i++){//��X�� 
			sum+=a[0][i];
			mut*=a[0][i];
		}
		if(sum_same==true&&all_difference==true){//�]�N 
			cout<<sum<<endl;
		}else{//���O 
			cout<<mut<<endl;
		}
	}	
	return 0;
}
