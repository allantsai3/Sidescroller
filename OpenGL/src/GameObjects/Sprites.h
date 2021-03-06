#ifndef SPRITES_H
#define SPRITES_H

#include <string.h>
#include <iostream>
#include <vector>

const int wallThickness = 50;

class Sprites {
public:
	Sprites();

	void setPos(int x, int y);

	void InitializeSprite(int initialHeight = 50, int initialWidth = 50, std::string color = "(0.0, 0.0, 0.0, 1.0)");
	void createBoundary();

	virtual void Update();
	virtual void Render();
	//Sprites(std::string imgPath);
	//Sprites(std::string imgPath, float xPos, float yPos);
protected:
	unsigned int VAO;
	unsigned int VBO;
	unsigned int EBO;
	unsigned int shader;

	float xPos;
	float yPos;
	float height;
	float width;

	const unsigned int squareIndices[6] = {
		0, 1, 3, //first triangle
		1, 2, 3 // second triangle
	};


};


#endif //SPRITES_H