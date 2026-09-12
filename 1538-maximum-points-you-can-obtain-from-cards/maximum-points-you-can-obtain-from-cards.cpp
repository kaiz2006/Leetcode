class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int currentSum = 0;
        for (int i = 0; i < k; i++) {
            currentSum += cardPoints[i];
        }

        int maxSum = currentSum;
        for (int i = 0; i < k; i++) {
            currentSum += cardPoints[n - 1 - i] - cardPoints[k - 1 - i];
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};