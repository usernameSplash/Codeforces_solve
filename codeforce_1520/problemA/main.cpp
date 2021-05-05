#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

void cppIOInitialize()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool solve(const string &s)
{
    int check[26] = {0};

    char prev = 'x';

    for (auto c : s)
    {
        int n = c - 'A';

        if (check[n] > 0)
        {
            if (prev == c)
            {
                check[n] += 1;
            }
            else
            {
                return false;
            }
        }
        else
        {
            check[n] += 1;
        }
        prev = c;
    }

    return true;
}

int main()
{
    cppIOInitialize();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string cmd;
        cin >> cmd;

        bool result = solve(cmd);

        if (result)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}