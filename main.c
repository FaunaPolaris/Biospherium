#include "libBIO.h"

void		*g_mlx;

int	main(int argc, char **argv)
{
		t_DNA		*DNA = DNA_new();
		t_window	*win;
		t_window	*win2;

		if (argc != 4)
			return (0);
		g_mlx = mlx_init();
		win = win_open("sqrt", 640, 640);
		win2 = win_open("pow2", 640, 640);
		draw_mth(win, vec_new(conv_atoi(argv[1]), conv_atoi(argv[2]), 1, 0), mth_sqrt);
		draw_parabola(win2, vec_new(conv_atoi(argv[1]), 320, 1, 0), conv_atoi(argv[3]));
		draw_update(win);
		draw_update(win2);
		put_DNA(DNA);
		mlx_loop(g_mlx);
		mlx_destroy_display(g_mlx);
		free(win);
		free(win2);
		DNA_free(DNA);
		return (1);
}
