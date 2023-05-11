//함수 중복 사용
#include <iostream>
using namespace std;

int arr_plus(int a[], int b) { // 정수 리턴 타입 함수
	int sum = 0;
	for (int i = 0; i < b; i++) {
		sum += a[i];
	}
	return sum;
}

double arr_plus(double a[], int b) { // 실수 리턴 타입 함수, 함수중복(같은 이름의 함수는 리턴 타입이 달라야함)
	double sum = 0;
	for (int i = 0; i < b; i++) {
		sum += a[i];
	}
	return sum;
}


int main() {
	int iarr[] = { 1, 2, 3 ,4, 5 };
	double darr[] = { 1.1, 2.2, 3.3 };

	cout << "정수배열 합은 " << arr_plus(iarr, 5) << endl;
	cout << "실수배열 합은 " << arr_plus(darr, 3) << endl;
}


// 템플릿 사용
#include <iostream>
using namespace std;

template <class T> // 템플릿 사용 template <typename T> 라고 해도 가능
T arr_plus(T a [], int b) {
	T sum = 0;
	for (int i = 0; i < b; i++) {
		sum += a[i];
	}
	return sum;
}


int main() {
	int iarr[] = { 1, 2, 3 ,4, 5 };
	double darr[] = { 1.1, 2.2, 3.3 };

	cout << "정수배열 합은 " << arr_plus(iarr, 5) << endl;
	cout << "실수배열 합은 " << arr_plus(darr, 3) << endl;
}
