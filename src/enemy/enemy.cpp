#include "enemy/enemy.hpp"

Enemy::Enemy(Vector2 pos, Vector2 dir) : pos(pos), dir(dir)
{
	rec = {pos.x, pos.y, 32, 32};
}

void Enemy::Draw(void)
{
	DrawRectangleRec(rec, PBLACK);
}

void Enemy::Move(void)
{
	pos.x += dir.x; pos.y += dir.y;

	rec.x = pos.x; rec.y = pos.y;
}

void Enemy::ChangeDirection(Vector2 chosenDir)
{
	dir = chosenDir;
}
