#include<bits/stdc++.h>

using namespace std; 

#define ll unsigned long long
#define pb push_back

ll power_10(int k){
	ll ans; 
	if(k <=0){
		return 1; 
	}
	ans = 10 * power_10(k-1);  
	return ans; 
}

vector<pair<ll, ll>> compute_boundaries(){
	vector<pair<ll, ll>> boundaries; 
	ll left = 0; 
	ll right = 0; 
	for(int i =0; i<=18; i++){
		left = power_10(i); 
		right = (10*left)- 1; 
		boundaries.pb(make_pair(left, right)); 
	}
	return boundaries; 
}

int determine_interval(ll k, vector<pair<ll, ll>> boundaries_k){
	int ans; 
	for(int i =0; i<boundaries_k.size()-1; i++){
		if(k < boundaries_k[i].second+1  && k >= boundaries_k[i].first){
			ans = i;
		}
	}
	return ans; 
}

vector<pair<ll, ll>> compute_boundaries_k(){
	vector<pair<ll, ll>> boundaries; 
	ll left = 1; 
	ll right = 9; 
	boundaries.pb(make_pair(left, right)); 
	for(int i =2; i<=18; i++){
		left = right + 1; 
		right = left + i*9*power_10(i-1)-1;
		boundaries.pb(make_pair(left, right)); 
	}
	return boundaries; 
}

int find_digit(int k, int interval, vector<pair<ll, ll>> boundaries, vector<pair<ll, ll>> boundaries_k){
	ll low = boundaries[interval].first; 
	ll high = boundaries[interval].second; 
	int digits = interval+1; 
	int ans = 0; 
	ll middle, middle_k; 
	while(low <=high){
		//debug
		middle = (high+low)/2; 
		middle_k = boundaries_k[interval].first + (middle - boundaries[interval].first)*digits;
		if(middle_k == k){
			ans = middle; 
			return ans; 
		}
		else if(middle_k<k){
			low = middle+1; 
		}
		else if(middle_k>k){
			high = middle-1; 
		}
	}
	return ans; 
}

ll find_digit2(ll k, int interval, vector<pair<ll, ll>> boundaries, vector<pair<ll, ll>> boundaries_k){
	ll digits = interval+1; 
	ll ans =0; 
	ll low, low_k; 
	low = boundaries[interval].first; 
	low_k = boundaries_k[interval].first; 
	ans = low + (k - low_k)/digits; 
	return ans; 
}


void solve(){
	vector<pair<ll, ll>> boundaries; 
	vector<pair<ll, ll>> boundaries_k; 
	boundaries = compute_boundaries(); 
	boundaries_k = compute_boundaries_k(); 
	string s; 
	int t; 
	cin >> t; 
	while(t--){
		ll k; 
		cin >> k; 
		k; 
		int interval = determine_interval(k, boundaries_k); 
		int counter = 0; 
		string s1; 
		ll digit2 = find_digit2(k, interval,boundaries, boundaries_k); 
		ll digit3 = find_digit2(k-1, interval,boundaries, boundaries_k); 
		int counter1 = 0; 
		if(digit2 == digit3){
			while(digit2 == digit3){
				k--; 
				counter1++; 
				digit3 = find_digit2(k, interval, boundaries, boundaries_k); 
			}
			s1 = to_string(digit2); 
		}
		else{
			s1 = to_string(digit2); 
			counter1++; 
		}
		cout << s1[counter1-1] << endl; 
	}
}

int main(){
	solve(); 
	return 0; 
}
