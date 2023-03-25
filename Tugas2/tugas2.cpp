#include <iostream>
#include <algorithm>
    using namespace std;

bool isEven(int n)
{
    return n % 2 == 0;
}

bool isOdd(int n)
{
    return n % 2 != 0;
}

bool isFactor(int n, int f)
{
    return n % f == 0;
}

int MaxArray(int arr[], int n)
{
    return *max_element(arr, arr + n);
}

int MinArray(int arr[], int n)
{
    return *min_element(arr, arr + n);
}

int Max(int a, int b)
{
    return max(a, b);
}

int Min(int a, int b)
{
    return min(a, b);
}

int SumEven(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (isEven(arr[i]))
        {
            sum += arr[i];
        }
    }
    return sum;
}

int SumOdd(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (isOdd(arr[i]))
        {
            sum += arr[i];
        }
    }
    return sum;
}

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

bool isFound(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    int arr[n];
    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pilihan;
    do
    {
        cout << "\n|------------- Pilihan Operasi : -------------|\n";
        cout << "|----------- 1. Cek bilangan genap -----------|\n";
        cout << "|---------- 2. Cek bilangan ganjil -----------|\n";
        cout << "|--------------- 3. Cek faktor ---------------|\n";
        cout << "|------- 4. Nilai maksimum dalam array -------|\n";
        cout << "|-------- 5. Nilai minimum dalam array--------|\n";
        cout << "|---- 6. Nilai maksimum dari dua bilangan ----|\n";
        cout << "|----- 7. Nilai minimum dari dua bilangan ----|\n";
        cout << "|--- 8. Jumlah bilangan genap dalam array ----|\n";
        cout << "|--- 9. Jumlah bilangan ganjil dalam array ---|\n";
        cout << "|------- 10. Tukar nilai dua bilangan --------|\n";
        cout << "|-------- 11. Cari elemen dalam array --------|\n";
        cout << "|----------------- 0. Keluar -----------------|\n";
        cout << "\n";
        cout << "               Masukkan pilihan : ";
        cin >> pilihan;
        cout << "\n";
        switch (pilihan)
        {
        case 1:
        {
            int x;
            cout << "Masukkan bilangan: ";
            cin >> x;
            if (isEven(x))
            {
                cout << x << " adalah bilangan genap\n";
            }
            else
            {
                cout << x << " bukan bilangan genap\n";
            }
            break;
        }
        case 2:
        {
            int x;
            cout << "Masukkan bilangan: ";
            cin >> x;
            if (isOdd(x))
            {
                cout << x << " adalah bilangan ganjil\n";
            }
            else
            {
                cout << x << " bukan bilangan ganjil\n";
            }
            break;
        }
        case 3:
        {
            int n, f;
            cout << "Masukkan bilangan: ";
            cin >> n;
            cout << "Masukkan faktor: ";
            cin >> f;
            if (isFactor(n, f))
            {
                cout << f << " adalah faktor dari " << n << endl;
            }
            else
            {
                cout << f << " bukan faktor dari " << n << endl;
            }
            break;
        }
        case 4:
        {
            cout << "Nilai maksimum dalam array: " << MaxArray(arr, n) << endl;
            break;
        }
        case 5:
        {
            cout << "Nilai minimum dalam array: " << MinArray(arr, n) << endl;
            break;
        }
        case 6:
        {
            int a, b;
            cout << "Masukkan dua bilangan: ";
            cin >> a >> b;
            cout << "Nilai maksimum: " << Max(a, b) << endl;
            break;
        }
        case 7:
        {
            int a, b;
            cout << "Masukkan dua bilangan: ";
            cin >> a >> b;
            cout << "Nilai minimum: " << Min(a, b) << endl;
            break;
        }
        case 8:
        {
            cout << "Jumlah bilangan genap dalam array: " << SumEven(arr, n) << endl;
            break;
        }
        case 9:
        {
            cout << "Jumlah bilangan ganjil dalam array: " << SumOdd(arr, n) << endl;
            break;
        }
        case 10:
        {
            int a, b;
            cout << "Masukkan dua bilangan: ";
            cin >> a >> b;
            Swap(a, b);
            cout << "Setelah ditukar: " << a << " " << b << endl;
            break;
        }
        case 11:
        {
            int x;
            cout << "Masukkan elemen yang ingin dicari: ";
            cin >> x;
            if (isFound(arr, n, x))
            {
                cout << x << " ditemukan dalam array\n";
            }
            else
            {
                cout << x << " tidak ditemukan dalam array\n";
            }
            break;
        }
        case 0:
        {
            cout << "Terima kasih telah menggunakan program ini!\n";
            break;
        }
        default:
        {
            cout << "Pilihan tidak valid\n";
            break;
        }
        }
    } while (pilihan != 0);
    return 0;
}