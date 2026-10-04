class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        long long time = customers[0][0] + customers[0][1];
        long long sum = customers[0][1];
        for(int i=1;i<n;i++){
            time = max(time, (long long)customers[i][0]);
            time += customers[i][1];
            sum += time - customers[i][0];
        }
        double averageTime = (double)sum/n;
            return averageTime;

    }
};