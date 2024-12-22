#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("pails.in","r",stdin);
	freopen("pails.out","w",stdout);
	int x,y,m;
	cin>>x>>y>>m;
	int max_vol=0;
	int current_vol=0;
	for(int i=0;i<1000;i++){
		for(int j=0;j<1000;j++){
			current_vol=(x*i)+(y*j);
			if(current_vol<=m){
			max_vol=max(max_vol, current_vol);
			}
		}
	}

	cout<<max_vol;


}