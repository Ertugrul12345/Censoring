#include <bits/stdc++.h>
using namespace std;



main(){ 
 
	freopen("herding.in","r",stdin);
	freopen("herding.out","w",stdout);

    int a,b,c;
    cin>>a>>b>>c;
    vector<int> cows{a,b,c};
    sort(cows.begin(),cows.end());
    int gap1=cows[1]-cows[0];
    int gap2=cows[2]-cows[1];
    
    if(gap1==1 && gap2==1){
        cout<<0<<endl;
    }
    else if(gap1==2 || gap2==2){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }

    int marx=max(gap1,gap2)-1;


    cout<<marx<<endl;
    



}
