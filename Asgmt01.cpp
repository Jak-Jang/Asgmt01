#include <iostream>
#include <vector>

using namespace std;

double sum(vector<double> numbers)	// �հ� �Լ�
{
	double answer = 0;

	for (int i = 0; i < numbers.size();i++)	// ���� ������ ����
	{
		answer += numbers[i];
	}

	return answer;
}

double average(vector<double> numbers)	// ��� �Լ�
{
	double answer = sum(numbers);

	answer /= numbers.size();	// ���� ������ ���� / ���� ���� ����

	return answer;
}

void asc(vector<double> numbers)	// �������� �Լ�
{
	int index;
	int swap;

	for (int i = 0; i < numbers.size(); i++)	// ù��° �ε���
	{
		index = i;	// ������ ���� ���� �ε���

		for (int j = i + 1; j < numbers.size(); j++)
		{
			if (numbers[j] < numbers[index])	// �迭�� ���� ���� ��
			{
				index = j;	// ���� ��� ����, ������ ��� ���� ����
			}
		}

		swap = numbers[index];			// ���� ��� �յ� �� ����
		numbers[index] = numbers[i];	// ������ ��� ���� ���� ���� ���� �Ҵ�
		numbers[i] = swap;
	}

	for (int k = 0; k < numbers.size(); k++)	// ���� �迭�� ���� �� ���
	{
		cout << numbers[k] << " ";
	}
}

void desc(vector<double> numbers)	// �������� �Լ�
{
	int index;
	int swap;

	for (int i = 0; i < numbers.size(); i++)
	{
		index = i;

		for (int j = i + 1; j < numbers.size(); j++)
		{
			if (numbers[j] > numbers[index])	// ���������� �ݴ�� ��
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
	int num1;				// �Է� ���� ���� ����
	double num2;			// �迭�� �Է¹��� ��
	int num3;				// ���� ���� 1�������� 2��������
	vector<double> numbers;	// ���� �迭

	cout << "�Է� ���� ������ �հ�� ����� �˷��帳�ϴ�.\n";
	cout << "�� ���� ���ڸ� �Է��Ͻðڽ��ϴ�? : ";
	cin >> num1;
	cout << endl;

	for (int i = 0; i < num1; i++)	// ���� �迭 ���� �Է�
	{
		cout << "���ڸ� �Է����ּ��� : ";
		cin >> num2;
		numbers.push_back(num2);
	}

	cout << "\n�հ� : " << sum(numbers) << endl;	// �հ� �Լ� ȣ��
	cout << "��� : " << average(numbers) << endl;	// ��� �Լ� ȣ��

	cout << "\n�Է��Ͻ� ���ڵ��� ������ �帳�ϴ�.\n1. ��������  2. ��������";
	cout << "\n���α׷��� ���Ḧ ���Ͻø� 1, 2�� ������ ���� �Է����ּ���. : ";
	cin >> num3;
	cout << endl;

	if (num3 == 1)	// �������� �Լ� ȣ��
	{
		asc(numbers);
	}
	else if(num3 == 2)	// �������� �Լ� ȣ��
	{
		desc(numbers);
	}
	else
	{
		cout << "\n���α׷��� ����˴ϴ�." << endl;
		exit(0);
	}
}