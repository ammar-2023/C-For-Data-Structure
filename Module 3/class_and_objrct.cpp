#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class student 
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};
int main() 
{
    student Rahim;
    Rahim.roll = 29;
    Rahim.cls = 9;
    Rahim.section = 'A';
    char nm[100] = "Rahim";
    strcpy(Rahim.name, nm);

    student Karim;
    Karim.roll = 55;
    Karim.cls = 9;
    Karim.section = 'C';
    char nm2[100] = "Karim";
    strcpy(Karim.name, nm2);

    cout << Rahim.roll << endl;
    cout << Karim.name << endl;

    return 0;
}

