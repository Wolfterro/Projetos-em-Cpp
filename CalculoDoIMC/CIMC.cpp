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
#include <locale>
#include <cmath>

using namespace std;

/* Classificação do índice de massa corporal */
string ClassificarIMC(double imc) {
	if (imc < 16.0) {
		return "Magreza grave";
	}
	else if (imc == 16.0 || imc < 17.0) {
		return "Magreza moderada";
	}
	else if (imc == 17.0 || imc < 18.5) {
		return "Magreza leve";
	}
	else if (imc == 18.5 || imc < 25.0) {
		return "Saudável";
	}
	else if (imc == 25.0 || imc < 30.0) {
		return "Sobrepeso";
	}
	else if (imc == 30.0 || imc < 35.0) {
		return "Obesidade Grau I";
	}
	else if (imc == 35.0 || imc < 40.0) {
		return "Obesidade Grau II";
	}
	else {
		return "Obesidade Grau III";
	}

}

/* Cálculo do índice de massa corporal */
double CalcularIMC(double peso, double altura) {
	return peso / (altura * altura);
}

/* Resgate de valores e retorno do cálculo para o usuário */
void ProgramaIMC(string versao) {
	double peso, altura, imc;

	cout << "===========================" << endl;
	cout << "Cálculo do IMC - Versão " << versao << endl;
	cout << "===========================" << endl << endl;

	cout << "Insira o seu peso em quilogramas: ";
	cin >> peso;
	cout << "Insira a sua altura em metros: ";
	cin >> altura;

	imc = CalcularIMC(peso, altura);
	
	cout << endl << "Seu Índice de Massa Corporal é: " << imc << " kg/m²" << endl;
	cout << "Classificação: " << ClassificarIMC(imc) << "." << endl;

}

/* Método principal do programa */
int main(int argc, char *argv[]) {
	string versao = "1.0";
	
	/* Locale configurado para Português do Brasil e inserido nas
	 * funções de saída (std::cout) e entrada (std::cin).
	 *
	 * Isto permite o uso de vírgula em números fracionários
	 * ao invés do ponto.
	 */
	locale myLocale("pt_BR.UTF-8");
	cout.imbue(myLocale);
	cin.imbue(myLocale);

	ProgramaIMC(versao);

	return 0;
}