class Solution {
public:
    int reverse(int x) {
        vector<int> v;
        int temp = x;
        while(temp!=0){
            int digits = temp%10;
            v.push_back(digits);
            temp/=10;
        }
        long long val = 0;
        for(auto it : v){
            val = val*10 + it; 
        }
        if(val>pow(2,31)-1 || val<-pow(2,31)){
            return 0;
        }
        return val;
    }
};