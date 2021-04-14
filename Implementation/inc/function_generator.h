
#ifndef __FUNCTION_GENERATOR_H__
#define __FUNCTION_GENERATOR_H__ 

#include <stdio.h>
#include <math.h>

int generate_sine_wave(double frequency, double amplitude);

double generate_amplitude_sine(double time, double frequency, double amplitude);

int generate_sawtooth_wave(double frequency, double amplitude);

double generate_amplitude_sawtooth(double time, double slope, double frequency, double amplitude);

int generate_square_wave(double frequency, double amplitude);

double generate_amplitude_square(double time, double frequency, double amplitude);

int generate_triangular_wave( double frequency, double amplitude);

double generate_amplitude_triangle(double time, double slope1, double slope2, double frequency, double amplitude);

#endif