#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 2e5;
int a[MAX_N];

void solve()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    int q;
    std::cin >> q;

    // you can use enum
    const int SET = 1, MIN = 2, MAX = 3;

    for (int _ = 0; _ < q; ++_)
    {
        int type;
        std::cin >> type;

        // different processing for different operations
        if (SET == type)
        {
            size_t p;
            std::cin >> p;
            --p;

            int v;
            std::cin >> v;

            a[p] = v;
        }

        // operations are similar enough
        if (MIN == type || MAX == type)
        {
            size_t left, right;
            std::cin >> left >> right;
            --left, --right;

            // you can use operator+ instead of std::next
            auto begin = std::next(std::begin(a), left);
            auto end = std::next(std::begin(a), right + 1);

            auto it = std::end(a);

            if (MIN == type) it = std::min_element(begin, end);
            if (MAX == type) it = std::max_element(begin, end);

            int value = *it;
            // you can use operator- instead of std::distance
            size_t index = std::distance(std::begin(a), it);

            std::cout << value << " " << index + 1 << "\n";
        }
    }
    std::cout << "\n";
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