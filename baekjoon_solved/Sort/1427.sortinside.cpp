/*
1427. 소트인사이드

문제
배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.

입력
첫째 줄에 정렬하려고 하는 수 N이 주어진다. N은 1,000,000,000보다 작거나 같은 자연수이다.

출력
첫째 줄에 자리수를 내림차순으로 정렬한 수를 출력한다.

예제 입력 1 
2143

예제 출력 1 
4321

예제 입력 2 
999998999

예제 출력 2 
999999998
*/  

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string a; // 입력받을 자연수
	cin >> a;
	int arr[100]; // 수를 저장할 배열

	for (int i = 0; i < a.length(); i++) {
		arr[i] = a[i] - 48; // 배열에 문자를 숫자로 바꿔서 저장
	}
	sort(arr, arr + a.length(), greater<>()); // 내림차순 정렬

	for (int i = 0; i < a.length(); i++) {
		cout << arr[i];
	}
	
}
