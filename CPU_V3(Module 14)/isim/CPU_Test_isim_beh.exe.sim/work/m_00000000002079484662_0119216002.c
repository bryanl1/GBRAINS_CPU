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
static const char *ng0 = "C:/Users/Justin/Downloads/GBRAINS_CPU/FinalProjectMod14_1/FinalProjectMod14/REGFILE32.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};



static void Always_33_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t33[8];
    char t50[8];
    char t62[8];
    char t63[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4464);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);
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

LAB6:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(35, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2728);
    t15 = (t0 + 2728);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2728);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t21, 32, 1);
    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (!(t23));
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB8;

LAB9:    goto LAB7;

LAB8:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB9;

LAB10:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t33, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t23 = *((unsigned int *)t5);
    t26 = *((unsigned int *)t4);
    t29 = (t23 ^ t26);
    t30 = *((unsigned int *)t11);
    t34 = *((unsigned int *)t12);
    t35 = (t30 ^ t34);
    t36 = (t29 | t35);
    t37 = *((unsigned int *)t11);
    t38 = *((unsigned int *)t12);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB16;

LAB13:    if (t39 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t33) = 1;

LAB16:    memset(t14, 0, 8);
    t16 = (t33 + 4);
    t42 = *((unsigned int *)t16);
    t43 = (~(t42));
    t44 = *((unsigned int *)t33);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t16) != 0)
        goto LAB19;

LAB20:    t18 = (t14 + 4);
    t47 = *((unsigned int *)t14);
    t48 = *((unsigned int *)t18);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB21;

LAB22:    t57 = *((unsigned int *)t14);
    t58 = (~(t57));
    t59 = *((unsigned int *)t18);
    t60 = (t58 || t59);
    if (t60 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t18) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t14) > 0)
        goto LAB27;

LAB28:    memcpy(t13, t61, 8);

LAB29:    t55 = (t0 + 2728);
    t64 = (t0 + 2728);
    t65 = (t64 + 72U);
    t66 = *((char **)t65);
    t67 = (t0 + 2728);
    t68 = (t67 + 64U);
    t69 = *((char **)t68);
    t70 = (t0 + 1528U);
    t71 = *((char **)t70);
    xsi_vlog_generic_convert_array_indices(t62, t63, t66, t69, 2, 1, t71, 5, 2);
    t70 = (t62 + 4);
    t72 = *((unsigned int *)t70);
    t24 = (!(t72));
    t73 = (t63 + 4);
    t74 = *((unsigned int *)t73);
    t27 = (!(t74));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB30;

LAB31:    goto LAB12;

LAB15:    t15 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t14) = 1;
    goto LAB20;

LAB19:    t17 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB20;

LAB21:    t19 = (t0 + 2728);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 2728);
    t25 = (t22 + 72U);
    t51 = *((char **)t25);
    t52 = (t0 + 2728);
    t53 = (t52 + 64U);
    t54 = *((char **)t53);
    t55 = (t0 + 1528U);
    t56 = *((char **)t55);
    xsi_vlog_generic_get_array_select_value(t50, 32, t21, t51, t54, 2, 1, t56, 5, 2);
    goto LAB22;

LAB23:    t55 = (t0 + 2008U);
    t61 = *((char **)t55);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t13, 32, t50, 32, t61, 32);
    goto LAB29;

LAB27:    memcpy(t13, t50, 8);
    goto LAB29;

LAB30:    t75 = *((unsigned int *)t62);
    t76 = *((unsigned int *)t63);
    t31 = (t75 - t76);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t55, t13, 0, *((unsigned int *)t63), t32, 0LL);
    goto LAB31;

}

static void Cont_42_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1688U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 4576);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 4480);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_43_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1848U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 4640);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 4496);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000002079484662_0119216002_init()
{
	static char *pe[] = {(void *)Always_33_0,(void *)Cont_42_1,(void *)Cont_43_2};
	xsi_register_didat("work_m_00000000002079484662_0119216002", "isim/CPU_Test_isim_beh.exe.sim/work/m_00000000002079484662_0119216002.didat");
	xsi_register_executes(pe);
}
