#include <iostream>
using namespace std;
main()
{
    int num;
    cout<<"Enter number of rows you want to print: ";
    cin>>num;
    for (int n=1; n<=num; n++)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}