/*
27433번 팩토리얼 2

문제
0보다 크거나 같은 정수 N이 주어진다. 이때, N!을 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 정수 N(0 ≤ N ≤ 20)이 주어진다.

출력
첫째 줄에 N!을 출력한다.

예제 입력 1 
10

예제 출력 1 
3628800

예제 입력 2 
0

예제 출력 2 
1
*/  
// 방법1 배열을 이용
#include <iostream>
using namespace std;
int arr[21] = {};

void fact(int a) {
	arr[a] = a;
	if (a >= 1) {
		fact(a - 1);
	}
}

int main() {
	int n; // 팩토리얼을 구할 수
	cin >> n;
	fact(n);
	long long sum = 1; // 숫자가 너무 커져 long long 자료형 사용
	for (int i = 1; i <= n; i++) {
		sum *= arr[i];
	}
	cout << sum;
}

// 방법2 더 간단하게 만든 재귀함수

#include <iostream>
using namespace std;

long long fact(int a) {
	if (a < 2) {
		return 1;
	}
	
	return a * fact(a - 1);
}

int main() {
	int n; // 팩토리얼을 구할 n
	cin >> n;
	cout << fact(n);
}

