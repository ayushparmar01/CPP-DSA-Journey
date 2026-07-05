// print like a wave
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;

    for(int col = 0; col < cols-1; col++){

        if(col & 1) {
            // print bottom to top
            for(int row = nRows-1; row>=0; row--) {
                ans.push_back(arr[row][col]);
            }
        }
        else {
            // print top to bottom
            for(int row = 0; row<=nRows; row++) {
                ans.push_back(arr[row][col]);
            }

        }
    }
    return ans;
}