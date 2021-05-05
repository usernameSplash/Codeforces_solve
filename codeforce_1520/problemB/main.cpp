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

int solve(const int n)
{
    int base = 1;
    int result = 0;
    int target = 9;

    for (int i = 10; i <= n; i *= 10)
    {
        target = i - 1;

        result += target / base;

        base = base * 10 + 1;
    }

    result += n / base;

    return result;
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

        int result = solve(n);

        cout << result << "\n";
    }
    return 0;
}