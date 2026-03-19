/* 
Given a 2D grid of numbers of size n rows and m columns.

you are asked to update the array q number of times.

in each update you are given L, R, U, D, X : and you are asked to add X to each element in the subrectangle whose upper-left cell is at (U, L) and lower-right cell is at (D, R)

todo   (1 <= n, m, q <= 10^6)

it is guaranteed that n * m <= 10^6

for example
4 4
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1

given 1 update query L, R, U, D, X : 
2, 3, 2, 3, 1

the answer should be
1 1 1 1
1 2 2 1
1 2 2 1
1 1 1 1

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> grid(rows, vector<int>(cols));  //! 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> grid[i][j];
        }
    }

    int numOfQueries;
    cin >> numOfQueries;
    while (numOfQueries--){
        int L, R, U, D, update;
        cin >> L >> R >> U >> D >> update;

        for (int i = U - 1; i < D; i++) {   //! row
            for (int j = L - 1; j < R; j++) {   //! column
                grid[i][j] += update;
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

