#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c>> d>> p>> nl>> np;
	int val = min({floor((k*l/nl)/n),floor((c*d)/n),floor((p/np)/n)});
	cout << val << endl;
}

int main(){
	solve(); 
	return 0; 
}
