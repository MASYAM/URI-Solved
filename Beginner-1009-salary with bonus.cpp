#include <iostream>
#include<iomanip>
#include<string>
using namespace std;

int main() {
	
	string name;
	double salary,sale;
	
	while(cin>>name&&cin>>salary&&cin>>sale)
	{
	    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<((sale*15)/100)+salary<<endl;
	}
	
	return 0;
}