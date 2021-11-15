#include<bits/stdc++.h>

using namespace std; 
 

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int n, m, k; 
		cin >> n >> m >>k; 
		vector<vector<int>> field(n); 
		vector<vector<int>> test_field(n, vector<int>(m, 0)); 
		for(int i=0; i<n; i++){
			for(int j =0; j<m; j++){
				char val; 
				cin >> val; 
				if(val == '.'){
					field[i].push_back(0); 
				}
				else{
					field[i].push_back(1); 
				}
			}
		}
		int r_bound, c_bound; 
		r_bound = n-k; 
		c_bound = m-(2*k + 1); 
		if(n>r_bound && m>=c_bound){
			for(int i=0; i<r_bound; i++){
				for(int j=0; j<=c_bound ; j++){
					if(field[i][j] == 1){
						vector<pair<int, int>> coordinates; 
						coordinates.push_back(make_pair(i, j)); 
						int r_cnt = i; 
						int c_cnt = j; 
						int d1 = 0; 
						int cnt =1; 
						bool ok = false; 
						while(field[r_cnt+cnt][c_cnt+cnt] == 1){
							coordinates.push_back(make_pair(r_cnt+cnt, c_cnt+cnt)); 
							d1++; 
							if(d1>=k){
								int cnt2 = -1; 
								int cnt3 =1;  
								if(field[r_cnt+cnt+cnt2][c_cnt+cnt+cnt3] == 1){
									int d2 = 0; 
									while(field[r_cnt+cnt+cnt2][c_cnt+cnt+cnt3]==1){
										coordinates.push_back(make_pair(r_cnt+cnt+cnt2, c_cnt+cnt+cnt3)); 
										d2++; 
										cnt2--; 
										cnt3++; 
										if(d1 == d2){
											ok = true; 
										}
										if(ok){
											for(int a = 0; a< coordinates.size(); a++){
												test_field[coordinates[a].first][coordinates[a].second] = 1; 
											}
											ok = false; 
											break; 
										}
									}
								}
							}
							cnt++; 
							if(r_cnt+cnt>=n || c_cnt+cnt>=m){
								break; 
							}
						}
					}
					else{
						continue; 
					}
				}
			}
			if(test_field == field){
				cout << "YES"<< endl;  
			}
			else{
				cout << "NO" << endl; 
			}



		}
		else{
			cout << "NO" << endl; 
		}
	}



}

int main(){
	solve(); 
	return 0; 
}
