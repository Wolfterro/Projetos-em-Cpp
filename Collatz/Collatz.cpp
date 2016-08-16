/*
The MIT License (MIT)

Copyright (c) 2016 Wolfgang Almeida <wolfgang.almeida@yahoo.com>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include <iostream>

using namespace std;

void Collatz(long long int userValue, int steps) {
	if (userValue != 1) {
		if (userValue % 2 == 0) {
			userValue = userValue / 2;
			cout << "Novo valor: " << userValue << endl;
			steps += 1;
			Collatz(userValue, steps);
		}
		else {
			userValue = (userValue * 3) + 1;
			cout << "Novo valor: " << userValue << endl;
			steps += 1;
			Collatz(userValue, steps);
		}
	}
	else {
		cout << "Número de passos: " << steps << endl;
	}
}

int main(void) {
	long long int userValue;
	int steps = 0;

	cout << "Insira o valor desejado: ";
	cin >> userValue;

	if (userValue <= 1) {
		cout << "Erro! Valor inserido é menor ou igual a 1 ou inválido!" << endl;
		return 1;
	}
	else {
		Collatz(userValue, steps);
	}

	return 0;
}