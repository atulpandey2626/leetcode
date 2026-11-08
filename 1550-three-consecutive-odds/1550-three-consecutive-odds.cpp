class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int k = 0;
        for(int i = 0;i<arr.size();i++){
            if(arr[i]%2!=0){
                k++;
                i++;
                while(i<arr.size()){
                    if(arr[i]%2!=0){
                        k++;
                        if(k==3)
                    return true;
                        i++;
                    }
                    else{
                        k = 0;
                        break;
                    }
                }
            }
        } 

        return false;

    }
};