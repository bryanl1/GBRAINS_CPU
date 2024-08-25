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
static const char *ng0 = "C:/Users/Justin/Downloads/GBRAINS_CPU/FinalProjectMod13 nowrap/FinalProjectMod13/PROGRAM_COUNTER.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {4, 0};



static void Always_23_0(char *t0)
{
    char t13[8];
    char t15[8];
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
    int t14;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);
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

LAB6:    xsi_set_current_line(27, ng0);

LAB8:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t13, 2, 2, 2U, t4, 1, t3, 1);

LAB9:    t2 = ((char*)((ng2)));
    t14 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t14 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng3)));
    t14 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t14 == 1)
        goto LAB12;

LAB13:
LAB15:
LAB14:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);

LAB16:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(25, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB7;

LAB10:    xsi_set_current_line(29, ng0);
    t5 = (t0 + 1688U);
    t11 = *((char **)t5);
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t11, 0, 0, 32, 0LL);
    goto LAB16;

LAB12:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 2088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t5, 32, t11, 32);
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t15, 0, 0, 32, 0LL);
    goto LAB16;

}


extern void work_m_00000000002794870716_1393068579_init()
{
	static char *pe[] = {(void *)Always_23_0};
	xsi_register_didat("work_m_00000000002794870716_1393068579", "isim/CPU_Test_isim_beh.exe.sim/work/m_00000000002794870716_1393068579.didat");
	xsi_register_executes(pe);
}
