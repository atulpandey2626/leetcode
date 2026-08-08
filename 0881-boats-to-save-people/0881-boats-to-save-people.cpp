class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int left = 0;
        int right = people.size() - 1;
        int boat = 0;
        while(left<=right){
            int d = people[left] + people[right];
            if(d<=limit){
                left++;
                right--;
                
            }
            else {
                right--;
                
            }
            boat++;
        }
        return boat;
       

    }
};