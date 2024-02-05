#include "libBIO.h"

void		*g_mlx;
t_constants	*g_mtx;

int	main(void)
{
		t_window	*win;

		g_mlx = mlx_init();
		g_mtx = mtx_init();
		win = win_cartesian_table(640, 640);
		draw_helix(win, (t_vector){640, 320, 500, GREEN}, 100);
		draw_update(win);
		mlx_loop(g_mlx);
		mlx_destroy_display(g_mlx);
		free(win);
		free(g_mtx);
		return (1);
}
