#include "libBIO.h"

void		*g_mlx;

int	main(int argc, char **argv)
{
	t_DNA		*DNA = DNA_new();
	t_window	*win;

	if (argc != 4)
			return (0);
	g_mlx = mlx_init();
	win = win_open("gene", 640, 640);
	draw_parabola(win, vec_new(conv_atoi(argv[1]), conv_atoi(argv[2]), 1, 0),
					conv_atoi(argv[3]));
	draw_update(win);
	put_DNA(DNA);
	mlx_loop(g_mlx);
	mlx_destroy_display(g_mlx);
	free(win);
	DNA_free(DNA);
	return (1);
}
