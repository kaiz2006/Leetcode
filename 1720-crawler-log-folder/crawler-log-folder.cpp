class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;

        for (auto &it : logs) {
            if (it == "../") {
                if (depth > 0)
                    depth--;
            }
            else if (it != "./") {
                depth++;
            }
        }

        return depth;
    }
};