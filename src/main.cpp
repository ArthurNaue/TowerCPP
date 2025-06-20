#include <iostream>
#include "raylib.h"
#include "color_palette/color_palette.hpp" 
#include "window_config/window_config.hpp"
#include "level/level.hpp"
#include "enemy/enemy.hpp"
#include "direction_controller/direction_controller.hpp"
#include "tower/tower.hpp"

int main(void)
{
	StartWindow();

	Level level(LoadImage("assets/images/level1.png"));

	while (!WindowShouldClose())
	{
		CreateEnemy();

		CreateDirectionController();
		CheckDirectionControllerCollision();

		CreateTower();

		MoveEnemies();

		BeginDrawing();

		ClearBackground(PWHITE);

		level.Draw();

		DrawDirectionController();
		DrawTowers();
		DrawEnemies();

		EndDrawing();
	}

	CloseWindow();
	return 0;
}
