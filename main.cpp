#include <iostream>
using namespace std;
int add(int a, int b);
int main()
{
    cout<<"Hello\n";
    cout<<"My name is Tom\n";
    cout<<"5 + 7 = "<<add(5,7)<<endl;
    cout<<"Add me in too"<<endl;
    return 0;
}
int add(int a, int b)
{
    return a+b;
}