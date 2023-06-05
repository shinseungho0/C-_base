#include <iostream>
using namespace std;

template <class T>
class MyStack {
	T data[2];
public:
	int tos = -1; // top of stack
	void push(T element) {
		if (tos == 1) { cout << "stack full이므로 더 넣지 못합니다." << endl; } // 스택이 1일 넘을 경우 stack full 출력
		else { tos++; data[tos] = element; } // 스택이 1을 넘지 않으면 top of stack에서 1을 더한 후 push된 값 data에 저장
	}
	T pop() {
		if (tos == -1) { cout << "stack empty - 프로그램을 종료합니다." << endl; exit(0); } // exit(0)은 성공적으로 프로그램 종료, exit(1)은 성공적으로 종료 못함
		return data[tos--]; // data배열에 tos자리에 값을 출력하고 tos 값에 -1한다
	}
};

int main() {
	MyStack<string> ss; // string 타입만 사용가능
	ss.push("bye"); ss.push("hello"); ss.push("good"); // data[0] 자리에 "bye" , data[1]자리에 "hello"를 넣고 나면 stack full
	cout << "현재 string 스택에 " << ss.tos + 1 << " 개 있음 " << endl; // tos = 1이므로 tos + 1 은 2
	cout << "맨 위에 있는 " << ss.pop() << " 꺼냄" << endl; // 맨 위에(data[1]) "hello"를 꺼내고 tos - 1
	cout << "맨 위에 있는 " << ss.pop() << " 꺼냄" << endl; // 맨 위에(data[0]) "bye"를 꺼내고 tos - 1
 	cout << ss.pop() << endl << endl; // tos는 이미 -1이 된 상태 그러므로 종료
}
