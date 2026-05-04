class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        unordered_set<int> col[9];
        unordered_set<int> row[9];
        unordered_set<int> boxes[9];

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if(b[i][j]=='.'){
                    continue;
                }
                int value=b[i][j];
                int box=(i/3)*3+(j/3);
                if(row[i].count(value)||col[j].count(value)||boxes[box].count(value)){
                    return false;
                }
                row[i].insert(value);
                col[j].insert(value);
                boxes[box].insert(value);
            }
        }
        return true;
    }
};