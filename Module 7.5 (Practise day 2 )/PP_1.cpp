#include<bits/stdc++.h>
using namespace std;
class Student {
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student a, Student b) 
{
    if (a.marks == b.marks)
    return a.roll < b.roll;  // Sort by roll in ascending order if marks are equal
    return a.marks > b.marks;  // Sort by marks in descending order
}
int main() 
{
    int N;
    cin >> N;
    Student* students = new Student[N];
    for (int i = 0; i < N; i++) 
    {
        cin >> students[i].name >> students[i].roll >> students[i].marks;
    }
    sort(students, students + N, cmp);
    for (int i = 0; i < N; i++) 
    {
        cout << students[i].name << " " << students[i].roll << " " << students[i].marks << endl;
    }
    delete[] students;
    return 0;
}
