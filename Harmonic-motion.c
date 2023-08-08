#include "udf.h"
#define Freq 3.95662518			
#define angular_freq 2.0*M_PI*Freq
#define tetmax 90.0*M_PI/180
DEFINE_PROFILE(velocity_profile,t,i)
{
real time = CURRENT_TIME;
face_t f;
begin_f_loop(f,t)
{
	F_PROFILE(f,t,i) = tetmax*angular_freq*cos(angular_freq*time);
}
	end_f_loop(f,t)
}
