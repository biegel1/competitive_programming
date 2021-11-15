#include<bits/stdc++.h>
using namespace std; 

struct Fenwick_tree{
	int n; 
	vector<long long> BIT; 
	//constructors
	Fenwick_tree() = default; 
	Fenwick_tree(long long n): n(n){
		//initialize all zero
		BIT.assign(n+1, 0); 
	}
	long long sum(long long i){
		long long result = 0; 
		for(long long x = i; x; x-= x & -x){
			//debug
			cout << "INSIDE FENWICK check x in fenwick sum function: " << x << " val of fenwick at position x: "<< BIT[x] <<endl;  
			result +=BIT[x]; 
		}
		return result; 
	}
	long long sum(long long  l, long long r){
		return sum(r)-sum(l-1); 
	}
	void update(long long i, long long delta){
		for(long long x =i; x<=n; x += x & -x){
			//debug
			cout << "INSIDE FENWICK check x in fenwick update function: " << x << endl; 
			cout << "INSIDE FENWICK old val at position x: " << BIT[x] << endl; 
			BIT[x]+=delta; 
			cout << "INSIDE FENWICK new val at position x: " << BIT[x] << endl; 
		}
	}

}; 
// finish debugging and understand all 
void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		vector<long long> a(n); 
		for(int i =0; i<n; i++){
			cin >> a[i]; 
		}
		//debug
		cout << "Print a: " << endl; 
		for(int i =0; i<n; i++){
			cout << a[i] << " "; 
		}
		cout << endl; 
		vector<long long> b = a; 
		sort(b.begin(), b.end()); 
		map<long long,long long> m; 
		for(auto& i: b){
			if(m.count(i)){
				continue; 
			}
			m[i] = m.size()+1; 
		}
		for(auto& i: a){
			i = m[i]; 
		}
		//debug
		cout << "Print a after update with map: "<< endl; 
		for(int i =0; i<n; i++){
			cout << a[i] << " "; 
		}
		cout << endl; 
		cout << "Print map: " << endl; 
		for(auto u: m){
			cout << u.first << " " << u.second << endl;  
		}
		int ans = 0; 
		Fenwick_tree ft(n+1); 
		//debug
		cout << "Print fenwick after initialization: " << endl; 
		for(int i=0; i<ft.BIT.size(); i++){
			cout << ft.BIT[i] << " "; 
		}
		cout << endl; 
		for(int i=0; i<n; ++i){
			ans += min(ft.sum(1, a[i]-1), ft.sum(a[i]+1, n)); 
			//debug
			cout << "Print fenwick before update: " << endl; 
			for(int k =0; k<ft.BIT.size(); k++){
				cout << ft.BIT[k] << " "; 
			}
			cout << endl; 
			ft.update(a[i], 1);
			//debug
			cout << "Print fenwick after update: " << endl; 
			for(int j =0; j<ft.BIT.size(); j++){
				cout << ft.BIT[j] << " " ; 
			}
			cout << endl; 
		}
		cout <<ans << endl;  
	}
}
 
int main(){
	solve(); 
	return 0; 
 
}
