################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include FreeRTOS/portable/MemMang/subdir.mk
-include FreeRTOS/portable/GCC/ARM_CM3/subdir.mk
-include FreeRTOS/subdir.mk
-include Drivers/MCAL/USART/subdir.mk
-include Drivers/MCAL/RCC/subdir.mk
-include Drivers/MCAL/GPIO/subdir.mk
-include Drivers/MCAL/EXTI/subdir.mk
-include Drivers/HAL/LCD/subdir.mk
-include Drivers/HAL/Keypad/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Blue_Pill.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Blue_Pill.list \

OBJCOPY_BIN += \
Blue_Pill.bin \


# All Target
all: Blue_Pill.elf secondary-outputs

# Tool invocations
Blue_Pill.elf: $(OBJS) $(USER_OBJS) C:\Users\abdullah\Desktop\Blue_Pill\Blue_Pill\STM32F103C8TX_FLASH.ld
	arm-none-eabi-gcc -o "Blue_Pill.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\abdullah\Desktop\Blue_Pill\Blue_Pill\STM32F103C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Blue_Pill.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Blue_Pill.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Blue_Pill.list"
	@echo 'Finished building: $@'
	@echo ' '

Blue_Pill.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Blue_Pill.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
