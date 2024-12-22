#include <bits/stdc++.h>
using namespace std;

int main() {

  freopen("cowqueue.in", "r", stdin);
	freopen("cowqueue.out", "w", stdout);

  int n;
  cin>>n;
	vector<pair<int, int>> cows(n);
  for(int i=0;i<n;i++){
    cin>>cows[i].first >> cows[i].second;
  
  }
  sort(cows.begin(), cows.end());

  int timern=0;
  timern=cows[0].first+cows[0].second;

  for(int i=0;i<n-1;i++){
    if(timern>cows[i+1].first){
      timern+=cows[i+1].second;
    }
    else{
      timern=cows[i+1].first+cows[i+1].second;
    }
  }
  cout<<timern;

}