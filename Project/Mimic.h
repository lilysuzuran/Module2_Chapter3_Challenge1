#pragma once
#include "PlacableActor.h"
class Mimic : public PlacableActor
{
public:
	Mimic(int x, int y, int worth);

	int GetWorth() const { return m_worth; }

	virtual ActorType GetType() override { return ActorType::Mimic; }
	virtual void Draw() override;
private:
	int m_worth;
};
