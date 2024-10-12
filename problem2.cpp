#include <bits/stdc++.h>
using namespace std;

int main() {
    const double rad = 180 / M_PI;  // nilai satu radian
    const int G = 10;               // gravitasi
    double S, V;                    // S = sudut, V = kecepatan awal

    cout << "Masukkan sudut ketapel (derajat): ";
    cin >> S;
    cout << "Masukkan kecepatan awal (m/s): ";
    cin >> V;

    double t_maks = 2 * V * sin(S / rad) / G;

    cout << "Waktu yang diperlukan Boro untuk mencapai jarak terjauh adalah: ";
    cout << fixed << setprecision(3) << t_maks;
    cout << " sekon";
    return 0;
}