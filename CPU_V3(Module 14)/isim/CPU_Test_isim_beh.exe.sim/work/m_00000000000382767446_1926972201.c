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
static const char *ng0 = "C:/Users/Justin/Downloads/GBRAINS_CPU/FinalProjectMod14_1/FinalProjectMod14/MIPS_32.v";
static unsigned int ng1[] = {3U, 3U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {10U, 0U};
static unsigned int ng13[] = {11U, 0U};
static unsigned int ng14[] = {12U, 0U};
static int ng15[] = {1, 0};
static unsigned int ng16[] = {1U, 1U};
static unsigned int ng17[] = {13U, 0U};
static unsigned int ng18[] = {14U, 0U};
static unsigned int ng19[] = {22U, 0U};
static unsigned int ng20[] = {23U, 0U};
static unsigned int ng21[] = {24U, 0U};
static unsigned int ng22[] = {25U, 0U};
static unsigned int ng23[] = {15U, 0U};
static int ng24[] = {1, 0, 0, 0};
static unsigned int ng25[] = {16U, 0U};
static unsigned int ng26[] = {17U, 0U};
static int ng27[] = {4, 0, 0, 0};
static unsigned int ng28[] = {18U, 0U};
static unsigned int ng29[] = {19U, 0U};
static unsigned int ng30[] = {20U, 0U};
static unsigned int ng31[] = {4294967295U, 0U};
static unsigned int ng32[] = {21U, 0U};
static unsigned int ng33[] = {1020U, 0U};



static void Always_30_0(char *t0)
{
    char t8[16];
    char t10[8];
    char t17[8];
    char t32[8];
    char t46[8];
    char t55[8];
    char t71[8];
    char t79[8];
    char t116[8];
    char t117[8];
    char t121[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t118;
    char *t119;
    char *t120;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    int t148;

LAB0:    t1 = (t0 + 6544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 6864);
    *((int *)t2) = 1;
    t3 = (t0 + 6576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 5304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    t6 = (t0 + 5464);
    xsi_vlogvar_assign_value(t6, t4, 1, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 4904U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng17)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng18)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng19)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng20)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng21)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng22)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng23)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng25)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng26)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng28)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng29)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng30)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng32)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t7 == 1)
        goto LAB57;

LAB58:
LAB60:
LAB59:    xsi_set_current_line(160, ng0);

LAB416:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 4584U);
    t4 = *((char **)t2);
    t2 = (t0 + 5624);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5304);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    t5 = (t0 + 5464);
    xsi_vlogvar_assign_value(t5, t2, 1, 0, 1);

LAB61:    goto LAB2;

LAB7:    xsi_set_current_line(34, ng0);

LAB62:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 4584U);
    t5 = *((char **)t4);
    t4 = (t0 + 5624);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5304);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    t5 = (t0 + 5464);
    xsi_vlogvar_assign_value(t5, t2, 1, 0, 1);
    goto LAB61;

LAB9:    xsi_set_current_line(38, ng0);

LAB63:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 4744U);
    t5 = *((char **)t4);
    t4 = (t0 + 5624);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5304);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    t5 = (t0 + 5464);
    xsi_vlogvar_assign_value(t5, t2, 1, 0, 1);
    goto LAB61;

LAB11:    xsi_set_current_line(42, ng0);

LAB64:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 4584U);
    t5 = *((char **)t4);
    t4 = (t0 + 4744U);
    t6 = *((char **)t4);
    xsi_vlog_unsigned_add(t8, 33, t5, 32, t6, 32);
    t4 = (t0 + 5624);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    t9 = (t0 + 5464);
    xsi_vlogvar_assign_value(t9, t8, 32, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4584U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t6 = ((char*)((ng3)));
    memset(t17, 0, 8);
    t9 = (t10 + 4);
    t18 = (t6 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t6);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t9);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB68;

LAB65:    if (t28 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t17) = 1;

LAB68:    memset(t32, 0, 8);
    t33 = (t17 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t33) != 0)
        goto LAB71;

LAB72:    t40 = (t32 + 4);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t40);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB73;

LAB74:    memcpy(t79, t32, 8);

LAB75:    t110 = (t79 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t79);
    t114 = (t113 & t112);
    t115 = (t114 != 0);
    if (t115 > 0)
        goto LAB87;

LAB88:
LAB89:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 4584U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t6 = ((char*)((ng2)));
    memset(t17, 0, 8);
    t9 = (t10 + 4);
    t18 = (t6 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t6);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t9);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB106;

LAB103:    if (t28 != 0)
        goto LAB105;

LAB104:    *((unsigned int *)t17) = 1;

LAB106:    memset(t32, 0, 8);
    t33 = (t17 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t33) != 0)
        goto LAB109;

LAB110:    t40 = (t32 + 4);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t40);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB111;

LAB112:    memcpy(t79, t32, 8);

LAB113:    t110 = (t79 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t79);
    t114 = (t113 & t112);
    t115 = (t114 != 0);
    if (t115 > 0)
        goto LAB125;

LAB126:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 5304);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB127:    goto LAB61;

LAB13:    xsi_set_current_line(51, ng0);

LAB141:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 4584U);
    t5 = *((char **)t4);
    t4 = (t0 + 4744U);
    t6 = *((char **)t4);
    xsi_vlog_unsigned_minus(t8, 33, t5, 32, t6, 32);
    t4 = (t0 + 5624);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    t9 = (t0 + 5464);
    xsi_vlogvar_assign_value(t9, t8, 32, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4584U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t6 = ((char*)((ng2)));
    memset(t17, 0, 8);
    t9 = (t10 + 4);
    t18 = (t6 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t6);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t9);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB145;

LAB142:    if (t28 != 0)
        goto LAB144;

LAB143:    *((unsigned int *)t17) = 1;

LAB145:    memset(t32, 0, 8);
    t33 = (t17 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB146;

LAB147:    if (*((unsigned int *)t33) != 0)
        goto LAB148;

LAB149:    t40 = (t32 + 4);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t40);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB150;

LAB151:    memcpy(t79, t32, 8);

LAB152:    t110 = (t79 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t79);
    t114 = (t113 & t112);
    t115 = (t114 != 0);
    if (t115 > 0)
        goto LAB164;

LAB165:
LAB166:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4584U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t6 = ((char*)((ng3)));
    memset(t17, 0, 8);
    t9 = (t10 + 4);
    t18 = (t6 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t6);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t9);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB183;

LAB180:    if (t28 != 0)
        goto LAB182;

LAB181:    *((unsigned int *)t17) = 1;

LAB183:    memset(t32, 0, 8);
    t33 = (t17 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB184;

LAB185:    if (*((unsigned int *)t33) != 0)
        goto LAB186;

LAB187:    t40 = (t32 + 4);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t40);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB188;

LAB189:    memcpy(t79, t32, 8);

LAB190:    t110 = (t79 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t79);
    t114 = (t113 & t112);
    t115 = (t114 != 0);
    if (t115 > 0)
        goto LAB202;

LAB203:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 5304);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB204:    goto LAB61;

LAB15:    xsi_set_current_line(60, ng0);

LAB218:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 4584U);
    t5 = *((char **)t4);
    t4 = (t0 + 4744U);
    t6 = *((char **)t4);
    xsi_vlog_unsigned_add(t8, 33, t5, 32, t6, 32);
    t4 = (t0 + 5624);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    t9 = (t0 + 5464);
    xsi_vlogvar_assign_value(t9, t8, 32, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 5624);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 4584U);
    t9 = *((char **)t6);
    memset(t10, 0, 8);
    t6 = (t5 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB220;

LAB219:    t18 = (t9 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB220;

LAB223:    if (*((unsigned int *)t5) < *((unsigned int *)t9))
        goto LAB221;

LAB222:    memset(t17, 0, 8);
    t33 = (t10 + 4);
    t11 = *((unsigned int *)t33);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB224;

LAB225:    if (*((unsigned int *)t33) != 0)
        goto LAB226;

LAB227:    t40 = (t17 + 4);
    t16 = *((unsigned int *)t17);
    t19 = *((unsigned int *)t40);
    t20 = (t16 || t19);
    if (t20 > 0)
        goto LAB228;

LAB229:    memcpy(t55, t17, 8);

LAB230:    t110 = (t55 + 4);
    t63 = *((unsigned int *)t110);
    t64 = (~(t63));
    t65 = *((unsigned int *)t55);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB243;

LAB244:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 5304);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB245:    goto LAB61;

LAB17:    xsi_set_current_line(67, ng0);

LAB246:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 4584U);
    t5 = *((char **)t4);
    t4 = (t0 + 4744U);
    t6 = *((char **)t4);
    xsi_vlog_unsigned_minus(t8, 33, t5, 32, t6, 32);
    t4 = (t0 + 5624);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    t9 = (t0 + 5464);
    xsi_vlogvar_assign_value(t9, t8, 32, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 4584U);
    t4 = *((char **)t2);
    t2 = (t0 + 4744U);
    t5 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t4 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB248;

LAB247:    t6 = (t5 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB248;

LAB251:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB249;

LAB250:    t18 = (t10 + 4);
    t11 = *((unsigned int *)t18);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB252;

LAB253:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 5304);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB254:    goto LAB61;

LAB19:    xsi_set_current_line(74, ng0);

LAB255:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 4584U);
    t5 = *((char **)t4);
    t4 = (t0 + 4744U);
    t6 = *((char **)t4);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t5, 32, t6, 32);
    t4 = (t0 + 5624);
    xsi_vlogvar_assign_value(t4, t10, 0, 0, 32);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 5624);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t32, 0, 8);
    t6 = (t32 + 4);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t32) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t6) = t16;
    t18 = ((char*)((ng3)));
    memset(t46, 0, 8);
    t31 = (t32 + 4);
    t33 = (t18 + 4);
    t19 = *((unsigned int *)t32);
    t20 = *((unsigned int *)t18);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t31);
    t23 = *((unsigned int *)t33);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t31);
    t27 = *((unsigned int *)t33);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB259;

LAB256:    if (t28 != 0)
        goto LAB258;

LAB257:    *((unsigned int *)t46) = 1;

LAB259:    memset(t17, 0, 8);
    t40 = (t46 + 4);
    t34 = *((unsigned int *)t40);
    t35 = (~(t34));
    t36 = *((unsigned int *)t46);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB260;

LAB261:    if (*((unsigned int *)t40) != 0)
        goto LAB262;

LAB263:    t45 = (t17 + 4);
    t41 = *((unsigned int *)t17);
    t42 = *((unsigned int *)t45);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB264;

LAB265:    t48 = *((unsigned int *)t17);
    t49 = (~(t48));
    t50 = *((unsigned int *)t45);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB266;

LAB267:    if (*((unsigned int *)t45) > 0)
        goto LAB268;

LAB269:    if (*((unsigned int *)t17) > 0)
        goto LAB270;

LAB271:    memcpy(t10, t54, 8);

LAB272:    t56 = (t0 + 5624);
    xsi_vlogvar_assign_value(t56, t10, 0, 0, 32);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5304);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    t5 = (t0 + 5464);
    xsi_vlogvar_assign_value(t5, t2, 1, 0, 1);
    goto LAB61;

LAB21:    xsi_set_current_line(79, ng0);

LAB273:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 4584U);
    t5 = *((char **)t4);
    t4 = (t0 + 4744U);
    t6 = *((char **)t4);
    memset(t32, 0, 8);
    t4 = (t5 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB275;

LAB274:    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB275;

LAB278:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB276;

LAB277:    memset(t17, 0, 8);
    t31 = (t32 + 4);
    t11 = *((unsigned int *)t31);
    t12 = (~(t11));
    t13 = *((unsigned int *)t32);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB279;

LAB280:    if (*((unsigned int *)t31) != 0)
        goto LAB281;

LAB282:    t39 = (t17 + 4);
    t16 = *((unsigned int *)t17);
    t19 = *((unsigned int *)t39);
    t20 = (t16 || t19);
    if (t20 > 0)
        goto LAB283;

LAB284:    t21 = *((unsigned int *)t17);
    t22 = (~(t21));
    t23 = *((unsigned int *)t39);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB285;

LAB286:    if (*((unsigned int *)t39) > 0)
        goto LAB287;

LAB288:    if (*((unsigned int *)t17) > 0)
        goto LAB289;

LAB290:    memcpy(t10, t44, 8);

LAB291:    t45 = (t0 + 5624);
    xsi_vlogvar_assign_value(t45, t10, 0, 0, 32);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5304);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    t5 = (t0 + 5464);
    xsi_vlogvar_assign_value(t5, t2, 1, 0, 1);
    goto LAB61;

LAB23:    xsi_set_current_line(83, ng0);

LAB292:    xsi_set_current_line(84, ng0);
    t4 = (t0 + 4584U);
    t5 = *((char **)t4);
    t4 = (t0 + 4744U);
    t6 = *((char **)t4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t4 = (t5 + 4);
    t9 = (t6 + 4);
    t18 = (t10 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t9);
    t16 = (t14 | t15);
    *((unsigned int *)t18) = t16;
    t19 = *((unsigned int *)t18);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB293;

LAB294:
LAB295:    t39 = (t0 + 5624);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 32);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5304);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    t5 = (t0 + 5464);
    xsi_vlogvar_assign_value(t5, t2, 1, 0, 1);
    goto LAB61;

LAB25:    xsi_set_current_line(87, ng0);

LAB296:    xsi_set_current_line(88, ng0);
    t4 = (t0 + 4584U);
    t5 = *((char **)t4);
    t4 = (t0 + 4744U);
    t6 = *((char **)t4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t4 = (t5 + 4);
    t9 = (t6 + 4);
    t18 = (t10 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t9);
    t16 = (t14 | t15);
    *((unsigned int *)t18) = t16;
    t19 = *((unsigned int *)t18);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB297;

LAB298:
LAB299:    t39 = (t0 + 5624);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 32);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5304);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    t5 = (t0 + 5464);
    xsi_vlogvar_assign_value(t5, t2, 1, 0, 1);
    goto LAB61;

LAB27:    xsi_set_current_line(91, ng0);

LAB300:    xsi_set_current_line(92, ng0);
    t4 = (t0 + 4584U);
    t5 = *((char **)t4);
    t4 = (t0 + 4744U);
    t6 = *((char **)t4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t4 = (t5 + 4);
    t9 = (t6 + 4);
    t18 = (t10 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t9);
    t16 = (t14 | t15);
    *((unsigned int *)t18) = t16;
    t19 = *((unsigned int *)t18);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB301;

LAB302:
LAB303:    t31 = (t0 + 5624);
    xsi_vlogvar_assign_value(t31, t10, 0, 0, 32);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5304);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    t5 = (t0 + 5464);
    xsi_vlogvar_assign_value(t5, t2, 1, 0, 1);
    goto LAB61;

LAB29:    xsi_set_current_line(95, ng0);

LAB304:    xsi_set_current_line(96, ng0);
    t4 = (t0 + 4584U);
    t5 = *((char **)t4);
    t4 = (t0 + 4744U);
    t6 = *((char **)t4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t13 = (t11 | t12);
    *((unsigned int *)t17) = t13;
    t4 = (t5 + 4);
    t9 = (t6 + 4);
    t18 = (t17 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t9);
    t16 = (t14 | t15);
    *((unsigned int *)t18) = t16;
    t19 = *((unsigned int *)t18);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB305;

LAB306:
LAB307:    memset(t10, 0, 8);
    t39 = (t10 + 4);
    t40 = (t17 + 4);
    t36 = *((unsigned int *)t17);
    t37 = (~(t36));
    *((unsigned int *)t10) = t37;
    *((unsigned int *)t39) = 0;
    if (*((unsigned int *)t40) != 0)
        goto LAB309;

LAB308:    t48 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t48 & 4294967295U);
    t49 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t49 & 4294967295U);
    t44 = (t0 + 5624);
    xsi_vlogvar_assign_value(t44, t10, 0, 0, 32);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5304);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    t5 = (t0 + 5464);
    xsi_vlogvar_assign_value(t5, t2, 1, 0, 1);
    goto LAB61;

LAB31:    xsi_set_current_line(99, ng0);

LAB310:    xsi_set_current_line(100, ng0);
    t4 = (t0 + 4744U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng15)));
    xsi_vlog_unsigned_lshift(t8, 33, t5, 32, t4, 32);
    t6 = (t0 + 5624);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    t9 = (t0 + 5464);
    xsi_vlogvar_assign_value(t9, t8, 32, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng16)));
    t4 = (t0 + 5304);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB61;

LAB33:    xsi_set_current_line(103, ng0);

LAB311:    xsi_set_current_line(104, ng0);
    t4 = (t0 + 4744U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng15)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 32, t5, 32, t4, 32);
    t6 = (t0 + 4744U);
    t9 = *((char **)t6);
    memset(t17, 0, 8);
    t6 = (t17 + 4);
    t18 = (t9 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t17) = t13;
    t14 = *((unsigned int *)t18);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t6) = t16;
    xsi_vlogtype_concat(t8, 33, 33, 2U, t17, 1, t10, 32);
    t31 = (t0 + 5624);
    xsi_vlogvar_assign_value(t31, t8, 0, 0, 32);
    t33 = (t0 + 5464);
    xsi_vlogvar_assign_value(t33, t8, 32, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng16)));
    t4 = (t0 + 5304);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB61;

LAB35:    xsi_set_current_line(107, ng0);

LAB312:    xsi_set_current_line(108, ng0);
    t4 = (t0 + 4744U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t4 = (t10 + 4);
    t6 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 1);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 1);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 2147483647U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 2147483647U);
    t9 = (t0 + 4744U);
    t18 = *((char **)t9);
    memset(t17, 0, 8);
    t9 = (t17 + 4);
    t31 = (t18 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t31);
    t23 = (t22 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t9) = t24;
    t33 = (t0 + 4744U);
    t39 = *((char **)t33);
    memset(t32, 0, 8);
    t33 = (t32 + 4);
    t40 = (t39 + 4);
    t25 = *((unsigned int *)t39);
    t26 = (t25 >> 0);
    t27 = (t26 & 1);
    *((unsigned int *)t32) = t27;
    t28 = *((unsigned int *)t40);
    t29 = (t28 >> 0);
    t30 = (t29 & 1);
    *((unsigned int *)t33) = t30;
    xsi_vlogtype_concat(t8, 33, 33, 3U, t32, 1, t17, 1, t10, 31);
    t44 = (t0 + 5624);
    xsi_vlogvar_assign_value(t44, t8, 0, 0, 32);
    t45 = (t0 + 5464);
    xsi_vlogvar_assign_value(t45, t8, 32, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 5624);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t6 = (t10 + 4);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t6) = t16;
    t18 = (t0 + 4744U);
    t31 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t33 = (t31 + 4);
    t19 = *((unsigned int *)t31);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t33);
    t23 = (t22 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t18) = t24;
    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t17);
    t27 = (t25 ^ t26);
    *((unsigned int *)t32) = t27;
    t39 = (t10 + 4);
    t40 = (t17 + 4);
    t44 = (t32 + 4);
    t28 = *((unsigned int *)t39);
    t29 = *((unsigned int *)t40);
    t30 = (t28 | t29);
    *((unsigned int *)t44) = t30;
    t34 = *((unsigned int *)t44);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB313;

LAB314:
LAB315:    t45 = (t0 + 5304);
    xsi_vlogvar_assign_value(t45, t32, 0, 0, 1);
    goto LAB61;

LAB37:    xsi_set_current_line(111, ng0);

LAB316:    xsi_set_current_line(112, ng0);
    t4 = (t0 + 4584U);
    t5 = *((char **)t4);
    t4 = (t0 + 4744U);
    t6 = *((char **)t4);
    memset(t17, 0, 8);
    t4 = (t17 + 4);
    t9 = (t6 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 0);
    *((unsigned int *)t17) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t15 & 65535U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 65535U);
    t18 = ((char*)((ng2)));
    xsi_vlogtype_concat(t10, 32, 32, 2U, t18, 16, t17, 16);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t10);
    t21 = (t19 & t20);
    *((unsigned int *)t32) = t21;
    t31 = (t5 + 4);
    t33 = (t10 + 4);
    t39 = (t32 + 4);
    t22 = *((unsigned int *)t31);
    t23 = *((unsigned int *)t33);
    t24 = (t22 | t23);
    *((unsigned int *)t39) = t24;
    t25 = *((unsigned int *)t39);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB317;

LAB318:
LAB319:    t45 = (t0 + 5624);
    xsi_vlogvar_assign_value(t45, t32, 0, 0, 32);
    goto LAB61;

LAB39:    xsi_set_current_line(114, ng0);

LAB320:    xsi_set_current_line(115, ng0);
    t4 = (t0 + 4584U);
    t5 = *((char **)t4);
    t4 = (t0 + 4744U);
    t6 = *((char **)t4);
    memset(t17, 0, 8);
    t4 = (t17 + 4);
    t9 = (t6 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 0);
    *((unsigned int *)t17) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t15 & 65535U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 65535U);
    t18 = ((char*)((ng2)));
    xsi_vlogtype_concat(t10, 32, 32, 2U, t18, 16, t17, 16);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    *((unsigned int *)t32) = t21;
    t31 = (t5 + 4);
    t33 = (t10 + 4);
    t39 = (t32 + 4);
    t22 = *((unsigned int *)t31);
    t23 = *((unsigned int *)t33);
    t24 = (t22 | t23);
    *((unsigned int *)t39) = t24;
    t25 = *((unsigned int *)t39);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB321;

LAB322:
LAB323:    t45 = (t0 + 5624);
    xsi_vlogvar_assign_value(t45, t32, 0, 0, 32);
    goto LAB61;

LAB41:    xsi_set_current_line(117, ng0);

LAB324:    xsi_set_current_line(118, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 4744U);
    t6 = *((char **)t5);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t9 = (t6 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 0);
    *((unsigned int *)t17) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t15 & 65535U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 65535U);
    xsi_vlogtype_concat(t10, 32, 32, 2U, t17, 16, t4, 16);
    t18 = (t0 + 5624);
    xsi_vlogvar_assign_value(t18, t10, 0, 0, 32);
    goto LAB61;

LAB43:    xsi_set_current_line(120, ng0);

LAB325:    xsi_set_current_line(121, ng0);
    t4 = (t0 + 4584U);
    t5 = *((char **)t4);
    t4 = (t0 + 4744U);
    t6 = *((char **)t4);
    memset(t17, 0, 8);
    t4 = (t17 + 4);
    t9 = (t6 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 0);
    *((unsigned int *)t17) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t15 & 65535U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 65535U);
    t18 = ((char*)((ng2)));
    xsi_vlogtype_concat(t10, 32, 32, 2U, t18, 16, t17, 16);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t10);
    t21 = (t19 ^ t20);
    *((unsigned int *)t32) = t21;
    t31 = (t5 + 4);
    t33 = (t10 + 4);
    t39 = (t32 + 4);
    t22 = *((unsigned int *)t31);
    t23 = *((unsigned int *)t33);
    t24 = (t22 | t23);
    *((unsigned int *)t39) = t24;
    t25 = *((unsigned int *)t39);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB326;

LAB327:
LAB328:    t40 = (t0 + 5624);
    xsi_vlogvar_assign_value(t40, t32, 0, 0, 32);
    goto LAB61;

LAB45:    xsi_set_current_line(123, ng0);

LAB329:    xsi_set_current_line(124, ng0);
    t4 = (t0 + 4584U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng24)));
    xsi_vlog_unsigned_add(t8, 33, t5, 32, t4, 32);
    t6 = (t0 + 5624);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    t9 = (t0 + 5464);
    xsi_vlogvar_assign_value(t9, t8, 32, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 4584U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t6 = ((char*)((ng2)));
    memset(t17, 0, 8);
    t9 = (t10 + 4);
    t18 = (t6 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t6);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t9);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB333;

LAB330:    if (t28 != 0)
        goto LAB332;

LAB331:    *((unsigned int *)t17) = 1;

LAB333:    t33 = (t17 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB334;

LAB335:    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 5304);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB336:    goto LAB61;

LAB47:    xsi_set_current_line(130, ng0);

LAB350:    xsi_set_current_line(131, ng0);
    t4 = (t0 + 4584U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng24)));
    xsi_vlog_unsigned_minus(t8, 33, t5, 32, t4, 32);
    t6 = (t0 + 5624);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    t9 = (t0 + 5464);
    xsi_vlogvar_assign_value(t9, t8, 32, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 4584U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t6 = ((char*)((ng2)));
    memset(t17, 0, 8);
    t9 = (t10 + 4);
    t18 = (t6 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t6);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t9);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB354;

LAB351:    if (t28 != 0)
        goto LAB353;

LAB352:    *((unsigned int *)t17) = 1;

LAB354:    t33 = (t17 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB355;

LAB356:    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 5304);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB357:    goto LAB61;

LAB49:    xsi_set_current_line(137, ng0);

LAB371:    xsi_set_current_line(138, ng0);
    t4 = (t0 + 4584U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng27)));
    xsi_vlog_unsigned_add(t8, 33, t5, 32, t4, 32);
    t6 = (t0 + 5624);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    t9 = (t0 + 5464);
    xsi_vlogvar_assign_value(t9, t8, 32, 0, 1);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 4584U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t6 = ((char*)((ng2)));
    memset(t17, 0, 8);
    t9 = (t10 + 4);
    t18 = (t6 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t6);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t9);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB375;

LAB372:    if (t28 != 0)
        goto LAB374;

LAB373:    *((unsigned int *)t17) = 1;

LAB375:    t33 = (t17 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB376;

LAB377:    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 5304);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB378:    goto LAB61;

LAB51:    xsi_set_current_line(144, ng0);

LAB392:    xsi_set_current_line(145, ng0);
    t4 = (t0 + 4584U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng27)));
    xsi_vlog_unsigned_minus(t8, 33, t5, 32, t4, 32);
    t6 = (t0 + 5624);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    t9 = (t0 + 5464);
    xsi_vlogvar_assign_value(t9, t8, 32, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 4584U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t6 = ((char*)((ng2)));
    memset(t17, 0, 8);
    t9 = (t10 + 4);
    t18 = (t6 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t6);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t9);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB396;

LAB393:    if (t28 != 0)
        goto LAB395;

LAB394:    *((unsigned int *)t17) = 1;

LAB396:    t33 = (t17 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB397;

LAB398:    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 5304);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB399:    goto LAB61;

LAB53:    xsi_set_current_line(151, ng0);

LAB413:    xsi_set_current_line(152, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 5624);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB61;

LAB55:    xsi_set_current_line(154, ng0);

LAB414:    xsi_set_current_line(155, ng0);
    t4 = ((char*)((ng31)));
    t5 = (t0 + 5624);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB61;

LAB57:    xsi_set_current_line(157, ng0);

LAB415:    xsi_set_current_line(158, ng0);
    t4 = ((char*)((ng33)));
    t5 = (t0 + 5624);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB61;

LAB67:    t31 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB68;

LAB69:    *((unsigned int *)t32) = 1;
    goto LAB72;

LAB71:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB72;

LAB73:    t44 = (t0 + 4744U);
    t45 = *((char **)t44);
    memset(t46, 0, 8);
    t44 = (t46 + 4);
    t47 = (t45 + 4);
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 31);
    t50 = (t49 & 1);
    *((unsigned int *)t46) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 >> 31);
    t53 = (t52 & 1);
    *((unsigned int *)t44) = t53;
    t54 = ((char*)((ng3)));
    memset(t55, 0, 8);
    t56 = (t46 + 4);
    t57 = (t54 + 4);
    t58 = *((unsigned int *)t46);
    t59 = *((unsigned int *)t54);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t56);
    t62 = *((unsigned int *)t57);
    t63 = (t61 ^ t62);
    t64 = (t60 | t63);
    t65 = *((unsigned int *)t56);
    t66 = *((unsigned int *)t57);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t69 = (t64 & t68);
    if (t69 != 0)
        goto LAB79;

LAB76:    if (t67 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t55) = 1;

LAB79:    memset(t71, 0, 8);
    t72 = (t55 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t55);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t72) != 0)
        goto LAB82;

LAB83:    t80 = *((unsigned int *)t32);
    t81 = *((unsigned int *)t71);
    t82 = (t80 & t81);
    *((unsigned int *)t79) = t82;
    t83 = (t32 + 4);
    t84 = (t71 + 4);
    t85 = (t79 + 4);
    t86 = *((unsigned int *)t83);
    t87 = *((unsigned int *)t84);
    t88 = (t86 | t87);
    *((unsigned int *)t85) = t88;
    t89 = *((unsigned int *)t85);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB84;

LAB85:
LAB86:    goto LAB75;

LAB78:    t70 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB79;

LAB80:    *((unsigned int *)t71) = 1;
    goto LAB83;

LAB82:    t78 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB83;

LAB84:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t79) = (t91 | t92);
    t93 = (t32 + 4);
    t94 = (t71 + 4);
    t95 = *((unsigned int *)t32);
    t96 = (~(t95));
    t97 = *((unsigned int *)t93);
    t98 = (~(t97));
    t99 = *((unsigned int *)t71);
    t100 = (~(t99));
    t101 = *((unsigned int *)t94);
    t102 = (~(t101));
    t7 = (t96 & t98);
    t103 = (t100 & t102);
    t104 = (~(t7));
    t105 = (~(t103));
    t106 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t106 & t104);
    t107 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t107 & t105);
    t108 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t108 & t104);
    t109 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t109 & t105);
    goto LAB86;

LAB87:    xsi_set_current_line(45, ng0);
    t118 = (t0 + 5624);
    t119 = (t118 + 56U);
    t120 = *((char **)t119);
    memset(t121, 0, 8);
    t122 = (t121 + 4);
    t123 = (t120 + 4);
    t124 = *((unsigned int *)t120);
    t125 = (t124 >> 31);
    t126 = (t125 & 1);
    *((unsigned int *)t121) = t126;
    t127 = *((unsigned int *)t123);
    t128 = (t127 >> 31);
    t129 = (t128 & 1);
    *((unsigned int *)t122) = t129;
    memset(t117, 0, 8);
    t130 = (t121 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t121);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t130) != 0)
        goto LAB92;

LAB93:    t137 = (t117 + 4);
    t138 = *((unsigned int *)t117);
    t139 = *((unsigned int *)t137);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB94;

LAB95:    t142 = *((unsigned int *)t117);
    t143 = (~(t142));
    t144 = *((unsigned int *)t137);
    t145 = (t143 || t144);
    if (t145 > 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t137) > 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t117) > 0)
        goto LAB100;

LAB101:    memcpy(t116, t146, 8);

LAB102:    t147 = (t0 + 5304);
    xsi_vlogvar_assign_value(t147, t116, 0, 0, 1);
    goto LAB89;

LAB90:    *((unsigned int *)t117) = 1;
    goto LAB93;

LAB92:    t136 = (t117 + 4);
    *((unsigned int *)t117) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB93;

LAB94:    t141 = ((char*)((ng2)));
    goto LAB95;

LAB96:    t146 = ((char*)((ng3)));
    goto LAB97;

LAB98:    xsi_vlog_unsigned_bit_combine(t116, 1, t141, 1, t146, 1);
    goto LAB102;

LAB100:    memcpy(t116, t141, 8);
    goto LAB102;

LAB105:    t31 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB106;

LAB107:    *((unsigned int *)t32) = 1;
    goto LAB110;

LAB109:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB110;

LAB111:    t44 = (t0 + 4744U);
    t45 = *((char **)t44);
    memset(t46, 0, 8);
    t44 = (t46 + 4);
    t47 = (t45 + 4);
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 31);
    t50 = (t49 & 1);
    *((unsigned int *)t46) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 >> 31);
    t53 = (t52 & 1);
    *((unsigned int *)t44) = t53;
    t54 = ((char*)((ng2)));
    memset(t55, 0, 8);
    t56 = (t46 + 4);
    t57 = (t54 + 4);
    t58 = *((unsigned int *)t46);
    t59 = *((unsigned int *)t54);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t56);
    t62 = *((unsigned int *)t57);
    t63 = (t61 ^ t62);
    t64 = (t60 | t63);
    t65 = *((unsigned int *)t56);
    t66 = *((unsigned int *)t57);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t69 = (t64 & t68);
    if (t69 != 0)
        goto LAB117;

LAB114:    if (t67 != 0)
        goto LAB116;

LAB115:    *((unsigned int *)t55) = 1;

LAB117:    memset(t71, 0, 8);
    t72 = (t55 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t55);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t72) != 0)
        goto LAB120;

LAB121:    t80 = *((unsigned int *)t32);
    t81 = *((unsigned int *)t71);
    t82 = (t80 & t81);
    *((unsigned int *)t79) = t82;
    t83 = (t32 + 4);
    t84 = (t71 + 4);
    t85 = (t79 + 4);
    t86 = *((unsigned int *)t83);
    t87 = *((unsigned int *)t84);
    t88 = (t86 | t87);
    *((unsigned int *)t85) = t88;
    t89 = *((unsigned int *)t85);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB122;

LAB123:
LAB124:    goto LAB113;

LAB116:    t70 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB117;

LAB118:    *((unsigned int *)t71) = 1;
    goto LAB121;

LAB120:    t78 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB121;

LAB122:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t79) = (t91 | t92);
    t93 = (t32 + 4);
    t94 = (t71 + 4);
    t95 = *((unsigned int *)t32);
    t96 = (~(t95));
    t97 = *((unsigned int *)t93);
    t98 = (~(t97));
    t99 = *((unsigned int *)t71);
    t100 = (~(t99));
    t101 = *((unsigned int *)t94);
    t102 = (~(t101));
    t7 = (t96 & t98);
    t103 = (t100 & t102);
    t104 = (~(t7));
    t105 = (~(t103));
    t106 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t106 & t104);
    t107 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t107 & t105);
    t108 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t108 & t104);
    t109 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t109 & t105);
    goto LAB124;

LAB125:    xsi_set_current_line(47, ng0);
    t118 = (t0 + 5624);
    t119 = (t118 + 56U);
    t120 = *((char **)t119);
    memset(t121, 0, 8);
    t122 = (t121 + 4);
    t123 = (t120 + 4);
    t124 = *((unsigned int *)t120);
    t125 = (t124 >> 31);
    t126 = (t125 & 1);
    *((unsigned int *)t121) = t126;
    t127 = *((unsigned int *)t123);
    t128 = (t127 >> 31);
    t129 = (t128 & 1);
    *((unsigned int *)t122) = t129;
    memset(t117, 0, 8);
    t130 = (t121 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t121);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB128;

LAB129:    if (*((unsigned int *)t130) != 0)
        goto LAB130;

LAB131:    t137 = (t117 + 4);
    t138 = *((unsigned int *)t117);
    t139 = *((unsigned int *)t137);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB132;

LAB133:    t142 = *((unsigned int *)t117);
    t143 = (~(t142));
    t144 = *((unsigned int *)t137);
    t145 = (t143 || t144);
    if (t145 > 0)
        goto LAB134;

LAB135:    if (*((unsigned int *)t137) > 0)
        goto LAB136;

LAB137:    if (*((unsigned int *)t117) > 0)
        goto LAB138;

LAB139:    memcpy(t116, t146, 8);

LAB140:    t147 = (t0 + 5304);
    xsi_vlogvar_assign_value(t147, t116, 0, 0, 1);
    goto LAB127;

LAB128:    *((unsigned int *)t117) = 1;
    goto LAB131;

LAB130:    t136 = (t117 + 4);
    *((unsigned int *)t117) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB131;

LAB132:    t141 = ((char*)((ng3)));
    goto LAB133;

LAB134:    t146 = ((char*)((ng2)));
    goto LAB135;

LAB136:    xsi_vlog_unsigned_bit_combine(t116, 1, t141, 1, t146, 1);
    goto LAB140;

LAB138:    memcpy(t116, t141, 8);
    goto LAB140;

LAB144:    t31 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB145;

LAB146:    *((unsigned int *)t32) = 1;
    goto LAB149;

LAB148:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB149;

LAB150:    t44 = (t0 + 4744U);
    t45 = *((char **)t44);
    memset(t46, 0, 8);
    t44 = (t46 + 4);
    t47 = (t45 + 4);
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 31);
    t50 = (t49 & 1);
    *((unsigned int *)t46) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 >> 31);
    t53 = (t52 & 1);
    *((unsigned int *)t44) = t53;
    t54 = ((char*)((ng3)));
    memset(t55, 0, 8);
    t56 = (t46 + 4);
    t57 = (t54 + 4);
    t58 = *((unsigned int *)t46);
    t59 = *((unsigned int *)t54);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t56);
    t62 = *((unsigned int *)t57);
    t63 = (t61 ^ t62);
    t64 = (t60 | t63);
    t65 = *((unsigned int *)t56);
    t66 = *((unsigned int *)t57);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t69 = (t64 & t68);
    if (t69 != 0)
        goto LAB156;

LAB153:    if (t67 != 0)
        goto LAB155;

LAB154:    *((unsigned int *)t55) = 1;

LAB156:    memset(t71, 0, 8);
    t72 = (t55 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t55);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB157;

LAB158:    if (*((unsigned int *)t72) != 0)
        goto LAB159;

LAB160:    t80 = *((unsigned int *)t32);
    t81 = *((unsigned int *)t71);
    t82 = (t80 & t81);
    *((unsigned int *)t79) = t82;
    t83 = (t32 + 4);
    t84 = (t71 + 4);
    t85 = (t79 + 4);
    t86 = *((unsigned int *)t83);
    t87 = *((unsigned int *)t84);
    t88 = (t86 | t87);
    *((unsigned int *)t85) = t88;
    t89 = *((unsigned int *)t85);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB161;

LAB162:
LAB163:    goto LAB152;

LAB155:    t70 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB156;

LAB157:    *((unsigned int *)t71) = 1;
    goto LAB160;

LAB159:    t78 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB160;

LAB161:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t79) = (t91 | t92);
    t93 = (t32 + 4);
    t94 = (t71 + 4);
    t95 = *((unsigned int *)t32);
    t96 = (~(t95));
    t97 = *((unsigned int *)t93);
    t98 = (~(t97));
    t99 = *((unsigned int *)t71);
    t100 = (~(t99));
    t101 = *((unsigned int *)t94);
    t102 = (~(t101));
    t7 = (t96 & t98);
    t103 = (t100 & t102);
    t104 = (~(t7));
    t105 = (~(t103));
    t106 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t106 & t104);
    t107 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t107 & t105);
    t108 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t108 & t104);
    t109 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t109 & t105);
    goto LAB163;

LAB164:    xsi_set_current_line(54, ng0);
    t118 = (t0 + 5624);
    t119 = (t118 + 56U);
    t120 = *((char **)t119);
    memset(t121, 0, 8);
    t122 = (t121 + 4);
    t123 = (t120 + 4);
    t124 = *((unsigned int *)t120);
    t125 = (t124 >> 31);
    t126 = (t125 & 1);
    *((unsigned int *)t121) = t126;
    t127 = *((unsigned int *)t123);
    t128 = (t127 >> 31);
    t129 = (t128 & 1);
    *((unsigned int *)t122) = t129;
    memset(t117, 0, 8);
    t130 = (t121 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t121);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB167;

LAB168:    if (*((unsigned int *)t130) != 0)
        goto LAB169;

LAB170:    t137 = (t117 + 4);
    t138 = *((unsigned int *)t117);
    t139 = *((unsigned int *)t137);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB171;

LAB172:    t142 = *((unsigned int *)t117);
    t143 = (~(t142));
    t144 = *((unsigned int *)t137);
    t145 = (t143 || t144);
    if (t145 > 0)
        goto LAB173;

LAB174:    if (*((unsigned int *)t137) > 0)
        goto LAB175;

LAB176:    if (*((unsigned int *)t117) > 0)
        goto LAB177;

LAB178:    memcpy(t116, t146, 8);

LAB179:    t147 = (t0 + 5304);
    xsi_vlogvar_assign_value(t147, t116, 0, 0, 1);
    goto LAB166;

LAB167:    *((unsigned int *)t117) = 1;
    goto LAB170;

LAB169:    t136 = (t117 + 4);
    *((unsigned int *)t117) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB170;

LAB171:    t141 = ((char*)((ng3)));
    goto LAB172;

LAB173:    t146 = ((char*)((ng2)));
    goto LAB174;

LAB175:    xsi_vlog_unsigned_bit_combine(t116, 1, t141, 1, t146, 1);
    goto LAB179;

LAB177:    memcpy(t116, t141, 8);
    goto LAB179;

LAB182:    t31 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB183;

LAB184:    *((unsigned int *)t32) = 1;
    goto LAB187;

LAB186:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB187;

LAB188:    t44 = (t0 + 4744U);
    t45 = *((char **)t44);
    memset(t46, 0, 8);
    t44 = (t46 + 4);
    t47 = (t45 + 4);
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 31);
    t50 = (t49 & 1);
    *((unsigned int *)t46) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 >> 31);
    t53 = (t52 & 1);
    *((unsigned int *)t44) = t53;
    t54 = ((char*)((ng2)));
    memset(t55, 0, 8);
    t56 = (t46 + 4);
    t57 = (t54 + 4);
    t58 = *((unsigned int *)t46);
    t59 = *((unsigned int *)t54);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t56);
    t62 = *((unsigned int *)t57);
    t63 = (t61 ^ t62);
    t64 = (t60 | t63);
    t65 = *((unsigned int *)t56);
    t66 = *((unsigned int *)t57);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t69 = (t64 & t68);
    if (t69 != 0)
        goto LAB194;

LAB191:    if (t67 != 0)
        goto LAB193;

LAB192:    *((unsigned int *)t55) = 1;

LAB194:    memset(t71, 0, 8);
    t72 = (t55 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t55);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB195;

LAB196:    if (*((unsigned int *)t72) != 0)
        goto LAB197;

LAB198:    t80 = *((unsigned int *)t32);
    t81 = *((unsigned int *)t71);
    t82 = (t80 & t81);
    *((unsigned int *)t79) = t82;
    t83 = (t32 + 4);
    t84 = (t71 + 4);
    t85 = (t79 + 4);
    t86 = *((unsigned int *)t83);
    t87 = *((unsigned int *)t84);
    t88 = (t86 | t87);
    *((unsigned int *)t85) = t88;
    t89 = *((unsigned int *)t85);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB199;

LAB200:
LAB201:    goto LAB190;

LAB193:    t70 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB194;

LAB195:    *((unsigned int *)t71) = 1;
    goto LAB198;

LAB197:    t78 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB198;

LAB199:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t79) = (t91 | t92);
    t93 = (t32 + 4);
    t94 = (t71 + 4);
    t95 = *((unsigned int *)t32);
    t96 = (~(t95));
    t97 = *((unsigned int *)t93);
    t98 = (~(t97));
    t99 = *((unsigned int *)t71);
    t100 = (~(t99));
    t101 = *((unsigned int *)t94);
    t102 = (~(t101));
    t7 = (t96 & t98);
    t103 = (t100 & t102);
    t104 = (~(t7));
    t105 = (~(t103));
    t106 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t106 & t104);
    t107 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t107 & t105);
    t108 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t108 & t104);
    t109 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t109 & t105);
    goto LAB201;

LAB202:    xsi_set_current_line(56, ng0);
    t118 = (t0 + 5624);
    t119 = (t118 + 56U);
    t120 = *((char **)t119);
    memset(t121, 0, 8);
    t122 = (t121 + 4);
    t123 = (t120 + 4);
    t124 = *((unsigned int *)t120);
    t125 = (t124 >> 31);
    t126 = (t125 & 1);
    *((unsigned int *)t121) = t126;
    t127 = *((unsigned int *)t123);
    t128 = (t127 >> 31);
    t129 = (t128 & 1);
    *((unsigned int *)t122) = t129;
    memset(t117, 0, 8);
    t130 = (t121 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t121);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB205;

LAB206:    if (*((unsigned int *)t130) != 0)
        goto LAB207;

LAB208:    t137 = (t117 + 4);
    t138 = *((unsigned int *)t117);
    t139 = *((unsigned int *)t137);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB209;

LAB210:    t142 = *((unsigned int *)t117);
    t143 = (~(t142));
    t144 = *((unsigned int *)t137);
    t145 = (t143 || t144);
    if (t145 > 0)
        goto LAB211;

LAB212:    if (*((unsigned int *)t137) > 0)
        goto LAB213;

LAB214:    if (*((unsigned int *)t117) > 0)
        goto LAB215;

LAB216:    memcpy(t116, t146, 8);

LAB217:    t147 = (t0 + 5304);
    xsi_vlogvar_assign_value(t147, t116, 0, 0, 1);
    goto LAB204;

LAB205:    *((unsigned int *)t117) = 1;
    goto LAB208;

LAB207:    t136 = (t117 + 4);
    *((unsigned int *)t117) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB208;

LAB209:    t141 = ((char*)((ng2)));
    goto LAB210;

LAB211:    t146 = ((char*)((ng3)));
    goto LAB212;

LAB213:    xsi_vlog_unsigned_bit_combine(t116, 1, t141, 1, t146, 1);
    goto LAB217;

LAB215:    memcpy(t116, t141, 8);
    goto LAB217;

LAB220:    t31 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB222;

LAB221:    *((unsigned int *)t10) = 1;
    goto LAB222;

LAB224:    *((unsigned int *)t17) = 1;
    goto LAB227;

LAB226:    t39 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB227;

LAB228:    t44 = (t0 + 5624);
    t45 = (t44 + 56U);
    t47 = *((char **)t45);
    t54 = (t0 + 4744U);
    t56 = *((char **)t54);
    memset(t32, 0, 8);
    t54 = (t47 + 4);
    if (*((unsigned int *)t54) != 0)
        goto LAB232;

LAB231:    t57 = (t56 + 4);
    if (*((unsigned int *)t57) != 0)
        goto LAB232;

LAB235:    if (*((unsigned int *)t47) < *((unsigned int *)t56))
        goto LAB233;

LAB234:    memset(t46, 0, 8);
    t72 = (t32 + 4);
    t21 = *((unsigned int *)t72);
    t22 = (~(t21));
    t23 = *((unsigned int *)t32);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB236;

LAB237:    if (*((unsigned int *)t72) != 0)
        goto LAB238;

LAB239:    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t46);
    t28 = (t26 & t27);
    *((unsigned int *)t55) = t28;
    t83 = (t17 + 4);
    t84 = (t46 + 4);
    t85 = (t55 + 4);
    t29 = *((unsigned int *)t83);
    t30 = *((unsigned int *)t84);
    t34 = (t29 | t30);
    *((unsigned int *)t85) = t34;
    t35 = *((unsigned int *)t85);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB240;

LAB241:
LAB242:    goto LAB230;

LAB232:    t70 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB234;

LAB233:    *((unsigned int *)t32) = 1;
    goto LAB234;

LAB236:    *((unsigned int *)t46) = 1;
    goto LAB239;

LAB238:    t78 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB239;

LAB240:    t37 = *((unsigned int *)t55);
    t38 = *((unsigned int *)t85);
    *((unsigned int *)t55) = (t37 | t38);
    t93 = (t17 + 4);
    t94 = (t46 + 4);
    t41 = *((unsigned int *)t17);
    t42 = (~(t41));
    t43 = *((unsigned int *)t93);
    t48 = (~(t43));
    t49 = *((unsigned int *)t46);
    t50 = (~(t49));
    t51 = *((unsigned int *)t94);
    t52 = (~(t51));
    t7 = (t42 & t48);
    t103 = (t50 & t52);
    t53 = (~(t7));
    t58 = (~(t103));
    t59 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t59 & t53);
    t60 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t60 & t58);
    t61 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t61 & t53);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t62 & t58);
    goto LAB242;

LAB243:    xsi_set_current_line(63, ng0);
    t118 = ((char*)((ng3)));
    t119 = (t0 + 5304);
    xsi_vlogvar_assign_value(t119, t118, 0, 0, 1);
    goto LAB245;

LAB248:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB250;

LAB249:    *((unsigned int *)t10) = 1;
    goto LAB250;

LAB252:    xsi_set_current_line(70, ng0);
    t31 = ((char*)((ng3)));
    t33 = (t0 + 5304);
    xsi_vlogvar_assign_value(t33, t31, 0, 0, 1);
    goto LAB254;

LAB258:    t39 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB259;

LAB260:    *((unsigned int *)t17) = 1;
    goto LAB263;

LAB262:    t44 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB263;

LAB264:    t47 = ((char*)((ng3)));
    goto LAB265;

LAB266:    t54 = ((char*)((ng2)));
    goto LAB267;

LAB268:    xsi_vlog_unsigned_bit_combine(t10, 32, t47, 32, t54, 32);
    goto LAB272;

LAB270:    memcpy(t10, t47, 8);
    goto LAB272;

LAB275:    t18 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB277;

LAB276:    *((unsigned int *)t32) = 1;
    goto LAB277;

LAB279:    *((unsigned int *)t17) = 1;
    goto LAB282;

LAB281:    t33 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB282;

LAB283:    t40 = ((char*)((ng3)));
    goto LAB284;

LAB285:    t44 = ((char*)((ng2)));
    goto LAB286;

LAB287:    xsi_vlog_unsigned_bit_combine(t10, 32, t40, 32, t44, 32);
    goto LAB291;

LAB289:    memcpy(t10, t40, 8);
    goto LAB291;

LAB293:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t10) = (t21 | t22);
    t31 = (t5 + 4);
    t33 = (t6 + 4);
    t23 = *((unsigned int *)t5);
    t24 = (~(t23));
    t25 = *((unsigned int *)t31);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (~(t27));
    t29 = *((unsigned int *)t33);
    t30 = (~(t29));
    t103 = (t24 & t26);
    t148 = (t28 & t30);
    t34 = (~(t103));
    t35 = (~(t148));
    t36 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t36 & t34);
    t37 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t37 & t35);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & t34);
    t41 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t41 & t35);
    goto LAB295;

LAB297:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t10) = (t21 | t22);
    t31 = (t5 + 4);
    t33 = (t6 + 4);
    t23 = *((unsigned int *)t31);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t103 = (t25 & t24);
    t26 = *((unsigned int *)t33);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t148 = (t28 & t27);
    t29 = (~(t103));
    t30 = (~(t148));
    t34 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t34 & t29);
    t35 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t35 & t30);
    goto LAB299;

LAB301:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t10) = (t21 | t22);
    goto LAB303;

LAB305:    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t17) = (t21 | t22);
    t31 = (t5 + 4);
    t33 = (t6 + 4);
    t23 = *((unsigned int *)t31);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t103 = (t25 & t24);
    t26 = *((unsigned int *)t33);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t148 = (t28 & t27);
    t29 = (~(t103));
    t30 = (~(t148));
    t34 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t34 & t29);
    t35 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t35 & t30);
    goto LAB307;

LAB309:    t38 = *((unsigned int *)t10);
    t41 = *((unsigned int *)t40);
    *((unsigned int *)t10) = (t38 | t41);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    *((unsigned int *)t39) = (t42 | t43);
    goto LAB308;

LAB313:    t36 = *((unsigned int *)t32);
    t37 = *((unsigned int *)t44);
    *((unsigned int *)t32) = (t36 | t37);
    goto LAB315;

LAB317:    t27 = *((unsigned int *)t32);
    t28 = *((unsigned int *)t39);
    *((unsigned int *)t32) = (t27 | t28);
    t40 = (t5 + 4);
    t44 = (t10 + 4);
    t29 = *((unsigned int *)t5);
    t30 = (~(t29));
    t34 = *((unsigned int *)t40);
    t35 = (~(t34));
    t36 = *((unsigned int *)t10);
    t37 = (~(t36));
    t38 = *((unsigned int *)t44);
    t41 = (~(t38));
    t103 = (t30 & t35);
    t148 = (t37 & t41);
    t42 = (~(t103));
    t43 = (~(t148));
    t48 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t48 & t42);
    t49 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t49 & t43);
    t50 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t50 & t42);
    t51 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t51 & t43);
    goto LAB319;

LAB321:    t27 = *((unsigned int *)t32);
    t28 = *((unsigned int *)t39);
    *((unsigned int *)t32) = (t27 | t28);
    t40 = (t5 + 4);
    t44 = (t10 + 4);
    t29 = *((unsigned int *)t40);
    t30 = (~(t29));
    t34 = *((unsigned int *)t5);
    t103 = (t34 & t30);
    t35 = *((unsigned int *)t44);
    t36 = (~(t35));
    t37 = *((unsigned int *)t10);
    t148 = (t37 & t36);
    t38 = (~(t103));
    t41 = (~(t148));
    t42 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t42 & t38);
    t43 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t43 & t41);
    goto LAB323;

LAB326:    t27 = *((unsigned int *)t32);
    t28 = *((unsigned int *)t39);
    *((unsigned int *)t32) = (t27 | t28);
    goto LAB328;

LAB332:    t31 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB333;

LAB334:    xsi_set_current_line(126, ng0);
    t39 = (t0 + 5624);
    t40 = (t39 + 56U);
    t44 = *((char **)t40);
    memset(t55, 0, 8);
    t45 = (t55 + 4);
    t47 = (t44 + 4);
    t41 = *((unsigned int *)t44);
    t42 = (t41 >> 31);
    t43 = (t42 & 1);
    *((unsigned int *)t55) = t43;
    t48 = *((unsigned int *)t47);
    t49 = (t48 >> 31);
    t50 = (t49 & 1);
    *((unsigned int *)t45) = t50;
    memset(t46, 0, 8);
    t54 = (t55 + 4);
    t51 = *((unsigned int *)t54);
    t52 = (~(t51));
    t53 = *((unsigned int *)t55);
    t58 = (t53 & t52);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB337;

LAB338:    if (*((unsigned int *)t54) != 0)
        goto LAB339;

LAB340:    t57 = (t46 + 4);
    t60 = *((unsigned int *)t46);
    t61 = *((unsigned int *)t57);
    t62 = (t60 || t61);
    if (t62 > 0)
        goto LAB341;

LAB342:    t63 = *((unsigned int *)t46);
    t64 = (~(t63));
    t65 = *((unsigned int *)t57);
    t66 = (t64 || t65);
    if (t66 > 0)
        goto LAB343;

LAB344:    if (*((unsigned int *)t57) > 0)
        goto LAB345;

LAB346:    if (*((unsigned int *)t46) > 0)
        goto LAB347;

LAB348:    memcpy(t32, t72, 8);

LAB349:    t78 = (t0 + 5304);
    xsi_vlogvar_assign_value(t78, t32, 0, 0, 1);
    goto LAB336;

LAB337:    *((unsigned int *)t46) = 1;
    goto LAB340;

LAB339:    t56 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB340;

LAB341:    t70 = ((char*)((ng3)));
    goto LAB342;

LAB343:    t72 = ((char*)((ng2)));
    goto LAB344;

LAB345:    xsi_vlog_unsigned_bit_combine(t32, 1, t70, 1, t72, 1);
    goto LAB349;

LAB347:    memcpy(t32, t70, 8);
    goto LAB349;

LAB353:    t31 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB354;

LAB355:    xsi_set_current_line(133, ng0);
    t39 = (t0 + 5624);
    t40 = (t39 + 56U);
    t44 = *((char **)t40);
    memset(t55, 0, 8);
    t45 = (t55 + 4);
    t47 = (t44 + 4);
    t41 = *((unsigned int *)t44);
    t42 = (t41 >> 31);
    t43 = (t42 & 1);
    *((unsigned int *)t55) = t43;
    t48 = *((unsigned int *)t47);
    t49 = (t48 >> 31);
    t50 = (t49 & 1);
    *((unsigned int *)t45) = t50;
    memset(t46, 0, 8);
    t54 = (t55 + 4);
    t51 = *((unsigned int *)t54);
    t52 = (~(t51));
    t53 = *((unsigned int *)t55);
    t58 = (t53 & t52);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB358;

LAB359:    if (*((unsigned int *)t54) != 0)
        goto LAB360;

LAB361:    t57 = (t46 + 4);
    t60 = *((unsigned int *)t46);
    t61 = *((unsigned int *)t57);
    t62 = (t60 || t61);
    if (t62 > 0)
        goto LAB362;

LAB363:    t63 = *((unsigned int *)t46);
    t64 = (~(t63));
    t65 = *((unsigned int *)t57);
    t66 = (t64 || t65);
    if (t66 > 0)
        goto LAB364;

LAB365:    if (*((unsigned int *)t57) > 0)
        goto LAB366;

LAB367:    if (*((unsigned int *)t46) > 0)
        goto LAB368;

LAB369:    memcpy(t32, t72, 8);

LAB370:    t78 = (t0 + 5304);
    xsi_vlogvar_assign_value(t78, t32, 0, 0, 1);
    goto LAB357;

LAB358:    *((unsigned int *)t46) = 1;
    goto LAB361;

LAB360:    t56 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB361;

LAB362:    t70 = ((char*)((ng3)));
    goto LAB363;

LAB364:    t72 = ((char*)((ng2)));
    goto LAB365;

LAB366:    xsi_vlog_unsigned_bit_combine(t32, 1, t70, 1, t72, 1);
    goto LAB370;

LAB368:    memcpy(t32, t70, 8);
    goto LAB370;

LAB374:    t31 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB375;

LAB376:    xsi_set_current_line(140, ng0);
    t39 = (t0 + 5624);
    t40 = (t39 + 56U);
    t44 = *((char **)t40);
    memset(t55, 0, 8);
    t45 = (t55 + 4);
    t47 = (t44 + 4);
    t41 = *((unsigned int *)t44);
    t42 = (t41 >> 31);
    t43 = (t42 & 1);
    *((unsigned int *)t55) = t43;
    t48 = *((unsigned int *)t47);
    t49 = (t48 >> 31);
    t50 = (t49 & 1);
    *((unsigned int *)t45) = t50;
    memset(t46, 0, 8);
    t54 = (t55 + 4);
    t51 = *((unsigned int *)t54);
    t52 = (~(t51));
    t53 = *((unsigned int *)t55);
    t58 = (t53 & t52);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB379;

LAB380:    if (*((unsigned int *)t54) != 0)
        goto LAB381;

LAB382:    t57 = (t46 + 4);
    t60 = *((unsigned int *)t46);
    t61 = *((unsigned int *)t57);
    t62 = (t60 || t61);
    if (t62 > 0)
        goto LAB383;

LAB384:    t63 = *((unsigned int *)t46);
    t64 = (~(t63));
    t65 = *((unsigned int *)t57);
    t66 = (t64 || t65);
    if (t66 > 0)
        goto LAB385;

LAB386:    if (*((unsigned int *)t57) > 0)
        goto LAB387;

LAB388:    if (*((unsigned int *)t46) > 0)
        goto LAB389;

LAB390:    memcpy(t32, t72, 8);

LAB391:    t78 = (t0 + 5304);
    xsi_vlogvar_assign_value(t78, t32, 0, 0, 1);
    goto LAB378;

LAB379:    *((unsigned int *)t46) = 1;
    goto LAB382;

LAB381:    t56 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB382;

LAB383:    t70 = ((char*)((ng3)));
    goto LAB384;

LAB385:    t72 = ((char*)((ng2)));
    goto LAB386;

LAB387:    xsi_vlog_unsigned_bit_combine(t32, 1, t70, 1, t72, 1);
    goto LAB391;

LAB389:    memcpy(t32, t70, 8);
    goto LAB391;

LAB395:    t31 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB396;

LAB397:    xsi_set_current_line(147, ng0);
    t39 = (t0 + 5624);
    t40 = (t39 + 56U);
    t44 = *((char **)t40);
    memset(t55, 0, 8);
    t45 = (t55 + 4);
    t47 = (t44 + 4);
    t41 = *((unsigned int *)t44);
    t42 = (t41 >> 31);
    t43 = (t42 & 1);
    *((unsigned int *)t55) = t43;
    t48 = *((unsigned int *)t47);
    t49 = (t48 >> 31);
    t50 = (t49 & 1);
    *((unsigned int *)t45) = t50;
    memset(t46, 0, 8);
    t54 = (t55 + 4);
    t51 = *((unsigned int *)t54);
    t52 = (~(t51));
    t53 = *((unsigned int *)t55);
    t58 = (t53 & t52);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB400;

LAB401:    if (*((unsigned int *)t54) != 0)
        goto LAB402;

LAB403:    t57 = (t46 + 4);
    t60 = *((unsigned int *)t46);
    t61 = *((unsigned int *)t57);
    t62 = (t60 || t61);
    if (t62 > 0)
        goto LAB404;

LAB405:    t63 = *((unsigned int *)t46);
    t64 = (~(t63));
    t65 = *((unsigned int *)t57);
    t66 = (t64 || t65);
    if (t66 > 0)
        goto LAB406;

LAB407:    if (*((unsigned int *)t57) > 0)
        goto LAB408;

LAB409:    if (*((unsigned int *)t46) > 0)
        goto LAB410;

LAB411:    memcpy(t32, t72, 8);

LAB412:    t78 = (t0 + 5304);
    xsi_vlogvar_assign_value(t78, t32, 0, 0, 1);
    goto LAB399;

LAB400:    *((unsigned int *)t46) = 1;
    goto LAB403;

LAB402:    t56 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB403;

LAB404:    t70 = ((char*)((ng3)));
    goto LAB405;

LAB406:    t72 = ((char*)((ng2)));
    goto LAB407;

LAB408:    xsi_vlog_unsigned_bit_combine(t32, 1, t70, 1, t72, 1);
    goto LAB412;

LAB410:    memcpy(t32, t70, 8);
    goto LAB412;

}


extern void work_m_00000000000382767446_1926972201_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000000382767446_1926972201", "isim/CPU_Test_isim_beh.exe.sim/work/m_00000000000382767446_1926972201.didat");
	xsi_register_executes(pe);
}
