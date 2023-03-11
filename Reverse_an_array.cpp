class solution {
public:
    vector<int> reverse(vector<int>& arr) {
        for(int i=0;i<arr.size()/2;i++) {
            swap(arr[i],arr[arr.size()-i-1]);
        }
        return arr;
    }
};
