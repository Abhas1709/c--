# include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int age;
    string gender;
    
    cout << "Enter the age & gender";
    cin >> age;
    cin >> gender;
    string male = "Male";
    string female ="Female";


    if (age > 18 && gender == "male")
    {
        cout << " Male Adult";
    }
    if (age > 18 && gender == "female")
    {
        cout << "female adult";
    }
    if (age < 18 && gender == "male")
    {
        cout << "Male kid";
    }
    if (age < 18 && gender == "female")
    {
        cout << "Feamle kid";
    }
    return 0;
}