#include <iostream>
using namespace std;
void amplify(int num);
main()
{
    int n;
    cout<<"Enter a number to amplify : ";
    cin>>n;
    amplify(n);
}




void amplify(int num)
{    
    for(int x= 1; x<=num;x++) 
    {
        
        if(x % 4 == 0 )
        {
            x = x*10;
            cout<<x<<",";
            x = x/10;
        }
        else
        {
            cout<<x<<",";
        }
    }
}

