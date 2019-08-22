/***************************************************************
Description: Motor driver function definitions - by James Nugen
****************************************************************/
#ifndef __MOTOR_DRIVER_H__
#define __MOTOR_DRIVER_H__

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int ASpeed, int BSpeed, int CSpeed);

#endif

