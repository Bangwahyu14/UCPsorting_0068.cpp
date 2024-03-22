//1.dengan cara membuat short list untuk beberapa angka dan akan berpindah dengan angka sebelahnya apabila sesuai dengan persyaratan
//2.dengan cara melakukan perbandingan antara angka sebelumnya dan dilakukan terus menerus sampai selesai atau sesuai persyaratan
//3.dengan cara melakuakan scan agar dapat menemukan berapa angka yang berada dalam kolom tersebut
//4.

#include <iostream>
#include <string>
using namespace std;

int arr[68];
int n;

void input() {

	while (true) {
		cout << "masukan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 68)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 68 elemen.\n";
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Wahyu Agung Prasetyo" << endl;
	cout << "====================" << endl;

	for (int i = 0; 1 < n; i++) {
		cout << "data ke-" << (i + 1) << ": ";
		cin >> arr[i];

	}
}



void bubbleSortArray() {
	int pass = 1;

	do {
		for (int j = 0; j <= n - 1 - pass; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		pass = pass + 1;

		cout << "\npass" << pass - 1 << ": ";
		for (int k = 0; k < n; k++) {
			cout << arr[k] << " ";

		}
		cout << endl;
	} while (pass <= n - 1);

}


void display() {
	cout << endl;
	cout << "==================================" << endl;
	cout << " Element Array yang telah tersusun" << endl;
	cout << "==================================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j];
		if (j < n - 1) {
			cout << " -->";
		}
	}
	cout << endl;
	cout << endl;

	cout << " jumlah pass = " << endl;
	cout << endl;
	cout << endl;

}

int main()
{
	input();

	bubbleSortArray();
	display();

	system("pause");
	return 0;

}