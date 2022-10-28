#include "DxLib.h"
#include "game.h"
#include "SceneTest.h"

namespace
{
	const char* const kPlayerFilename = "Data/player.bmp";
}

SceneTest::SceneTest():
	m_hPlayer(-1),
	m_player()
{

}
SceneTest::~SceneTest()
{

}

void SceneTest::init()
{
	m_hPlayer = LoadGraph(kPlayerFilename);
	m_player.init();
	m_player.setHandle(m_hPlayer);
}

void SceneTest::end()
{
	DeleteGraph(m_hPlayer);
}

SceneBase* SceneTest::update()
{
	m_player.update();
	return this;
}

void SceneTest::draw()
{
	m_player.draw();
}

