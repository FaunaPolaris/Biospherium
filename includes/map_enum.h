#ifndef MAP_ENUM_H
#define MAP_ENUM_H

//	Biomes

typedef enum e_mould
{
	MONTANOUS,
	PLAIN,
	TEON-SHALLOW,
	TEON_DEEP,
	CAVERNOUS,
	ROOFED
}	t_mould;

typedef enum e_grash
{
	DESERTIC,
	CONIFEROUS,
	DENSE-CONIFEROUS,
	CAVERNOUS,
	FUNGAL-CAVES,
	SPAWNING-GROUNDS,
	FROZEN-LAKE,
	FROZEN-OCEAN
}	t_grash;

typedef enum e_covaii
{
	ROCKY-MOUNTAINS,
	RED-MOUNTAINS,
	DEAD-ZONE,
	PLAINS,
	SAHEL,
	FLOWER-BED
}	t_covaii

typedef enum e_youriff
{
	DENSE-JUNGLE,
	IMPASSABLE-JUNGLE,
	MANGUE,
	ROOFED,
	MOUNTANOUS,
	PLAINS,
	FLOODED-CAVES,
	JUNGLE-CAVES
}	t_youriff;

typedef enum e_the_skull
{
	DUNES,
	OASIS,
	SAHEL,
}	t_the_skull;

typedef enum e_tuu
{
	SUNLIGHT,
	TWILIGHT,
	MIDNIGHT,
	ABYSS,
	HADAL,
	RIVER,
	LAKE,
	CAVE
}	t_tuu;

typedef enum e_shiparshe
{
	CANOPY,
	TRUNK-CORRIDOR,
	SHALLOW-ROOTS,
	DARK-WATER,
	DEAD-CANOPY,
	ROOT-BEACH,
	ROOT-ROCKY
}	t_shiparshe;

//		attributes

typedef enum e_humidity
{
	ARID,
	SEMI-ARID,
	HUMID,
	SEMI_HUMID
}	t_humidity;

typedef enum e_folliage_density
{
	SPARSE,
	MODERATE,
	DENSE,
	IMPASSABLE
}	t_folliage_density;

typedef enum e_pressure
{
	LOW,
	MEDIUM,
	HIGH
}	t_pressure;

typedef enum e_temperature
{
	COLD,
	MILD,
	HOT
}	t_temperature;

typedef enum e_soil
{
	MOULD,
	RICH,
	POOR,
	SAND
}	t_soil;

typedef enum e_light_availability
{
	LOW,
	MEDIUM,
	HIGH,
	NO_LIGHT
}	t_light_availability;

typedef enum e_topography
{
	MOUNTAIN,
	VALLEY,
	PLAIN,
	SLOPE
}	t_topography;

typedef enum e_water_bodies
{
	RIVER,
	LAKE,
	OCEAN,
	WATERFALL
}	t_water_bodies;

typedef enum e_fire_regime
{
	REGULAR-STRONG,
	REGULAR-WEAK,
	SPARSE-STRONG,
	SPARSE-WEAK
}	t_fire_regime;

typedef enum e_wind_pattern
{
	CALM,
	FAST,
	AGGRESSIVE
}	t_wind_pattern

#endif
