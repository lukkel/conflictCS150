#include <iostream>
using namespace std;
void say(string word);
int main()
{
    cout<<"Hello\n";
    cout<<"My name is Tom\n";
    say("Hi");
    return 0;
}
void say(string word)
{
    cout<<word<<endl;
}