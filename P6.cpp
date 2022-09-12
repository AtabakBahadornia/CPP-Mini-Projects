#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
double angle;  string operator0; double sum1=0.0;
void getdegree();  void Operating(); void Printresult();
double Sine (double x);  double Cosine (double x);
int factorial_1(int x); int factorial_2(int x);
double power_1(int x);  double power_2(double x , int y);  double power_3(double x , int y);
int main ()
{
getdegree();
Operating();
Printresult();
return 0;
}
void getdegree()
{
cout << " Enter an angle in term of degree:\n";
cin >> angle;
angle=(angle/180)*3.14;
}
void Operating()
{
cout << " Choose one of the following operators:\n";
cout << " 1.Sine\n";
cout << " 2.Cosine\n";
cin >> operator0;
if (operator0=="Sine"||operator0=="1"||operator0=="sine")
Sine(angle);
else if (operator0=="Cosine"||operator0=="2"||operator0=="cosine")
Cosine(angle);
}
double Sine(double x)
{
int k ;
double  g ;
for(k=0 ; k <= 5 ; k++){
g=(power_1(k))*(power_2(x,k))/(factorial_1(k));
sum1+=g;
}
return sum1;
}
double Cosine(double x){
int m;
double  z;
for(m=0 ; m <= 5 ; m++){
z=(power_1(m))*(power_3(x,m))/(factorial_2(m));
sum1+=z;
}
}
void Printresult()
{
cout<<endl<<"the answer is:   "<<sum1;
}
int factorial_1(int x){
int i , P=1;
for(i=1 ; i<=(2*x+1) ; i++)
P*=i;
return P;
}
int factorial_2(int x){
int j , K=1;
for(j=1 ; j<=(2*x) ; j++)
K*=j;
return K;
}

double power_1(int x){
return pow(-1.0,x);
}
double power_2(double x , int y){
return (pow(x,(2*y+1)));
}
double power_3(double h , int l){
return pow(h,(2*l));
}
