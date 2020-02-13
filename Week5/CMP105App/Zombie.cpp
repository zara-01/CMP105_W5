#include "Zombie.h"

Zombie::Zombie()
{
	// setting up walk animation 

	walk.addFrame(sf::IntRect(0, 0, 55, 108));
	walk.addFrame(sf::IntRect(55, 0, 55, 108));
	walk.addFrame(sf::IntRect(110, 0, 55, 108));
	walk.addFrame(sf::IntRect(165, 0, 55, 108));
	walk.addFrame(sf::IntRect(220, 0, 55, 108));
	walk.addFrame(sf::IntRect(275, 0, 55, 108));
	walk.addFrame(sf::IntRect(330, 0, 55, 108));
	walk.addFrame(sf::IntRect(385, 0, 55, 108));
	walk.setFrameSpeed(1.f / 10.f);

	

}

Zombie::~Zombie() {}



void Zombie::handleInput(float dt)
{
	//move up
	if (input->isKeyDown(sf::Keyboard::Up))
	{
		move(0, -50 * dt);
	}

	//move down
	if (input->isKeyDown(sf::Keyboard::Down))
	{
		move(0, 50 * dt);
	}

	//move left
	if (input->isKeyDown(sf::Keyboard::Left))
	{
		move(-50 * dt, 0);
		walk.setFlipped(true);
	}

	//move right
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		move(50 * dt, 0);
		walk.setFlipped(false);
	}

	
}

void Zombie::update(float dt)
{

	walk.animate(dt);
	setTextureRect(walk.getCurrentFrame());

}
//zara
