#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int m,n,s,t;//m�̧C�s�q�Bn�зǦs�q�Bs11�Ѧs�f�q�Bt��ѭq�f�q
	int box[5][13]={0};
	 string out[4]={"�P�f�q","�q�f��","��f��","�s�f�q"};
	 file>>m>>n>>s>>t;
	 box[1][12]=t;
	 box[1][11]=t;
	 box[3][11]=s;
	 cout<<"�e�g��";
	 for(int i=10;i>=1;i--){
	 	cout<<","<<i;
	 	file>>box[0][i];
	 	box[2][i]=box[1][i+2];//��f��=��ѫe�q�f�� 
	 	box[3][i]=box[3][i+1]-box[0][i]+box[2][i];//�s�f�q=�e�@�Ѧs�f-���ѾP�f+���Ѩ�f 
	 	if(box[3][i]<m){
	 		box[1][i]=n-box[3][i];//�p�G�s�f�p��̧C�s�q�A�h�q�f�q=�зǦs�q-�s�f�q 
	 	}
	 }
	 cout<<"\n";
	  for(int j=0;j<4;j++){
	  	cout<<out[j];
	  	for(int i=10;i>=1;i--){
	  		cout<<","<<box[j][i];
	  	}
	  	cout<<"\n";
	  }
	return 0;
}
