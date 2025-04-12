class Solution {
    public int[][] floodFill(int[][] image, int sr, int sc, int newColor) {
        // Code here
        if(image[sr][sc] == newColor){
            return image;
        }
        int n = image.length;
        int m = image[0].length;
        floodFillUtils(image, image[sr][sc], sr, sc, n, m, newColor);
        return image;
    }
    
    void floodFillUtils(int[][] image, int origColor, int sr, int sc, int n, int m, int newColor){
        if(sr < 0 || sc < 0 || sr >= n || sc >= m){
            return;
        }
        
        
        if(image[sr][sc] == newColor || image[sr][sc] != origColor){
            return;
        }
        
        image[sr][sc] = newColor;
        floodFillUtils(image, origColor, sr+ 1, sc, n, m, newColor);
        floodFillUtils(image, origColor, sr - 1, sc, n, m, newColor);
        floodFillUtils(image, origColor, sr, sc - 1, n, m, newColor);
        floodFillUtils(image, origColor, sr, sc + 1, n, m, newColor);
    } 
}
