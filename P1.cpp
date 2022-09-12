#include <iostream>
#include<time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int a;
    cout<<"enter a"<<endl;
    cin>>a;
    srand(time(0));
   cout << ((rand()%a+1+a)/2)*2<<"	is a random number between a and 2*a";
    return 0;
}
