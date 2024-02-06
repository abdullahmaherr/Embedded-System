################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/HAL/Keypad/keypad.c 

OBJS += \
./Drivers/HAL/Keypad/keypad.o 

C_DEPS += \
./Drivers/HAL/Keypad/keypad.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/HAL/Keypad/keypad.o: ../Drivers/HAL/Keypad/keypad.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -DDEBUG -c -I"C:/Users/abdullah/Desktop/Blue_Pill/Blue_Pill/Drivers/Inc" -I"C:/Users/abdullah/Desktop/Blue_Pill/Blue_Pill/FreeRTOS/include" -I"C:/Users/abdullah/Desktop/Blue_Pill/Blue_Pill/Inc" -I"C:/Users/abdullah/Desktop/Blue_Pill/Blue_Pill/CMSIS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/HAL/Keypad/keypad.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

