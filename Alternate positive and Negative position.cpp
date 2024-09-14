class Solution {
  public:

    void rearrange(vector<int> &arr) {
    vector<int> positive;
    vector<int> negative;
    
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] >= 0) positive.push_back(arr[i]);
        else negative.push_back(arr[i]);
    }
    
    int i = 0, j = 0, k = 0;
    while(i < positive.size() && j < negative.size()) {
        arr[k] = positive[i];
        i++;
        k++;
        arr[k] = negative[j];
        j++;
        k++;
    }
    while(i < positive.size()) {
        arr[k] = positive[i];
        i++;
        k++;
    }
    
    while(j < negative.size()) {
        arr[k] = negative[j];
        j++;
        k++;
    }
}

};
