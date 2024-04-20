################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/HAL/LCD/lcd.c 

OBJS += \
./Drivers/HAL/LCD/lcd.o 

C_DEPS += \
./Drivers/HAL/LCD/lcd.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/HAL/LCD/lcd.o: ../Drivers/HAL/LCD/lcd.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -DDEBUG -c -I"C:/Users/abdullah/Desktop/Blue_Pill/Blue_Pill/Drivers/Inc" -I"C:/Users/abdullah/Desktop/Blue_Pill/Blue_Pill/FreeRTOS/include" -I"C:/Users/abdullah/Desktop/Blue_Pill/Blue_Pill/Inc" -I"C:/Users/abdullah/Desktop/Blue_Pill/Blue_Pill/CMSIS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/HAL/LCD/lcd.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

