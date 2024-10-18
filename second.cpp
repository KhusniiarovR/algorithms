#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n, q;
    const int SET = 1, FIND = 2, DIV_7 = 3, HIGH_5 = 4;
    cin >> n;
    vector<long long int> A;
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        A.push_back(number);
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a,b,c;
        cin >> a >> b >> c;
        if (a == SET) {
            A[b-1] = c;
        }
        else if (a == FIND || a == DIV_7 || a == HIGH_5) {
            auto begin = std::next(std::begin(A), b-1);
            auto end = std::next(std::begin(A), c);
            auto it = std::end(A);
            if (a == FIND) {
                int d;
                cin >> d;
                it = find(begin, end, d);
                int position = std::distance(std::begin(A), it);
                if (position > c-1) position = -2;
                cout << position+1 << " ";
            }
            else if (a == DIV_7) {
                it = find_if(begin, end, [](const int& value)
                {
                    return value % 7 == 0;
                });
                int position = std::distance(std::begin(A), it);
                if (position > c-1) position = -2;
                cout << position+1 << " ";
            }
            else if (a == HIGH_5) {
                auto ans = count_if(begin, end, [](const int& value)
                {
                    return value % 10 >= 5;
                });
                cout << ans << " ";
            }
        }
    }
}


void fast_io()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);}

int main()
{
    fast_io();
    solve();
    return 0;
}