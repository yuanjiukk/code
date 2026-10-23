#pragma once
#include <iostream>

class Cube {
	public:
		void setL(const int& );
		int& getL();
		void setW(const int& );
		int& getW();
		void setH(const int& );
		int& getH();
		int cS();
		int cV();
	private:
		int m_L;
		int m_W;
		int m_H;
};
