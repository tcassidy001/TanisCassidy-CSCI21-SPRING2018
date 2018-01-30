/*
 *  Name        : lab_2.h
 *  Author      : Tanis Cassidy
 *  Description : Use arithmetic to finish the functions MakeChange() and LaunchHumanCannonball()
 *  Sources     : https://stackoverflow.com/questions/2386772/difference-between-float-and-double
 */

#ifndef LAH_H
#define LAB_H

// Please note the header above. You need to include the name of the file, the author, a description of the program, and any sources used.

#include <iostream>
#include <cmath>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

// Function Prototypes (DO NOT ALTER)
void MakeChange(int initial_value, int &quarters, int &dimes, int &nickels, int &pennies);
double LaunchHumanCannonball(double initial_velocity, double launch_angle);

// Create a Constant named kPI which is initialized to 3.1415927
const double kPI = 3.1415927;

#endif
