class Solution {
public:
    vector<int>minmax (vector<int>&arr) {
        vector<int>ans;
        int max=0;
        int min=0;
        for(int i=0;i<arr.size();i++) {
            if(arr[i]>arr[max]) {
              max = i;
            }
            if(arr[i]<arr[max]) {
              min = i;
            }
        }
        ans.push_back(arr[min]);
        ans.push_back(arr[max]);
        return ans;
    }
};
