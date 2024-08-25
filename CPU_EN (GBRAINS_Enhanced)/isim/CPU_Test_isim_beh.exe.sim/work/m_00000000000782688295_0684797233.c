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
static const char *ng0 = "C:/Users/Justin/Desktop/School/2018 Fall/CECS440/XilinxProjects/GBRAINS/ALU_32.v";
static unsigned int ng1[] = {30U, 0U};
static unsigned int ng2[] = {31U, 0U};
static unsigned int ng3[] = {12U, 0U};
static unsigned int ng4[] = {13U, 0U};
static unsigned int ng5[] = {14U, 0U};
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {1U, 1U};
static unsigned int ng8[] = {1U, 0U};



static void Cont_37_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 5248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4088U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 8);
    t6 = (t4 + 12);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t3) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 4294967295U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 4294967295U);
    t13 = (t0 + 6704);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t3, 8);
    xsi_driver_vfirst_trans(t13, 0, 31);
    t18 = (t0 + 6560);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_38_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 5496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4088U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 4294967295U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 4294967295U);
    t12 = (t0 + 6768);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t17 = (t0 + 6576);
    *((int *)t17) = 1;

LAB1:    return;
}

static void Cont_40_2(char *t0)
{
    char t3[24];
    char t4[8];
    char t6[8];
    char t33[24];
    char t36[8];
    char t51[24];
    char t52[8];
    char t54[8];
    char t81[24];
    char t84[8];
    char t99[24];
    char t100[8];
    char t102[8];
    char t118[8];
    char t133[8];
    char t149[8];
    char t157[8];
    char t185[8];
    char t200[8];
    char t216[8];
    char t224[8];
    char t263[24];
    char t266[8];
    char t280[24];
    char t283[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t53;
    char *t55;
    char *t56;
    unsigned int t57;
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
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t82;
    char *t83;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t101;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    char *t198;
    char *t199;
    char *t201;
    char *t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    char *t215;
    char *t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    char *t223;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    char *t228;
    char *t229;
    char *t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    char *t238;
    char *t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    char *t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    char *t258;
    char *t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    char *t264;
    char *t265;
    char *t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    char *t274;
    char *t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    char *t281;
    char *t282;
    char *t284;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    char *t291;
    char *t292;
    char *t293;
    char *t294;
    char *t295;
    char *t296;
    char *t297;
    char *t298;
    char *t299;
    char *t300;
    char *t301;
    char *t302;
    char *t303;
    char *t304;
    char *t305;
    char *t306;
    char *t307;
    char *t308;

LAB0:    t1 = (t0 + 5744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t47 = *((unsigned int *)t4);
    t48 = (~(t47));
    t49 = *((unsigned int *)t29);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t51, 24);

LAB20:    t293 = (t0 + 6960);
    t294 = (t293 + 56U);
    t295 = *((char **)t294);
    t296 = (t295 + 56U);
    t297 = *((char **)t296);
    xsi_vlog_bit_copy(t297, 0, t3, 0, 1);
    xsi_driver_vfirst_trans(t293, 0, 0);
    t298 = (t0 + 6896);
    t299 = (t298 + 56U);
    t300 = *((char **)t299);
    t301 = (t300 + 56U);
    t302 = *((char **)t301);
    xsi_vlog_bit_copy(t302, 0, t3, 1, 32);
    xsi_driver_vfirst_trans(t298, 0, 31);
    t303 = (t0 + 6832);
    t304 = (t303 + 56U);
    t305 = *((char **)t304);
    t306 = (t305 + 56U);
    t307 = *((char **)t306);
    xsi_vlog_bit_copy(t307, 0, t3, 33, 32);
    xsi_driver_vfirst_trans(t303, 0, 31);
    t308 = (t0 + 6592);
    *((int *)t308) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 3128U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t34 = (t36 + 4);
    t37 = (t35 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 31);
    t40 = (t39 & 1);
    *((unsigned int *)t36) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 >> 31);
    t43 = (t42 & 1);
    *((unsigned int *)t34) = t43;
    t44 = (t0 + 3288U);
    t45 = *((char **)t44);
    t44 = (t0 + 3128U);
    t46 = *((char **)t44);
    xsi_vlogtype_concat(t33, 65, 65, 3U, t46, 32, t45, 32, t36, 1);
    goto LAB13;

LAB14:    t44 = (t0 + 1048U);
    t53 = *((char **)t44);
    t44 = ((char*)((ng2)));
    memset(t54, 0, 8);
    t55 = (t53 + 4);
    t56 = (t44 + 4);
    t57 = *((unsigned int *)t53);
    t58 = *((unsigned int *)t44);
    t59 = (t57 ^ t58);
    t60 = *((unsigned int *)t55);
    t61 = *((unsigned int *)t56);
    t62 = (t60 ^ t61);
    t63 = (t59 | t62);
    t64 = *((unsigned int *)t55);
    t65 = *((unsigned int *)t56);
    t66 = (t64 | t65);
    t67 = (~(t66));
    t68 = (t63 & t67);
    if (t68 != 0)
        goto LAB24;

LAB21:    if (t66 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t54) = 1;

LAB24:    memset(t52, 0, 8);
    t70 = (t54 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t54);
    t74 = (t73 & t72);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t70) != 0)
        goto LAB27;

LAB28:    t77 = (t52 + 4);
    t78 = *((unsigned int *)t52);
    t79 = *((unsigned int *)t77);
    t80 = (t78 || t79);
    if (t80 > 0)
        goto LAB29;

LAB30:    t95 = *((unsigned int *)t52);
    t96 = (~(t95));
    t97 = *((unsigned int *)t77);
    t98 = (t96 || t97);
    if (t98 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t77) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t52) > 0)
        goto LAB35;

LAB36:    memcpy(t51, t99, 24);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 65, t33, 65, t51, 65);
    goto LAB20;

LAB18:    memcpy(t3, t33, 24);
    goto LAB20;

LAB23:    t69 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t52) = 1;
    goto LAB28;

LAB27:    t76 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB28;

LAB29:    t82 = (t0 + 3608U);
    t83 = *((char **)t82);
    memset(t84, 0, 8);
    t82 = (t84 + 4);
    t85 = (t83 + 4);
    t86 = *((unsigned int *)t83);
    t87 = (t86 >> 31);
    t88 = (t87 & 1);
    *((unsigned int *)t84) = t88;
    t89 = *((unsigned int *)t85);
    t90 = (t89 >> 31);
    t91 = (t90 & 1);
    *((unsigned int *)t82) = t91;
    t92 = (t0 + 3608U);
    t93 = *((char **)t92);
    t92 = (t0 + 3448U);
    t94 = *((char **)t92);
    xsi_vlogtype_concat(t81, 65, 65, 3U, t94, 32, t93, 32, t84, 1);
    goto LAB30;

LAB31:    t92 = (t0 + 1048U);
    t101 = *((char **)t92);
    t92 = ((char*)((ng3)));
    memset(t102, 0, 8);
    t103 = (t101 + 4);
    t104 = (t92 + 4);
    t105 = *((unsigned int *)t101);
    t106 = *((unsigned int *)t92);
    t107 = (t105 ^ t106);
    t108 = *((unsigned int *)t103);
    t109 = *((unsigned int *)t104);
    t110 = (t108 ^ t109);
    t111 = (t107 | t110);
    t112 = *((unsigned int *)t103);
    t113 = *((unsigned int *)t104);
    t114 = (t112 | t113);
    t115 = (~(t114));
    t116 = (t111 & t115);
    if (t116 != 0)
        goto LAB41;

LAB38:    if (t114 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t102) = 1;

LAB41:    memset(t118, 0, 8);
    t119 = (t102 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t102);
    t123 = (t122 & t121);
    t124 = (t123 & 1U);
    if (t124 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t119) != 0)
        goto LAB44;

LAB45:    t126 = (t118 + 4);
    t127 = *((unsigned int *)t118);
    t128 = (!(t127));
    t129 = *((unsigned int *)t126);
    t130 = (t128 || t129);
    if (t130 > 0)
        goto LAB46;

LAB47:    memcpy(t157, t118, 8);

LAB48:    memset(t185, 0, 8);
    t186 = (t157 + 4);
    t187 = *((unsigned int *)t186);
    t188 = (~(t187));
    t189 = *((unsigned int *)t157);
    t190 = (t189 & t188);
    t191 = (t190 & 1U);
    if (t191 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t186) != 0)
        goto LAB62;

LAB63:    t193 = (t185 + 4);
    t194 = *((unsigned int *)t185);
    t195 = (!(t194));
    t196 = *((unsigned int *)t193);
    t197 = (t195 || t196);
    if (t197 > 0)
        goto LAB64;

LAB65:    memcpy(t224, t185, 8);

LAB66:    memset(t100, 0, 8);
    t252 = (t224 + 4);
    t253 = *((unsigned int *)t252);
    t254 = (~(t253));
    t255 = *((unsigned int *)t224);
    t256 = (t255 & t254);
    t257 = (t256 & 1U);
    if (t257 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t252) != 0)
        goto LAB80;

LAB81:    t259 = (t100 + 4);
    t260 = *((unsigned int *)t100);
    t261 = *((unsigned int *)t259);
    t262 = (t260 || t261);
    if (t262 > 0)
        goto LAB82;

LAB83:    t276 = *((unsigned int *)t100);
    t277 = (~(t276));
    t278 = *((unsigned int *)t259);
    t279 = (t277 || t278);
    if (t279 > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t259) > 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t100) > 0)
        goto LAB88;

LAB89:    memcpy(t99, t280, 24);

LAB90:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t51, 65, t81, 65, t99, 65);
    goto LAB37;

LAB35:    memcpy(t51, t81, 24);
    goto LAB37;

LAB40:    t117 = (t102 + 4);
    *((unsigned int *)t102) = 1;
    *((unsigned int *)t117) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t118) = 1;
    goto LAB45;

LAB44:    t125 = (t118 + 4);
    *((unsigned int *)t118) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB45;

LAB46:    t131 = (t0 + 1048U);
    t132 = *((char **)t131);
    t131 = ((char*)((ng4)));
    memset(t133, 0, 8);
    t134 = (t132 + 4);
    t135 = (t131 + 4);
    t136 = *((unsigned int *)t132);
    t137 = *((unsigned int *)t131);
    t138 = (t136 ^ t137);
    t139 = *((unsigned int *)t134);
    t140 = *((unsigned int *)t135);
    t141 = (t139 ^ t140);
    t142 = (t138 | t141);
    t143 = *((unsigned int *)t134);
    t144 = *((unsigned int *)t135);
    t145 = (t143 | t144);
    t146 = (~(t145));
    t147 = (t142 & t146);
    if (t147 != 0)
        goto LAB52;

LAB49:    if (t145 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t133) = 1;

LAB52:    memset(t149, 0, 8);
    t150 = (t133 + 4);
    t151 = *((unsigned int *)t150);
    t152 = (~(t151));
    t153 = *((unsigned int *)t133);
    t154 = (t153 & t152);
    t155 = (t154 & 1U);
    if (t155 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t150) != 0)
        goto LAB55;

LAB56:    t158 = *((unsigned int *)t118);
    t159 = *((unsigned int *)t149);
    t160 = (t158 | t159);
    *((unsigned int *)t157) = t160;
    t161 = (t118 + 4);
    t162 = (t149 + 4);
    t163 = (t157 + 4);
    t164 = *((unsigned int *)t161);
    t165 = *((unsigned int *)t162);
    t166 = (t164 | t165);
    *((unsigned int *)t163) = t166;
    t167 = *((unsigned int *)t163);
    t168 = (t167 != 0);
    if (t168 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB48;

LAB51:    t148 = (t133 + 4);
    *((unsigned int *)t133) = 1;
    *((unsigned int *)t148) = 1;
    goto LAB52;

LAB53:    *((unsigned int *)t149) = 1;
    goto LAB56;

LAB55:    t156 = (t149 + 4);
    *((unsigned int *)t149) = 1;
    *((unsigned int *)t156) = 1;
    goto LAB56;

LAB57:    t169 = *((unsigned int *)t157);
    t170 = *((unsigned int *)t163);
    *((unsigned int *)t157) = (t169 | t170);
    t171 = (t118 + 4);
    t172 = (t149 + 4);
    t173 = *((unsigned int *)t171);
    t174 = (~(t173));
    t175 = *((unsigned int *)t118);
    t176 = (t175 & t174);
    t177 = *((unsigned int *)t172);
    t178 = (~(t177));
    t179 = *((unsigned int *)t149);
    t180 = (t179 & t178);
    t181 = (~(t176));
    t182 = (~(t180));
    t183 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t183 & t181);
    t184 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t184 & t182);
    goto LAB59;

LAB60:    *((unsigned int *)t185) = 1;
    goto LAB63;

LAB62:    t192 = (t185 + 4);
    *((unsigned int *)t185) = 1;
    *((unsigned int *)t192) = 1;
    goto LAB63;

LAB64:    t198 = (t0 + 1048U);
    t199 = *((char **)t198);
    t198 = ((char*)((ng5)));
    memset(t200, 0, 8);
    t201 = (t199 + 4);
    t202 = (t198 + 4);
    t203 = *((unsigned int *)t199);
    t204 = *((unsigned int *)t198);
    t205 = (t203 ^ t204);
    t206 = *((unsigned int *)t201);
    t207 = *((unsigned int *)t202);
    t208 = (t206 ^ t207);
    t209 = (t205 | t208);
    t210 = *((unsigned int *)t201);
    t211 = *((unsigned int *)t202);
    t212 = (t210 | t211);
    t213 = (~(t212));
    t214 = (t209 & t213);
    if (t214 != 0)
        goto LAB70;

LAB67:    if (t212 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t200) = 1;

LAB70:    memset(t216, 0, 8);
    t217 = (t200 + 4);
    t218 = *((unsigned int *)t217);
    t219 = (~(t218));
    t220 = *((unsigned int *)t200);
    t221 = (t220 & t219);
    t222 = (t221 & 1U);
    if (t222 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t217) != 0)
        goto LAB73;

LAB74:    t225 = *((unsigned int *)t185);
    t226 = *((unsigned int *)t216);
    t227 = (t225 | t226);
    *((unsigned int *)t224) = t227;
    t228 = (t185 + 4);
    t229 = (t216 + 4);
    t230 = (t224 + 4);
    t231 = *((unsigned int *)t228);
    t232 = *((unsigned int *)t229);
    t233 = (t231 | t232);
    *((unsigned int *)t230) = t233;
    t234 = *((unsigned int *)t230);
    t235 = (t234 != 0);
    if (t235 == 1)
        goto LAB75;

LAB76:
LAB77:    goto LAB66;

LAB69:    t215 = (t200 + 4);
    *((unsigned int *)t200) = 1;
    *((unsigned int *)t215) = 1;
    goto LAB70;

LAB71:    *((unsigned int *)t216) = 1;
    goto LAB74;

LAB73:    t223 = (t216 + 4);
    *((unsigned int *)t216) = 1;
    *((unsigned int *)t223) = 1;
    goto LAB74;

LAB75:    t236 = *((unsigned int *)t224);
    t237 = *((unsigned int *)t230);
    *((unsigned int *)t224) = (t236 | t237);
    t238 = (t185 + 4);
    t239 = (t216 + 4);
    t240 = *((unsigned int *)t238);
    t241 = (~(t240));
    t242 = *((unsigned int *)t185);
    t243 = (t242 & t241);
    t244 = *((unsigned int *)t239);
    t245 = (~(t244));
    t246 = *((unsigned int *)t216);
    t247 = (t246 & t245);
    t248 = (~(t243));
    t249 = (~(t247));
    t250 = *((unsigned int *)t230);
    *((unsigned int *)t230) = (t250 & t248);
    t251 = *((unsigned int *)t230);
    *((unsigned int *)t230) = (t251 & t249);
    goto LAB77;

LAB78:    *((unsigned int *)t100) = 1;
    goto LAB81;

LAB80:    t258 = (t100 + 4);
    *((unsigned int *)t100) = 1;
    *((unsigned int *)t258) = 1;
    goto LAB81;

LAB82:    t264 = (t0 + 3928U);
    t265 = *((char **)t264);
    memset(t266, 0, 8);
    t264 = (t266 + 4);
    t267 = (t265 + 4);
    t268 = *((unsigned int *)t265);
    t269 = (t268 >> 31);
    t270 = (t269 & 1);
    *((unsigned int *)t266) = t270;
    t271 = *((unsigned int *)t267);
    t272 = (t271 >> 31);
    t273 = (t272 & 1);
    *((unsigned int *)t264) = t273;
    t274 = (t0 + 3928U);
    t275 = *((char **)t274);
    t274 = ((char*)((ng6)));
    xsi_vlogtype_concat(t263, 65, 65, 3U, t274, 32, t275, 32, t266, 1);
    goto LAB83;

LAB84:    t281 = (t0 + 3768U);
    t282 = *((char **)t281);
    memset(t283, 0, 8);
    t281 = (t283 + 4);
    t284 = (t282 + 4);
    t285 = *((unsigned int *)t282);
    t286 = (t285 >> 31);
    t287 = (t286 & 1);
    *((unsigned int *)t283) = t287;
    t288 = *((unsigned int *)t284);
    t289 = (t288 >> 31);
    t290 = (t289 & 1);
    *((unsigned int *)t281) = t290;
    t291 = (t0 + 3768U);
    t292 = *((char **)t291);
    t291 = ((char*)((ng6)));
    xsi_vlogtype_concat(t280, 65, 65, 3U, t291, 32, t292, 32, t283, 1);
    goto LAB85;

LAB86:    xsi_vlog_unsigned_bit_combine(t99, 65, t263, 65, t280, 65);
    goto LAB90;

LAB88:    memcpy(t99, t263, 24);
    goto LAB90;

}

static void Cont_47_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t38[8];
    char t39[8];
    char t42[8];
    char t74[8];
    char t75[8];
    char t78[8];
    char t94[8];
    char t109[8];
    char t125[8];
    char t133[8];
    char t161[8];
    char t176[8];
    char t192[8];
    char t200[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t76;
    char *t77;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t175;
    char *t177;
    char *t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    char *t191;
    char *t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    char *t199;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    char *t204;
    char *t205;
    char *t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    char *t214;
    char *t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    char *t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    char *t234;
    char *t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    char *t239;
    char *t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    char *t245;
    char *t246;
    char *t247;
    char *t248;
    char *t249;
    unsigned int t250;
    unsigned int t251;
    char *t252;
    unsigned int t253;
    unsigned int t254;
    char *t255;
    unsigned int t256;
    unsigned int t257;
    char *t258;

LAB0:    t1 = (t0 + 5992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t38, 8);

LAB20:    t239 = (t0 + 7024);
    t246 = (t239 + 56U);
    t247 = *((char **)t246);
    t248 = (t247 + 56U);
    t249 = *((char **)t248);
    memset(t249, 0, 8);
    t250 = 1U;
    t251 = t250;
    t252 = (t3 + 4);
    t253 = *((unsigned int *)t3);
    t250 = (t250 & t253);
    t254 = *((unsigned int *)t252);
    t251 = (t251 & t254);
    t255 = (t249 + 4);
    t256 = *((unsigned int *)t249);
    *((unsigned int *)t249) = (t256 | t250);
    t257 = *((unsigned int *)t255);
    *((unsigned int *)t255) = (t257 | t251);
    xsi_driver_vfirst_trans(t239, 0, 0);
    t258 = (t0 + 6608);
    *((int *)t258) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = ((char*)((ng7)));
    goto LAB13;

LAB14:    t40 = (t0 + 1048U);
    t41 = *((char **)t40);
    t40 = ((char*)((ng2)));
    memset(t42, 0, 8);
    t43 = (t41 + 4);
    t44 = (t40 + 4);
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t40);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB24;

LAB21:    if (t54 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t42) = 1;

LAB24:    memset(t39, 0, 8);
    t58 = (t42 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t58) != 0)
        goto LAB27;

LAB28:    t65 = (t39 + 4);
    t66 = *((unsigned int *)t39);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB29;

LAB30:    t70 = *((unsigned int *)t39);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t65) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t39) > 0)
        goto LAB35;

LAB36:    memcpy(t38, t74, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t33, 1, t38, 1);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t39) = 1;
    goto LAB28;

LAB27:    t64 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB28;

LAB29:    t69 = ((char*)((ng7)));
    goto LAB30;

LAB31:    t76 = (t0 + 1048U);
    t77 = *((char **)t76);
    t76 = ((char*)((ng3)));
    memset(t78, 0, 8);
    t79 = (t77 + 4);
    t80 = (t76 + 4);
    t81 = *((unsigned int *)t77);
    t82 = *((unsigned int *)t76);
    t83 = (t81 ^ t82);
    t84 = *((unsigned int *)t79);
    t85 = *((unsigned int *)t80);
    t86 = (t84 ^ t85);
    t87 = (t83 | t86);
    t88 = *((unsigned int *)t79);
    t89 = *((unsigned int *)t80);
    t90 = (t88 | t89);
    t91 = (~(t90));
    t92 = (t87 & t91);
    if (t92 != 0)
        goto LAB41;

LAB38:    if (t90 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t78) = 1;

LAB41:    memset(t94, 0, 8);
    t95 = (t78 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t78);
    t99 = (t98 & t97);
    t100 = (t99 & 1U);
    if (t100 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t95) != 0)
        goto LAB44;

LAB45:    t102 = (t94 + 4);
    t103 = *((unsigned int *)t94);
    t104 = (!(t103));
    t105 = *((unsigned int *)t102);
    t106 = (t104 || t105);
    if (t106 > 0)
        goto LAB46;

LAB47:    memcpy(t133, t94, 8);

LAB48:    memset(t161, 0, 8);
    t162 = (t133 + 4);
    t163 = *((unsigned int *)t162);
    t164 = (~(t163));
    t165 = *((unsigned int *)t133);
    t166 = (t165 & t164);
    t167 = (t166 & 1U);
    if (t167 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t162) != 0)
        goto LAB62;

LAB63:    t169 = (t161 + 4);
    t170 = *((unsigned int *)t161);
    t171 = (!(t170));
    t172 = *((unsigned int *)t169);
    t173 = (t171 || t172);
    if (t173 > 0)
        goto LAB64;

LAB65:    memcpy(t200, t161, 8);

LAB66:    memset(t75, 0, 8);
    t228 = (t200 + 4);
    t229 = *((unsigned int *)t228);
    t230 = (~(t229));
    t231 = *((unsigned int *)t200);
    t232 = (t231 & t230);
    t233 = (t232 & 1U);
    if (t233 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t228) != 0)
        goto LAB80;

LAB81:    t235 = (t75 + 4);
    t236 = *((unsigned int *)t75);
    t237 = *((unsigned int *)t235);
    t238 = (t236 || t237);
    if (t238 > 0)
        goto LAB82;

LAB83:    t241 = *((unsigned int *)t75);
    t242 = (~(t241));
    t243 = *((unsigned int *)t235);
    t244 = (t242 || t243);
    if (t244 > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t235) > 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t75) > 0)
        goto LAB88;

LAB89:    memcpy(t74, t245, 8);

LAB90:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t38, 1, t69, 1, t74, 1);
    goto LAB37;

LAB35:    memcpy(t38, t69, 8);
    goto LAB37;

LAB40:    t93 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t93) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t94) = 1;
    goto LAB45;

LAB44:    t101 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t101) = 1;
    goto LAB45;

LAB46:    t107 = (t0 + 1048U);
    t108 = *((char **)t107);
    t107 = ((char*)((ng4)));
    memset(t109, 0, 8);
    t110 = (t108 + 4);
    t111 = (t107 + 4);
    t112 = *((unsigned int *)t108);
    t113 = *((unsigned int *)t107);
    t114 = (t112 ^ t113);
    t115 = *((unsigned int *)t110);
    t116 = *((unsigned int *)t111);
    t117 = (t115 ^ t116);
    t118 = (t114 | t117);
    t119 = *((unsigned int *)t110);
    t120 = *((unsigned int *)t111);
    t121 = (t119 | t120);
    t122 = (~(t121));
    t123 = (t118 & t122);
    if (t123 != 0)
        goto LAB52;

LAB49:    if (t121 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t109) = 1;

LAB52:    memset(t125, 0, 8);
    t126 = (t109 + 4);
    t127 = *((unsigned int *)t126);
    t128 = (~(t127));
    t129 = *((unsigned int *)t109);
    t130 = (t129 & t128);
    t131 = (t130 & 1U);
    if (t131 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t126) != 0)
        goto LAB55;

LAB56:    t134 = *((unsigned int *)t94);
    t135 = *((unsigned int *)t125);
    t136 = (t134 | t135);
    *((unsigned int *)t133) = t136;
    t137 = (t94 + 4);
    t138 = (t125 + 4);
    t139 = (t133 + 4);
    t140 = *((unsigned int *)t137);
    t141 = *((unsigned int *)t138);
    t142 = (t140 | t141);
    *((unsigned int *)t139) = t142;
    t143 = *((unsigned int *)t139);
    t144 = (t143 != 0);
    if (t144 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB48;

LAB51:    t124 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t124) = 1;
    goto LAB52;

LAB53:    *((unsigned int *)t125) = 1;
    goto LAB56;

LAB55:    t132 = (t125 + 4);
    *((unsigned int *)t125) = 1;
    *((unsigned int *)t132) = 1;
    goto LAB56;

LAB57:    t145 = *((unsigned int *)t133);
    t146 = *((unsigned int *)t139);
    *((unsigned int *)t133) = (t145 | t146);
    t147 = (t94 + 4);
    t148 = (t125 + 4);
    t149 = *((unsigned int *)t147);
    t150 = (~(t149));
    t151 = *((unsigned int *)t94);
    t152 = (t151 & t150);
    t153 = *((unsigned int *)t148);
    t154 = (~(t153));
    t155 = *((unsigned int *)t125);
    t156 = (t155 & t154);
    t157 = (~(t152));
    t158 = (~(t156));
    t159 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t159 & t157);
    t160 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t160 & t158);
    goto LAB59;

LAB60:    *((unsigned int *)t161) = 1;
    goto LAB63;

LAB62:    t168 = (t161 + 4);
    *((unsigned int *)t161) = 1;
    *((unsigned int *)t168) = 1;
    goto LAB63;

LAB64:    t174 = (t0 + 1048U);
    t175 = *((char **)t174);
    t174 = ((char*)((ng5)));
    memset(t176, 0, 8);
    t177 = (t175 + 4);
    t178 = (t174 + 4);
    t179 = *((unsigned int *)t175);
    t180 = *((unsigned int *)t174);
    t181 = (t179 ^ t180);
    t182 = *((unsigned int *)t177);
    t183 = *((unsigned int *)t178);
    t184 = (t182 ^ t183);
    t185 = (t181 | t184);
    t186 = *((unsigned int *)t177);
    t187 = *((unsigned int *)t178);
    t188 = (t186 | t187);
    t189 = (~(t188));
    t190 = (t185 & t189);
    if (t190 != 0)
        goto LAB70;

LAB67:    if (t188 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t176) = 1;

LAB70:    memset(t192, 0, 8);
    t193 = (t176 + 4);
    t194 = *((unsigned int *)t193);
    t195 = (~(t194));
    t196 = *((unsigned int *)t176);
    t197 = (t196 & t195);
    t198 = (t197 & 1U);
    if (t198 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t193) != 0)
        goto LAB73;

LAB74:    t201 = *((unsigned int *)t161);
    t202 = *((unsigned int *)t192);
    t203 = (t201 | t202);
    *((unsigned int *)t200) = t203;
    t204 = (t161 + 4);
    t205 = (t192 + 4);
    t206 = (t200 + 4);
    t207 = *((unsigned int *)t204);
    t208 = *((unsigned int *)t205);
    t209 = (t207 | t208);
    *((unsigned int *)t206) = t209;
    t210 = *((unsigned int *)t206);
    t211 = (t210 != 0);
    if (t211 == 1)
        goto LAB75;

LAB76:
LAB77:    goto LAB66;

LAB69:    t191 = (t176 + 4);
    *((unsigned int *)t176) = 1;
    *((unsigned int *)t191) = 1;
    goto LAB70;

LAB71:    *((unsigned int *)t192) = 1;
    goto LAB74;

LAB73:    t199 = (t192 + 4);
    *((unsigned int *)t192) = 1;
    *((unsigned int *)t199) = 1;
    goto LAB74;

LAB75:    t212 = *((unsigned int *)t200);
    t213 = *((unsigned int *)t206);
    *((unsigned int *)t200) = (t212 | t213);
    t214 = (t161 + 4);
    t215 = (t192 + 4);
    t216 = *((unsigned int *)t214);
    t217 = (~(t216));
    t218 = *((unsigned int *)t161);
    t219 = (t218 & t217);
    t220 = *((unsigned int *)t215);
    t221 = (~(t220));
    t222 = *((unsigned int *)t192);
    t223 = (t222 & t221);
    t224 = (~(t219));
    t225 = (~(t223));
    t226 = *((unsigned int *)t206);
    *((unsigned int *)t206) = (t226 & t224);
    t227 = *((unsigned int *)t206);
    *((unsigned int *)t206) = (t227 & t225);
    goto LAB77;

LAB78:    *((unsigned int *)t75) = 1;
    goto LAB81;

LAB80:    t234 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t234) = 1;
    goto LAB81;

LAB82:    t239 = (t0 + 2808U);
    t240 = *((char **)t239);
    goto LAB83;

LAB84:    t239 = (t0 + 2648U);
    t245 = *((char **)t239);
    goto LAB85;

LAB86:    xsi_vlog_unsigned_bit_combine(t74, 1, t240, 1, t245, 1);
    goto LAB90;

LAB88:    memcpy(t74, t240, 8);
    goto LAB90;

}

static void Cont_54_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t22[8];
    char t36[8];
    char t52[8];
    char t60[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
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
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;

LAB0:    t1 = (t0 + 6240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2328U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB12;

LAB13:    memcpy(t60, t22, 8);

LAB14:    memset(t4, 0, 8);
    t92 = (t60 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t60);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t92) != 0)
        goto LAB28;

LAB29:    t99 = (t4 + 4);
    t100 = *((unsigned int *)t4);
    t101 = *((unsigned int *)t99);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB30;

LAB31:    t104 = *((unsigned int *)t4);
    t105 = (~(t104));
    t106 = *((unsigned int *)t99);
    t107 = (t105 || t106);
    if (t107 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t99) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t4) > 0)
        goto LAB36;

LAB37:    memcpy(t3, t108, 8);

LAB38:    t109 = (t0 + 7088);
    t110 = (t109 + 56U);
    t111 = *((char **)t110);
    t112 = (t111 + 56U);
    t113 = *((char **)t112);
    memset(t113, 0, 8);
    t114 = 1U;
    t115 = t114;
    t116 = (t3 + 4);
    t117 = *((unsigned int *)t3);
    t114 = (t114 & t117);
    t118 = *((unsigned int *)t116);
    t115 = (t115 & t118);
    t119 = (t113 + 4);
    t120 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t120 | t114);
    t121 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t121 | t115);
    xsi_driver_vfirst_trans(t109, 0, 0);
    t122 = (t0 + 6624);
    *((int *)t122) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB10:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 2488U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng6)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t34);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB18;

LAB15:    if (t48 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t36) = 1;

LAB18:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t53) != 0)
        goto LAB21;

LAB22:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t22 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t52) = 1;
    goto LAB22;

LAB21:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB22;

LAB23:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t22 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB25;

LAB26:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB28:    t98 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB29;

LAB30:    t103 = ((char*)((ng8)));
    goto LAB31;

LAB32:    t108 = ((char*)((ng6)));
    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t3, 1, t103, 1, t108, 1);
    goto LAB38;

LAB36:    memcpy(t3, t103, 8);
    goto LAB38;

}


extern void work_m_00000000000782688295_0684797233_init()
{
	static char *pe[] = {(void *)Cont_37_0,(void *)Cont_38_1,(void *)Cont_40_2,(void *)Cont_47_3,(void *)Cont_54_4};
	xsi_register_didat("work_m_00000000000782688295_0684797233", "isim/CPU_Test_isim_beh.exe.sim/work/m_00000000000782688295_0684797233.didat");
	xsi_register_executes(pe);
}
