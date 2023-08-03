/*
문제
N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

입력
첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000)이 주어진다. 둘째 줄부터 N개의 줄에는 수가 주어진다. 이 수는 절댓값이 1,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.

출력
첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n; // 수의 개수
	int arr[1000]; // 수를 저장하기 위한 배열

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n, less<int>()); // 오름차순은 less<자료형>()이고, 내림차순은 greater<자료형>() 이다.

	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
}

/*
입력
5
5
2
3
4
1
출력 결과
1
2
3
4
5

*/
