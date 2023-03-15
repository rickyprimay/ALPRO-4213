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
    cout << "|---------- Ricky Primayuda Putra ----------|\n";
    cout << "|----------    A11.2022.14486     ----------|\n";
    cout << "|----------       A11.4213        ----------|\n";
    cout << "\n";

    int pilihan, a, b, n;
    int arr[100];
    float rata;
    bool loop = true;

    while (loop)
    {
        cout << "|----------    Pilihan Operasi :  ----------|\n";
        cout << "|----------     1. Penjumlahan    ----------|\n";
        cout << "|----------     2. Pengurangan    ----------|\n";
        cout << "|----------     3. Total Array    ----------|\n";
        cout << "|----------   4. Rata-rata Array  ----------|\n";
        cout << "|----------       5. Keluar       ----------|\n";
        cout << "\n";
        cout << "Masukkan Pilihan Anda : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Nilai a : ";
            cin >> a;
            cout << "Nilai b : ";
            cin >> b;
            cout << "Hasil penjumlahan: " << penjumlahan(a, b) << endl;
            break;
        case 2:
            cout << "Nilai a: ";
            cin >> a;
            cout << "Nilai b: ";
            cin >> b;
            cout << "Hasil pengurangan: " << pengurangan(a, b) << endl;
            break;
        case 3:
            cout << "Masukkan panjang array: ";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cout << "Masukkan nilai array ke-" << i << ": ";
                cin >> arr[i];
            }
            cout << "Total dari array: " << hitungTotal(arr, n) << endl;
            break;
        case 4:
            cout << "Masukkan panjang array: ";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cout << "Masukkan nilai array ke-" << i << ": ";
                cin >> arr[i];
            }
            rata = hitungRataRata(arr, n);
            cout << "Rata-rata dari array: " << rata << endl;
            break;
        case 5:
            loop = false;
            break;
        default:
            cout << "Pilihan tidak tersedia." << endl;
        }
    }

    return 0;
}
