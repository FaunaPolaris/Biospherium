#include "libBIO.h"

void		*g_mlx;

int	main(void)
{
		t_DNA		*DNA = DNA_new();
		t_window	*win;

		g_mlx = mlx_init();
		win = win_cartesian_table(640, 640);
		draw_update(win);
		put_DNA(DNA);
		mlx_loop(g_mlx);
		mlx_destroy_display(g_mlx);
		free(win);
		DNA_free(DNA);
		return (1);
}
