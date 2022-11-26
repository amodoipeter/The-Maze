#ifndef TEXTURE_H
#define TEXTURE_H
#include <math.h>
#include <SDL.h>
#include <SDL_image.h>
#include "map.h"
#include "raycast.h"
#include "sdl.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void textured_sky(sdl_instance *sdl, map_t *map);
void shade_walls(SDL_Color *color_ref, int orientation);
void texture_walls(sdl_instance *sdl, double line_height,
		int column, int y_pos, uint8_t alpha);
void weapon_gun(sdl_instance *sdl, map_t *map);
int render_thread(void *td);

#endif /* TEXTURE_H */

