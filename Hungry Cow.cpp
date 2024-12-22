#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long t; 
    cin >> n >> t;

    vector<long long> deliveryday(n + 1);
    vector<long long> amount(n); 

    for(int i = 0; i < n; i++) {
        cin >> deliveryday[i] >> amount[i]; 
	}

    deliveryday[n] = t + 1;  

    long long totalEaten = 0;
    long long hayInBarn = 0;

    for(int i = 0; i < n; i++) {
        hayInBarn += amount[i]; 
        long long hayEatenToday = min(hayInBarn, deliveryday[i+1] - deliveryday[i]);
        totalEaten += hayEatenToday;  
        hayInBarn -= hayEatenToday;  
    }

    cout << totalEaten << endl;  
}