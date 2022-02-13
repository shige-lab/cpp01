#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
	int i = 0;
	if (N <= 0) {
		std::cout << "invalid number" << std::endl;
		return NULL;
	}
	Zombie *zombies = new Zombie[N];
	while (i < N) {
		new (zombies + i) Zombie(name + std::to_string(i));
		i++;
	}
	return zombies;
}
