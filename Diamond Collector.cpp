#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("diamond.in","r",stdin);
	freopen("diamond.out","w",stdout);

	int n,k;
	cin>>n>>k;
	int max_val=0;
	vector<int> sizes(n);
	
	for(int i=0;i<n;i++){
		cin>>sizes[i];}
    sort(sizes.begin(), sizes.end());


	for(int i=0;i<n;i++){
		 int total=0;
		for(int j=i;j<n;j++){
			if(abs(sizes[i]-sizes[j])<=k){
				total++;
			}
			max_val=max(max_val, total);
		}
	}
	cout<<max_val<<endl;
}