#pragma once

#include "ObjectEnemy.h"

// �w�肵�������ɔ��ł���
class ObjectEnemyArrow : public ObjectEnemy
{
public:
	ObjectEnemyArrow();
	virtual ~ObjectEnemyArrow();

	virtual void update();

	// ���ł����������w�肷��i���������O�x�Ƃ��Ď��v���̊p�x���w�肷��j
	void setDir(float degree);

private:
	Vec2	m_vec;



};