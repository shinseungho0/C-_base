#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; // 수의 개수
	int arr[100000] = {}; // 수를 넣을 배열
	int m; // 구간의 개수
	
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int temp;
		cin >> temp;
		arr[i] = arr[i - 1] + temp; // 합 배열 공식
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		int start, end;
		cin >> start >> end;
		cout << arr[end] - arr[start - 1] << '\n'; // 구간 합 공식
	}
}
