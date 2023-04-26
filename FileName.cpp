#include <iostream>
using namespace std;

int main() {
    for (int row = 0; row < 8; row++) { // цикл по строкам
        for (int col = 0; col < 8; col++) { // цикл по столбцам
            if ((row + col) % 2 == 0) { // если сумма координат четная, то клетка белая
                cout << "  ";
            }
            else { // иначе (если сумма координат нечетная), то клетка черная
                cout << "* ";
            }
        }
        cout << endl; // переход на следующую строку
    }
    return 0;
}