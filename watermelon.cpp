

#include <iostream>
using namespace std;
int main()
{
    int weight;
    cin >> weight;
    if (weight % 2 == 0)
    {
        if (weight <= 2)
        {
            cout << "No";
        }
        else
        {
            cout << "Yes";
        }
    }
    else
    {
        cout << "No";
    }
}