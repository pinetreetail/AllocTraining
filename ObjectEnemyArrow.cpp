#include "game.h"
#include "DxLib.h"
#include "ObjectEnemyArrow.h"

ObjectEnemyArrow::ObjectEnemyArrow() :
	m_vec()
{

}

ObjectEnemyArrow::~ObjectEnemyArrow()
{

}

void ObjectEnemyArrow::update()
{
	if (!m_isExist)	return;
	
	Vec2 vec;
	vec.x = cosf(m_rot) * kSpeed;
	vec.y = sinf(m_rot) * kSpeed;

	m_pos += vec;


	/*
	Vec2 dir = m_target - m_pos;
	dir = dir.normalize();
	dir *= kSpeed;

	m_rot = atan2(dir.y, dir.x);

	m_vec = dir;
	m_pos += m_vec;

	Vec2 vec = m_vec;

	*/
	if ((m_pos.x < 0.0f) && (m_vec.x < 0))
	{
		m_isExist = false;
	}
	if ((m_pos.x > Game::kScreenHeight) && (m_vec.x > 0))
	{
		m_isExist = false;
	}
	if ((m_pos.y < 0.0f) && (m_vec.y < 0))
	{
		m_isExist = false;
	}
	if ((m_pos.y > Game::kScreenHeight) && (m_vec.y > 0))
	{
		m_isExist = false;
	}
}

void ObjectEnemyArrow::setDir(float degree)
{
	float rad = degree * DX_PI_F / 180.0f;

//	m_vec.x = cosf(rad);
//	m_vec.y = sinf(rad);
//	m_vec *= 5.0f;
}