#include <stdio.h>

#define FOOD_LOCATIONS                                \
  {                                                   \
    {18, 76}, {19, 66}, {89, 57}, {9, 71}, { 55, 38 } \
  }

#define POINTS_LENGTH 5
#define REPEAT(points_length) for (int point = 1; point < points_length; point++)

typedef struct
{
  int x;
  int y;
} Point;

double calculate_distance(Point, Point);
void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location);
