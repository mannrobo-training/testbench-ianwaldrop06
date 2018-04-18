#pragma config(Sensor, in4,    smokinPot,      sensorPotentiometer)
#pragma config(Sensor, dgtl3,  limit,          sensorTouch)
#pragma config(Sensor, dgtl4,  bump,           sensorTouch)
#pragma config(Sensor, dgtl5,  ledGreen,       sensorLEDtoVCC)
#pragma config(Sensor, dgtl6,  ledYellow,      sensorLEDtoVCC)
#pragma config(Sensor, dgtl7,  ledRed,         sensorLEDtoVCC)
#pragma config(Sensor, dgtl8,  jumper,         sensorTouch)
#pragma config(Sensor, dgtl11, ultrasonic,     sensorSONAR_inch)
#pragma config(Motor,  port2,           drive,         tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//


int MotorValue;


task main()
{

	while(true)
	{
		MotorValue = (SensorValue[ultrasonic]);
		motor[drive] = MotorValue;

		if (MotorValue >= 1 && MotorValue <= 45)
		{
			SensorValue[ledGreen] = 1;
			SensorValue[ledYellow] = 0;
			SensorValue[ledRed] = 0;
		}

		else if (MotorValue >= 46 && MotorValue <= 75)
		{
			SensorValue[ledYellow] = 1;
			SensorValue[ledGreen] = 0;
			SensorValue[ledRed] = 0;
		}

		else if (MotorValue >= 76 && MotorValue <= 127)
		{
			SensorValue[ledRed] = 1;
			SensorValue[ledGreen] = 0;
			SensorValue[ledYellow] = 0;
		}
	}
}
