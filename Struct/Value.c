#include <stdio.h>

// 通过值返回结构体

typedef struct {
	int x;
	int y;

}Point;
Point get_point(void);

void demo_Value()
{
	Point my_point = get_point();                    // 不用初始化，统一默认一个值

	printf("Point is (%d,%d)", my_point.x, my_point.y);


	return 0;
}
Point get_point(void) {
	// 值语义（values semantics）
	Point p = {10, 20};
	return p;										// 返回一个默认的结构体
}