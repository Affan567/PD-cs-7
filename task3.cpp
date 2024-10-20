#include <iostream>
using namespace std;
main()
{
    int n;
    cout <<"Enter Number of rows: ";
    cin>>n;
    for(int i=1; i<=n ; i++)
    {
        for(int a = i; a<=n; a++){
            cout<<" ";
        }
        for(int j = 1; j<=i;j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n ; i++){
        for(int j = 1; j<=i;j++ ){
            cout<<" ";
        }
        for(int a = i; a<=n; a++){
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}