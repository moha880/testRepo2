################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/DIO/subdir.mk
-include HAL/SSD/subdir.mk
-include HAL/KPD/subdir.mk
-include APP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
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
LSS += \
03-Drivers.lss \

FLASH_IMAGE += \
03-Drivers.hex \

EEPROM_IMAGE += \
03-Drivers.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: 03-Drivers.elf secondary-outputs

# Tool invocations
03-Drivers.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,03-Drivers.map -mmcu=atmega32 -o "03-Drivers.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

03-Drivers.lss: 03-Drivers.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S 03-Drivers.elf  >"03-Drivers.lss"
	@echo 'Finished building: $@'
	@echo ' '

03-Drivers.hex: 03-Drivers.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex 03-Drivers.elf  "03-Drivers.hex"
	@echo 'Finished building: $@'
	@echo ' '

03-Drivers.eep: 03-Drivers.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex 03-Drivers.elf  "03-Drivers.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: 03-Drivers.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 03-Drivers.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) 03-Drivers.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
