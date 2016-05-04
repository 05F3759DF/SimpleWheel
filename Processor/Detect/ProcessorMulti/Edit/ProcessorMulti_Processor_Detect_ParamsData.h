//You need to modify this file.

#ifndef PROCESSORMULTI_PROCESSOR_DETECT_PARAMSDATA_H
#define PROCESSORMULTI_PROCESSOR_DETECT_PARAMSDATA_H

#include<RobotSDK_Global.h>

/*! \defgroup ProcessorMulti_Processor_Detect_ParamsData ProcessorMulti_Processor_Detect_ParamsData
	\ingroup ProcessorMulti_Processor_Detect
	\brief ProcessorMulti_Processor_Detect_ParamsData defines the ParamsData in ProcessorMulti_Processor_Detect.
*/

/*! \addtogroup ProcessorMulti_Processor_Detect_ParamsData
	@{
*/

/*! \file ProcessorMulti_Processor_Detect_ParamsData.h
	 Defines the ParamsData of ProcessorMulti_Processor_Detect
*/

//*******************Please add other headers below*******************


//2 input data header(s) refered

//Defines Params SensorInternalEvent_Sensor_Laser_Params and Input Data SensorInternalEvent_Sensor_Laser_Data
#include<wheelchair/Sensor/Laser/SensorInternalEvent/Edit/SensorInternalEvent_Sensor_Laser_ParamsData.h>
//Defines Params SourceDrainMono_Sensor_stm32comm_Params and Input Data SourceDrainMono_Sensor_stm32comm_Data
#include<wheelchair/Sensor/stm32comm/SourceDrainMono/Edit/SourceDrainMono_Sensor_stm32comm_ParamsData.h>

//0 new input data type(s) created

/*! \def ProcessorMulti_Processor_Detect_INPUTPORTSSIZE
	\brief Defines input port(s) info: number=2
	\details
	- Input Port #0: Buffer_Size = 10, Params_Type = SourceDrainMono_Sensor_stm32comm_Params, Data_Type = SourceDrainMono_Sensor_stm32comm_Data
	- Input Port #1: Buffer_Size = 10, Params_Type = SensorInternalEvent_Sensor_Laser_Params, Data_Type = SensorInternalEvent_Sensor_Laser_Data
*/
#define ProcessorMulti_Processor_Detect_INPUTPORTSSIZE QList<int>()<<10<<10

//The Params is defined as below
/*! \class ProcessorMulti_Processor_Detect_Params 
	\brief The Params of ProcessorMulti_Processor_Detect.
	\details **Please add details below**

*/
class ROBOTSDK_OUTPUT ProcessorMulti_Processor_Detect_Params 
{
public:
	/*! \fn ProcessorMulti_Processor_Detect_Params()
		\brief The constructor of ProcessorMulti_Processor_Detect_Params. [required]
		\details ****Please add details below****

	*/
	ProcessorMulti_Processor_Detect_Params() 
	{
		
	}
	/*! \fn ~ProcessorMulti_Processor_Detect_Params()
		\brief The destructor of ProcessorMulti_Processor_Detect_Params. [required]
		\details *****Please add details below*****

	*/
	~ProcessorMulti_Processor_Detect_Params() 
	{
		
	}
public:
	//*******************Please add variables below*******************

};

//The Output Data is defined as below
/*! \class ProcessorMulti_Processor_Detect_Data 
	\brief The Data of ProcessorMulti_Processor_Detect.
	\details **Please add details below**

*/
class ROBOTSDK_OUTPUT ProcessorMulti_Processor_Detect_Data 
{
public:
	/*! \fn ProcessorMulti_Processor_Detect_Data()
		\brief The constructor of ProcessorMulti_Processor_Detect_Data. [required]
		\details ****Please add details below****

	*/
	ProcessorMulti_Processor_Detect_Data() 
	{
		
	}
	/*! \fn ~ProcessorMulti_Processor_Detect_Data()
		\brief The destructor of ProcessorMulti_Processor_Detect_Data. [required]
		\details *****Please add details below*****

	*/
	~ProcessorMulti_Processor_Detect_Data() 
	{
		
	}
public:
	//*******************Please add variables below*******************
    double start_x, start_y, start_theta;
    double end_x, end_y, end_theta;
    int stop;
};

/*! \def ProcessorMulti_Processor_Detect_OUTPUTPORTSNUMBER
	\brief Defines output port(s) info: number = 1.
*/
#define ProcessorMulti_Processor_Detect_OUTPUTPORTSNUMBER 1

/*! @}*/ 

#endif
