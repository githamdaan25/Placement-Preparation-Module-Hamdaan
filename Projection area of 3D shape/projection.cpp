class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
          int n = grid.size();
    int xy = 0; 
    int xz = 0; 
    int yz = 0;

    for (int i = 0; i < n; i++) {
        int maxRow = 0;
        int maxCol = 0;
        for (int j = 0; j < n; j++) {
            if (grid[i][j] > 0) {
                xy++; 
            }
            maxRow = max(maxRow, grid[i][j]); 
            maxCol = max(maxCol, grid[j][i]); 
        }
        xz += maxRow; 
        yz += maxCol; 
    }

    return xy + xz + yz; 
    }
};
