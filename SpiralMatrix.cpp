vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        // code here
         int dir = 0;
    int top = 0;
    int left = 0;
    int right = mat[0].size() - 1;
    int bottom = mat.size() - 1;
    vector<int> res;

    while (left <= right && top <= bottom) {
        if (dir == 0) {
            for (int i = left; i <= right; ++i) {
                res.push_back(mat[top][i]);
            }
            ++top;
        } else if (dir == 1) {
            for (int i = top; i <= bottom; ++i) {
                res.push_back(mat[i][right]);
            }
            --right;
        } else if (dir == 2) {
            for (int i = right; i >= left; --i) {
                res.push_back(mat[bottom][i]);
            }
            --bottom;
        } else {
            for (int i = bottom; i >= top; --i) {
                res.push_back(mat[i][left]);
            }
            ++left;
        }
        dir = (dir + 1) % 4;
    }

    return res;
    }
