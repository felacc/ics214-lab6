#include "Tetromino.h"
#include <iostream>

Tetromino::Tetromino()
{

}

TetColor Tetromino::getColor() 
{
	return Tetromino::color;
}

TetShape Tetromino::getShape()
{
	return Tetromino::shape;
}

void Tetromino::setShape(TetShape shape)
{
	// Set shape
	Tetromino::shape = shape;


	// Set blockLocs and color
	switch (shape)
	{
	case TetShape::O:
		Tetromino::blockLocs = { Point(0,0), Point(0,1), Point(1,0), Point(1,1) };
		Tetromino::color = TetColor::YELLOW;
		break;
	case TetShape::I:
		Tetromino::blockLocs = { Point(0,0), Point(0,-1), Point(0,1), Point(0,2) };
		Tetromino::color = TetColor::BLUE_LIGHT;
		break;
	case TetShape::S:
		Tetromino::blockLocs = { Point(0,0), Point(-1,0), Point(0,1), Point(1,1) };
		Tetromino::color = TetColor::RED;
		break;
	case TetShape::Z:
		Tetromino::blockLocs = { Point(0,0), Point(0,1), Point(1,0), Point(-1,1) };
		Tetromino::color = TetColor::GREEN;
		break;
	case TetShape::L:
		Tetromino::blockLocs = { Point(0,0), Point(0,-1), Point(1,-1), Point(0,1) };
		Tetromino::color = TetColor::ORANGE;
		break;
	case TetShape::J:
		Tetromino::blockLocs = { Point(0,0), Point(0,-1), Point(-1,-1), Point(0,1) };
		Tetromino::color = TetColor::BLUE_DARK;
		break;
	case TetShape::T:
		Tetromino::blockLocs = { Point(0,0), Point(-1,0), Point(1,0), Point(0,-1) };
		Tetromino::color = TetColor::PURPLE;
		break;
	default:
		std::cout << "Invalid Shape Entered\n";
		// TODO
		// RAISE ERROR
	}
}

void Tetromino::rotateClockwise()
{
	// TODO
	return;
}

void Tetromino::printToConsole()
{
	// TODO
	for (int x = -3; x <= 3; x++)
	{
		for (int y = 3; y >= -3; y--)
		{
			bool isShape{};
			for (int i = 0; i < Tetromino::blockLocs.size(); i++)
			{
				if (x == Tetromino::blockLocs[i].getX() && y == Tetromino::blockLocs[i].getY())
				{
					isShape = true;
					break;
				}
			}

			isShape ? std::cout << "x" : std::cout << ".";
		}
		std::cout << '\n';
	}
}