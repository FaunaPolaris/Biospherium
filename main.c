#include "libBIO.h"

int	main(void)
{
	t_DNA	*DNA = DNA_new();

	put_DNA(DNA);
	DNA_free(DNA);
	return (1);
}
