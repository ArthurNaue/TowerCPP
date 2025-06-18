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

void CreateTower(void)
{
	if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
	{
		Vector2 pos = GetMousePosition();
		pos.x -= 16; pos.y -= 16;

		towerList.push_back(Tower(pos));
	}
}

void DrawTowers(void)
{
	for(auto& tower : towerList)
	{
		tower.Draw();
	}
}
