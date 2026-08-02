#include <stdio.h>

typedef struct {
	int x;
	int y;

}Point_1;

void get_point_1(Point_1 points[], size_t size);

void demo_Array_Struct() {

	Point_1 points[2] = {
		{10,20}, {30, 40}
	};
	get_point_1(points, 2);
	

	return 0;
}
void get_point_1(Point_1 points[], size_t size) {
		for (int i = 0; i < size; i++) {
		printf("%d : (%d,%d)\n", i + 1, points[i].x, points[i].y);
	}
}