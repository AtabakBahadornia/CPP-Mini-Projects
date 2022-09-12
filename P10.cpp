#include <iostream>
#include <windows.h>
using namespace std;
char columnplace;
int rowplace;
int equivalentcolumnplace(char);
string chessboard[8][8];
void allocation(char,int,int);
bool CheckThePlace();
int main()
{
    allocation('A',equivalentcolumnplace('A'),6);
    allocation('B',equivalentcolumnplace('B'),3);
    allocation('C',equivalentcolumnplace('C'),5);
    allocation('D',equivalentcolumnplace('D'),7);
    allocation('E',equivalentcolumnplace('E'),1);
    allocation('G',equivalentcolumnplace('G'),2);
    allocation('H',equivalentcolumnplace('H'),8);
    cout<<
    cout<<"enter the column character of eighth queen: ";
    cin>>columnplace;
    cout<<"enter the row number of chessman: ";
    cin>>rowplace;
    if(CheckThePlace())
    {
        system("cls");
        cout<<"you can not allocate the eighth queen in this place,guess a new place";
    }
    else
    allocation(columnplace,equivalentcolumnplace(columnplace),rowplace);
    return 0;
}
int equivalentcolumnplace(char column)
{
    int i;
      if      (column=='A'|| column=='a' )
        i=0;
    else if (column=='B'|| column=='b' )
        i=1;
    else if (column=='C'|| column=='c' )
        i=2;
    else if (column=='D'|| column=='d' )
        i=3;
    else if (column=='E'|| column=='e' )
        i=4;
    else if (column=='F'|| column=='f' )
        i=5;
    else if (column=='G'|| column=='g' )
        i=6;
    else if (column=='H'|| column=='h' )
        i=7;
    else
    cout<<"you entered a wrong value!";
    return i;
}
void allocation(char columncharacter,int columnnumber,int row)
{
cout<<columncharacter<<row<<"   is allocated with a "<<"queen"<<endl;
for(int j=0;j<=7;j++)
{
    chessboard[j][columnnumber]="NotAllowed";
    chessboard[row-1][j]="NotAllowed";
}
}
bool CheckThePlace()
{
    bool Threat=0;
    if(chessboard[rowplace-1][equivalentcolumnplace(columnplace)]=="NotAllowed")
        Threat=1;
        return Threat;

}
