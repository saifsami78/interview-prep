//Not Accepted -- Try another time

#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    vector<pair<int,int>> v;
    int si = s.size();
    //cout << si << endl;
    int startpoint = -1;
    bool start = false;
    for(int i = 0; i < si; i++){
    	
    	if(i == si - 1){
    		if(start == true){
    			//cout << i << endl;
    			v.push_back(make_pair(startpoint, i));
    			
    		}
    	}
    	if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
    		if(start == false){
    			start = true;
    			startpoint = i;
    		}
    	}
    	else{
    		if(start == true){
    			v.push_back(make_pair(startpoint, i - 1));
    			start = false;
    			startpoint = -1;
    		}
    	}
    }
    string ans = "";
    for(int i = v.size() - 1; i >= 0; i--){
    	for(int j = v[i].first; j <= v[i].second; j++){
    		ans += s[j];
    	}
    	if(i){
    		ans+= ' ';
    	}
    }
    return ans;
}

int main(){
	string p = "The sky is blue";
	string yo = reverseWords(p);
	cout << yo << endl;
}