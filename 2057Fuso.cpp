#include <iostream>
using namespace std;
 
int main() {
	
	int s, t, f, h, hc;
	cin>>s>>t>>f;

	if ( s>=0 && s<24 && t>0 && t<13 && f>=-5 && f<6 ){
	
	if(s==0)
	s=24;
	
	h=s+t+f;
	
	if(h>=25){
	hc=h-24;
	cout<<hc;}
	
	else{
		if(h==24)
		h=0;
		cout<<h;}
}
    return 0;
}
