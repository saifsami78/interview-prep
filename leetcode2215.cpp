class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int, int>m1, m2;
        for(int i = 0; i < nums1.size(); i++){
            m1[nums1[i]]++;
        }

        for(int i = 0; i < nums2.size(); i++){
            m2[nums2[i]]++;
        }

        vector<vector<int>> ans;
        set<int>s;
        
        for(int i = 0; i < nums1.size(); i++){
            if(m2.find(nums1[i]) == m2.end()){
                s.insert(nums1[i]);
            }
        }
        vector <int > v(s.begin(), s.end());
        ans.push_back(v);
        v.clear();
        s.clear();
        for(int i = 0; i < nums2.size(); i++){
            if(m1.find(nums2[i]) == m1.end()){

                s.insert(nums2[i]);
            }
        }
        v.assign(s.begin(), s.end());
        ans.push_back(v);
        return ans;
    }
};