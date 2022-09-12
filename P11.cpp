#include <iostream>
#include <stdlib.h>
#include <time.h>
int j;

using namespace std;
void printnames(int);
enum members {Ali,Reza,Hasan,Hosein,Mohammad,Changiz,Rostam,Afrasiab,Iraj,Fereydon};
int main()
{
int array[5];
srand(time(0));
int a=rand();
cout<<"* * * *First Project Members * * * *"<<endl;
    for (int i=a+4;i>=a;i--)
    {
        srand(i);
        array[i-a]=rand()%10;
         j=i-a;
                while((array[j]==array[j+1])||(array[j]==array[j+2])||(array[j]==array[j+3])||(array[j]==array[j+4])
                ||(array[j]==array[j-1])||(array[j]==array[j-2])||(array[j]==array[j-3])||(array[j]==array[j-4]))
                array[j]=rand()%10;
                int number=array[i-a];
				printnames(number);

    }
    cout<<"* * * *Second Project Members * * * *"<<endl;
	for (int k=0;k<=9;k++)
	{
	if(k==array[0]||k==array[1]|k==array[2]||k==array[3]||k==array[4])
    continue;
	printnames(k);
	}
    
}
void printnames(int namenum)
{
		cout<<5-j;
		if (namenum==0)
		cout<<". Ali"<<endl;
		else if (namenum==1)
		cout<<". Reza"<<endl;
		else if (namenum==2)
		cout<<". Hasan"<<endl;
		else if (namenum==3)
		cout<<". Hosein"<<endl;
		else if (namenum==4)
		cout<<". Mohammad"<<endl;
		else if (namenum==5)
		cout<<". Changiz"<<endl;
		else if (namenum==6)
		cout<<". Rostam"<<endl;
		else if (namenum==7)
		cout<<". Afrasiab"<<endl;
		else if (namenum==8)
		cout<<". Iraj"<<endl;
		else if (namenum==9)
		cout<<". Fereydon"<<endl;
	
	
}
