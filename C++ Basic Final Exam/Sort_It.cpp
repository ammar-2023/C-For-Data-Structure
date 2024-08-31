#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
};
bool CmpByMarks(Student a, Student b)
{
    int totalmarks_1=a.math_marks+a.eng_marks;
    int totalmarks_2=b.math_marks+b.eng_marks;
    if(totalmarks_1==totalmarks_2)
    {
        return a.id<b.id;
    }
    return totalmarks_1>totalmarks_2;
}
int main()   
{
    int N;
    cin >> N;   
    Student students[N];   
    for (int i = 0; i < N; i++) 
    {
        cin>> students[i].nm>> students[i].cls>> students[i].s
            >>students[i].id >>students[i].math_marks>>students[i].eng_marks;
    }    
    sort(students,students+N,CmpByMarks);
    for (int i = 0; i < N; i++) 
    {
        cout<<students[i].nm<<" "<<students[i].cls<<" "<<students[i].s<<" "<<students[i].id<<
        " "<<students[i].math_marks<<" "<<students[i].eng_marks<<endl;
    }
   return 0;
}