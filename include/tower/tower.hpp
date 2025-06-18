#ifndef TOWER_HPP
#define TOWER_HPP

#include <vector>
#include "raylib.h"
#include "color_palette/color_palette.hpp"

class Tower
{
	public:
		Tower(Vector2 pos);

		void Draw(void);
	private:
		Vector2 pos;
		Rectangle rec;
};

extern std::vector<Tower> towerList;

void CreateTower(void);
void DrawTowers(void);

#endif
