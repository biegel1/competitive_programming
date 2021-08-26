#include<bits/stdc++.h>

using namespace std; 

vector<string> create_one_beautiful_numbers(){
	string s = to_string(1); 
	vector<string>numbers; 
	string summand =to_string(1); 
	while(s.size()<10){
		for(int i = 1; i<10; i++){
			numbers.push_back(s); 
			s =to_string(stoi(s) + stoi(summand)); 
		}
		s = '1'; 
		summand.push_back('1'); 
		for(int i = 1; i<summand.size(); i++){
			s.push_back('1'); 
		}
	}
	return numbers; 
}

string create_two_beautiful_numbers(string n){

		vector<string> nums = create_one_beautiful_numbers();
		int i = 0; 
		while(stoi(nums[i]) < stoi(n)){
			i++; 
		}
		string	res = nums[i]; 

		for(char a = '0'; a <= '9'; a++){

			for (char b = a + 1; b <= '9'; b++)
			{
				bool n_ok = true;
				for (int i = 0; i < n.length(); i++)
				{
					if (n[i] < b)
					{
						string t = n;
						if (t[i] < a) t[i] = a;
						else t[i] = b;
						for (int j = i + 1; j < n.length(); j++)
							t[j] = a;
						if (res > t)
							res = t;
					}

					if(n[i] != a && n[i] != b)
					{
						n_ok = false;
						break;
					}
				}

				if (n_ok) return n;
			}
		}

		return res;
}


void solve(){
	int t; 
	cin >> t; 
	while(t--){
		string n; 
		int k; 
		string ans; 
		cin >> n >> k; 
		if(k == 1){
			vector<string> numbers = create_one_beautiful_numbers(); 
			int i = 0; 
			while(stoi(numbers[i]) < stoi(n)){
				i++; 
			}
			ans = numbers[i]; 
		}
		else{
			string ans = create_two_beautiful_numbers(n); 
		}
		cout << ans << "\n"; 
	}



}

int main(){
	solve(); 
	return 0; 
}
