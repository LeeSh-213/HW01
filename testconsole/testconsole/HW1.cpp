// testconsole.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;







int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    cout << "숫자 5개를 입력하세요:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << i + 1 << "번째 숫자: ";
        cin >> numbers[i];
    }

}
    



