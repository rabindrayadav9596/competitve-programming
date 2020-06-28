#include <iostream>
using namespace std;
int main()
{
    long long int count_len, count_bre, n, m, a;
    cin >> n >> m >> a;
    count_len = 0;
    count_bre = 0;
    long long int temp = a;
    while (temp < n)
    {

        count_len += 1;
        temp = temp + a;
    }
    if (n != (temp / 2))
    {
        count_len += 1;
    }
    temp = a;
    while (temp < m)
    {

        count_bre += 1;
        temp = temp + a;
    }
    if (m != (temp / 2))
    {
        count_bre += 1;
    }
    if (count_len == 0)
    {
        count_len = 1;
    }
    if (count_bre == 0)
    {
        count_bre = 1;
    }
    cout << count_len * count_bre;
}