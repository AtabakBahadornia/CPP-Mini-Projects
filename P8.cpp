#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;
int main() {
srand (time(NULL));
int computer = rand() % 3 + 1;
int user = 0;
  string roc = "1) Rock\n";
  string pap = "2) Paper\n";
  string sci = "3) Scissors\n";
cout << "====================\n";
cout << "rock paper scissors!\n";
cout << "====================\n";
cout << roc;
cout << pap;
cout << sci;
cout << "Choose: ";
cin >> user;
cout << "\nYou  choose ";
  //Displaying user choice
  switch(user){
    case 1 :
    	cout << roc;
    	break;
    case 2 :
    	cout << pap;
    	break;
    case 3 :
    	cout << sci;
    	break;
    default :
    	cout << "Invalid Option\n";
  }

  //Displaying computer choice
cout << "Computer choose ";
    switch(computer){
    case 1 :
    	cout << roc;
    	break;
    case 2 :
    	cout << pap;
    	break;
    case 3 :
    	cout << sci;
    	break;
    default :
    	cout << "Invalid Option\n";
  }


  //Win Lose Draw Logic
  if(user == computer){
    cout << "Draw Game\n";
  }
  else if(user == 1 && computer == 3){
    cout << "You Win\n";
  }
  else if(user == 3 && computer == 2){
    cout << "You Win\n";
  }
  else if(user == 2 && computer == 1){
    cout << "You Win\n";
  }
  else{
    cout << "Computer Wins!\n";
  }

}
