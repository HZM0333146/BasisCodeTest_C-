#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int **T;
	int **P;
	T=new int*[3];//�ŧiT ���Ŷ� 
	for(int i=0;i<3;i++){
		T[i]=new int[3];
	}
	P=new int*[7];//�ŧiP ���Ŷ�
	for(int i=0;i<7;i++){
		P[i]=new int[7];
	}
	for(int i=0;i<3;i++){//Ū�JT 
		for(int j=0;j<3;j++){
			file>>T[i][j];
		}
	}
	for(int i=0;i<5;i++){//Ū�JP
		for(int j=0;j<7;j++){
			file>>P[i][j];
		}
	}
	for(int i=0;i<=(5-3);i++){//Ū�JT 
		for(int j=0;j<=(7-3);j++){
			for(int k=0;k<3;k++){
				if(P[i][j+k]!=T[0][k]||P[i+1][j+k]!=T[1][k]||P[i+2][j+k]!=T[2][k]){
			   		break;
			   }
				if(k==2){//�p�}�C�����סA����3�A3-1�N���̫�@�泣�O���T�� 
					cout<<i<<","<<j;
				}
			}
		}
	}
	return 0;
}
