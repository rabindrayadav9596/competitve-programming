#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int answer = 0;
    for (int i = 0; i < num + 1; i++)
    {
        string line;
        getline(cin, line);
        istringstream in(line, istringstream::in);
        int n;
        vector<int> numbers;
        while (in >> n)
        {
            numbers.push_back(n);
        }

        int count1 = 0;
        for (int i = 0; i < numbers.size(); i++)
        {
            if (numbers[i] == 1)
            {
                count1 += 1;
            }
        }
        if (count1 >= 2)
        {
            answer += 1;
        }
        }
    cout << answer;
    return 0;
}