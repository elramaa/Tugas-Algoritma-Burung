#include <bits/stdc++.h>
using namespace std;

int main() {
    const double rad = 180 / M_PI;  // nilai satu radian
    const int G = 10;               // gravitasi
    double S, V, T;  // S = sudut, V = kecepatan awal, T = tinggi pohon

    cout << "Masukkan sudut ketapel (derajat): ";
    cin >> S;
    cout << "Masukkan kecepatan awal (m/s): ";
    cin >> V;
    cout << "Masukkan tinggi pohon (m): ";
    cin >> T;

    double t_maks = 2 * V * sin(S / rad) / G;
    double y_maks =
        V * sin(S / rad) * (t_maks / 2) - G * pow(t_maks / 2, 2) / 2;

    cout << "Status: ";
    cout << (y_maks > T);
    cout << "\nKetinggian: ";
    cout << fixed << setprecision(2) << y_maks;

    return 0;
}