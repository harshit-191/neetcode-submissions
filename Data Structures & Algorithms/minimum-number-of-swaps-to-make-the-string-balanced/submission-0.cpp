class Solution {
public:
    int minSwaps(string s) {
        int n = s.size();
        stack<char> st;
        for(int i=0;i<n;i++){
            if(s[i]=='['){
                st.push(s[i]);
            }else{
                if(!st.empty()){
                st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
            
        }
        return st.size()/2;
    }
};