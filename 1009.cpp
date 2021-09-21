#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
	
	char nome[10];
	double sf,tv,s;
    cin.getline (nome,10);
	cin>>sf>>tv;
	s=sf+(0.15*tv);
	cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<s<<endl;
	
   return 0;
} 
