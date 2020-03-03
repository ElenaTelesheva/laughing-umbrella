#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
#include <ctype.h>
#include <stdio.h>


using namespace std;

struct Student
{
	string name;
	int math;
	int phys;
	int comp;
};



int doInput(Student* group);
int random(Student* group);
int filevvod(Student* group);
void doOutput(const Student* group, int amount);