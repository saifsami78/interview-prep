class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int first = 0;
        int last = nums.size() - 1;
        int ans = 0;
        while(first < last){
            if(nums[first] + nums[last] == k){
                cout << first << " " << last << endl;
                ans++;
                first++;
                last--;
            }
            else if(nums[first] + nums[last] > k){
                last--;
            }
            else{
                first++;
            }

        }
        return ans;
    }
};

//1 3 3 3 4