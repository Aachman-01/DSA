class Solution {
public:
    bool dfs(int i, int j, vector<vector<char>>& board, string& word, int wordindex) {
        int n = board.size();
        int m = board[0].size();

        if (wordindex == word.size()) return true;
        if (i < 0 || j < 0 || i >= n || j >= m) return false;
        if (board[i][j] == ' ' || board[i][j] != word[wordindex]) return false;

        char ch = board[i][j];
        board[i][j] = ' ';

        bool found = dfs(i-1, j, board, word, wordindex+1) ||
                     dfs(i+1, j, board, word, wordindex+1) ||
                     dfs(i, j-1, board, word, wordindex+1) ||
                     dfs(i, j+1, board, word, wordindex+1);

        board[i][j] = ch;
        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (dfs(i, j, board, word, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
};
