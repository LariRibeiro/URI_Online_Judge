#include <iostream>
using namespace std;
 
int main() {
	int i,a=0,m=0,d=0;
	cin>>i;
	
	if (i%365==0)
		a++;
	if (i%30==0)
		m++;
	if (i%1==0)
		d++;


	cout<<a<<" ano (s)\n"<<m<<" mes (es)\n"<<d<<" dia (s)\n";
	
   return 0;
} 
