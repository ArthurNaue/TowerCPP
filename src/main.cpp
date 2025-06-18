#include <iostream>
#include "raylib.h"
#include "color_palette/color_palette.hpp" 
#include "window_config/window_config.hpp"
#include "level/level.hpp"
#include "direction_controller/direction_controller.hpp"
#include "enemy/enemy.hpp"

int main(void)
{
	StartWindow();

	Level level(LoadImage("assets/images/level1.png"));

	Enemy enemy((Vector2){300, 200}, (Vector2){0, 1});
	DirectionController dir((Vector2){300, 300}, (Vector2){1, 0});

	while (!WindowShouldClose())
	{
		enemy.Move();

		if(dir.VerifyEnemyCollision(enemy.rec)){enemy.ChangeDirection(dir.dir);}

		BeginDrawing();

		ClearBackground(PWHITE);

		level.Draw();

		enemy.Draw();
		dir.Draw();

		EndDrawing();
	}

	CloseWindow();
	return 0;
}
