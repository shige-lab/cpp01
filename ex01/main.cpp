#include "Zombie.hpp"

static void zombie_life(std::string name, int n) {
	Zombie *zombies;
	int i = 0;
	zombies = zombieHorde(n, name);
	if (zombies == NULL)
		return;
	while (i < n) {
		zombies[i++].announce();
	}
	delete[] zombies;
}

int main(void) {
	zombie_life("zombie", 0);
	zombie_life("zombie", 1);
	zombie_life("zombie", 2);
	zombie_life("zombie", 3);
	zombie_life("zombie", 4);
}
