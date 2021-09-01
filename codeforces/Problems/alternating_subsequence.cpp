#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		vector<long long> elements; 
		for(int i =0; i<n; i++){
			long long val; 
			cin >> val; 
			elements.push_back(val); 
		}
		vector<long long> vals; 
		int p1 = 0; 
		int p2 = 1; 
		for(int i = 0; i<n; i++){
			vector<long long>helper; 
			if(elements[p1] >0){
				helper.push_back(elements[p1]); 
				while(elements[p2] >0 && p2 <n){
					helper.push_back(elements[p2]); 
					p2++; 
				}
				vals.push_back(*max_element(helper.begin(), helper.end())); 
				p1 = p2; 
				p2+=1; 
			}
			else{
				helper.push_back(elements[p1]); 
				while(elements[p2] <0 && p2 <n){
					helper.push_back(elements[p2]); 
					p2++; 
				}
				vals.push_back(*max_element(helper.begin(), helper.end())); 
				p1 = p2; 
				p2+=1; 
			}
			if(p1 >n || p2 > n){
				break; 
			}
		}
		long long ans = 0; 
		for(int i = 0; i<vals.size(); i++){
			ans+=vals[i];  
		}
		cout<< ans << endl; 
	}
}

int main(){
	solve(); 
	return 0; 
}
