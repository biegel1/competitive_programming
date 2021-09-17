#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >>t; 
	while(t--){
		int n, m; 
		cin >> n >>m; 
		vector<pair<int, int>> a(n*m); 
		for(int i =0; i<n*m; i++){
			cin >> a[i].first; 
			a[i].second = i; 
		}
		sort(a.begin(), a.end());
		for(int i =0; i<n*m; i++){
			a[i].second = -a[i].second; 
		}

		int res = 0 ;
		for(int i =0; i<n; i++){
			sort(a.begin() + (m*i), a.begin()+(m*i+m)); 
			for(int j =m*i; j<(m*i)+m; j++){
				for(int k =m*i; k<j; k++){
					if(a[k].second > a[j].second){
						res++; 
					}

				}
			}
		}
		cout << res << endl; 
	}

}

int main(){
	solve(); 
	return 0;
}
