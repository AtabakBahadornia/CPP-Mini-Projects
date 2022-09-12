#include <iostream>
#include <string>

using namespace std;
void pmoram(int&);
void nontopmam(int&,int&,int&,string&);
void pmamtonon(int&,int&,int&);
int main()
{
    int h,m,s,b=0;
    string str="pm";
    cout << "enter hour,minute and second;"<< endl;
    cin>>h;
    cin>>m;
    cin>>s;
    while(h>23)
    {
        cout<<"you entered a wrong hour value"<<endl<<"enter a new hour value"<<endl;
    cin>>h;
    }
        while(m>59)
    {
        cout<<"you entered a wrong minute value"<<endl<<"enter a new minute value"<<endl;
    cin>>m;
    }
        while(s>59)
    {
        cout<<"you entered a wrong second value"<<endl<<"enter a new minute value"<<endl;
    cin>>s;
    }
    pmoram(b);
    if (b==12)
        nontopmam(h,m,s,str);
        if (b==24)
        pmamtonon(h,m,s);
    return 0;
}
void pmoram(int& a)
{
    cout<<"what is your hour notation '24' or '12'"<<endl;
    cin>>a;
    while(a!=24 & a!=12)
    {

    cout<<"you entered a wrong number";
        cin>>a;
}
}
void nontopmam(int& q,int& w,int& e,string& r)
{

if (q<=12)
    r="am";
    else
    r="pm";
    cout<<q<<" hours"<<w<<"  minutes"<<e<<"  seconds   "<<r;

}
void pmamtonon(int& q,int& w,int& e)
{

cout<<q<<" hours"<<w<<"  minutes"<<e<<"  seconds";

}
