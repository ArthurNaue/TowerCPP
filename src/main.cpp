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

	Enemy enemy((Vector2){-32, 488}, (Vector2){1, 0});
	DirectionController dir((Vector2){176, 488}, (Vector2){0, -1});
	DirectionController dir2((Vector2){144, 328}, (Vector2){1, 0});
	DirectionController dir3((Vector2){304, 360}, (Vector2){0, -1});
	DirectionController dir4((Vector2){272, 264}, (Vector2){1, 0});
	DirectionController dir5((Vector2){432, 296}, (Vector2){0, 1});
	DirectionController dir6((Vector2){400, 520}, (Vector2){1, 0});
	DirectionController dir7((Vector2){560, 504}, (Vector2){0, -1});
	DirectionController dir8((Vector2){526, 136}, (Vector2){1, 0});

	while (!WindowShouldClose())
	{
		enemy.Move();

		if(dir.VerifyEnemyCollision(enemy.rec)){enemy.ChangeDirection(dir.dir);}
		if(dir2.VerifyEnemyCollision(enemy.rec)){enemy.ChangeDirection(dir2.dir);}
		if(dir3.VerifyEnemyCollision(enemy.rec)){enemy.ChangeDirection(dir3.dir);}
		if(dir4.VerifyEnemyCollision(enemy.rec)){enemy.ChangeDirection(dir4.dir);}
		if(dir5.VerifyEnemyCollision(enemy.rec)){enemy.ChangeDirection(dir5.dir);}
		if(dir6.VerifyEnemyCollision(enemy.rec)){enemy.ChangeDirection(dir6.dir);}
		if(dir7.VerifyEnemyCollision(enemy.rec)){enemy.ChangeDirection(dir7.dir);}
		if(dir8.VerifyEnemyCollision(enemy.rec)){enemy.ChangeDirection(dir8.dir);}

		BeginDrawing();

		ClearBackground(PWHITE);

		level.Draw();

		enemy.Draw();

		EndDrawing();
	}

	CloseWindow();
	return 0;
}
