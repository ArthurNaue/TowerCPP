#include "enemy/enemy.hpp"

std::vector<Enemy> enemyList;

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

void CreateEnemy(void)
{
	enemyList.push_back(Enemy((Vector2){-32, 488}, (Vector2){1, 0}));
}

void MoveEnemies(void)
{
	for(auto& enemy: enemyList)
	{
		enemy.Move();
	}
}

void DrawEnemies(void)
{
	for(auto& enemy : enemyList)
	{
		enemy.Draw();	
	}
}
