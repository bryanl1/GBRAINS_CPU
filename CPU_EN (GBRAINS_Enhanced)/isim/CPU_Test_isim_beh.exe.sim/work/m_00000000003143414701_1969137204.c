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
static const char *ng0 = "C:/Users/Justin/Desktop/School/2018 Fall/CECS440/XilinxProjects/GBRAINS/FPALU_64.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {30U, 0U};
static unsigned int ng6[] = {31U, 0U};
static unsigned int ng7[] = {19U, 0U};
static unsigned int ng8[] = {4294967295U, 4294967295U, 4294967295U, 4294967295U};



static void Always_22_0(char *t0)
{
    char t4[8];
    char t16[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    double t10;
    char *t11;
    char *t12;
    double t13;
    double t14;
    char *t15;

LAB0:    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 4440);
    *((int *)t2) = 1;
    t3 = (t0 + 4152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(22, ng0);

LAB5:    xsi_set_current_line(23, ng0);
    t5 = (t0 + 2000U);
    t6 = *((char **)t5);
    *((int *)t4) = *((int *)t6);
    t5 = (t4 + 4);
    t7 = (t6 + 8);
    *((int *)t5) = *((int *)t7);
    t8 = (t0 + 3040);
    xsi_vlogvar_assign_value_double(t8, *((double *)t4), 0);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2160U);
    t3 = *((char **)t2);
    *((int *)t4) = *((int *)t3);
    t2 = (t4 + 4);
    t5 = (t3 + 8);
    *((int *)t2) = *((int *)t5);
    t6 = (t0 + 3200);
    xsi_vlogvar_assign_value_double(t6, *((double *)t4), 0);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t9 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t9 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t9 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t9 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t9 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t9 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t9 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t9 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng8)));
    t10 = xsi_vlog_convert_to_real(t2, 64, 2);
    t5 = (t0 + 2880);
    xsi_vlogvar_assign_value_double(t5, t10, 0);

LAB23:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2880);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t10 = *((double *)t6);
    t7 = xsi_vlog_convert_real_to_bits(t10, t16, 64);
    t8 = (t0 + 2720);
    xsi_vlogvar_assign_value(t8, t16, 0, 0, 64);
    goto LAB2;

LAB7:    xsi_set_current_line(27, ng0);
    t5 = (t0 + 3040);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = *((double *)t7);
    t8 = (t0 + 2880);
    xsi_vlogvar_assign_value_double(t8, t10, 0);
    goto LAB23;

LAB9:    xsi_set_current_line(28, ng0);
    t5 = (t0 + 3200);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = *((double *)t7);
    t8 = (t0 + 2880);
    xsi_vlogvar_assign_value_double(t8, t10, 0);
    goto LAB23;

LAB11:    xsi_set_current_line(29, ng0);
    t5 = (t0 + 3040);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = *((double *)t7);
    t8 = (t0 + 3200);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = *((double *)t12);
    t14 = (t10 + t13);
    t15 = (t0 + 2880);
    xsi_vlogvar_assign_value_double(t15, t14, 0);
    goto LAB23;

LAB13:    xsi_set_current_line(30, ng0);
    t5 = (t0 + 3040);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = *((double *)t7);
    t8 = (t0 + 3200);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = *((double *)t12);
    t14 = (t10 - t13);
    t15 = (t0 + 2880);
    xsi_vlogvar_assign_value_double(t15, t14, 0);
    goto LAB23;

LAB15:    xsi_set_current_line(31, ng0);
    t5 = (t0 + 3040);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = *((double *)t7);
    t8 = (t0 + 3200);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = *((double *)t12);
    t14 = (t10 * t13);
    t15 = (t0 + 2880);
    xsi_vlogvar_assign_value_double(t15, t14, 0);
    goto LAB23;

LAB17:    xsi_set_current_line(32, ng0);
    t5 = (t0 + 3040);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = *((double *)t7);
    t8 = (t0 + 3200);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = *((double *)t12);
    t14 = (t10 / t13);
    t15 = (t0 + 2880);
    xsi_vlogvar_assign_value_double(t15, t14, 0);
    goto LAB23;

LAB19:    xsi_set_current_line(33, ng0);
    t5 = (t0 + 2880);
    xsi_vlogvar_assign_value_double(t5, 0.00000000000000000, 0);
    goto LAB23;

}


extern void work_m_00000000003143414701_1969137204_init()
{
	static char *pe[] = {(void *)Always_22_0};
	xsi_register_didat("work_m_00000000003143414701_1969137204", "isim/CPU_Test_isim_beh.exe.sim/work/m_00000000003143414701_1969137204.didat");
	xsi_register_executes(pe);
}
