#include "GridTetromino.h"

GridTetromino::GridTetromino()
	: gridLoc(0, 0)
{

}

Point GridTetromino::getGridLoc() const
{
	return gridLoc;
}

void GridTetromino::setGridLoc(int x, int y)
{
	gridLoc.setXY(x, y);
}

void GridTetromino::setGridLoc(Point pt)
{
	gridLoc = pt;
}


void GridTetromino::move(int xOffset, int yOffset)
{
	int x = gridLoc.getX() + xOffset;
	int y = gridLoc.getY() + yOffset;
	gridLoc.setXY(x, y);
}
