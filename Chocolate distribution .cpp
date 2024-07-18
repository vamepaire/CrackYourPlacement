Class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    
       sort(a.begin(), a.end());

        long long mini = LLONG_MAX;

        for (long long i = 0; i + m - 1 < n; i++) {
            long long diff = a[i + m - 1] - a[i];
            if (diff < mini) {
                mini = diff;
            }
        }
    return mini ;
    }   
};
