# Projetos em C++
## Pequenos projetos e testes simples em linguagem C++

#### Os programas apresentados neste repositório são apenas projetos simples e testes escritos na linguagem C++.
#### Alguns destes programas são utilitários e scripts que podem ser utilizados no dia-a-dia para realização de algumas funções.
#### Os programas aqui contidos foram desenvolvidos pensando nas plataformas Linux e UNIX em geral.

## Programas:

## Collatz

### Descrição:

#### Este é um simples programa que possui a função de mostrar os efeitos da [Conjectura de Collatz](https://pt.wikipedia.org/wiki/Conjectura_de_Collatz).
#### O programa utiliza o terminal ou prompt de comando e pede ao usuário um valor inicial para demonstrar os efeitos.
#### Ao final do processo, o programa mostra a quantidade de passos que foram necessários para que o número chegasse a 1.
#### Meu primeiro programa em C++, apenas para aprender um pouco da sintaxe desta linguagem de programação.

### Download:

#### Utilize o git para clonar o repositório e utilize o compilador g++ para criar o binário:

    git clone https://github.com/Wolfterro/Projetos-em-Cpp.git
    cd Projetos-em-Cpp/Collatz
    g++ Collatz.cpp -o Collatz
    ./Collatz

## Cálculo do IMC

### Descrição:

#### Este é um simples programa que possui a função de calcular o índice de massa corporal do usuário.
#### O programa utiliza o terminal ou prompt de comando e pede ao usuário que insira o seu peso em quilogramas e sua altura em metros.
#### Ao final do processo, o programa mostra o valor do IMC em quilogramas por metro quadrado.

### Download:

#### Utilize o git para clonar o repositório e utilize o compilador g++ para criar o binário:

    git clone https://github.com/Wolfterro/Projetos-em-Cpp.git
    cd Projetos-em-Cpp/CalculoDoIMC
    g++ CIMC.cpp -o CIMC
    ./CIMC

## Pedra Papel e Tesoura

### Descrição:

#### Este simples programa é um jogo de pedra, papel e tesoura tradicional.
#### O programa pede um palpite do usuário e o computador faz sua jogada aleatóriamente.
#### Ao final do processo, o programa mostra se o jogador foi vitorioso ou não, mostrando também sua jogada e a jogada do computador.

### Download:

#### Utilize o git para clonar o repositório e utilize o compilador g++ para criar o binário:

    git clone https://github.com/Wolfterro/Projetos-em-Cpp.git
    cd Projetos-em-Cpp/PedraPapelTesoura
    g++ PPT.cpp -o PPT
    ./PPT

## CtemPP - Conversor de Temperatura em C++

#### Este é um programa básico para conversão de temperaturas, convertendo os valores para as outras unidades de temperatura, como Celsius, Fahrenheit e Kelvin.

#### Basta executar o programa via terminal e inserir os argumentos necessários. O programa então irá fazer os cálculos e irá mostrar seus valores em outras unidades de temperatura.

#### Programa similar a este escrito em C pode ser encontrado neste repositório: [Projetos em C](https://github.com/Wolfterro/Projetos-em-C)

#### Programa similar a este e com o uso de interface gráfica pode ser encontrado neste repositório (requer Java):  [Conversor de Temperatura 2016](https://github.com/Wolfterro/Conversor-de-Temperatura-2016)

#### Aqui está uma lista com os possíveis argumentos:
      
      Unidade:
      '-c' ou '--celsius':    Converte de Celsius para Fahrenheit e Kelvin
      '-f' ou '--fahrenheit': Converte de Fahrenheit para Celsius e Kelvin
      '-k' ou '--kelvin':     Converte de Kelvin para Celsius e Fahrenheit
      '-h' ou '--help':       Mostra a tela de ajuda

### Download:

#### Utilize o git para clonar o repositório e utilize o compilador g++ para criar o binário:

    git clone https://github.com/Wolfterro/Projetos-em-Cpp.git
    cd Projetos-em-Cpp/CtemPP
    g++ ctempp.cpp -o ctempp
    ./ctempp [unidade] [temperatura]
