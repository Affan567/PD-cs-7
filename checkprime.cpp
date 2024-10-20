


#include <iostream>
using namespace std;
bool checkprime(int num);
main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool p = checkprime(n);
    cout<<p;

}

bool checkprime(int num)
{
    
    int count=0;
    for(int i = 1; i<=num; i++)
    {
        if( num % i == 0)
        {
            count ++;
        }
    }
    if(count ==2 )
        {
            
            return true;
        }
        else{
            return false;
        }
}