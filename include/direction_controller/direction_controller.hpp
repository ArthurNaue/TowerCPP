#ifndef DIRECTION_CONTROLLER_HPP
#define DIRECTION_CONTROLLER_HPP

#include <vector>
#include "raylib.h"
#include "color_palette/color_palette.hpp"
#include "enemy/enemy.hpp"

class DirectionController
{
	public:
		DirectionController(Vector2 pos, Vector2 dir);

		Vector2 dir;

		void Draw(void);
		bool VerifyEnemyCollision(Enemy enemy);
	private:
		Vector2 pos;
		Rectangle rec;
};

extern std::vector<DirectionController> directionControllerList;

void CreateDirectionController(void);
void CheckDirectionControllerCollision(void);
void DrawDirectionController(void);

#endif
