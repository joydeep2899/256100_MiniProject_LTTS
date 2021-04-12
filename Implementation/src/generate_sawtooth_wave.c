#include <stdio.h>
double generate_sawtooth_wave(double time, double slope, double frequency, double amplitude)
{
    double slope = 2*amplitude*frequency;
    double y;
    FILE *fp=NULL;
   fp=fopen("wave.txt","w");
    for(double i=0;i<=10;i=i+0.001)
    {
        y=generate_amplitude(i,slope,frequency,amplitude);
        fprintf(fp,"%lf\t%lf\n",i,y);
    }
}
double generate_amplitude(double time, double slope, double frequency, double amplitude)
{
    double T=1/frequency;
    int cycle = (int)(2*time/T);
    return slope*(time - (int)time)-(amplitude);
}