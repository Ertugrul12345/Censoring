#include <bits/stdc++.h>
using namespace std;

int main() {    
    long long n;
    cin>>n;
    vector<long long> tuiton(n);

    for(int i=0;i<n;i++){
        cin>>tuiton[i];
    }
    sort(tuiton.begin(),tuiton.end());


    long long best_tuiton=0;  
    long long max_money_wecanmake=0;
    for(int i=0;i<n;i++){
        long long current_tuiton=tuiton[i]*(n-i);
        if(current_tuiton>max_money_wecanmake){
            best_tuiton=tuiton[i];
            max_money_wecanmake=current_tuiton;
        }
    }

    cout<<max_money_wecanmake<<" "<<best_tuiton;

}
