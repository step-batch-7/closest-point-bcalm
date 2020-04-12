#include "point.h"
#include <math.h>

unsigned long int calculate_distance(int x1_position, int y1_position, int x2_position, int y2_position)
{
  return sqrt(pow((x1_position - x2_position), 2) + pow((y1_position - y2_position), 2));
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
  unsigned long int distance, closest_distance = 0;
  for (int point = 0; point < points_length; point++)
  {
    distance = calculate_distance(food_points[point].x, food_points[point].y, current_location.x, current_location.y);
    if (closest_distance > distance || point == 0)
    {
      closest_food_location->x = food_points[point].x;
      closest_food_location->y = food_points[point].y;
      closest_distance = distance;
    }
  }
}
