#include<bits/stdc++.h>

using namespace std; 

#define ps push
#define pb push_back



void solve(){
	int n; 
	cin >> n; 
	stack<int> s1, s2, s3; 
	s1.ps(0); 
	s2.ps(0); 
	s3.ps(0); 
	for(int i =n; i>0; i--){
		s1.ps(i); 
	}
	vector<pair<int, int>> moves; 
	int k = 1; 
	bool move1 = true;  
	bool move2 = false, move3 = false; 
	bool done = false; 
	int end = pow(2, n)-1; 
	if(n%2 ==0){
		for(int i =0; i<end; i++){
			if(move1){
				if((s1.top() < s2.top() && s1.top() != 0) || s2.top() == 0){
					moves.pb(make_pair(1, 2)); 
					s2.ps(s1.top()); 
					s1.pop(); 
				}
				else{
					moves.pb(make_pair(2, 1)); 
					s1.ps(s2.top()); 
					s2.pop(); 
				}
				move2 = true; 
				move3 = false; 
				move1 = false; 
			}
			else if(move2){
				if((s1.top() < s3.top()&& s1.top()!=0) || s3.top() == 0){
					moves.pb(make_pair(1, 3)); 
					s3.ps(s1.top()); 
					s1.pop(); 
				}
				else{
					moves.pb(make_pair(3, 1)); 
					s1.ps(s3.top()); 
					s3.pop(); 
				}
				move3 = true; 
				move2 = false; 
				move1 = false; 
			}
			else if(move3){
				if((s2.top() < s3.top() && s2.top() !=0) || (s3.top() == 0) ){
					moves.pb(make_pair(2, 3)); 
					s3.ps(s2.top()); 
					s2.pop(); 
				}
				else{
					moves.pb(make_pair(3, 2)); 
					s2.ps(s3.top()); 
					s3.pop(); 
				}
				move1 = true; 
				move2 = false; 
				move3 = false; 
			}
			if(s1.top() == 0 && s2.top() ==0 && s3.top() == 1){
				done = true; 
			}
		}
	}
	else{
		
		for(int i = 0; i< end; i++){
			if(move1){
				if((s1.top() < s3.top() && s1.top() != 0) || s3.top() == 0){
					moves.pb(make_pair(1, 3)); 
					s3.ps(s1.top()); 
					s1.pop(); 
				}
				else{
					moves.pb(make_pair(3, 1)); 
					s1.ps(s3.top()); 
					s3.pop(); 
				}
				move2 = true; 
				move3 = false; 
				move1 = false; 
			}
			else if(move2){
				if((s1.top() < s2.top()&& s1.top()!=0) || s2.top() == 0){
					moves.pb(make_pair(1, 2)); 
					s2.ps(s1.top()); 
					s1.pop(); 
				}
				else{
					moves.pb(make_pair(2, 1)); 
					s1.ps(s2.top()); 
					s2.pop(); 
				}
				move3 = true; 
				move2 = false; 
				move1 = false; 
			}
			else if(move3){
				if((s2.top() < s3.top() && s2.top() !=0) || (s3.top() == 0) ){
					moves.pb(make_pair(2, 3)); 
					s3.ps(s2.top()); 
					s2.pop(); 
				}
				else{
					moves.pb(make_pair(3, 2)); 
					s2.ps(s3.top()); 
					s3.pop(); 
				}
				move1 = true; 
				move2 = false; 
				move3 = false; 
			}
			if(s1.top() == 0 && s2.top() ==0 && s3.top() == 1){
				done = true; 
			}
		}
	}
	cout << moves.size() << endl; 
	for(int i =0; i<moves.size(); i++){
		cout << moves[i].first << " " << moves[i].second << endl; 
	}
}


int main(){
	solve(); 
	return 0; 
}
