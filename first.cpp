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
        int position = b;
        switch (a) {
            case 1: {
                A[b-1] = c;
            }break;
            case 2: {
                int minumum = A[b-1];
                for (int k = b-1; k < c; k++) {
                    if (A[k] < minumum) {
                        minumum = A[k];
                        position = k+1;
                    }
                }
                cout << minumum << " " << position << endl;
            }break;
            case 3: {
                int maximum = A[b-1];
                for (int k = b-1; k < c; k++) {
                    if (A[k] > maximum) {
                        maximum = A[k];
                        position = k+1;
                    }
                }
                cout << maximum << " " << position << endl;
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