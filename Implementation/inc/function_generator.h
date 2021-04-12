
#ifndef __FUNCTION_GENERATOR_H__
#define __FUNCTION_GENERATOR_H__ 

#include <stdio.h>
#include <math.h>
/**
 * @brief 
 * 
 * @param time 
 * @param frequency 
 * @param amplitude 
 * @return double 
 */
double generate_sine_wave(double time, double frequency, double amplitude);
/**
 * @brief 
 * 
 * @param time 
 * @param frequency 
 * @param amplitude 
 * @return double 
 */
double generate_amplitude_sine(double time, double frequency, double amplitude);
/**
 * @brief 
 * 
 * @param time 
 * @param slope 
 * @param frequency 
 * @param amplitude 
 * @return double 
 */
double generate_sawtooth_wave(double time, double slope, double frequency, double amplitude);
/**
 * @brief 
 * 
 * @param time 
 * @param slope 
 * @param frequency 
 * @param amplitude 
 * @return double 
 */
double generate_amplitude_sawtooth(double time, double slope, double frequency, double amplitude);
/**
 * @brief 
 * 
 * @param time 
 * @param frequency 
 * @param amplitude 
 * @return double 
 */
double generate_square_wave(double time, double frequency, double amplitude);
/**
 * @brief 
 * 
 * @param time 
 * @param frequency 
 * @param amplitude 
 * @return double 
 */
double generate_amplitude_square(double time, double frequency, double amplitude);
/**
 * @brief 
 * 
 * @param time 
 * @param frequency 
 * @param amplitude 
 * @return double 
 */
double generate_triangular_wave(double time, double frequency, double amplitude);

#endif