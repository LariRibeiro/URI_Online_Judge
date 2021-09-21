#include <iostream>
#include <iomanip>
using namespace std;
	
	int main() {
	
	double a,b,c,A,p,t,m;
	cin>>a>>b>>c;
	m=a;
	if(b>m)
		m=b;
	if(c>m)
		m=c;
		
	if (m==a)
		t=b+c;
	else if(m==b)
			t=a+c;
		else if(m==c)
				t=a+b;
	
	if (m>=t){
		A=((a+b)*c)/2.0;
		cout<<"Area = "<<fixed<<setprecision(1)<<A<<endl;
	}
	else{
		p=a+b+c;
		cout<<"Perimetro = "<<fixed<<setprecision(1)<<p<<endl;
	}

	return 0;

}

