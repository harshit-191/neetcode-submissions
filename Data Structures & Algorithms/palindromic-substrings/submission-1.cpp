// class Solution {
// public:
//     int countSubstrings(string s) {
//         int n = s.size();
//         int cnt = n;
//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 int left = i;
//                 int right = j;
//                 bool isPalindrome = true; 
//                 while (left < right) {
//                     if (s[left] != s[right]) {
//                         isPalindrome = false;
//                         break;
//                     }
//                     left++;
//                     right--;
//                 }
//                 if (isPalindrome) {
//                     cnt++;
//                 }
//             }
//         }
//         return cnt;
//     }
// };



 class Solution {
 public:
     int countSubstrings(string s) {
        int n = s.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            int left = i;
            int right = i;
            while(left>=0 && right<n && s[left] == s[right]){
                cnt++;
                left--;
                right++;
            }
        }
        for(int i=0;i<n-1;i++){
            int left = i;
            int right = i+1;
            while(left>=0 && right<n && s[left] == s[right]){
                cnt++;
                left--;
                right++;
            }
        }
        return cnt;
     }
 };






