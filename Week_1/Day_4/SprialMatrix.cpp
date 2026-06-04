class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) {
            return {};
        }
        int n = matrix.size();
        int m = matrix[0].size();
        int sr = 0;
        int sc = 0;
        int er = n - 1;
        int ec = m - 1;
        vector<int> result;

        while (sr <= er && sc <= ec) {
            for (int col = sc; col <= ec; col++) {
                result.push_back(matrix[sr][col]);
            }
            sr++;
            for (int row = sr; row <= er; row++) {
                result.push_back(matrix[row][ec]);
            }
            ec--;
            if (sr <= er) {
                for (int col = ec; col >= sc; col--) {
                    result.push_back(matrix[er][col]);
                }
                er--;
            }
            if (sc <= ec) {
                for (int row = er; row >= sr; row--) {
                    result.push_back(matrix[row][sc]);
                }
                sc++;
            }
        }
        return result;
    }
};
