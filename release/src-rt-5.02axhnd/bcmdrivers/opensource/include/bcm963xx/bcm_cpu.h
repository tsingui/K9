/*
<:copyright-BRCM:2013:DUAL/GPL:standard 

   Copyright (c) 2013 Broadcom 
   All Rights Reserved

Unless you and Broadcom execute a separate written software license
agreement governing use of this software, this software is licensed
to you under the terms of the GNU General Public License version 2
(the "GPL"), available at http://www.broadcom.com/licenses/GPLv2.php,
with the following added to such license:

   As a special exception, the copyright holders of this software give
   you permission to link this software with independent modules, and
   to copy and distribute the resulting executable under terms of your
   choice, provided that you also meet, for each linked independent
   module, the terms and conditions of the license of that module.
   An independent module is a module which is not derived from this
   software.  The special exception does not apply to any modifications
   of the software.

Not withstanding the above, under no circumstances may you combine
this software in any way with any other Broadcom software provided
under a license other than the GPL, without Broadcom's express prior
written consent.

:>
*/

#ifndef __BCM_CPU_H
#define __BCM_CPU_H

#if defined(CONFIG_BCM963268)
#include <63268_cpu.h>
#endif
#if defined(CONFIG_BCM96838)
#include <6838_cpu.h>
#endif
#if defined(CONFIG_BCM963138)
#include <63138_cpu.h>
#endif
#if defined(CONFIG_BCM960333)
#include <60333_cpu.h>
#endif
#if defined(CONFIG_BCM963381)
#include <63381_cpu.h>
#endif
#if defined(CONFIG_BCM963148)
#include <63148_cpu.h>
#endif
#if defined(CONFIG_BCM96848)
#include <6848_cpu.h>
#endif
#if defined(CONFIG_BCM94908)
#include <4908_cpu.h>
#endif
#if defined(CONFIG_BCM96858)
#include <6858_cpu.h>
#endif
#if defined(CONFIG_BCM96836)
#include <6836_cpu.h>
#endif
#if defined(CONFIG_BCM963158)
#include <63158_cpu.h>
#endif
#if defined(CONFIG_BCM96846)
#include <6846_cpu.h>
#endif
#if defined(CONFIG_BCM96856)
#include <6856_cpu.h>
#endif
#endif

