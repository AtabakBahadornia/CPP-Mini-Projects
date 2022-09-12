#include<iostream>
#include<cmath>
using namespace std;
 int num;
 int pwr=0;
 int sum;
void input();
void digitsnum( int a);
void anagram( int b);
void output();
int main(){
  input();
  digitsnum(num);
  cout<<(pwr+1)<<endl;
  anagram(num);
  output();
  return 0;
}
void input(){
  cout<<"inter integer and positive number : ";
  cin>>num;
}
void digitsnum( int num){

  while(num / round(pow(10.0,pwr))>=10)
  pwr++;
}
void anagram( int b){
  int PWR=pwr;
  int d,c,w,q;
  sum = 0;
  while (PWR >= 0){
      w = round(pow(10.0 , PWR));
      q = round(pow(10.0 , (pwr - PWR)));
    c = num / w;
        d = c * q;
        sum = sum + d;
    num = num % w;
    PWR--;
    }
  }

void output(){
  cout<<"the number miror is : "<<sum;
}
