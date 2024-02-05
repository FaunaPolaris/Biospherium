#include "libBIO.h"

t_wmap	**wmap_new()
{
	t_wmap	**output;
	int		i;

	output = (t_wmap **)mem_calloc(320, sizeof(t_wmap *));
	if (!output)
			return (NULL);
	i = -1;
	while (++i < 320)
	{
		output[i] = (t_wmap *)mem_calloc(1, sizeof(t_wmap));
		if (!output[i])
				return (st_free(output));
	}
	st_relate_sides(&output);
	return (output);
}

static t_wmap	**st_free(t_wmap **to_free)
{
	int	i;
	
	i = -1;
	while (to_free[++i])
	{
		free(to_free[i]);
	}
	free(to_free);
	return (NULL);
}
