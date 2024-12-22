#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, Q;
    cin >> N >> Q;
    long long empty_x_count = 0;
    long long empty_y_count = 0;
    long long empty_z_count = 0;

    int count_x[1001][1001];
    int count_y[1001][1001];
    int count_z[1001][1001];


    for (int i = 0; i < Q; i++) {
        int x, y, z;
        cin >> x>>y>>z;
        if (count_x[y][z] == N - 1) {
            empty_x_count++;
        }
        count_x[y][z]++;
        if (count_y[x][z] == N - 1) {
            empty_y_count++;
        }
            count_y[x][z]++;
        
        if (count_z[x][y] == N - 1) {
            empty_z_count++;
        }
        count_z[x][y]++;
        cout << (empty_x_count + empty_y_count + empty_z_count) << endl;
    }
}
