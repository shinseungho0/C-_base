#include <iostream>
using namespace std;

template <class T>

void swap(T &a, T &b, T &c) {
	T d;
	d = a;
	a = b;
	b = c;
	c = d;
}

int main() {
	int a, b, c; // a, b, c 는 입력받을 정수
	double d, e, f; // d, e, f 는 입력받을 실수

	cout << "세 정수 입력: ";
	cin >> a >> b >> c;
	swap(a, b, c);
	cout << "a=" << a << " b=" << b << " c=" << c << endl;

	cout << "세 실수 입력: ";
	cin >> d >> e >> f;
	swap(d, e, f);
	cout << "d=" << d << " e=" << e << " f=" << f;
}

/*
세 정수 입력: 10 20 30 --> 입력
a=20 b=30 c=10 --> 출력
세 실수 입력: 1.1 2.2 3.3 --> 입력
d=2.2 e=3.3 f=1.1 --> 출력
*/
