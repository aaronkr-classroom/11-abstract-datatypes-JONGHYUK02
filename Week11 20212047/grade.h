#pragma once
// grade.h

#ifndef GUARD_grade_h
#define GUARD_grade_h

#include "Vec.h"
#include "Student_info.h"

//오버로딩 함수
double grade(double, double, double);
double grade(double, double, const Vec<double>&);
double grade(const Student_info&);

#endif