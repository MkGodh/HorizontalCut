#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    int minecraft[5][5][10];

    cout << "Please, input matrix of heights: " << "\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> n;
            for (int k = 0; k < 10; k++) {
                minecraft[i][j][k] = n;
            }
        }
    }
    int slice;
    cout << "Please input slice: " << "\n";
    cin >> slice;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (minecraft[i][j][slice] >= slice) {
                cout << "1" << " ";
            }
            else {
                cout << "0" << " ";
            }
        }
        cout << "\n";
    }

}