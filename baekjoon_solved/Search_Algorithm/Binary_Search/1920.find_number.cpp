/*
1920. 수 찾기
문제
N개의 정수 A[1], A[2], …, A[N]이 주어져 있을 때, 이 안에 X라는 정수가 존재하는지 알아내는 프로그램을 작성하시오.

입력
첫째 줄에 자연수 N(1 ≤ N ≤ 100,000)이 주어진다. 다음 줄에는 N개의 정수 A[1], A[2], …, A[N]이 주어진다. 다음 줄에는 M(1 ≤ M ≤ 100,000)이 주어진다. 다음 줄에는 M개의 수들이 주어지는데, 이 수들이 A안에 존재하는지 알아내면 된다. 모든 정수의 범위는 -231 보다 크거나 같고 231보다 작다.

출력
M개의 줄에 답을 출력한다. 존재하면 1을, 존재하지 않으면 0을 출력한다.

예제 입력 1 
5
4 1 5 2 3
5
1 3 7 9 5

예제 출력 1 
1
1
0
0
1  
*/

#include <iostream>
#include <algorithm>
using namespace std;

int arr[100000];
int arr2[100000];
int arr3[100000] = {};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; // 수의 개수
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int m; // 찾아야 할 숫자 개수
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> arr2[i];
	}
	sort(arr, arr + n);

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (arr2[i] == arr[j]) {
				arr3[i] = 1;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		cout << arr3[i] << '\n';
	}
}

