#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int x1, y1, x2, y2, x3, y3;
    cout << "Введите координаты трех вершин: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int x4 = x1;
    int y4 = y1;
    if (x1 == x2)
        x4 = x3;
    else if (x1 == x3)
        x4 = x2;
    if (y1 == y2)
        y4 = y3;
    else if (y1 == y3)
        y4 = y2;
    cout << "Координаты четвертой вершины: ";
    cout << x4 << " " << y4 << endl;
    return 0;
}
