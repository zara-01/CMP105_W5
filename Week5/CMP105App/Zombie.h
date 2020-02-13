#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"

class Zombie : public GameObject
{

public:

	Zombie();
	~Zombie();

	void handleInput(float dt);
	//void update(float dt);

	void update(float dt) override;

protected:

	Animation walk;


};

