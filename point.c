#include "point.h"
#include <math.h>

double calculate_distance(Point pointA, Point pointB)
{
  return sqrt(pow((pointA.x - pointB.x), 2) + pow((pointA.y - pointB.y), 2));
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
  double current_food_distance, closest_food_distance;
  *closest_food_location = food_points[0];
  closest_food_distance = calculate_distance(food_points[0], current_location);

  REPEAT(points_length)
  {
    current_food_distance = calculate_distance(food_points[point], current_location);

    if (closest_food_distance > current_food_distance)
    {
      *closest_food_location = food_points[point];
      closest_food_distance = current_food_distance;
    }
  }
}
