#include <iostream>
using namespace std;

template <typename T>

/* c는 디폴트 값을 0을 가지도록 선언되었으므로, 함수를 호출하는 쪽에서
세번째 인자가 포함되지 않은 경우에는 자동적으로 0이 매개 변수로 전달*/
T sum(T a, T b, T c = 0) { 
	return a + b + c;
}

int main() {
	
	cout << "두 수의 합은 " << sum(5, 7) << endl;
	cout << "세 정수의 합은 " << sum(5, 7, 8) << endl;
	cout << "세 실수의 합은 " << sum(3.14, 7.99, -1.0) << endl;
}

/*
두 수의 합은 12
세 정수의 합은 20
세 실수의 합은 10.13
*/
