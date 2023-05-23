#include <iostream>
#include <fstream>
using namespace std;
int main() {
	string name, mname; // name는 score파일 안에 있는 사람 이름, mname는 result 파일에 출력할 최고점수를 가진 사람 이름
	double score, sum = 0; // score는 score파일 안에 있는 사람들의 각 점수, sum은 출력할 점수 총 합계
	double max = -100; // 최고점수를 찾기 위한 max 변수;
	ifstream fin("score.txt");
	ofstream fout;
	fout.open("result.txt");
	if (!fin || !fout) {
		cerr << "파일 열기 실패"; return 0;
	}
	for (int i = 0; i < 31; i++) {
		fin >> name; // score파일 사람 이름
		fin >> score; // score파일 사람 점수
		sum += score; // 각 점수를 더한다
		if (score >= max) { // 최고점수, 최고점수를 가진 사람  찾기
			max = score;
			mname = name;
		}
	}
	fout << fixed; // 소수점 고정
	fout.precision(2); // 자릿수 2
	fout << "합계: " << sum << endl;
	fout << "평균: " << sum / 31 << endl;
	fout << "최고점: " << mname << ' ' << max;
	fin.close();
	fout.close();
	cout << "처리 완료";
}

/*
score파일
길동이 21.7
마이콜 99.2
철수 -6
영희 15
둘리 22.4
도우너 6.9
또치 4.18
희동이 5.21
삐삐 3.14
애니 5.890
캔디 80
뽀로로 90.2
크롱 55.789
존윅 99.21
아이유 35
아이즈원 4
몽크 8
달리 21
고흐 -31.1
모짜르트 -20
베토벤 1
슈만 2
리스트 -5
바흐 -6
헨델 3
생상스 8.8
슈베르트 4.3
레오나르도 6.7
브레드 9
샐러드 10
오징어 31

result 파일
합계: 584.52
평균: 18.86
최고점: 존윅 99.21
*/
