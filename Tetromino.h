#pragma once
#include <vector>
#include "Point.h"

enum class TetColor
{
	RED,
	ORANGE,
	YELLOW,
	GREEN,
	BLUE_LIGHT,
	BLUE_DARK,
	PURPLE,
};

enum class TetShape
{
	S,
	Z,
	L,
	J,
	O,
	I,
	T,
};

class Tetromino
{
	friend class TestSuite;
private:
	TetColor color;
	TetShape shape;
	std::vector<Point> blockLocs;
public:
	Tetromino();

	TetColor getColor() const;

	TetShape getShape() const;

	void setShape(TetShape shape);

	void rotateClockwise();

	void printToConsole() const;
};

