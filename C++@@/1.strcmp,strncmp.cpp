#include <iostream>
#include <cstring> // strcmp() 함수를 사용하기 위한 헤더 파일
using namespace std;

int main() {
	char password[11];
	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
	while (true) {
		cout << "암호>>";
		cin >> password;
		if (strcmp(password, "C++") == 0) {  /* int strcmp(const char* str1, const char* str2)
												str1:비교할 문자열1, str2:비교할 문자열2
												str1 = str2 ==>  0반환
												str1 != str2 ==> 1혹은 -1반환
											 */
			cout << "프로그램을 정상 종료합니다." << endl;
			break;
		}
		else
			cout << "암호가 틀립니다." << endl;
	}
	while (true) {
		cout << "암호>>";
		cin >> password;
		if (strncmp(password, "C++", 2) == 0) { /* int strncmp(const char* str1, const char* str2, size_t num); 
												   str1:비교할 문자열1, str2:비교할 문자열2, num:비교할 문자열 길이
												   즉 num만큼만 문자열을 비교하여 같을면 1반환 다르면 -1, 1반환 
												*/
			cout << "프로그램을 정상 종료합니다." << endl;
			break;
		}
		else
			cout << "암호가 틀립니다." << endl;
	}

}

/* 출력 결과
프로그램을 종료하려면 암호를 입력하세요.
암호>>C+
암호가 틀립니다.
암호>>C++
프로그램을 정상 종료합니다.
암호>>C
암호가 틀립니다.
암호>>C+
프로그램을 정상 종료합니다.
*/
