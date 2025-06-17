#ifndef DIRECTION_CONTROLLER_HPP
#define DIRECTION_CONTROLLER_HPP

#include "raylib.h"
#include "color_palette/color_palette.hpp"

class DirectionController
{
	public:
		DirectionController(Vector2 pos, Vector2 dir);

		Vector2 dir;

		void Draw(void);
		bool VerifyEnemyCollision(Rectangle chosenRec);
	private:
		Vector2 pos;
		Rectangle rec;
};

#endif
