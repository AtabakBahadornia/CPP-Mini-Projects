#include <iostream>

using namespace std;
struct nametype
{
    string first;
    string last;
};
struct addresstype
{
    string city;
    string street;
    string doorplate;
};
struct datetype
{
    int month;
    int year;
};
struct studenttype
{
    nametype name;
    string studentID;
    addresstype address;
    datetype entrance;
    string deptID;
    double grades[10];
};

void input(studenttype student[100])
{
    int i,j=0;
    for(i=0;i<100;i++)
    {
        cin>>student[i].name.first>>student[i].name.last;
        cout<<endl;
        cin>>studentID;
        cout<<endl;
        cin>>student[i].address.city>>student[i].address.street>>student[i].address.doorplate;
        cout<<endl;
        cin>>student[i].entrance.month>>student[i].entrance.year;
        cout<<endl;
        cin>>deptID;
        cout<<endl;
        for(j=0;j<10;j++)
            cin>>student[i].grades[j];
    }
}

int main()
{
studenttype student[100];
nametype name;
addresstype address;
datetype entrance;
input();
    return 0;
}
