#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main() {
	
	double a,b,c,x1,x2,d;
	cin>>a>>b>>c;
	d=sqrt((b*b)-4*a*c);
	if (d>=0 && a!=0){
	x1=(-b+d)/(2*a);
	x2=(-b-d)/(2*a);
	
	cout<<fixed<<setprecision(5)<<"R1 = "<<x1<<endl;
	cout<<fixed<<setprecision(5)<<"R2 = "<<x2<<endl;

}
	else
		cout<<"Impossivel calcular\n";
	
    return 0;
}
