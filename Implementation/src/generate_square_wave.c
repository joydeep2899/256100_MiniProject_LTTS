#include<stdio.h>
double generate_square_wave(double time, double frequency, double amplitude)
{
    double y;
    FILE *fp=NULL;
    fp=fopen("wave.txt","w");
    for(double i=0;i<=10;i=i+0.001)
    {
        y=generate_amplitude_square(i,frequency,amplitude);
        fprintf(fp,"%lf\t%lf\n",i,y);
    }
}
double generate_amplitude_square(double time, double frequency, double amplitude)
{
    double T=1/frequency;
    int cycle = (int)(2*time/T);
    if(cycle%2 == 0)
    {
        return amplitude;
    }
    else
    {
        return -amplitude;
    }
}