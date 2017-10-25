#pragma once
#include "stdafx.h"
#include "Renderer.h"


class Object {
public:
	float m_x;
	float m_y;
	float m_vX;
	float m_vY;
	float m_z;
	float m_size;
	float m_r;
	float m_g;
	float m_b;
	float m_a;
	float m_color[4];
	Object(float x, float y, float z, float size, float r, float g, float b, float a);
	~Object();
	void Update();
	float getPosX();
	float getPosY();
	float getPosZ();
	float getPosSize();
	float getPosR();
	float getPosG();
	float getPosB();
	float getPosA();
};