#ifndef MAPPING_H
#define MAPPING_H

# include "map_enum.h"

typedef struct s_species
{
	char				*name;
	float				percent;
	int					ID;
	struct s_species	*next;
}	t_species;

typedef struct s_biomass
{
	t_species	*fauna;
	t_species	*flora;
	t_species	*funga;
}	t_biomass;

typedef struct s_biome
{
	int				humidity;
//	int				folliage_density;
//	int				pressure;
//	int				temperature;
//	int				soil;
//	int				light_availability;
//	int				topography;
	int				water_bodies;
//	int				fire_regime;
//	int				wind_pattern;
//	t_biomass		biomass;
}	t_biome

typedef struct s_wmap
{
	t_biome			*biome;
	struct s_wmap	*up;
	struct s_wmap	*down;
	struct s_wmap	*left;
	struct s_wmap	*right;
}	t_wmap;

#endif
