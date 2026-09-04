class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;

        if(matrix.empty()) {
            return res;
        }

        int r = 0;
        int re = matrix.size() - 1;
        int c = 0;
        int ce = matrix[0].size() - 1;

        while(r <= re && c <= ce) {
            for(int j = c; j <= ce; j++) {
                res.push_back(matrix[r][j]);
            }
            r++;
            for(int i = r; i <= re; i++) {
                res.push_back(matrix[i][ce]);
            }
            ce--;
            if(r <= re) {
                for(int j = ce; j >= c; j--) {
                    res.push_back(matrix[re][j]);
                }
                re--;
            }
            if(c <= ce) {
                for(int i = re; i >= r; i--) {
                    res.push_back(matrix[i][c]);
                }
                c++;
            }
        }

        return res;
    }
};