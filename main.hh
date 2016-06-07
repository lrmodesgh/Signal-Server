#ifndef _MAIN_HH_
#define _MAIN_HH_

#include <stdio.h>

#include "common.h"

int ReduceAngle(double angle);
double LonDiff(double lon1, double lon2);
int PutMask(double lat, double lon, int value);
int OrMask(double lat, double lon, int value);
int GetMask(double lat, double lon);
int PutSignal(double lat, double lon, unsigned char signal);
unsigned char GetSignal(double lat, double lon);
double GetElevation(struct site location);
int AddElevation(double lat, double lon, double height);
double Distance(struct site site1, struct site site2);
double Azimuth(struct site source, struct site destination);
double ElevationAngle(struct site source, struct site destination);
void ReadPath(struct site source, struct site destination);
double ElevationAngle2(struct site source, struct site destination, double er);
double ReadBearing(char *input);
void ObstructionAnalysis(struct site xmtr, struct site rcvr, double f,
			 FILE *outfile);

void free_elev(void);
void free_path(void);
void alloc_elev(void);
void alloc_path(void);
void do_allocs(void);

#endif /* _MAIN_HH_ */
