#pragma once

#include "ObjectEnemy.h"

// 指定した方向に飛んでいく
class ObjectEnemyThrow : public ObjectEnemy
{
public:
	ObjectEnemyThrow();
	virtual ~ObjectEnemyThrow();

	virtual void update();

	
private:
	Vec2	m_vec;



};