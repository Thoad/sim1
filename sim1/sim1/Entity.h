#pragma once

#include <string>

class Entity
{
public:
	Entity();
	Entity(std::string name, std::string desc, double radius);
	~Entity();

	virtual int getEnergy() = 0;

private:
	std::string name;
	std::string short_description;
	int energy;
	double radius;
};



Entity::Entity()
{
}

Entity::~Entity()
{
}

inline Entity::Entity(string name, string desc, double radius){
	Entity::name = name;
	Entity::short_description = desc;
	Entity::radius = radius;
	Entity::energy = 101;
}
