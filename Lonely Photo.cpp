#include <bits/stdc++.h>
using namespace std;

int main() { 

	int n;
	string s;
	cin>>n>>s;
	int ans=0;
		for(int i=0;i<n;i++){
			int h=0;
			int g=0;
			for(int j=i;j<n;j++){
				if(s[j]=='G'){
					g++;
				}
				else{
					h++;
				}
				if((h+g>=3) && (g==1 || h==1)){
					ans++;	
				}
			}
		}
		cout<<ans<<endl;
}
