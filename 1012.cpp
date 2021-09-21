#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
	
	double a,b,c,at,ac,atr,aq,aret;
	cin>>a>>b>>c;
	at=(a*c)/2;
	ac=c*c*3.14159;
	atr=((a+b)*c)/2;
	aq= b*b;
	aret=a*b;	
	
	cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<at<<endl;
	cout<<"CIRCULO: "<<fixed<<setprecision(3)<<ac<<endl;
	cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<atr<<endl;
	cout<<"QUADRADO: "<<fixed<<setprecision(3)<<aq<<endl;
	cout<<"RETANGULO: "<<fixed<<setprecision(3)<<aret<<endl;
		
   return 0;
} 
