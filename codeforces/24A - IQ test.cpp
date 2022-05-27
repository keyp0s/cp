/*
https://codeforces.com/problemset/problem/25/A

IQ test
Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given n numbers differs from the others. Bob observed that one number usually differs from the others in evenness. Help Bob — to check his answers, he needs a program that among the given n numbers finds one that is different in evenness.

Input
The first line contains integer n (3 ≤ n ≤ 100) — amount of numbers in the task. The second line contains n space-separated natural numbers, not exceeding 100. It is guaranteed, that exactly one of these numbers differs from the others in evenness.

Output
Output index of number that differs from the others in evenness. Numbers are numbered from 1 in the input order.
*/

#include <iostream>
using namespace std;

int main()
{
    int n, x, even = 0, lastodd = 0, lasteven = 0;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            even += 1;
            lasteven = i;
        }
        else
        {
            even -= 1;
            lastodd = i;
        }
    }

    cout << (even > 0 ? lastodd : lasteven);

    return 0;
}