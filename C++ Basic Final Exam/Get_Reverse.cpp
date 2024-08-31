#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
        string nm;
        int cls;
        char s;
        int math_marks;
        int eng_mark;
};
int main() 
{
    int N;
    cin >> N;   
    Student students[N];   
    for (int i = 0; i < N; i++) 
    {
        cin>>students[i].nm >>students[i].cls>>students[i].s
            >>students[i].math_marks>>students[i].eng_mark;
    }
    for (int i = N - 1; i >= 0; i--) 
    {
        cout<<students[i].nm<<" "<<students[i].cls<<" "<<students[i].s<<" " 
        <<students[i].math_marks<<" "<<students[i].eng_mark<<endl;
    }   
    return 0;
}
