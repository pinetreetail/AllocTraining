#pragma once

#include "ObjectEnemy.h"

// �w�肵�������ɔ��ł���
class ObjectEnemyThrow : public ObjectEnemy
{
public:
	ObjectEnemyThrow();
	virtual ~ObjectEnemyThrow();

	virtual void update();

	
private:
	Vec2	m_vec;



};