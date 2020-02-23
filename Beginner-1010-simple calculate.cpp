#include <iostream>
#include<iomanip>

using namespace std;

int main() {
	
	int code1,unit1,code2,unit2;
	double price1,price2;
	
	while(cin>>code1&&cin>>unit1&&cin>>price1&&cin>>code2&&cin>>unit2&&cin>>price2)
	{
	    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<(unit1*price1)+(unit2*price2)<<endl;
	}
	
	return 0;
}