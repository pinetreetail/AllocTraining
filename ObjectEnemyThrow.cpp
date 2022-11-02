#include "game.h"
#include "DxLib.h"
#include "ObjectEnemyThrow.h"

namespace
{
	constexpr float kGravity = 0.8f;

}

ObjectEnemyThrow::ObjectEnemyThrow() :
	m_vec(8.0f, -8.0f)
{

}

ObjectEnemyThrow::~ObjectEnemyThrow()
{

}

void ObjectEnemyThrow::update()
{
	if (!m_isExist)	return;
	m_pos += m_vec;
	m_vec.y += kGravity;

	
	if (m_pos.x > Game::kScreenHeight)
	{
		m_isExist = false;
	}
}