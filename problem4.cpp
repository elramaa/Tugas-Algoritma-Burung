#include <bits/stdc++.h>
using namespace std;

int main() {
    const double rad = 180 / M_PI;  // nilai satu radian
    const int G = 10;               // gravitasi

    int N;  // N = jumlah burung
    cout << "Masukkan jumlah burung yang akan diluncurkan: ";
    cin >> N;
    cout << "\n";

    for (int i = 1; i <= N; i++) {
        double S, V, T;  // S = sudut, V = kecepatan awal, T = tinggi pohon

        cout << "--- Masukkan input burung " << i << "\n";
        cout << "Masukkan sudut ketapel (derajat): ";
        cin >> S;
        cout << "Masukkan kecepatan awal (m/s): ";
        cin >> V;
        cout << "Masukkan tinggi pohon (m): ";
        cin >> T;

        double t_maks = 2 * V * sin(S / rad) / G;
        double y_maks =
            V * sin(S / rad) * (t_maks / 2) - G * pow(t_maks / 2, 2) / 2;

        cout << "\nStatus burung " << i << ": ";
        cout << (y_maks > T);
        cout << "\nKetinggian: ";
        cout << fixed << setprecision(2) << y_maks;
        cout << "\n\n";
    }

    return 0;
}