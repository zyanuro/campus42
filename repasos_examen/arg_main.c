#include <unistd.h>
int 	main(int argc, char **argv)
{
	char numero1 = argv[1][0];
	char numero2 = argv[2][0];
	write(1, &numero1, 1);
	write(1, &numero2, 1);
	int valor1 = numero1 - '0';
	int valor2 = numero2 - '0';
	int	resultado = valor1 + valor2;
	resultado = resultado + '0';
	write(1, &resultado, 1);
	return(0);
}
