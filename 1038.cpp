#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;
	
	int main() {
		
	int cod,qtd;
	double v;
	cin>>cod>>qtd;
	switch (cod)
	{
		case 1:
		v=qtd*4.00;
		break;

		case 2:
		v=qtd*4.50;
		break;
		
		case 3:
		v=qtd*5.00;
		break;
		
		case 4:
		v=qtd*2.00;
		break;
		
		case 5:
		v=qtd*1.50;
		break;		
	}
	
	cout<<"Total: R$ "<<fixed<<setprecision(2)<<v<<endl;
	
	return 0;

}
