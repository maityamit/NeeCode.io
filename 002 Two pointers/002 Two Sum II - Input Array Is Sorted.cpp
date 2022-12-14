class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        while(j>i){
            if(numbers[i]+numbers[j]==target) return {i+1,j+1};
            if((numbers[i]+numbers[j]>target)) j--;
            else i++;
        }
        return {-1,-1};
    }
};
