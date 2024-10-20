#include <iostream>
using namespace std;
main()
{
    int num;
    cout<<"Enter number of rows you want to print: ";
    cin>>num;
    for(int n = 0; n<num; n++)
    {
        for(int a=0;a<num - n;a++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


}