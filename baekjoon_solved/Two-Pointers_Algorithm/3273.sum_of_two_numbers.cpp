/*
3273. 두 수의 합

문제
n개의 서로 다른 양의 정수 a1, a2, ..., an으로 이루어진 수열이 있다. ai의 값은 1보다 크거나 같고, 1000000보다 작거나 같은 자연수이다. 자연수 x가 주어졌을 때, ai + aj = x (1 ≤ i < j ≤ n)을 만족하는 (ai, aj)쌍의 수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 수열의 크기 n이 주어진다. 다음 줄에는 수열에 포함되는 수가 주어진다. 셋째 줄에는 x가 주어진다. (1 ≤ n ≤ 100000, 1 ≤ x ≤ 2000000)

출력
문제의 조건을 만족하는 쌍의 개수를 출력한다.

예제 입력 1 
9
5 12 7 10 9 1 2 3 11
13

예제 출력 1 
3
*/  

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n; // 수의 개수
	cin >> n;
	
	int arr[100000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n); // 오름차순 정렬

	int m; // 구해야 하는 수
	cin >> m;
	// 투 포인터 사용
	int start = 0;
	int end = n - 1;
	int count = 0;
	while (start < end) {
		int a = arr[start];
		int b = arr[end];
		if (a + b == m) {
			count++;
			start++;
			end--;
		}
		else if (a + b < m) {
			start++;
		}
		else {
			end--;
		}
	}

	cout << count;

}
