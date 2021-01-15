// Queue.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int line[100];
int tail = 0, head = 0;

void dequeue() {
	if (head == tail) {
		cout << "Queue Empty!" << endl;
	}
	else {
		cout << line[head] << endl;
		head++;
	}
	return;
}

void enqueue(int x) {
	line[tail] = x;
	cout << "[" << line[tail] << "]" << endl;
	tail++;
	return;
}

int main()
{
	int n = 0;
	while (n != -1) {
		cout << "Input Number: ";
		cin >> n;
		if (n == 0) {
			dequeue();
		}
		else {
			enqueue(n);
		}
	}
	return 0;
}

