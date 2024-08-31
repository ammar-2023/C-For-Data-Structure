#include<bits/stdc++.h>
using namespace std;
class student 
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
     
        student(int r,char s, int c,char *n)
        {
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }
};
student fun()
{
    char name[100]="Rahim Ullah";
    student Rahim(29,'C',7,name);
    return Rahim;
}
int main()   
{
    student Rahim=fun();

    cout<<Rahim.roll<<endl;
    cout<<Rahim.section<<endl;
    cout<<Rahim.cls<<endl;
    cout<<Rahim.name<<endl;   
    return 0;
}