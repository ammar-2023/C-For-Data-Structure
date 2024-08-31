#include<bits/stdc++.h>
using namespace std;
class Student 
{
public:
    string name;
    int roll;
    int marks;
};
int main() 
{
    int N;
    cin >> N;
    Student* students = new Student[N];
    for (int i = 0; i < N; i++) 
    {
        cin >> students[i].name >> students[i].roll >> students[i].marks;
    }
    // Reverse the array
    for (int i = 0, j = N - 1; i < j; i++, j--) 
    {
        swap(students[i], students[j]);
    }
    // Print the reversed array
    for (int i = 0; i < N; i++) 
    {
        cout << students[i].name << " " << students[i].roll << " " << students[i].marks << endl;
    }
    delete[] students;
    return 0;
}
