class Solution {
public:
    int nextGreaterElement(int m) {
        long long n = m;
        vector<int> temp(10, 0);

        int prev = -1;

        while (n > 0) {
            int curr = n % 10;
            n /= 10;

            temp[curr]++;

            if (prev > curr) {
                int num = curr + 1;
                while (num < 10 && temp[num] == 0)
                    num++;

                temp[num]--;

                n = n * 10 + num;

                for (int i = 0; i < 10; i++) {
                    while (temp[i] > 0) {
                        n = n * 10 + i;
                        temp[i]--;
                    }
                }

                return n > INT_MAX ? -1 : (int)n;
            }

            prev = curr;
        }

        return -1;
    }
};