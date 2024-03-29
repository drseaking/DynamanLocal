////////////////////////////////////////////////////////////////////////////////
// -------------------------------------------------------------------------- //
//                                                                            //
//   Authors: David Krutsko                                                   //
//   Project: COMP 2404 W13                                                   //
//                                                                            //
// -------------------------------------------------------------------------- //
////////////////////////////////////////////////////////////////////////////////

//----------------------------------------------------------------------------//
// Prefaces                                                                   //
//----------------------------------------------------------------------------//

#ifndef ENEMY_GRUNT_H
#define ENEMY_GRUNT_H

#include "Enemy.h"



//----------------------------------------------------------------------------//
// Classes                                                                    //
//----------------------------------------------------------------------------//

////////////////////////////////////////////////////////////////////////////////

class Grunt : public Enemy
{
public:
	//----------------------------------------------------------------------------//
	// Constructors                                                               //
	//----------------------------------------------------------------------------//

	////////////////////////////////////////////////////////////////////////////////

	Grunt (World* world, const Point& pos) : Enemy (world, pos)
	{
		mIcon  = 'G';
		mSpeed = Random::Instance()->NextInt (250) + 750;
	}

	////////////////////////////////////////////////////////////////////////////////

	Grunt (World* world, int32 x, int32 y) : Enemy (world, x, y)
	{
		mIcon  = 'G';
		mSpeed = Random::Instance()->NextInt (250) + 750;
	}



public:
	//----------------------------------------------------------------------------//
	// Functions                                                                  //
	//----------------------------------------------------------------------------//

	////////////////////////////////////////////////////////////////////////////////

	Kind GetType (void) const
	{
		return Entity::eGrunt;
	}
};

#endif // ENEMY_GRUNT_H
