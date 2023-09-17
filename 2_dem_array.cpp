#include <iostream>
#include <ctime>
using namespace std;

enum {
    Left = 1, Right = 2, Up = 3, Down = 4
};
int main()
{
    //cout << "Hello World!\n";

    //const int row = 3, col = 4;
    //int arr[row][col]{};
    //int number;
    //for (int i = 0; i < row; i++){
    //    cout << "Enter number: ";
    //    cin >> number;
    //    for (int j = 0, k = number; j < col; j++, k *= 2) {
    //        arr[i][j] = k;
    //    }
    //}
    //for (int i = 0; i < row; i++)
    //{
    //    for (int j = 0; j < col; j++) {
    //        cout << arr[i][j] << "\t";
    //    }
    //    cout << endl;
    //}

    //const int row = 3, col = 4;
    //int arr[row][col]{};
    //int number;
    //for (int i = 0; i < row; i++) {
    //    cout << "Enter number: ";
    //    cin >> number;
    //    for (int j = 0, k = number; j < col; j++, k++) {
    //        arr[i][j] = k;
    //    }
    //}
    //for (int i = 0; i < row; i++)
    //{
    //    for (int j = 0; j < col; j++) {
    //        cout << arr[i][j] << "\t";
    //    }
    //    cout << endl;
    //}
    const int row = 4, col = 5;
    int arr[row][col]{};
    srand(unsigned int(time(0)));
    for (size_t i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) {
            arr[i][j] = 1 + rand() % 21;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << "\t";
    }
        cout << endl;
    }
    cout << endl;
    int option, shift;
    cout << "left = 1, right = 2, up = 3, down = 4\nEnter direction: ";
    cin >> option;
    switch (option)
    {
    case Left:
        cout << "Enter shift: ";
        cin >> shift;
        for (int e = 0; e < shift % col; e++)
        {
            for (size_t i = 0; i < row; i++)
            {
                int tmp = arr[i][0];
                for (size_t j = 0; j < col - 1; j++) {
                    arr[i][j] = arr[i][j + 1];
                }
                arr[i][col - 1] = tmp;
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++) {
                cout << arr[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;
        break;
    case Right:
        cout << "Enter shift: ";
        cin >> shift;
        for (int e = 0; e < shift % col; e++) {
            for (size_t i = 0; i < row; i++)
            {
                int tmp = arr[i][col - 1];
                for (size_t j = col - 1; j > 0; j--) {
                    arr[i][j] = arr[i][j - 1];
                }
                arr[i][0] = tmp;
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++) {
                cout << arr[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;
        break;
    case Up:
        cout << "Enter shift: ";
        cin >> shift;
        for (int e = 0; e < shift % row; e++) {
            for (size_t i = 0; i < col; i++)
            {
                int tmp = arr[0][i];
                for (size_t j = 0; j < row - 1; j++) {
                    arr[j][i] = arr[j + 1][i];
                }
                arr[row - 1][i] = tmp;
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++) {
                cout << arr[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;
        break;
    case Down:
        cout << "Enter shift: ";
        cin >> shift;
        for (int e = 0; e < shift % row; e++) {
            for (size_t i = 0; i < col; i++)
            {
                int tmp = arr[row - 1][i];
                for (size_t j = row - 1; j > 0; j--) {
                    arr[j][i] = arr[j - 1][i];
                }
                arr[0][i] = tmp;
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++) {
                cout << arr[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;
        break;
    default:
        cout << "Input error";
        break;
    }






}
