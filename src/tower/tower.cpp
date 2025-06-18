#include "tower/tower.hpp"

std::vector<Tower> towerList;

Tower::Tower(Vector2 pos) : pos(pos)
{
	rec = {pos.x, pos.y, 32, 32};
}

void Tower::Draw(void)
{
	DrawRectangleRec(rec, PWHITE);
}

void DrawTowers(void)
{
	for(auto& tower : towerList)
	{
		tower.Draw();
	}
}
