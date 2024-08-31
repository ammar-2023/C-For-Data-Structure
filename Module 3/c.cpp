#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        float height;
        int age;

    // Constructor
    Person(const string & personName,float personHeight,int personAge)
    {
        name=personName;
        height=personHeight;
        age=personAge;
    }
};
int main() 
{
    Person person1("Ammar", 75.5, 20);
    Person person2("Rahat", 65.2, 30);

    if (person1.age > person2.age) 
    {
        cout<<" "<<person1.name<<endl;
    } 
    else if (person2.age > person1.age) 
    {
        cout<<" "<<person2.name<<endl;
    }
    return 0;
}
