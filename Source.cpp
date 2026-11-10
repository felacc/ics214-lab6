#include <iostream>
#include "TestSuite.h"
#include "Tetromino.h"

int main()
{
	TestSuite::runTestSuite();
	Tetromino t = Tetromino();

	std::cout << "Command List\n";
	std::cout << "---------------------------------------------\n";
	std::cout << "'r' -> rotate\n";
	std::cout << "'o' -> o shape\n";
	std::cout << "'i' -> i shape\n";
	std::cout << "'s' -> s shape\n";
	std::cout << "'z' -> z shape\n";
	std::cout << "'l' -> l shape\n";
	std::cout << "'j' -> j shape\n";
	std::cout << "'t' -> t shape\n";
	std::cout << "Enter any other character to quit.\n";
	std::cout << "---------------------------------------------\n";

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
