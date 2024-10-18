#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    const int SET = 1, MIN = 2, MAX = 3;
    std::cin >> n;
    vector<int> A;
    for (int i = 0; i < n; i++) {
        int number;
        std::cin >> number;
        A.push_back(number);
    }
    std::cin >> q;
    for (int i = 0; i < q; i++) {
        int a, b, c;
        std::cin >> a >> b >> c;
        if (a == SET) {
            A[b-1] = c;
        }
        else if (a == MIN || a == MAX) {
            auto begin = std::next(std::begin(A), b-1);
            auto end = std::next(std::begin(A), c);

            auto it = std::end(A);
            if (a == MIN) it = std::min_element(begin, end);
            if (a == MAX) it = std::max_element(begin, end);
            int number = *it;
            int position = std::distance(std::begin(A), it);
            std::cout << number << " " << position+1 << '\n';
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