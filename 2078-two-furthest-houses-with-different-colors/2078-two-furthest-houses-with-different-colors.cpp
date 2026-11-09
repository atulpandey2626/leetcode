class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int diff = 0;
        for(int i = 0;i<colors.size();i++){
            for(int j = 0;j<colors.size();j++){
                if(colors[i]!=colors[j])
                {int k = j - i;
                if(k>diff)
                diff = k;}
            }
        }

        return diff;    
    }
};