#include <iostream>

class Point {
	public:
		void setX(const int& x) {
			m_X = x;
}

		int& getX() {
			return m_X; 
		}

		void setY(const int& y) {
			m_Y = y;
		}

		int& getY() {
			return m_Y; 
		}


	private:
		int m_X;
		int m_Y;
};

class Circle {
	public:
		void setP(const Point& p) {
			m_P = p;
		}

		Point& getP() {
			return m_P; 
		}
		
		void setR(const int& r) {
			m_R = r;
		}

		int& getR() {
			return m_R; 
		}
		
		void isInOrNot(Point& p) {
			int distance = (m_P.getX() - p.getX()) * (m_P.getX() - p.getX()) + (m_P.getY() - p.getY()) * (m_P.getY() - p.getY());
			int r2 = m_R * m_R;
			if(distance == r2) {
				std::cout << "点在圆上" << std::endl;
			} else if(distance < r2) {
				std::cout << "点在圆内" << std::endl;
			} else {
				std::cout << "点在圆外" << std::endl;
			}
		}

	private:
		Point m_P;
		int m_R;
};

void isInOrNot(Circle& c, Point& p) {
		int distance = (c.getP().getX() - p.getX()) * (c.getP().getX() - p.getX()) + (c.getP().getY() - p.getY()) * (c.getP().getY() - p.getY());
		int r2 = c.getR() * c.getR();
		if(distance == r2) {
			std::cout << "点在圆上" << std::endl;
		} else if(distance < r2) {
			std::cout << "点在圆内" << std::endl;
		} else {
			std::cout << "点在圆外" << std::endl;
		}
}

void test(){
	Point p, p2;
	p.setX(15);
	p.setY(5);
	Circle c;
	p2.setY(0);
	p2.setX(10);
	c.setP(p2);
	c.setR(10);
	c.isInOrNot(p);
	isInOrNot(c, p);
}

int main() {
	test();
}
