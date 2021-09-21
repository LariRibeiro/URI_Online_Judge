#include <iostream>
using namespace std;
	
	int main(){
		
	int a,b,c,d,s1,s2;
	cin>>a>>b>>c>>d;
	s1=c+d;
	s2=a+b;
	if(s1>s2 && c>0 && d>0 && a%2==0 && b>c && d>a )
		cout<<"Valores aceitos\n";
	else
		cout<<"Valores nao aceitos\n";
	
	return 0;

}
