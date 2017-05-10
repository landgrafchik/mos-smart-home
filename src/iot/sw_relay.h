#ifndef __SW_RELAY_H__
#define __SW_RELAY_H__

/*******************************************************************************
 *** TYPEDEF
 ******************************************************************************/
typedef struct
{
	in_out_t pin;
	bool mqtt;
} sw_relay_t;

/*******************************************************************************
 *** EXTERN VARIABLES
 ******************************************************************************/
extern sw_relay_t sw_relay[NUM_SW_RELAY_IOT];

/*******************************************************************************
 *** PROTOTYPES
 ******************************************************************************/
void switch_relay_init(void);

#endif  //__SW_RELAY_H__