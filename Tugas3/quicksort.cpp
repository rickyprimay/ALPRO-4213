#include <iostream>
using namespace std;

// { 5, 2, 6, 3 }
// left = 0, right = 3
//								i = 0, j = 3, pivot = 2
// 								i = 0, j = 2, pivot = 2
// 								i = 0, j = 1, pivot = 2
// { 2, 5, 6, 3 }	i = 1, j = 0, pivot = 2
// (i < right)

// left = 1, right = 3
//								i = 1, j = 3, pivot = 6
//								i = 2, j = 3, pivot = 6
// { 2, 5, 3, 6 }	i = 3, j = 2, pivot = 6
// (left < j)

// left = 1, right = 2
// 								i = 1, j = 2, pivot = 5
// { 2, 3, 5, 6 }	i = 2, j = 1, pivot = 5

void Swap(int& a, int& b){
	int temp = a;
	a = b;
	b = temp;
}

void quicksort(int arr[], int min, int max) {
	// ambil pivot tengah untuk membandingkan dengan elemen lainya nanti
	// pivot ini akan membagi array menjadi dua, `array kiri` dan `array kanan`
	int pivot = arr[(min + max) / 2];
	
	// siapkan `index kiri` untuk melacak `array kiri`, dan `index kanan` untuk melacak `array kanan`
	int kiri = min, kanan = max;
	
	// min adalah batas minimal `index kiri` untuk menandai batas `array kiri` yang sudah terurutkan / berada di posisi yang benar
	// max adalah batas maksimal `index kanan` untuk menandai batas `array kanan` yang sudah terurutkan yang sudah terurutkan / berada di posisi yang benar
	
	// index kiri dan kanan dikatakan `valid` jika `index kiri` lebih kecil dari `index kanan`
	
	// cek index valid
	while (kiri <= kanan) {
		
		// bhs umum: cari elemen di `array kiri` yang tidak urut, dimana nilai elemen lebih kecil dari pivot
		// bhs kode: jika element di `array kiri` lebih kecil dari pivot, biarkan elemen, lanjut `index kiri` selanjutnya
		while ( arr[kiri] < pivot ) kiri++;
		
		// bhs umum: cari elemen di `array kanan` yang tidak urut, dimana nilai elemen lebih besar dari pivot
		// bhs kode: jika element di `array kanan` lebih besar dari pivot, biarkan elemen, lanjut `index kanan` sebelumnya
		while ( arr[kanan] > pivot ) kanan--;
		
		// cek index valid
		if (kiri <= kanan) {
			
			// bhs umum: 	tukar elemen yang tidak urut
			//						karena elemen kiri lebih besar dari pivot, dan elemen kanan lebih kecil dari pivot,
			//						kita dapat menukarnya agar keduanya terurutkan / berada di posisi yang benar
			// swap(arr[kiri], arr[kanan]);
			Swap(arr[kiri], arr[kanan]);
			
			// lanjut index selanjutnya untuk `index kiri`
			kiri++;
			// lanjut index sebelumnya untuk `index kanan`
			kanan--;
		}
	}
	
	// kita cek index yang valid
	// jika batas minimal dan index kanan yang valid, kita quicksort hanya bagian tersebut
	if (min < kanan) quicksort(arr, min, kanan);
	// jika batas maksimal dan index kiri yang valid, kita quicksort hanya bagian tersebut
	if (kiri < max) quicksort(arr, kiri, max);
}

int main() {
	// int arr[] = {5, 2, 8, 3, 1, 6, 9, 7, 4};
	// int arr[] = {2, 5, 1, 6, 9, 7};
	int arr[] = {5, 2, 6, 3};
	int size = sizeof(arr) / sizeof(arr[0]);

	quicksort(arr, 0, size - 1);

	cout << "Array terurutkan: ";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";	
}
