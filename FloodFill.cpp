class Solution {
  public:
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor)
            return image;

        int n = image.size();
        int m = image[0].size();

        dfs(image, image[sr][sc], newColor, sr, sc, n, m);
        return image;
    }

    void dfs(vector<vector<int>>& image, int origColor, int newColor, int i, int j, int n, int m) {
        if(i < 0 || j < 0 || i >= n || j >= m)
            return;

        if(image[i][j] == newColor || image[i][j] != origColor)
            return;

        image[i][j] = newColor;
        dfs(image, origColor, newColor, i + 1, j, n, m);
        dfs(image, origColor, newColor, i - 1, j, n, m);
        dfs(image, origColor, newColor, i, j - 1, n, m);
        dfs(image, origColor, newColor, i, j + 1, n, m);
    }

};
