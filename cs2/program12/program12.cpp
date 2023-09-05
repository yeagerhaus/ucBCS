#include <iostream>

using namespace std;

int main()

{
    int change;
    cout<<"Enter the amount of change (in cents): ";
    cin>>change;

    
    int quarters  =  change / 25;
    change = change - quarters;
    
    int dimes = change / 10;
    change = change - dimes;
    
    int nickels = change / 5;
    change = change - nickels;
    
    int cents = change;
    
    cout<<"quarters=  "<<quarters<<endl;
     
    cout<<"dimes=  "<<dimes<<endl;

    cout<<"nickels=  "<<nickels<<endl;
        
    cout<<  "cents=  "<<cents<<endl;
    
    return 0;
}

