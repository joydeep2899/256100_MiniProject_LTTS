#include <math.h>
#include <stdio.h>
double generate_sine_wave(double time, double frequency, double amplitude)
{
    double y;
    FILE *fp=NULL;
    fp=fopen("wave.txt","w");
    for(double i=0;i<=10;i=i+0.001)
    {
        y=generate_amplitude_sine(i,frequency,amplitude);
        fprintf(fp,"%lf\t%lf\n",i,y);
    }
}
double generate_amplitude_sine(double time, double frequency, double amplitude)
{
    double T=1/frequency;
    time=2*M_PI*frequency*time;
    return amplitude*sin(time);
}
