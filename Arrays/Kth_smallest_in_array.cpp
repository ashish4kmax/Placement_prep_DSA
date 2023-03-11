class solution {
      int Ksmallest (int k, vector<int>& arr) {
          sort(arr.begin(),arr.end());
          return arr[k-1];
      }
};
