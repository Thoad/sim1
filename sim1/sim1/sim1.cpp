// sim1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Entity.h"
#include "simEntity.cpp"


int main()
{
	Entity ent = new simEntity("test_Name","Description test", 10);
    return 0;
}

