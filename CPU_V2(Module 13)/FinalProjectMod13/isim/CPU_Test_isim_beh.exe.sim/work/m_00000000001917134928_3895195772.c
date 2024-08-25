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
static const char *ng0 = "C:/Users/Justin/Downloads/GBRAINS_CPU/FinalProjectMod13 nowrap/FinalProjectMod13/CPU_Test.v";
static const char *ng1 = "               C E C S 4 4 0    S E N I O R P R O J E C T   ";
static int ng2[] = {9, 0};
static int ng3[] = {1, 0};
static const char *ng4 = " ns";
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {1U, 0U};
static const char *ng7 = "dMem13_Fa18.dat";
static const char *ng8 = "iMem13_Fa18_w_isr_commented.dat";



static void Always_51_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3936);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 3048);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_60_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);

LAB4:    xsi_set_current_line(61, ng0);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t0);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    memset(t3, 0, 8);
    xsi_vlog_signed_unary_minus(t3, 32, t2, 32);
    t4 = ((char*)((ng3)));
    t5 = ((char*)((ng2)));
    xsi_vlog_setTimeFormat(*((unsigned int *)t3), *((unsigned int *)t4), ng4, 0, *((unsigned int *)t5));
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4696);
    *((int *)t2) = 1;
    t4 = (t0 + 4408);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(65, ng0);
    t5 = ((char*)((ng6)));
    t6 = (t0 + 3208);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4712);
    *((int *)t2) = 1;
    t4 = (t0 + 4408);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(67, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 3208);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 6732);
    t4 = *((char **)t2);
    xsi_vlogfile_readmemh(ng7, 0, ((char*)(t4)), 0, 0, 0, 0);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 6764);
    t4 = *((char **)t2);
    xsi_vlogfile_readmemh(ng8, 0, ((char*)(t4)), 0, 0, 0, 0);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 6788);
    t4 = *((char **)t2);
    xsi_vlogfile_readmemh(ng7, 0, ((char*)(t4)), 0, 0, 0, 0);
    goto LAB1;

}


extern void work_m_00000000001917134928_3895195772_init()
{
	static char *pe[] = {(void *)Always_51_0,(void *)Initial_60_1};
	xsi_register_didat("work_m_00000000001917134928_3895195772", "isim/CPU_Test_isim_beh.exe.sim/work/m_00000000001917134928_3895195772.didat");
	xsi_register_executes(pe);
}
