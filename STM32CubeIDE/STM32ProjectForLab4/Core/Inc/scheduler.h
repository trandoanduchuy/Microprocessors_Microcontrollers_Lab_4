/*
 * scheduler.h
 *
 *  Created on: Dec 15, 2023
 *      Author: Huy
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

/*Struct to store information required about each task*/
typedef struct
{
	/*Function pointer to the task (must be 'void (void)' function*/
	void (*pTask)(void);
	/*Delay (ticks) until the function will next be run*/
	unsigned int Delay;
	/*Interval (ticks) between subsequent runs*/
	unsigned int Period;
	/*Incremented (by scheduler) when task is due to execute*/
	unsigned char RunMe;

	unsigned int TaskID;

}sTask;

#define SCH_MAX_TASKS	40
#define NO_TASK_ID		0

#define RETURN_ERROR	0
#define RETURN_NORMAL	1


#define TICK	10

void SCH_Init(void);

void SCH_Update(void);

unsigned char SCH_Add_Task(void (*pFunction)(), unsigned int DELAY, unsigned int PERIOD);

void SCH_Dispatch_Tasks(void);

unsigned char SCH_Delete_Task(const unsigned char TASK_INDEX);

#endif /* INC_SCHEDULER_H_ */
