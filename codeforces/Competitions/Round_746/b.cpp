#include<bits/stdc++.h>
#include<string>


using namespace std; 


void solve(){
	int t; 
	cin >>t; 
	while(t--){
		int n, x; 
		cin >> n >> x; 
		vector<long long> a; 
		vector<long long> b; 
		for(int i=0; i<n; i++){
			long long val; 
			cin >>val; 
			a.push_back(val); 
			b.push_back(val); 
		}
		sort(b.begin(), b.end()); 
		if(a==b){
			cout <<"YES" << endl; 
		}
		else{
			if(x>=n){
				cout << "NO" << endl; 
			}
			else if(x<= n/2){
				cout << "YES" << endl; 
			}
			else{
				long long end_idx =x-1; 
				long long start_idx =n-x; 
				long long cnt =0; 
				for(int i=start_idx; i<= end_idx; i++){
					if(a[i] == b[i]){
						cnt++; 
					}
				}
				if(end_idx-start_idx+1 == cnt){
					cout << "YES" << endl; 
				}
				else{
					cout << "NO" << endl; 
				}
			}


		}

	}
}

int main(){
	solve(); 
	return 0; 
}
