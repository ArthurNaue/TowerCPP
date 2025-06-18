#ifndef LEVEL_HPP
#define LEVEL_HPP

#include "raylib.h"

class Level
{
	public:
		Level(Image img);

		void Draw(void);
	private:
		Image img;
		Texture2D tex;
};

#endif
