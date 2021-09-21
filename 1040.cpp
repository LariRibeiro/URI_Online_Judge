#include <iostream>
#include <iomanip>
using namespace std;
	
	int main() {
	
	double n1,n2,n3,n4,m,ne,mf;
	cin>>n1>>n2>>n3>>n4;
	m=(n1*2 + n2*3 + n3*4 + n4*1)/10;
	cout<<"Media: "<<fixed<<setprecision(1)<<m<<endl;
	
	if(m>=5.0 && m<=6.9){
		cout<<"Aluno em exame.\n";
		cin>>ne;			
		cout<<"Nota do exame: "<<fixed<<setprecision(1)<<ne<<endl;
		mf=(m+ne)/2;
	}
	
	if(m>=7 || mf>=5.0)
		cout<<"Aluno aprovado.\n";
	else if(m<5 || mf<=4.9)
			cout<<"Aluno reprovado.\n";
	
	if(m>=5.0 && m<=6.9)
		cout<<"Media final: "<<fixed<<setprecision(1)<<mf<<endl;
	
	return 0;

}

