#include "window_config/window_config.hpp"

void StartWindow(void)
{
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "teste");
	SetTargetFPS(60);
}
