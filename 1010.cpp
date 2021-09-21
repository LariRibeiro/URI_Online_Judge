#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
	
	double cod,np,vu,cod2,np2,vu2,vt;
	cin>>cod>>np>>vu>>cod2>>np2>>vu2;
	vt=(np*vu)+(np2*vu2);
	cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<vt<<endl;
	
   return 0;
} 
