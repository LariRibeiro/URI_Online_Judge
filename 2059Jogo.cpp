#include <iostream>
using namespace std;
 
int main() {
	
	int p,j1,j2,r,a,total;
	cin>>p>>j1>>j2>>r>>a;
	if(p>=0 && p<2 && r>=0 && r<2 && a>=0 && a<2 && j1>0 && j1<101 && j2>0 && j2<101 ){
	
	if(r==1 && a==0)
		cout<<"Jogador 1 ganha!\n";
	else if(r==1 && a==1)
			cout<<"Jogador 2 ganha!\n";
	else if(r==0 && a==1)
			cout<<"Jogador 1 ganha!\n";
	else if (r==0 && a==0){
		total=j1+j2;
	if(total%2==0 && p==1)
		cout<<"Jogador 1 ganha!\n";
	else if(total%2==0 && p==0)
			cout<<"Jogador 2 ganha!\n";
	else if(total%2!=0 && p==1)
			cout<<"Jogador 2 ganha!\n";
	else if(total%2!=0 && p==0)
			cout<<"Jogador 1 ganha!\n";
	}

}
    return 0;
}
