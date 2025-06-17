#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "color_palette/color_palette.hpp"

class Enemy
{
	public:
		Enemy(Vector2 pos, Vector2 dir);

		Rectangle rec;

		void Draw(void);
		void Move(void);
		void ChangeDirection(Vector2 chosenDir);
	private:
		Vector2 pos;
		Vector2 dir;
};

#endif
