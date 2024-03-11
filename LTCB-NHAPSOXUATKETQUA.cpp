#include <iostream>
using namespace std;
int main() {
	double so, tong = 0;
	cout << "Nhap so (nhap 0 thi dung):" << endl;
	while (true) {
		cin >> so;
		if (so == 0) {
			break;
		}
		tong += so;
	}
	cout << "Tong cac so vua nhap la:" << tong << endl;
	return 0;
}