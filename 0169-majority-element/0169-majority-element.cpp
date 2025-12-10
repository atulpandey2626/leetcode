class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int cnt = 0;
    int mx = 0;

    for(int num : nums){
        if(cnt == 0){
            mx = num;
            cnt = 1;
        }
        else if(mx == num){
            cnt++;
        }
        else{
            cnt--;
        }
    }

    int freq = 0;
    for(int num : nums){
        if(num == mx)
            freq++;
    }

    if(freq > nums.size() / 2)
        return mx;

    return -1;
}

};