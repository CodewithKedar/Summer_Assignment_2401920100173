class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> temp;
        vector<vector<int>> matrix(r, vector<int>(c));
        if (mat.empty() || mat[0].empty())
            return mat;
        int m = mat.size();
        int n = mat[0].size();

        if (m * n != r * c)
            return mat;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[i].size(); j++) {
                temp.push_back(mat[i][j]);
            }
        }
        int k = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                matrix[i][j] = temp[k++];
            }
        }
        return matrix;
    }
};
