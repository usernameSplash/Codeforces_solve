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

vector<vector<int>> solve(const int n)
{
    vector<vector<int>> v(n, vector<int>(n, 0));

    return v;
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

        if (n == 1)
            cout << 1 << "\n";
        if (n == 2)
            cout << -1 << "\n";

        else
        {
            auto result = solve(n);

            for (auto line : result)
            {
                for (auto value : line)
                {
                    cout << value << " ";
                }
                cout << "\n";
            }
        }
    }
    return 0;
}