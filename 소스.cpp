//변수 : 할당된 메모리 공간에 붙여진 이름. 그 이름을 통해 해당 메모리 공간에 접근 가능하다.
//& : 이미 선언된 변수 앞에 오면 주소 값의 반환(return). 새로운 변수 앞에 오면 참조자의 선언.
//참조자 : 자신이 참조하는 변수를 대신할 수 있는 또 하나의 이름

#include<iostream>
using namespace std;

int main()
{
	int num1 = 1020;
	int &num2 = num1;//num1의 메모리에 num2라는 이름을 추가로 붙였다고 이해하면 쉽다.

	num2 = 3047;
	cout << "VAL: " << num1 << endl;//num1과 2가 동일한 값으로 초기화되어 있는 것을 확인할 수 있다.
	cout << "REF: " << num2 << endl;

	cout << "VAL: " << &num1 << endl;//주소값. num1과 2가 같은 주소로 되어있는 것을 확인할 수 있다.
	cout << "REF: " << &num2 << endl;
	return 0;
}