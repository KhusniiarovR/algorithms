#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, q;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a,b,c;
        cin >> a >> b >> c;
        int position = -1;
        switch (a) {
            case 1: {
                A[b-1] = c;
            }break;
            case 2: {

            }break;
            case 3: {
                for (int k = b-1; k < c; k++) {
                    if (A[k] % 7 == 0) {
                        position = k+1;
                        break;
                    }
                }
                cout << position << " ";
            }break;
            case 4: {
                int count = 0;
                for (int k = b-1; k < c; k++) {
                    if (A[k] % 10 >= 5) {
                        count++;
                    }
                }
                cout << count << " ";
            }break;
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