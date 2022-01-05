bool canPair(vector<int> nums, int k) {
        unordered_map<int,int> m;
        for(auto i : nums)
        {
            m[(i%k+k)%k]++;
        }
        if(m[0]%2==1) return false;
        for(int i=1;i<k;i++)
        {
            if(m[i]!=m[k-i]) return false;
        }
        return true;
    }
