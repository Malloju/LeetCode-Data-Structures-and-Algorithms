class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> next(n, n);
        stack<pair<int,int>> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.top().first >= heights[i]) {
                st.pop();
            }
            if (!st.empty()) {
                next[i] = st.top().second;
            }
            st.push({heights[i], i});
        }

        vector<int> prev(n, -1);
        stack<pair<int,int>> s;

        for (int i = 0; i < n; i++) {
            while (!s.empty() && s.top().first >= heights[i]) {
                s.pop();
            }
            if (!s.empty()) {
                prev[i] = s.top().second;
            }
            s.push({heights[i], i});
        }
        int res = 0;
        for (int i = 0; i < n; i++) {
            int width = next[i] - prev[i] - 1;
            int area = width * heights[i];
            res = max(res, area);
        }

        return res;
    }
};
