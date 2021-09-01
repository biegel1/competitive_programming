#include<bits/stdc++.h>
#include<string>


using namespace std; 


void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		vector<long long> arr; 
		vector<long long> even_indices; 
		vector<long long> odd_indices; 
		int count_odds = 0; 
		int count_evens =0; 
		for(int i =0; i<n; i++){
			long long val; 
			cin >> val; 
			arr.push_back(val); 
			if(val%2 ==0){
				even_indices.push_back(i); 
				count_evens++; 
			}
			else{
				odd_indices.push_back(i); 
				count_odds++; 
			}
		}
		if(abs(count_odds-count_evens) >1){
			cout << - 1 << endl; 
		}
		else{
			int ans = 0; 
			int p1 = 0; 
			int	p2 = 0;
			for(int i =0; i<n-1; i++){
				if(arr[i]%2 == arr[i+1]%2){
					//parity exists
					if(arr[i+1]%2 ==1){
						//odd parity >> needs to be swapped with an even element
						for(int k =0; k<odd_indices.size(); k++){
							if(odd_indices[k] == (i+1)){
								p1 = k;
								break; 
							}
						}

						for(int j = 0; j<even_indices.size(); j++){
							if(even_indices[j] >= odd_indices[p1]){
								p2=j; 
								break; 
							}
						}

						swap(arr[odd_indices[p1]], arr[even_indices[p2]]); 
						ans+= even_indices[p2] - odd_indices[p1]; 
						int help = odd_indices[p1]; 
						odd_indices[p1] = even_indices[p2]; 
						even_indices[p2] = help; 
					}
					else{
						//even parity >> needs to be swapped with an odd element
						for(int k =0; k<even_indices.size(); k++){
							if(even_indices[k] == (i+1)){
								p2 = k; 
								break; 
							}
						}
						for(int j = 0; j<odd_indices.size(); j++){
							if(odd_indices[j] >= even_indices[p2]){
								p1=j; 
								break; 
							}
						}
						swap(arr[even_indices[p2]], arr[odd_indices[p1]]); 
						ans+= odd_indices[p1] - even_indices[p2]; 
						int help = odd_indices[p1]; 
						odd_indices[p1] = even_indices[p2]; 
						even_indices[p2] = help; 
					}
				}
			}

			cout << ans << endl; 
		}

		
	}

}

int main(){
	solve(); 
	return 0; 
}
