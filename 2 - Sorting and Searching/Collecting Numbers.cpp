#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
 
int main(){
	int n, x; cin >> n;
	vector<pair<int,int> > v;
	for(int i=0;i<n;i++){
		cin >> x;
		v.pb(mp(x,i));
	}
	sort(v.begin(),v.end());
	int ans=1;
	for(int i=n-1;i>0;i--){
		if(v[i].second < v[i-1].second) ans++;
	}
	cout << ans << endl;
	
	return 0;
}
