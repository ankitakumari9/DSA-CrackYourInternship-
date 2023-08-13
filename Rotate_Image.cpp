#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    for (int i = 0; i < (n + 1) / 2; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {

            int temp = matrix[n - 1 - j][i];

            matrix[n - 1 - j][i] = matrix[n - 1 - i][n - j - 1];

            matrix[n - 1 - i][n - j - 1] = matrix[j][n - 1 - i];

            matrix[j][n - 1 - i] = matrix[i][j];

            matrix[i][j] = temp;
        }
    }
}

int main()
{
    vector<vector<int>> matrix{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    rotate(matrix);

    cout << "The rotated matrix is" << endl;

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {

            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
