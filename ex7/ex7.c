#include <stdio.h>

int main(int argc, char*argv[])
{
  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.4532;
  char initial = 'J';
  char first_name[] = "Matthew"; 
  char last_name[] = "Fish";

  printf("You are %d miles away.\n", distance);
  printf("You have %f levels of power.\n", power);
  printf("You have %f awesome super powers.\n", super_power);
  printf("I have an initial %c.\n ", initial);
  printf("I have the first name %s.\n", first_name);
  printf("I have the last name %s.\n", last_name);
  printf("My whole name is %s %c %s.\n", 
      first_name, initial, last_name);

  int bugs = 100;
  double bug_rate = 1.2;

  printf("You have %d bugs at the imaginary rate of %f.\n",
      bugs, bug_rate);

  unsigned long universe_of_defects = 1L * 1024L * 9000L * 44999000L;
  printf("The entire universe has %ld bugs.\n", universe_of_defects);

  double expected_bugs = bugs * bug_rate ;
  printf("You are expected to have %f bugs.\n", expected_bugs);

  double part_of_universe = expected_bugs / universe_of_defects;
  printf("That is only %e portion of the universe.\n",
      part_of_universe);

  //This makes no sense, just a demo of something weird
  char nul_byte = '\0';
  int care_percentage = bugs * nul_byte;
  printf("which means you should care %d%%. \n", care_percentage);

  return 0;
}
