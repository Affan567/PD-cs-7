#include <iostream>
using namespace std;
int dots(int num);
main()
{
    int n;
    cout<<"Enter number of triangles: ";
    cin>>n;
    int dot = dots(n);
    cout<<"Dots in the triangle is "<<dot;

}
int dots(int num)
{
    int i = num * (num+1);
    i = i/2;
    return i;
}