#include <iostream>
#include <string>
using namespace std;
int num;
char ch;
double y;
string z;
void funcDefaultParam(int, char, double,string);

int main()
{
    int a;
    char b;
    double c;
    string d;
  funcDefaultParam(10, 3.8, 'u');
    cout <<num<<endl<<ch<<endl<<y<<endl<<z<< endl;
    return 0;
}

void funcDefaultParam(int num, char ch = '*', double y = 2.5,string z = "*")
{
    int r=4;
}
