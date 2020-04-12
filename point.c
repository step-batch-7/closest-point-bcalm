#include "point.h"
#include <math.h>

unsigned long int calculate_distance(Point pointA, Point pointB)
{
  return sqrt(pow((pointA.x - pointB.x), 2) + pow((pointA.y - pointB.y), 2));
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
  unsigned long int distance, closest_distance = 0;
  for (int point = 0; point < points_length; point++)
  {
    distance = calculate_distance(food_points[point], current_location);
    
    if (closest_distance > distance || point == 0)
    {
      closest_food_location->x = food_points[point].x;
      closest_food_location->y = food_points[point].y;
      closest_distance = distance;
    }
  }
}
