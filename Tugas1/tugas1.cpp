#include <iostream>
using namespace std;

int tambah(int a, int b)
{
    int hasil = a + b;
    return hasil;
}

int kurang(int a, int b)
{
    int hasil = a - b;
    return hasil;
}

int totalArr(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total;
}

float avg(int arr[], int n)
{
    int total = totalArr(arr, n);
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
            cout << "Hasil penjumlahan: " << tambah(a, b) << endl << endl;
            break;
        case 2:
            cout << "Nilai a: ";
            cin >> a;
            cout << "Nilai b: ";
            cin >> b;
            cout << "Hasil pengurangan: " << kurang(a, b) << endl << endl;
            break;
        case 3:
            cout << "Masukkan panjang array: ";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cout << "Masukkan nilai array ke-" << i << ": ";
                cin >> arr[i];
            }
            cout << "Total dari array: " << totalArr(arr, n) << endl << endl;
            break;
        case 4:
            cout << "Masukkan panjang array: ";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cout << "Masukkan nilai array ke-" << i << ": ";
                cin >> arr[i];
            }
            rata = avg(arr, n);
            cout << "Rata-rata dari array: " << rata << endl << endl;
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
