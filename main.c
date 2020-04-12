#include "point.h"

int main(void)
{
  Point food_points[] = FOOD_LOCATIONS;
  Point current_location, closest_food_location;

  printf("Enter current location:\n");
  printf("X co-ordinate: ");
  scanf("%d", &current_location.x);
  printf("Y co-ordinate: ");
  scanf("%d", &current_location.y);

  get_closest_food(food_points, POINTS_LENGTH, current_location, &closest_food_location);
  printf("Closest food location is [%d, %d]\n", closest_food_location.x, closest_food_location.y);
  return 0;
}