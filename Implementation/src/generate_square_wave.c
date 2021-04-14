#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double generate_amplitude_square(double time, double frequency, double amplitude);
int generate_square_wave(double frequency, double amplitude)
{
    double y;
    FILE *fp=NULL;
    fp=fopen("wave.txt","w");
    int p=0;
    for(double i=0;i<=10;i=i+0.001)
    {
        y=generate_amplitude_square(i,frequency,amplitude);
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