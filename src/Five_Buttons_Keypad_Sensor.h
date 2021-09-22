#ifndef FIVE_BUTTONS_KEYPAD_SENSOR_H
#define FIVE_BUTTONS_KEYPAD_SENSOR_H


/*============================================================================*/
/* Inclusions */
/*============================================================================*/
/* Attributes */
#include "E_Button_Id.h"


/* Required interfaces */
#include "Analogic_Input_5.h"


/* Sent events */
#include "Any_Button_Pressed.h"
#include "Button_Pressed.h"


/*============================================================================*/
/* Component_Type */
/*============================================================================*/
typedef struct {

    /* Required interfaces */
    const Analogic_Input_5* Analog_Pin;

    /* Sent events */
    Button_Pressed Select_Button_Pressed;
    Button_Pressed Up_Button_Pressed;
    Button_Pressed Down_Button_Pressed;
    Button_Pressed Left_Button_Pressed;
    Button_Pressed Right_Button_Pressed;
    Any_Button_Pressed Any_Button_Pressed;

    /* Configuration_Parameters */
    T_Voltage_5 No_Button_Threshold;
    T_Voltage_5 Select_Button_Threshold;
    T_Voltage_5 Left_Button_Threshold;
    T_Voltage_5 Down_Button_Threshold;
    T_Voltage_5 Up_Button_Threshold;
    
} Five_Buttons_Keypad_Sensor;


/*============================================================================*/
/* Component_Operations */
/*============================================================================*/
void Five_Buttons_Keypad__Cyclic( const Five_Buttons_Keypad_Sensor* Me );


#endif