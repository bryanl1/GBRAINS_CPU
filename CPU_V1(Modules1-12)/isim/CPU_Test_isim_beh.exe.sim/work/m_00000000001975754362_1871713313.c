/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Justin/Downloads/GBRAINS_CPU/CPU_V1(Modules1-12)/REG32.v";
static unsigned int ng1[] = {0U, 0U};



static void Always_20_0(char *t0)
{
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t2) != 0)
        goto LAB10;

LAB11:    t5 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB12;

LAB13:    t18 = *((unsigned int *)t14);
    t19 = (~(t18));
    t20 = *((unsigned int *)t5);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t5) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t14) > 0)
        goto LAB18;

LAB19:    memcpy(t13, t23, 8);

LAB20:    t24 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t24, t13, 0, 0, 32, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(21, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB7;

LAB8:    *((unsigned int *)t14) = 1;
    goto LAB11;

LAB10:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB12:    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    goto LAB13;

LAB14:    t11 = (t0 + 1928);
    t22 = (t11 + 56U);
    t23 = *((char **)t22);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t13, 32, t12, 32, t23, 32);
    goto LAB20;

LAB18:    memcpy(t13, t12, 8);
    goto LAB20;

}


extern void work_m_00000000001975754362_1871713313_init()
{
	static char *pe[] = {(void *)Always_20_0};
	xsi_register_didat("work_m_00000000001975754362_1871713313", "isim/CPU_Test_isim_beh.exe.sim/work/m_00000000001975754362_1871713313.didat");
	xsi_register_executes(pe);
}
