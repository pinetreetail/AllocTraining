#pragma once

#include "ObjectEnemy.h"

// Žw’è‚µ‚½•ûŒü‚É”ò‚ñ‚Å‚¢‚­
class ObjectEnemyThrow : public ObjectEnemy
{
public:
	ObjectEnemyThrow();
	virtual ~ObjectEnemyThrow();

	virtual void update();

	
private:
	Vec2	m_vec;



};