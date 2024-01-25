#include "libBIO.h"

t_DNA	*DNA_new(void)
{
	t_DNA	*output;

	output = (t_DNA *)mem_calloc(1, sizeof(t_DNA));
	if (!output)
		return(NULL);
	output->gene = (t_gene *)mem_calloc(16, sizeof(t_gene));
	srand(time(NULL));
	for (int i = 0; i < 16;i++)
	{
		for (int j = 0; j < 8; j++)
			output->gene[i].sequence[j] = rand() % 32;
	}
	return (output);
}

void	DNA_free(t_DNA *input)
{
		free(input->gene);
		free(input);
}

void	put_DNA(t_DNA *input)
{
	for (int i = 0; i < 16; i++)
	{
		printf("\033[32mgene %2i:  \033[0m", i + 1);
		for (int j = 0; j < 8; j++)
				if (input->gene[i].sequence[j] > 16)
					printf("%5i", input->gene[i].sequence[j]);
				else
					printf("\033[33m%5i\033[0m", input->gene[i].sequence[j]);
		printf("\n");
	}
}
