#include<bits/stdc++.h>
using namespace std;                        
                                                //John Doe
                                                //1 85
                                                //Jane Smith
                                                //2 92
                                                //Michael Johnson
                                                //3 78
class student 
{
    public:
        string name;
        int roll;
        int marks;
};
int main()
{
    student a[3];   
    for (int i=0;i<3;i++)
    {
        getline (cin,a[i].name);
        cin >>a[i].roll>>a[i].marks;
        cin.ignore();
    }
    for(int i=0;i<3;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}
