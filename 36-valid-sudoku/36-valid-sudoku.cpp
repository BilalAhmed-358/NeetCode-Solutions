class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    vector<set<int>> horizontal(9),vertical(9), box(9);
     for(int i=0; i<board.size();i++)
     {
         for(int j=0;j<board[i].size();j++)
         {
            
            if (board[i][j]=='.')
                continue;
             int curr=board[i][j]-'0';
             if (horizontal[i].count(curr) || vertical[j].count(curr) || box[(i/3)*3+j/3].count(curr))
             {
                 for(int i=0;i<horizontal.size();i++)
                    {
                        for(auto j:horizontal[i])
                            cout<<j<<" ";
                        cout<<endl;
                    }
                return false;
                 
             }
             horizontal[i].insert(curr);
             vertical[j].insert(curr);
             box[(i/3)*3+j/3].insert(curr);
         }
         
     }  
    return true;    
    }
};