class SubrectangleQueries {
public:
    vector<vector<int>> rectangle;
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        this->rectangle = rectangle;
        
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        
        for (int i = 0; i <= row2 - row1; ++i)
          for (int j = 0; j <= col2 - col1; ++j)
             rectangle[row1 + i][col1 + j] = newValue;
    }
    
    int getValue(int row, int col) {
        
        return rectangle[row][col];
        
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */
