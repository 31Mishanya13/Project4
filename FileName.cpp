#include <iostream>
using namespace std;

int main() {
    for (int row = 0; row < 8; row++) { // ���� �� �������
        for (int col = 0; col < 8; col++) { // ���� �� ��������
            if ((row + col) % 2 == 0) { // ���� ����� ��������� ������, �� ������ �����
                cout << "  ";
            }
            else { // ����� (���� ����� ��������� ��������), �� ������ ������
                cout << "* ";
            }
        }
        cout << endl; // ������� �� ��������� ������
    }
    return 0;
}