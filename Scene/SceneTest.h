#pragma once
#include "SceneBase.h"

#include "ObjectPlayer.h"

class SceneTest : public SceneBase
{
public:
	SceneTest();
	virtual ~SceneTest();


	virtual void init() override;
	virtual void end() override;

	virtual SceneBase* update() override;
	virtual void draw() override;

private:
	int			m_hPlayer;

	ObjectPlayer	m_player;
};