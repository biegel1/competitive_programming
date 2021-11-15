#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >>n; 
		vector<long long> a; 
		vector<long long> b; 
		for(int i =0; i<n; i++){
			long long val; 
			cin >> val; 
			a.push_back(val); 
			b.push_back(val); 
		}
		sort(b.begin(), b.end()); 
		int k =0; 
		vector<vector<int>> sol; 
		int l, r, d; 
		int next_element_to_sort; 
		int j =0; 
		l =0; 
		while(a!=b){
			next_element_to_sort = b[j]; 
			for(int i=l; i<n; i++){
				if(a[i] == next_element_to_sort){
					r = i; 
					d = r-l; 
					if(d!=0){
						k++; 
						vector<long long>helper; 
						helper.push_back(a[r]); 
						for(int p=l; p<l+d; p++){
							helper.push_back(a[p]); 
						}
						int cnt =0; 
						for(int p=l; p<=l+d; p++){
							a[p] = helper[cnt]; 
							cnt++; 
						}
						sol.push_back({l+1, r+1, d}); 
					}
					break; 
				}
			}
			j++; 
			l++; 
		}
		cout << k<< endl; 
		for(int i =0; i<k; i++){
			cout << sol[i][0] << " " << sol[i][1] << " " <<sol[i][2]<< endl; 
		}
	}


}

int main(){
	solve(); 
	return 0; 
}
