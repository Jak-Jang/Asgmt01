#include <iostream>
#include <vector>

using namespace std;

double sum(vector<double> numbers)	// 합계 함수
{
	double answer = 0;

	for (int i = 0; i < numbers.size();i++)	// 벡터 원소의 총합
	{
		answer += numbers[i];
	}

	return answer;
}

double average(vector<double> numbers)	// 평균 함수
{
	double answer = sum(numbers);

	answer /= numbers.size();	// 벡터 원소의 총합 / 벡터 원소 개수

	return answer;
}

void asc(vector<double> numbers)	// 오름차순 함수
{
	int index;
	int swap;

	for (int i = 0; i < numbers.size(); i++)	// 첫번째 인덱스
	{
		index = i;	// 변경할 벡터 값의 인덱스

		for (int j = i + 1; j < numbers.size(); j++)
		{
			if (numbers[j] < numbers[index])	// 배열의 다음 값과 비교
			{
				index = j;	// 참일 경우 변경, 거짓일 경우 변함 없음
			}
		}

		swap = numbers[index];			// 참일 경우 앞뒤 값 스왑
		numbers[index] = numbers[i];	// 거짓일 경우 같은 곳에 같은 값을 할당
		numbers[i] = swap;
	}

	for (int k = 0; k < numbers.size(); k++)	// 벡터 배열의 원소 값 출력
	{
		cout << numbers[k] << " ";
	}
}

void desc(vector<double> numbers)	// 내림차순 함수
{
	int index;
	int swap;

	for (int i = 0; i < numbers.size(); i++)
	{
		index = i;

		for (int j = i + 1; j < numbers.size(); j++)
		{
			if (numbers[j] > numbers[index])	// 오름차순과 반대로 비교
			{
				index = j;
			}
		}

		swap = numbers[index];
		numbers[index] = numbers[i];
		numbers[i] = swap;
	}

	for (int k = 0; k < numbers.size(); k++)
	{
		cout << numbers[k] << " ";
	}
}

void main()
{
	int num1;				// 입력 받을 수의 개수
	double num2;			// 배열에 입력받을 수
	int num3;				// 정렬 종류 1오름차순 2내림차순
	vector<double> numbers;	// 벡터 배열

	cout << "입력 받은 숫자의 합계와 평균을 알려드립니다.\n";
	cout << "몇 개의 숫자를 입력하시겠습니다? : ";
	cin >> num1;
	cout << endl;

	for (int i = 0; i < num1; i++)	// 벡터 배열 원소 입력
	{
		cout << "숫자를 입력해주세요 : ";
		cin >> num2;
		numbers.push_back(num2);
	}

	cout << "\n합계 : " << sum(numbers) << endl;	// 합계 함수 호출
	cout << "평균 : " << average(numbers) << endl;	// 평균 함수 호출

	cout << "\n입력하신 숫자들을 정렬해 드립니다.\n1. 오름차순  2. 내림차순";
	cout << "\n프로그램의 종료를 원하시면 1, 2를 제외한 값을 입력해주세요. : ";
	cin >> num3;
	cout << endl;

	if (num3 == 1)	// 오름차순 함수 호출
	{
		asc(numbers);
	}
	else if(num3 == 2)	// 내림차순 함수 호출
	{
		desc(numbers);
	}
	else
	{
		cout << "\n프로그램이 종료됩니다." << endl;
		exit(0);
	}
}