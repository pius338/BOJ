#include <iostream>
using namespace std;

int main()
{
    string name, grade;
    int age, w;
    while(1)
    {
        cin >> name >> age >> w;
        if(name == "#" && age == 0 && w == 0)
            break;
        grade = (age > 17 || w >= 80)? "Senior" : "Junior";
        cout << name << ' ' << grade << '\n';
    }
}