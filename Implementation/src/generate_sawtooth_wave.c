#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double generate_amplitude_sawtooth(double time, double slope, double frequency, double amplitude);
int generate_sawtooth_wave(double frequency, double amplitude)
{
    double slope = 2*amplitude*frequency;
    FILE *fp=NULL;
    fp=fopen("wave.txt","w");
    int p=0;
    for(double i=0;i<=10;i=i+0.01)
    {
        double y=generate_amplitude_sawtooth(i,slope,frequency,amplitude);
        if(fabs(y-amplitude)<0.0000001f)
        {
            p++;
        }
        fprintf(fp,"%lf\t%lf\n",i,y);
    }
    system("gnuplot -p -e \"plot 'wave.txt' w l\"");
    system("pause");
    fclose(fp);
    return p;
}
double generate_amplitude_sawtooth(double time, double slope, double frequency, double amplitude)
{
    double T=1/frequency;
    int cycle = (int)(2*time/T);
    return slope*(time - (int)time)-(amplitude);
}