#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num;
    cin >> num;
    vector<string> words;
    for (int i = 0; i < num; i++)
    {
        string word;
        cin >> word;
        words.push_back(word);
    }
    for (int i = 0; i < num; i++)
    {

        if (words.at(i).length() <= 10)
        {
            cout << words.at(i) << endl;
        }
        else
        {
            int length = words.at(i).length();
            cout << words.at(i).at(0) << length - 2 << words.at(i).at(length - 1) << endl;
        }
    }
}