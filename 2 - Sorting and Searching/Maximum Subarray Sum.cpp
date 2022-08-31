#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
ll n, ans = -1e9, aux;
 
int main(){
	cin >> n;
	vector<ll> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
		aux = max(aux+v[i],v[i]);
		ans = max(ans,aux);
	}
	cout << ans << endl;
    return 0;
}
