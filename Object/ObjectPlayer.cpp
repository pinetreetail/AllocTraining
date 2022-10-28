#include "ObjectPlayer.h"
#include "game.h"
#include "DxLib.h"
#include "Pad.h"

namespace
{
	constexpr float kSpeed = 4.0f;
}

ObjectPlayer::ObjectPlayer() :
	m_hGraph(-1),
	m_pos()
{
}
ObjectPlayer::~ObjectPlayer()
{

}

void ObjectPlayer::init()
{
}

void ObjectPlayer::end()
{

}

void ObjectPlayer::update()
{
	if (Pad::isPress(PAD_INPUT_LEFT))
	{
		m_pos.x -= kSpeed;
	}
	if (Pad::isPress(PAD_INPUT_RIGHT))
	{
		m_pos.x += kSpeed;
	}
	if (Pad::isPress(PAD_INPUT_UP))
	{
		m_pos.y -= kSpeed;
	}
	if (Pad::isPress(PAD_INPUT_DOWN))
	{
		m_pos.y += kSpeed;
	}
}

void ObjectPlayer::draw()
{
	DrawGraph(static_cast<int>(m_pos.x), static_cast<int>(m_pos.y), m_hGraph, false);
}
