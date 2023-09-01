/*
11724. 연결 요소의 개수
문제
방향 없는 그래프가 주어졌을 때, 연결 요소 (Connected Component)의 개수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 정점의 개수 N과 간선의 개수 M이 주어진다. (1 ≤ N ≤ 1,000, 0 ≤ M ≤ N×(N-1)/2) 둘째 줄부터 M개의 줄에 간선의 양 끝점 u와 v가 주어진다. (1 ≤ u, v ≤ N, u ≠ v) 같은 간선은 한 번만 주어진다.

출력
첫째 줄에 연결 요소의 개수를 출력한다.

예제 입력 1 
6 5
1 2
2 5
5 1
3 4
4 6

예제 출력 1 
2

예제 입력 2 
6 8
1 2
2 5
5 1
3 4
4 6
5 4
2 4
2 3
예제 출력 2 
1
  */

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>>v(1001, vector<int>(1000, 0));
vector<bool>visit(1001, false);

void DFS(int index);

int main() {
	int n, m; // n은 노드 개수, m은 간선 개수
	cin >> n >> m;
	int count = 0;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for (int i = 1; i <= n; i++) {
		if (visit[i] == false) {
			DFS(i);
			count++;
		}
	}
	cout << count;
}

void DFS(int index) {
	visit[index] = true;

	for (int i = 0; i < v[index].size(); i++) {
		int temp = v[index][i];
		if (visit[temp] == false) {
			DFS(temp);
		}
	}
}

  
