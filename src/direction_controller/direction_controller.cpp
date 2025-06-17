#include "direction_controller/direction_controller.hpp"

DirectionController::DirectionController(Vector2 pos, Vector2 dir) : pos(pos), dir(dir) 
{
	rec = {pos.x, pos.y, 50, 50};
}

void DirectionController::Draw(void)
{
	DrawRectangleRec(rec, PBLACK);
}

bool DirectionController::VerifyEnemyCollision(Rectangle chosenRec)
{
	if(CheckCollisionRecs(rec, chosenRec)){return true;}
	else{return false;}	
}
