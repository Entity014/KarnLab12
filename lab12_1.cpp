#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
    string x;
    string a[9] = {"A" ,"B+" ,"B" ,"C+" ,"C" ,"D+" ,"D" ,"F" ,"W"};
    int i = 0;
    int k;
    cout << "Press Enter 3 times to reveal your future.";
    while(true)
    {
        getline(cin, x);
        if(x == "") i++;
        if(i >= 3) break;
    }
    srand(time(0));
    k = rand()%(sizeof(a)/sizeof(a[0]));
    cout << "You will get " << a[k] << " in this 261102.";
}