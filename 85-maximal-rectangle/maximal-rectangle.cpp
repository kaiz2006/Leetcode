class Solution {
public:

    vector<int> nextsmall(vector<int> arr){
        stack<int> s;
        s.push(-1);

        int n = arr.size();
        vector<int> ans(n);

        for(int i = n-1;i>=0;i--){
            int item = arr[i];

            while(s.top()!=-1 && arr[s.top()]>=item){
                s.pop();
            }
            if(s.top()==-1){
                ans[i]=n;
            }else{
                ans[i]=s.top();
            }
            s.push(i);

        }
        return ans;
    }

    vector<int> prevsmall(vector<int> arr){
        stack<int> s;
        s.push(-1);

        int n = arr.size();
        vector<int> ans(n);

        for(int i = 0;i<n;i++){
            int item = arr[i];

            while(s.top()!=-1 && arr[s.top()]>=item){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }

    int largestarea(vector<int> arr){

        vector<int> prev = prevsmall(arr);
        vector<int> next =nextsmall(arr);

        int maxarea=INT_MIN;

        for(int i =0;i<arr.size();i++){
            int length = arr[i];
            int breadth = next[i]-prev[i]-1;
            int newarea = length*breadth;

            maxarea = max(maxarea,newarea);
        }

        return maxarea;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {

        int maxi=INT_MIN;

        vector<int> height(matrix[0].size(),0);
        
        for(int i =0;i<matrix.size();i++){
            for(int j=0;j<height.size();j++){
                if(matrix[i][j]=='1'){
                    height[j]++;
                }else{
                    height[j]=0;
                }
            }
            maxi=max(maxi,largestarea(height));
        }
        return maxi;
    }
};