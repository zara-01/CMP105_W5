#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"

class mario: public GameObject
{
public:

	mario();
	~mario();

	void handleInput(float dt);
	//void update(float dt);

	void update(float dt) override;

protected:

	Animation walk;
	Animation swim;
	Animation duck;

	Animation* currentAnimation;
};

