#pragma once

#include "ObjectEnemy.h"

// 指定した方向に飛んでいく
class ObjectEnemyDir : public ObjectEnemy
{
public:
	ObjectEnemyDir();
	virtual ~ObjectEnemyDir();

	virtual void update();

	// 飛んでいく方向を指定する（左方向を０度として時計回りの角度を指定する）
	void setDir(float degree);

private:
	Vec2	m_vec;



};