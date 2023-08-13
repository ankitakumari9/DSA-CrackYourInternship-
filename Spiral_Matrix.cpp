#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {

        for (int index = startingCol; count < total && index <= endingCol; index++)
        {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        for (int index = startingRow; count < total && index <= endingRow; index++)
        {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        for (int index = endingCol; count < total && index >= startingCol; index--)
        {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        for (int index = endingRow; count < total && index >= startingRow; index--)
        {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}
int main()
{
    vector<vector<int>> matrix{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    vector<int> ans = spiralOrder(matrix);
    cout<<"All elements of the matrix in spiral order are "<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
            cout << ans[i] << " ";
    }
    return 0;
}