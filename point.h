#include <stdio.h>

#define FOOD_LOCATIONS \
  {                    \
    {18, 76},          \
        {19, 66},      \
        {89, 57},      \
        {9, 71},       \
    {                  \
      55, 38           \
    }                  \
  }

#define POINTS_LENGTH sizeof(food_points) / sizeof(food_points[0])

typedef struct
{
  int x;
  int y;
} Point;

unsigned long int calculate_distance(int, int, int, int);
void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location);
