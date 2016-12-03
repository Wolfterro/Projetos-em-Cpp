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
#include <string>
#include <cstdlib>

/* Classe de conversão de temperaturas */
class Temperature {
public: 
	void convertFrom(std::string from, double input) {
		double resCelsius, resFahrenheit, resKelvin;

		if (from == "celsius") {
			resCelsius = input;
			resFahrenheit = input * 9/5 + 32;
			resKelvin = input + 273.15;
		}
		else if (from == "fahrenheit") {
			resCelsius = (input - 32) * 5/9;
			resFahrenheit = input;
			resKelvin = (input + 459.67) * 5/9;
		}
		else if (from == "kelvin")
		{
			resCelsius = input - 273.15;
			resFahrenheit = input * 9/5 - 459.67;
			resKelvin = input;
		}
		else {
			std::cout << "Erro! Não foi possível converter temperatura! Saindo..." << std::endl;
			exit(0);
		}

		showResults(resCelsius, resFahrenheit, resKelvin);
	}

private:
	void showResults(double resCelsius, double resFahrenheit, double resKelvin) {
		std::cout << "Celsius: " << resCelsius << " °C" << std::endl;
		std::cout << "Fahrenheit: " << resFahrenheit << " °F" << std::endl;
		std::cout << "Kelvin: " << resKelvin << " K" << std::endl;
	}

};

/* Função de ajuda */
void help(void) {
	std::cout << "CtemPP: Conversor de Temperatura em C++" << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "Uso: ctempp [unidade] [temperatura]" << std::endl << std::endl;

	std::cout << "Unidade:" << std::endl;
	std::cout << "  -c || --celsius\t\tConverte de Celsius para Fahrenheit e Kelvin" << std::endl;
	std::cout << "  -f || --fahrenheit\t\tConverte de Fahrenheit para Celsius e Kelvin" << std::endl;
	std::cout << "  -k || --kelvin\t\tConverte de Kelvin para Celsius e Fahrenheit" << std::endl;
	std::cout << "  -h || --help\t\t\tMostra esta tela de ajuda" << std::endl;
}

/* Função principal do programa */
int main(int argc, char *argv[]) {
	double input;
	Temperature temp;

	if (argc > 2) {
		input = strtod(argv[2], NULL);

		if (std::string(argv[1]) == "-h" || std::string(argv[1]) == "--help") {
			help();
		}
		else if (std::string(argv[1]) == "-c" || std::string(argv[1]) == "--celsius") {
			temp.convertFrom("celsius", input);
		}
		else if (std::string(argv[1]) == "-f" || std::string(argv[1]) == "--fahrenheit") {
			temp.convertFrom("fahrenheit", input);
		}
		else if (std::string(argv[1]) == "-k" || std::string(argv[1]) == "--kelvin") {
			temp.convertFrom("kelvin", input);
		}
		else {
			std::cout << "Erro! Argumento inválido!" << std::endl;
			std::cout << "Use -h ou --help para ajuda." << std::endl;
		}
	}
	else if (argc == 2) {
		if (std::string(argv[1]) == "-h" || std::string(argv[1]) == "--help") {
			help();
		}
		else {
			std::cout << "Erro! Falta argumentos!" << std::endl;
			std::cout << "Use -h ou --help para ajuda." << std::endl;
		}
	}
	else {
		std::cout << "Erro! Falta argumentos!" << std::endl;
		std::cout << "Use -h ou --help para ajuda." << std::endl;
	} 

	return 0;
}