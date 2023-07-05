/* 
    Nama    : Ricky Primayuda Putra
    NIM     : A11.2022.14486
    Kelas   : A11-4213
 */

#include <iostream>
using namespace std;

struct Mhs
{
    string nama, nim;
    float score[5];

    void printData()
    {
        cout << "Nama: " << nama << endl;
        cout << "NIM: " << nim << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Nilai: " << score[i] << endl;
        }
    }

    void swapData(float *al, float *a2)
    {
        float temp = *al;
        *al = *a2;
        *a2 = temp;
    }

    float sumScore(float *arr, int len)
    {
        if (len <= 0)
            return 0;
        return sumScore(arr, len - 1) + arr[len - 1];
    }

    void bubbleSort(float *arr, int len)
    {
        for (int i = 0; i < len - 1; i++)
        {
            for (int j = 0; j < len - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swapData(&arr[j], &arr[j + 1]);
                }
            }
        }
    }
};

int main()
{
    Mhs m1 = {"Ricky Primayuda Putra", "A11.2022.14486", {90, 80, 75, 56, 89}};
    cout << "Sebelum di Sorting dan di Swap :" << endl;
    cout << endl;
    m1.printData();

    int n = sizeof(m1.score) / sizeof(m1.score[0]);
    cout << "Nilai Rata Rata: " << m1.sumScore(m1.score, n) / n << endl;

    m1.swapData(&m1.score[0], &m1.score[4]);

    cout << endl;
    cout << "Setelah di Swap :" << endl;
    cout << endl;
    m1.printData();

    m1.bubbleSort(m1.score, n);

    cout << endl;
    cout << "Setelah di Sorting :" << endl;
    cout << endl;
    m1.printData();
    cout << "Nilai Rata Rata: " << m1.sumScore(m1.score, n) / n << endl;

    return 0;
}

