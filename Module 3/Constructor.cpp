#include<bits/stdc++.h>
using namespace std;
class student 
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
        
        //Constructor
        student(int r,int s,int c,char *n)
        {
        roll=r;
        section=s;
        cls=c;
        strcpy(name,n);
        }
};
int main()   
{
    student Rahim(29,'A',7,"Rahim Ullah");

    cout<<Rahim.roll<<endl;
    cout<<Rahim.section<<endl;
    cout<<Rahim.cls<<endl;
    cout<<Rahim.name<<endl;
    
    return 0;
}