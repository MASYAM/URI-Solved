#include <iostream>
#include<iomanip>

using namespace std;

int main() {
	
	int R;
	
	/*
	Tip: Use (4/3.0) or (4.0/3) in your formula, because some languages (including C++) assume that the division's result between two integers is another integer. :)
	*/
	
	while(cin>>R)
	{
	    cout<<"VOLUME = "<<fixed<<setprecision(3)<<(4.0/3)*3.14159*R*R*R<<endl;
	}
	
	return 0;
}
