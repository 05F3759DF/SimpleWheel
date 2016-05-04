//You need to modify this file.

#ifndef PROCESSORMULTI_PROCESSOR_CONTROLSIMPLE_PARAMSDATA_H
#define PROCESSORMULTI_PROCESSOR_CONTROLSIMPLE_PARAMSDATA_H

#include<RobotSDK_Global.h>

/*! \defgroup ProcessorMulti_Processor_ControlSimple_ParamsData ProcessorMulti_Processor_ControlSimple_ParamsData
	\ingroup ProcessorMulti_Processor_ControlSimple
	\brief ProcessorMulti_Processor_ControlSimple_ParamsData defines the ParamsData in ProcessorMulti_Processor_ControlSimple.
*/

/*! \addtogroup ProcessorMulti_Processor_ControlSimple_ParamsData
	@{
*/

/*! \file ProcessorMulti_Processor_ControlSimple_ParamsData.h
	 Defines the ParamsData of ProcessorMulti_Processor_ControlSimple
*/

//*******************Please add other headers below*******************


//2 input data header(s) refered

//Defines Params ProcessorMulti_Processor_Detect_Params and Input Data ProcessorMulti_Processor_Detect_Data
#include<SimpleWheel/Processor/Detect/ProcessorMulti/Edit/ProcessorMulti_Processor_Detect_ParamsData.h>
//Defines Params SensorInternalEvent_Sensor_Joystick_Params and Input Data SensorInternalEvent_Sensor_Joystick_Data
#include<wheelchair/Sensor/Joystick/SensorInternalEvent/Edit/SensorInternalEvent_Sensor_Joystick_ParamsData.h>

//0 new input data type(s) created

/*! \def ProcessorMulti_Processor_ControlSimple_INPUTPORTSSIZE
	\brief Defines input port(s) info: number=2
	\details
	- Input Port #0: Buffer_Size = 10, Params_Type = ProcessorMulti_Processor_Detect_Params, Data_Type = ProcessorMulti_Processor_Detect_Data
	- Input Port #1: Buffer_Size = 10, Params_Type = SensorInternalEvent_Sensor_Joystick_Params, Data_Type = SensorInternalEvent_Sensor_Joystick_Data
*/
#define ProcessorMulti_Processor_ControlSimple_INPUTPORTSSIZE QList<int>()<<10<<10

//The Params is defined as below
#include<wheelchair/Processor/Control/ProcessorMulti/Edit/ProcessorMulti_Processor_Control_ParamsData.h>

/*! \class ProcessorMulti_Processor_ControlSimple_Params : public ProcessorMulti_Processor_Control_Params 
	\brief The Params of ProcessorMulti_Processor_ControlSimple.
	\details **Please add details below**

*/
class ROBOTSDK_OUTPUT ProcessorMulti_Processor_ControlSimple_Params : public ProcessorMulti_Processor_Control_Params 
{
public:
	/*! \fn ProcessorMulti_Processor_ControlSimple_Params()
		\brief The constructor of ProcessorMulti_Processor_ControlSimple_Params. [required]
		\details ****Please add details below****

	*/
	ProcessorMulti_Processor_ControlSimple_Params() 
	{
		
	}
	/*! \fn ~ProcessorMulti_Processor_ControlSimple_Params()
		\brief The destructor of ProcessorMulti_Processor_ControlSimple_Params. [required]
		\details *****Please add details below*****

	*/
	~ProcessorMulti_Processor_ControlSimple_Params() 
	{
		
	}
public:
	//*******************Please add variables below*******************

};

//The Output Data is defined as below
#include<wheelchair/Processor/Control/ProcessorMulti/Edit/ProcessorMulti_Processor_Control_ParamsData.h>

/*! \class ProcessorMulti_Processor_ControlSimple_Data : public ProcessorMulti_Processor_Control_Data 
	\brief The Data of ProcessorMulti_Processor_ControlSimple.
	\details **Please add details below**

*/
class ROBOTSDK_OUTPUT ProcessorMulti_Processor_ControlSimple_Data : public ProcessorMulti_Processor_Control_Data 
{
public:
	/*! \fn ProcessorMulti_Processor_ControlSimple_Data()
		\brief The constructor of ProcessorMulti_Processor_ControlSimple_Data. [required]
		\details ****Please add details below****

	*/
	ProcessorMulti_Processor_ControlSimple_Data() 
	{
		
	}
	/*! \fn ~ProcessorMulti_Processor_ControlSimple_Data()
		\brief The destructor of ProcessorMulti_Processor_ControlSimple_Data. [required]
		\details *****Please add details below*****

	*/
	~ProcessorMulti_Processor_ControlSimple_Data() 
	{
		
	}
public:
	//*******************Please add variables below*******************

};

/*! \def ProcessorMulti_Processor_ControlSimple_OUTPUTPORTSNUMBER
	\brief Defines output port(s) info: number = 1.
*/
#define ProcessorMulti_Processor_ControlSimple_OUTPUTPORTSNUMBER 1

/*! @}*/ 

#endif