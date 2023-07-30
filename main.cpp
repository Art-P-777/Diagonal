#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

template <typename t>
void arr_out(const t& arr, const size_t width, const size_t heigth) {
	for (int i1 = 0; i1 < heigth; i1++) {
		for (int i2 = 0; i2 < width; i2++) {
			cout << arr[i1][i2];
		}
		cout << endl;
	}
}

int main() {
	setlocale(LC_ALL, "RU");

	// иницилизация данных
	const size_t width = 170, heigth = 20;
	const char sym = '@';

	const double k = width / heigth;

	char arr[heigth][width];

	// заполнение массива пустотой
	for (int i1 = 0; i1 < heigth; i1++) {
		for (int i2 = 0; i2 < width; i2++) {
			arr[i1][i2] = ' ';
		}
	}

	// ввод диагонали в массив
	for (float i1 = 0.0f, i2 = 0.0f; i1 < heigth; i1++, i2++) {
		arr[((int)i1)][((int)round(i2 * k))] = sym;
	}

	arr_out<char [heigth][width]>(arr, width, heigth);

	return 0;
}