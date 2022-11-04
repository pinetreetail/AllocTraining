#pragma once

#include "Vec2.h"

class SceneMain;

class ObjectEnemy
{
public:
	ObjectEnemy();
	virtual ~ObjectEnemy();

	virtual void init();
	virtual void end();

	virtual void update();
	virtual void draw();

	void setHandle(int handle) { m_hGraph = handle; }
	// �J�n�ʒu����Ɏg�p����
	void setPos(Vec2 pos) { m_pos = pos; }

	// ���݊m�F
	bool isExist() const { return m_isExist; }
	void setExist(bool isExist) { m_isExist = isExist; }

protected:
	// �O���t�B�b�N�n���h��
	int		m_hGraph;
	// ���݂��邩
	bool	m_isExist;
	// ������W
	Vec2	m_pos;

	double m_rot;
};