/*
 * $QNXLicenseC:
 * Copyright 2007, 2008, QNX Software Systems.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"). You
 * may not reproduce, modify or distribute this software except in
 * compliance with the License. You may obtain a copy of the License
 * at: http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTIES OF ANY KIND, either express or implied.
 *
 * This file may contain contributions from others, either as
 * contributors under the License or as licensors under other terms.
 * Please review this entire file for other proprietary rights or license
 * notices, as well as the QNX Development Suite License Guide at
 * http://licensing.qnx.com/license-guide/ for other information.
 * $
 */

typedef struct _gpio_cmd {
	uint32_t	off;	/* pin or register depending on command */
	uint8_t		val;
} gpio_cmd_t;

#define DCMD_GPIO_PIN_READ			__DIOTF	(_DCMD_MISC, 0x01, gpio_cmd_t)
#define DCMD_GPIO_PIN_WRITE			__DIOT	(_DCMD_MISC, 0x02, gpio_cmd_t)
#define DCMD_GPIO_REG_READ			__DIOTF	(_DCMD_MISC, 0x05, gpio_cmd_t)
#define DCMD_GPIO_REG_WRITE			__DIOT	(_DCMD_MISC, 0x06, gpio_cmd_t)



__SRCVERSION( "$URL: http://svn/product/branches/6.5.0/SP1/hardware/devc/public/hw/cp2103.h $ $Rev: 647536 $" )
