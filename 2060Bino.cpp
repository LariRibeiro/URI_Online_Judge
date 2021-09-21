#include <iostream>
using namespace std;
 
int main() {
    
    int n, l[101],m2=0,m3=0,m4=0,m5=0;

    cin>>n;
	for(int i=0; i<n; i++){
	    cin>>l[i];
		if (l[i]>0 && l[i]<101){
    	if(l[i]%2==0)
			m2++;
		if(l[i]%3==0)
			m3++;
		if(l[i]%4==0)
			m4++;
		if(l[i]%5==0)
			m5++;}}
	if (n>=1 && n<1001){
    cout <<m2<<" Multiplo (s) de 2\n";
    cout <<m3<<" Multiplo (s) de 3\n";
    cout <<m4<<" Multiplo (s) de 4\n";
    cout <<m5<<" Multiplo (s) de 5\n";
}

    return 0;
}
