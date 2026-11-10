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
