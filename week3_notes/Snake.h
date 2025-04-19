#pragma once
#include "Animal.h"

class Snake : public Animal 
{
public:
	Snake() {
		m_limbs = 0;
		has_venom = false;

	}
	void Move() override;

protected:
	bool has_venom;
};