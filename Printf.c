/*PRINF BÁSICO*/
// #include <stdio.h>

// int main()
// {
//   printf("Boa Noite, tudo bem?");
// }

/******************************************/
/*ESPECIFICADORES DE FORMATO*/

// #include <stdio.h>
// /*Inclusão da biblioteca stdio.h, para a utilização do printf*/

// int idade = 30; //inteiro decimal - %d
// float altura = 1.89; // ponto flutuante - %f
// char letra = 'S'; // Caractere - %c
// char texto[] = "Ola, tudo bem";  // Cadeia de Caracteres (String) - %s
// int hex = 10; // inteiro em hexadecimal - %x
// int memory = 10; // endereço na memória - %p

// int main()
// {
//   printf("Idade: %d \n" , idade);
//   printf("Altura: %.2f \n" , altura);
//   printf("Letra: %c \n" , letra);
//   printf("Texto: %s \n" , texto);
//   printf("Hexadecimal: %x \n" , hex);
//   printf("Memoria: %p \n" , &memory);
// }

/***********************************************/
/*FORMATAÇÃO AVANÇADA*/

// #include <stdio.h>
// /*Inclusão da biblioteca stdio.h, para a utilização do printf*/

// int idade = 30; //inteiro decimal - %d
// float altura = 1.8902321; // ponto flutuante - %f
// char letra = 'S'; // Caractere - %c
// char texto[] = "Ola, tudo bem";  // Cadeia de Caracteres (String) - %s
// int hex = 10; // inteiro em hexadecimal - %x
// int memory = 10; // endereço na memória - %p

// int main()
// {
//   printf("Altura: %2.2f \n" , altura);
//   printf("Altura: %6.3f \n" , altura); // %6d - define a largura do campo em 6 caracteres
//   printf("Altura: %10.5f \n" , altura); // %.5f - define o numero de casas decimais
//   printf("Altura: %010.5f \n" , altura); // preenche os campos a esquerda com 0
// }