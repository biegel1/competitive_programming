#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int n, m; 
	cin >> n >>m; 
	int ans = 0; 
	int N = 2*10e4; 
	vector<int> adj[N+1]; 
	for(int i =1; i<=N; i++){
		if(i*2 <=N){
			adj[i].push_back(i*2); 
		}
		if(i -1 >=1){
			adj[i].push_back(i-1); 
		}
	}
	queue<int> q; 
	bool visited[N];
	int distance[N]; 
	visited[n] = true; 
	distance[n] = 0; 
	q.push(n);
	while(!q.empty()){
			int s = q.front(); 
			q.pop(); 
			for(auto u: adj[s]){
				if(visited[u]){
					continue; 
				}
				else{
					visited[u] = true; 
					distance[u] = distance[s]+1; 
					q.push(u); 
				}
			}
	}
	ans = distance[m]; 
	cout << ans << endl; 
}


int main(){
	solve(); 
	return 0; 
}
