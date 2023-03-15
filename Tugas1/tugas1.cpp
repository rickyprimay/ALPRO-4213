#include <iostream>
using namespace std;

int penjumlahan(int a, int b)
{
    int hasil = a + b;
    return hasil;
}

int pengurangan(int a, int b)
{
    int hasil = a - b;
    return hasil;
}

int hitungTotal(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total;
}

float hitungRataRata(int arr[], int n)
{
    int total = hitungTotal(arr, n);
    float rata = (float)total / n;
    return rata;
}

int main()
{

    cout << "/========== Ricky Primayuda Putra ==========/\n";
    cout << "/==========    A11.2022.14486     ==========/\n";
    cout << "/==========       A11.4213        ==========/\n";

    int a, b;
    cout << "Masukan bilangan pertama : ";
    cin >> a;
    cout << "Masukan bilangan kedua: ";
    cin >> b;

    int hasil_penjumlahan = penjumlahan(a, b);
    int hasil_pengurangan = pengurangan(a, b);

    int n;
    cout << "Masukkan panjang array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan nilai array ke-" << i << ": ";
        cin >> arr[i];
    }
    int total = hitungTotal(arr, n);
    float rata = hitungRataRata(arr, n);

    cout << "Hasil penjumlahan: " << hasil_penjumlahan << endl;
    cout << "Hasil pengurangan: " << hasil_pengurangan << endl;
    cout << "Total dari array: " << total << endl;
    cout << "Rata-rata dari array: " << rata << endl;

    return 0;
}
