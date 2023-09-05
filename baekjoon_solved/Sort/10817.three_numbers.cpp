/*
10817. 세 수

문제
세 정수 A, B, C가 주어진다. 이때, 두 번째로 큰 정수를 출력하는 프로그램을 작성하시오. 

입력
첫째 줄에 세 정수 A, B, C가 공백으로 구분되어 주어진다. (1 ≤ A, B, C ≤ 100)

출력
두 번째로 큰 정수를 출력한다.

예제 입력 1 
20 30 10

예제 출력 1 
20
*/  

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int>v(3);
	for (int i = 0; i < 3; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end()); // 오름차순 정렬

	cout << v[1];
}
