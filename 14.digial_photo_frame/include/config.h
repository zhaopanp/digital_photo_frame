
#ifndef _CONFIG_H
#define _CONFIG_H

#include <stdio.h>
#include <debug_manager.h>

#define FB_DEVICE_NAME "/dev/fb0"

#define COLOR_BACKGROUND   0xE7DBB5  /* ���Ƶ�ֽ */
#define COLOR_FOREGROUND   0x514438  /* ��ɫ���� */

//#define DBG_PRINTF(...)  
#define DBG_PRINTF DebugPrint

#endif /* _CONFIG_H */
