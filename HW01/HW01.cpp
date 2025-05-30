﻿

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 숫자 5개를 입력받아 배열에 저장하는 코드
int getsum(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {  // 배열의 크기만큼 반복한다.
		sum += arr[i]; // 배열의 각 요소를 순회하며 합계를 계산합니다.
	}
	return sum; // 배열의 모든 요소를 더하여 합계를 반환합니다.
}

double getaverage(int arr[], int size) {
	int sum = getsum(arr, size); // 합계를 계산하는 함수를 호출합니다. 
	return static_cast<double>(sum) / size; // 정수 합계를 double로 변환하여 평균을 계산합니다.
}


//사용자가 숫자를 입력하면 출력하는 코드
int main() {
	const int SIZE = 5; // 배열의 크기를 상수로 정의합니다.
	int numbers[SIZE]; // 정수형 배열을 선언하여 숫자를 저장합니다.
	int r = 0;
	double avg = 0;

	cout << "숫자 5개를 입력하세요:\n";
	for (int i = 0; i < SIZE; ++i) { // 0부터 4까지 반복하여 5개의 숫자를 입력받습니다.
		cout << i + 1 << "번째 숫자: "; // 사용자에게 입력을 요청합니다.
		cin >> numbers[i]; // 사용자로부터 숫자를 입력받아 배열에 저장합니다.
	}


	// 입력받은 숫자들을 출력하는 코드
	cout << "배열의 합계를 계산합니다. \n";
	for (int i = 0; i < SIZE; ++i)
	{
		r += numbers[i]; // 입력받은 숫자들을 합산합니다.
	}

	avg = static_cast<double>(r) / SIZE; // 합계를 SIZE로 나누어 평균을 계산합니다.

	int total = getsum(numbers, SIZE); // 합계를 계산하는 함수 호출
	double average = getaverage(numbers, SIZE); // 평균을 계산하는 함수 호출


	cout << "입력한 숫자의 합: " << total << endl; // 합계는 정수로 출력됩니다.
	cout << "입력한 숫자의 평균: " << average << endl; // 평균은 소수점 이하까지 출력됩니다.


	return 0;

}