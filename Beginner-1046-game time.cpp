#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int hourStart,hourEnd;
	
	
	while(cin>>hourStart && cin>>hourEnd)
	{
	    int temp;
	    
	    temp = hourEnd - hourStart;
	    
	    if(temp < 0)
	    {
	        temp = 24+temp; //-value means length of hours goes to next day
	    }
	    
	    if(hourStart == hourEnd)
	    {
	        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
	    }else{
	        cout<<"O JOGO DUROU "<<temp<<" HORA(S)"<<endl;
	    }
	}
	
	return 0;
}