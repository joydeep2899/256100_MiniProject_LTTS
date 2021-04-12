#include <stdio.h>
double generate_triangular_wave(double time, double frequency, double amplitude)
{
    double slope1=4*amplitude*frequency;
    double slope2=-slope1;
    double y;
    FILE *fp=NULL;
    fp=fopen("wave.txt","w");
    for(double i=0;i<=10;i=i+0.001)
    {
        y=generate_amplitude(i,slope1,slope2,frequency,amplitude);
        fprintf(fp,"%lf\t%lf\n",i,y);
    }
}
double generate_amplitude(double time, double slope1, double slope2, double frequency, double amplitude)
{
    double T=1/frequency;
    int cycle = (int)(2*time/T);
    if(cycle%2 == 0)
    {
        return slope1*(time - (int)time)-amplitude;
    }
    else
    {
        return slope2*(time - (int)time -1)-amplitude;
    }
}