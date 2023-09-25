#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;

    // Ввод размеров матрицы
    cout << "Enter number of lines (n): ";
    cin >> n;
    cout << "Enter the number of columns (m): ";
    cin >> m;

    // Создание и ввод исходной матрицы
    vector<vector<int>> matrix(n, vector<int>(m));
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Ввод массива b(m)
    vector<int> b(m);
    cout << "Enter Array Elements b:" << endl;
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    // Создание результирующей матрицы
    vector<vector<int>> result;

    for (int i = 0; i < n; ++i) {
        result.push_back(matrix[i]); // Добавляем текущую строку матрицы

        // Если текущая строка состоит из нулей, добавляем массив b
        bool isZeroRow = true;
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] != 0) {
                isZeroRow = false;
                break;
            }
        }

        if (isZeroRow) {
            result.push_back(b);
        }
    }

    // Вывод обновленной матрицы
    cout << "Updated matrix:" << endl;
    for (int i = 0; i < result.size(); ++i) {
        for (int j = 0; j < m; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
