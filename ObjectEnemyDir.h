#pragma once

#include "ObjectEnemy.h"

// �w�肵�������ɔ��ł���
class ObjectEnemyDir : public ObjectEnemy
{
public:
	ObjectEnemyDir();
	virtual ~ObjectEnemyDir();

	virtual void update();

	// ���ł����������w�肷��i���������O�x�Ƃ��Ď��v���̊p�x���w�肷��j
	void setDir(float degree);

private:
	Vec2	m_vec;



};