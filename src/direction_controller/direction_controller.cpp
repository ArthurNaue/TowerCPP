#include "direction_controller/direction_controller.hpp"

std::vector<DirectionController> directionControllerList;

DirectionController::DirectionController(Vector2 pos, Vector2 dir) : pos(pos), dir(dir) 
{
	rec = {pos.x, pos.y, 32, 32};
}

void DirectionController::Draw(void)
{
	DrawRectangleRec(rec, WHITE);
}

bool DirectionController::VerifyEnemyCollision(Enemy enemy)
{
	if(CheckCollisionRecs(rec, enemy.rec)){return true;}
	else{return false;}	
}

void CreateDirectionController(void)
{
	if(IsMouseButtonPressed(MOUSE_BUTTON_MIDDLE))
	{
		Vector2 pos = GetMousePosition();

		directionControllerList.push_back(DirectionController(pos, (Vector2){0, -1}));
	}
}

void CheckDirectionControllerCollision(void)
{
	for(auto& directionController : directionControllerList)
	{
		for(auto& enemy: enemyList)
		{
			if(directionController.VerifyEnemyCollision(enemy)){enemy.ChangeDirection(directionController.dir);}
		}
	}
}

void DrawDirectionController(void)
{
	for(auto& directionController : directionControllerList){directionController.Draw();}
}
