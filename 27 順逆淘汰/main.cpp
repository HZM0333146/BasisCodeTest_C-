#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int n,m;
	file>>n>>m;
	string *name;//�W�� 
	bool *islive;//�O�_�s��
	name=new string[n];
	islive=new bool[n];
	for(int i=0;i<n;i++){
		file>>name[i];
		islive[i]=true;//�w�]�s�����A 
	} 
	int count=0,local=0;//�p�⦺�`�H�ơFlocal�۷��y�� ��0�}�l 
	int num=n;//�p��Ѿl�H�� 
	while(num>1){//��C���H�Ƥj��@�ɡA�h�~��C�� 
		if(islive[local]){//�p�G�s���b�p��H�� 
			count++;
			if(count==m){//m�M�w�ĴX�Ӳ^�O�A�p�G�۵���ܲ^�O 
				islive[local]=false;
				count=0;//���s�p��s���H�� 
				num--;
			}
		}
		local++; 
		if(local==n){
			local=0;//���Y(0)�p��n�� 
		} 
	}
	for(int i=0;i<n;i++){
		if(islive[i]){
			cout<<"Winner is �G "<<name[i]; 
		}
	}
	return 0;
}
