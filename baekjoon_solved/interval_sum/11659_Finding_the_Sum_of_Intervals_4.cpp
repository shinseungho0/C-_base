/*
구간 합 구하기 4

문제
수 N개가 주어졌을 때, i번째 수부터 j번째 수까지 합을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 수의 개수 N과 합을 구해야 하는 횟수 M이 주어진다. 둘째 줄에는 N개의 수가 주어진다. 수는 1,000보다 작거나 같은 자연수이다. 셋째 줄부터 M개의 줄에는 합을 구해야 하는 구간 i와 j가 주어진다.

출력
총 M개의 줄에 입력으로 주어진 i번째 수부터 j번째 수까지 합을 출력한다.

제한
1 ≤ N ≤ 100,000
1 ≤ M ≤ 100,000
1 ≤ i ≤ j ≤ N

예제 입력 1 
5 3
5 4 3 2 1
1 3
2 4
5 5

예제 출력 1 
12
9
1
*/

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); // 5 ~ 7줄 시간 단축을 위한 구문
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m; // n은 데이터 개수, m은 합의 횟수
	int arr[100000] = {}; // 수를 저장할 배열
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int temp;
		cin >> temp;
		arr[i] = arr[i - 1] + temp; // 합 배열 생성
	}

	for (int i = 0; i < m; i++) {
		int start, end;
		cin >> start >> end;
		cout << arr[end] - arr[start - 1] << '\n'; // 구간 합 구하기
	}

}
