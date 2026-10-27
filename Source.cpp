#include <iostream>
#include "TestSuite.h"
#include "Tetromino.h"

int main()
{
	TestSuite::runTestSuite();
	Tetromino t = Tetromino();

	while (true)
	{
		char c{};
		std::cout << "Enter command: ";
		std::cin >> c;
		
		switch (c)
		{
				case 'r':
					t.rotateClockwise();
					break;
				case 'o':
					t.setShape(TetShape::O);
					break;
				case 'i':
					t.setShape(TetShape::I);
					break;
				case 's':
					t.setShape(TetShape::S);
					break;
				case 'z':
					t.setShape(TetShape::Z);
					break;
				case 'l':
					t.setShape(TetShape::L);
					break;
				case 'j':
					t.setShape(TetShape::J);
					break;
				case 't':
					t.setShape(TetShape::T);
					break;
				default:
					return 0;

		}

		t.printToConsole();
	}


}
