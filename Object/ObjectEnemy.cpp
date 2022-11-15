#include "ObjectEnemy.h"
#include "game.h"
#include "DxLib.h"
#include "Pad.h"

namespace
{
	constexpr float kSpeed = 8.0f;
}

ObjectEnemy::ObjectEnemy() :
	m_hGraph(-1),
	m_isExist(false),
	m_pos(),
	m_rot(0)
{

}

ObjectEnemy::~ObjectEnemy()
{

}

void ObjectEnemy::init()
{
	m_isExist = false;
}

void ObjectEnemy::end()
{

}

void ObjectEnemy::update()
{
	if (!m_isExist)	return;
	m_pos.x -= kSpeed;
	if (m_pos.x <= -16.0f)
	{
		m_isExist = false;
	}
	m_rot -= 0.1;
}

void ObjectEnemy::draw()
{
	if (!m_isExist)	return;
	int width = 0;
	int height = 0;
	GetGraphSize(m_hGraph, &width, &height);

//	DrawGraph(static_cast<int>(m_pos.x), static_cast<int>(m_pos.y), m_hGraph, true);
	DrawRotaGraph(static_cast<int>(m_pos.x) + width/2, static_cast<int>(m_pos.y) + height/2, 1.0, m_rot, m_hGraph, true);
}
