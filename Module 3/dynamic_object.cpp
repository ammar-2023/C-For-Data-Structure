#include<bits/stdc++.h>
using namespace std;
class student 
{
     public:
        char name[100];
        int roll;
        int cls;
        char section;
        student(int r,char s,int c,char *n)
        {
        roll=r;
        section=s;
        cls=c;
        strcpy(name,n);
        }
};
int main()
{
    char name[100]="Rahim Ullah";
    //student Rahim(5,"A",11,name);
    student *Rahim=new student(5,'A',11,name);

    // int *a=new int;
    // *a=10;
    // cout<<*a<<endl;

    
    // cout<<(*Rahim).name<<endl;
    // cout<<(*Rahim).roll<<endl;
    // cout<<(*Rahim).section<<endl;
    // cout<<(*Rahim).cls<<endl;

    // shortcut Upay 
    // arrow sign 
    // (*Rahim).= Rahim->
     
    cout<<Rahim->name<<endl;
    cout<<Rahim->roll<<endl;
    cout<<Rahim->section<<endl;
    cout<<Rahim->cls<<endl;

    cout<<endl;

    //delete an object
    delete Rahim;

    cout<<Rahim->name<<endl;
    cout<<Rahim->roll<<endl;
    cout<<Rahim->section<<endl;
    cout<<Rahim->cls<<endl;

    return 0;
}