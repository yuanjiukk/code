#include "Cube.h"

void Cube::setL(const int& l) {
	m_L = l;
}

int& Cube::getL() {
	return m_L;
}
void Cube::setW(const int& w) {
	m_W = w;
}

int& Cube::getW() {
	return m_W;
}

void Cube::setH(const int& h) {
	m_H = h;
}

int& Cube::getH() {
	return m_H;
}

int Cube::cS() {
	return (m_L * m_W + m_L * m_H + m_H * m_W) * 2;
}

int Cube::cV() {
	return m_L * m_W * m_H;
}
