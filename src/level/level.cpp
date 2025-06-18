#include "level/level.hpp"

Level::Level(Image img) : img(img)
{
	tex = LoadTextureFromImage(img);
	UnloadImage(img);
}

void Level::Draw(void)
{
	DrawTextureV(tex, (Vector2){0, 0}, WHITE);
}
