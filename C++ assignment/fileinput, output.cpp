#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin1; // fin1은 변수
	fin1.open("a1.txt");  // a.txt파일 열기
	ifstream fin2("a2.txt"); 
	fstream fin3("a3.txt", ios::in); // fstream일 경우 out인지 in인지 알 수 있도록 해야함 ios::out || ios::in
	fstream fout("b.txt", ios::out | ios::app); // ios::app로 b.txt파일의 끝에 붙여서 쓸 수 있음

	if (!fin1 || !fin2 || !fin3 || !fout) {
		cout << "파일 문제 있음"; return 0;
	}
	int c;
	while ((c = fin1.get()) != EOF) { // a1 파일 읽기, fin1.get()을 이용하요 문자를 하나씩 읽기
		fout << (char)c; // b에 a1 내용 쓰기
	}
	while ((c = fin2.get()) != EOF) { // a2 파일 읽기
		fout << (char)c; // b에 a2 내용 붙이기
	}
	while ((c = fin3.get()) != EOF) { // a3 파일 읽기
		fout << (char)c; // b에 a3 내용 붙이기
	}
	cout << "파일 추가쓰기 완료" << endl;
	fin1.close();
	fin2.close();
	fin3.close();
	fout.close();
}
