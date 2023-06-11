#include <iostream>
#include <algorithm>
using namespace std;

template <class T>
void sort_print(T a[], int b) {                                    // sort(시작, 끝)
	sort(a, a + b, less<T>()); // 올림차순 less<자료형>(), 내림차순 greater<자료형>()
	for (int i = 0; i < b; i++) cout << a[i] << '\t';
	cout << endl;
}

int main() {
	int iarr[] = { 90, 100, 10, 40, 77 };
	double darr[] = { 3.1415, 9.9, 8.67 };
	string sarr[] = { "우유", "빵", "맛있다" };

	sort_print(iarr, 5);
	sort_print(darr, 3);
	sort_print(sarr, 3);

	cout << endl;
}
