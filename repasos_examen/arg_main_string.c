#include <unistd.h>
int 	main(int argc, char **argv)
{
	if (argc > 0)
	{
	}

		int i = 0;	
		
	while (argv[1][i] != '\0')
	{
		write(1, &argv[1][i],1);
		i++;
	}
	return(0);

}
