#include <iostream>
#include <string>
using namespace std;
void lowercase(string,int&);

int main()
{
    int n;
    string str;
    cout <<"enter a string" << endl;
cin.getline(str, 11);
    lowercase(str,n);
    cout<<n;
    return 0;
}
void lowercase(string a,int& b)
{
    int i;
    b=0;
    int p=a.length();
    for(i=0;i<p;i++)
    {
        char t=a.at(i);
        if (t=='a'||t=='e'||t=='i'||t=='o'||t=='u')
            b=b+1;
    }
}
