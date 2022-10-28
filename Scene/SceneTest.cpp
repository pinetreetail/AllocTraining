#include "DxLib.h"
#include "game.h"
#include "SceneTest.h"

namespace
{
	const char* const kPlayerFilename = "Data/player.bmp";
	const char* const kEnemyFilename = "Data/enemy.bmp";

	// “¯Žž‚É“oê‚·‚é“G‚ÌÅ‘å”
	constexpr int kEnemyMax = 32;

	// “G‚Ì¶¬ŠÔŠu(ƒtƒŒ[ƒ€”)
	constexpr int kEnemyInterval = 30;
}

SceneTest::SceneTest():
	m_hPlayer(-1),
	m_hEnemy(-1),
	m_player(),
	m_enemy(kEnemyMax),
	m_enemyInterval(0)
{

}
SceneTest::~SceneTest()
{

}

void SceneTest::init()
{
	m_hPlayer = LoadGraph(kPlayerFilename);
	m_hEnemy = LoadGraph(kEnemyFilename);

	m_player.init();
	m_player.setHandle(m_hPlayer);
	for (auto& enemy : m_enemy)
	{
		enemy.init();
		enemy.setHandle(m_hEnemy);
	}

	m_enemyInterval = 0;
}

void SceneTest::end()
{
	DeleteGraph(m_hPlayer);
	DeleteGraph(m_hEnemy);
}

SceneBase* SceneTest::update()
{
	m_player.update();
	for (auto& enemy : m_enemy)
	{
		enemy.update();
	}

	m_enemyInterval++;
	if (m_enemyInterval >= kEnemyInterval)
	{
		// Žg—p‚³‚ê‚Ä‚¢‚È‚¢“G‚ð’T‚µ‚Ä‚»‚ê‚ðŽg‚¤
		for (auto& enemy : m_enemy)
		{
			if (enemy.isExist())	continue;

			enemy.setExist(true);
			Vec2 pos{Game::kScreenWidth+16, static_cast<float>(GetRand(Game::kScreenHeight))};
			enemy.setPos(pos);
			break;
		}

		m_enemyInterval = 0;
	}
	return this;
}

void SceneTest::draw()
{
	m_player.draw();
	for (auto& enemy : m_enemy)
	{
		enemy.draw();
	}
}

