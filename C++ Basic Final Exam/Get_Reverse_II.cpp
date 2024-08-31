#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
        string nm;
        int cls;
        char s;
        int id;
};
int main() 
{
    int N;
    cin>>N;   
    Student students[N];  
    for (int i=0;i<N;i++) {
        cin>>students[i].nm>>students[i].cls>>students[i].s
            >>students[i].id;
    }    
    int first_id=0;
    int last_id=N-1;
    while(first_id<last_id) 
    {
        swap(students[first_id].id,students[last_id].id);
        first_id++;
        last_id--;
    }
    for (int i=0;i<N;i++) 
    {
        cout<<students[i].nm<<" "<<students[i].cls<< " "
            <<students[i].s<<" "<<students[i].id<<endl;
    }
    
    return 0;
}
