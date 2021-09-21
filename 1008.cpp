#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
	
	double n,ht,v,s;
	cin>>n>>ht>>v;
	s=ht*v;
	cout<<"NUMBER = "<<n<<"\nSALARY = U$ "<<fixed<<setprecision(2)<<s<<endl;
	
   return 0;
}
