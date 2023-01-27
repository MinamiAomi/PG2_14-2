#include <iostream>

class Vector2 {
public:
	float x = 0.0f;
	float y = 0.0f;
public:
	Vector2() {}
	Vector2(float x, float y) :x(x), y(y) {}

	Vector2 operator+(const Vector2& v) const {
		return Vector2(x + v.x, y + v.y);
	}
	Vector2 operator-(const Vector2& v) const {
		return Vector2(x - v.x, y - v.y);
	}

};

int main() {

	Vector2 a(4.0f, 8.0f);
	Vector2 b(-2.0f, 3.0f);

	printf("a(x, y) : %f, %f\n", a.x, a.y);
	printf("b(x, y) : %f, %f\n", b.x, b.y);

	Vector2 c = a + b;
	Vector2 d = a - b;

	printf("a + b = (%f, %f)\n", c.x, c.y);
	printf("a - b = (%f, %f)\n", d.x, d.y);


	getchar();

	return 0;
}