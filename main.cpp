#include <iostream>
using namespace std;
void say(string word);
int add(int a, int b);

int main()
{
    cout<<"Hello\n";
    cout<<"My name is Tom\n";
    say("Hi");
    cout<<"5 + 7 = "<<add(5,7)<<endl;
    cout<<"Add me in too"<<endl;
    return 0;
}
void say(string word)
{
    cout<<word<<endl;
}
int add(int a, int b)
{
    return a+b;
}