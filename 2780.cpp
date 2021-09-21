#include <iostream>
using namespace std;
 
int main() {
	
	int d,p;
	cin>>d;
	if (d>=0 && d<2001){
	if (d<801)
		p=1;
	else 
		if(d>800 && d<1401)
			p=2;
		else 
			if(d>1400 && d<2001)
				p=3;
	cout<<p<<endl;
}

   return 0;
} 
