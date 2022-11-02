#include "game.h"
#include "DxLib.h"
#include "ObjectEnemyDir.h"

ObjectEnemyDir::ObjectEnemyDir() :
	m_vec()
{

}

ObjectEnemyDir::~ObjectEnemyDir()
{

}

void ObjectEnemyDir::update()
{
	if (!m_isExist)	return;
	m_pos.x += m_vec.x;
	m_pos.y += m_vec.y;

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

void ObjectEnemyDir::setDir(float degree)
{
	float rad = degree * DX_PI_F / 180.0f;

	m_vec.x = cosf(rad);
	m_vec.y = sinf(rad);
	m_vec *= 5.0f;
}