#include "Tetromino.h"
#include <iostream>

Tetromino::Tetromino()
{
	setShape(TetShape::S);
}

TetColor Tetromino::getColor() const 
{
	return color;
}

TetShape Tetromino::getShape() const
{
	return shape;
}

void Tetromino::setShape(TetShape shape)
{
	// Set shape
	Tetromino::shape = shape;


	// Set blockLocs and color
	switch (shape)
	{
	case TetShape::O:
		blockLocs = { Point(0,0), Point(0,1), Point(1,0), Point(1,1) };
		color = TetColor::YELLOW;
		break;
	case TetShape::I:
		blockLocs = { Point(0,0), Point(0,-1), Point(0,1), Point(0,2) };
		color = TetColor::BLUE_LIGHT;
		break;
	case TetShape::S:
		blockLocs = { Point(0,0), Point(-1,0), Point(0,1), Point(1,1) };
		color = TetColor::RED;
		break;
	case TetShape::Z:
		blockLocs = { Point(0,0), Point(0,1), Point(1,0), Point(-1,1) };
		color = TetColor::GREEN;
		break;
	case TetShape::L:
		blockLocs = { Point(0,0), Point(0,-1), Point(1,-1), Point(0,1) };
		color = TetColor::ORANGE;
		break;
	case TetShape::J:
		blockLocs = { Point(0,0), Point(0,-1), Point(-1,-1), Point(0,1) };
		color = TetColor::BLUE_DARK;
		break;
	case TetShape::T:
		blockLocs = { Point(0,0), Point(-1,0), Point(1,0), Point(0,-1) };
		color = TetColor::PURPLE;
		break;
	default:
		std::cout << "Invalid Shape Entered\n";
		// TODO
		// RAISE ERROR
	}
}

void Tetromino::rotateClockwise()
{
	if (getShape() == TetShape::O)
	{
		return;
	}

	for (int i = 0; i < blockLocs.size(); i++)
	{
		// for quad 1 (x, y): x becomes y, and y becomes -x
		// for quad 4 (x, -y): x becomes y, y becomes -x
		// for quad 3 (-x, -y): x becomes y, y becomes -x
		// for quad 2 (-x, y): x becomes y, y becomes -x

		// set x to negative
		blockLocs[i].multiplyX(-1);
		// swap
		blockLocs[i].swapXY();
	}
}

void Tetromino::printToConsole() const
{
	// TODO
	for (int x = -3; x <= 3; x++)
	{
		for (int y = 3; y >= -3; y--)
		{
			bool isShape{};
			for (int i = 0; i < blockLocs.size(); i++)
			{
				if (x == blockLocs[i].getX() && y == blockLocs[i].getY())
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