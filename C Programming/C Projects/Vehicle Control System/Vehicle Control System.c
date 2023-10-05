/***********************************************************************
 * Project1
 * Name : Abdullah Maher Elsayed
 ************************************************************************/
#include <stdio.h>

/*prototypes of functions*/
void state(char input);
void menu(void);
void traffic_light(void);
void room_temp(void);
void engine_temp(void);
void print_state(void);


/* The statue structure */
typedef struct{
	char* state;
	char* ac;
	int speed;
	float room_temp;
	char* controller;
	float engine_temp;
}data;

data car = {"ON","Not available yet",50,25.5,"Not available yet",99.3};    // global structure of data type (data) with name is car

int main (void)
{
	char choice1;

	printf("For Turning The Engine ON Press a\nFor Turning The Engine OFF Press b\nQuit Press c\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&choice1);

	state(choice1);

	return 0;
}

void state(char input)
{
	switch(input){
	case 'a':                      //turn the engine on case
		printf("Turning The Engine On\n");
		printf("\n");
		menu();
		break;
	case 'b':                     // turn the engine off case
		printf("Turning The Engine Off\n");
		printf("\n");
		main();
		break;
	case 'c':                     // quit system case
		printf("Quit The System\n");
	    break;
	default:
		main();
		break;
	}
	return;
}

void menu(void)
{
	char choice2 ;

	printf("For Turning The Engine OFF Press a\nFor Setting The Traffic Light Color Press b\nFor Setting The Room Temperature Press c\nFor Setting The Engine Temperature Press d\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&choice2);

	switch(choice2){
	case 'a':
		printf("Turning The Engine Off\n");    //turn the engine off
		printf("\n");
		main();
		break;
	case 'b':
		traffic_light();                       // reading traffic light state
		break;
	case 'c':
		room_temp();                          // reading room temperature
		break;
	case 'd':
		engine_temp();                       //reading engine temperature
		break;
	default:
		menu();
	}

}

void traffic_light(void)
{
	char light;

	printf("Enter The Required Color\tg for Green\to for Orange\tr for Red\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&light);

	switch(light){
	case 'g':                 // in case traffic light is green
		car.speed = 100;                 //setting speed of car is 100
		print_state();
		break;
	case 'o':                 // in case traffic light is orange
		car.speed = 30;              //setting speed of car is 30
		print_state();
		break;
	case 'r':                // in case traffic light is red
		car.speed = 0;              //setting speed of car is zero
		print_state();
		break;
	default:
		traffic_light();
	}
	menu();
}

void room_temp(void)
{
	int temp1;

	printf("Enter The Room Temperature\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&temp1);

	if(temp1 <= 10)
	{
		car.ac = "ON" ;            //in case the temp less than 10
		car.room_temp = 20.0;    // setting room temp
		print_state();
	}else if(temp1 > 30)
	{
		car.ac = "ON" ;           // in case the temp is greater than 30
		car.room_temp = 20.0;    // setting room temp
		print_state();
	}else
	{
		car.ac = "OFF" ;          // in case no need to AC
		print_state();
	}
	menu();
}

void engine_temp(void)
{
	int temp2;

	printf("Enter The Engine Temperature\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&temp2);

	if(temp2 <= 100)
	{
		car.controller = "ON";        // in case engine temp is low
		car.engine_temp = 125.0;     //setting engine temp
		print_state();
	}else if(temp2 > 150)
	{
		car.controller = "ON";        // in case engine temp is high
		car.engine_temp = 125.0;     // stting engine temp
		print_state();
	}else
	{
		car.controller = "OFF";         //in case engine temp is good
		print_state();
	}

	if(car.speed == 30)
		{
			car.ac = "ON";
			car .room_temp = car.room_temp *(5/4) + 1;
			car.controller = "ON";
			car.engine_temp = car.engine_temp * (5/4) + 1;

			print_state();
		}
}

void print_state(void)
{
	/*function to print state*/

	printf("Engine is %s\n",car.state); // Engine state
	printf("AC is %s\n",car.ac);   // AC state
	printf("Vehicle Speed is %d Km/Hr\n",car.speed);  //speed state
	printf("Room Temperature is %.1f C\n",car.room_temp);   //Room Temp
	printf("Engine Temperature Controller State is %s\n",car.controller);   //Controller of Engine Temp state
	printf("Engine Temperature is %.1f C\n",car.engine_temp);   // Engine Temp
	printf("\n");

	return;
}



