#include<bits/stdc++.h>

using namespace std; 

void solve(){
	string s; 
	cin >>s; 
	map<char, int> m;
	for(int i=0; i<s.size(); i++){
		if(m.count(s[i]) == 0){
			m[s[i]] = 1; 
		}
		else{
			m[s[i]] +=1; 
		}
	}
	int cnt =0 ; 
	string middle; 
	string s1; 
	string s2; 
	int cnt2 = 1; 
	for(auto i: m){
		if(i.second%2 !=0){
			cnt++; 
			for(int k = 0; k<i.second; k++){
				middle+=i.first; 
			}
		}
		else{
			for(int j = 0; j<i.second; j++){
				if((cnt2&1)==0){
					s1+=i.first;
				}
				else{
					s2+=i.first; 
				}
				cnt2++; 
			}
		}

	}
	if(cnt<=1){
		sort(s1.begin(), s1.end()); 
		sort(s2.begin(), s2.end()); 
		reverse(s2.begin(), s2.end()); 
		if(cnt==1){
			s1 +=middle + s2;
		}
		else{
			s1+=s2; 
		}
		cout << s1 << endl; 
	}
	else{
		cout << "NO SOLUTION" << endl; 
	}
}

int main(){
	solve(); 
	return 0; 
}
