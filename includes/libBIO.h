#ifndef LIBBIO_H
#define LIBBIO_H

# include "libfpp.h"

typedef struct s_gene
{
	int	sequence[8];
}	t_gene;

typedef struct s_DNA
{
	t_gene	*gene;
}	t_DNA;

t_DNA	*DNA_new(void);
void	DNA_free(t_DNA *input);
void	put_DNA(t_DNA *input);

#endif
