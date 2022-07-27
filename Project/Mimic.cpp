#include <iostream>
#include "Mimic.h"

Mimic::Mimic(int x, int y, int worth)
	: PlacableActor(x, y)
	, m_worth(worth)
{

}

void Mimic::Draw()
{
	std::cout << "S";
}