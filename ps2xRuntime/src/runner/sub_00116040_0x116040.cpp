#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116040
// Address: 0x116040 - 0x1165a0
void sub_00116040_0x116040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116040_0x116040");
#endif

    switch (ctx->pc) {
        case 0x116040u: goto label_116040;
        case 0x116044u: goto label_116044;
        case 0x116048u: goto label_116048;
        case 0x11604cu: goto label_11604c;
        case 0x116050u: goto label_116050;
        case 0x116054u: goto label_116054;
        case 0x116058u: goto label_116058;
        case 0x11605cu: goto label_11605c;
        case 0x116060u: goto label_116060;
        case 0x116064u: goto label_116064;
        case 0x116068u: goto label_116068;
        case 0x11606cu: goto label_11606c;
        case 0x116070u: goto label_116070;
        case 0x116074u: goto label_116074;
        case 0x116078u: goto label_116078;
        case 0x11607cu: goto label_11607c;
        case 0x116080u: goto label_116080;
        case 0x116084u: goto label_116084;
        case 0x116088u: goto label_116088;
        case 0x11608cu: goto label_11608c;
        case 0x116090u: goto label_116090;
        case 0x116094u: goto label_116094;
        case 0x116098u: goto label_116098;
        case 0x11609cu: goto label_11609c;
        case 0x1160a0u: goto label_1160a0;
        case 0x1160a4u: goto label_1160a4;
        case 0x1160a8u: goto label_1160a8;
        case 0x1160acu: goto label_1160ac;
        case 0x1160b0u: goto label_1160b0;
        case 0x1160b4u: goto label_1160b4;
        case 0x1160b8u: goto label_1160b8;
        case 0x1160bcu: goto label_1160bc;
        case 0x1160c0u: goto label_1160c0;
        case 0x1160c4u: goto label_1160c4;
        case 0x1160c8u: goto label_1160c8;
        case 0x1160ccu: goto label_1160cc;
        case 0x1160d0u: goto label_1160d0;
        case 0x1160d4u: goto label_1160d4;
        case 0x1160d8u: goto label_1160d8;
        case 0x1160dcu: goto label_1160dc;
        case 0x1160e0u: goto label_1160e0;
        case 0x1160e4u: goto label_1160e4;
        case 0x1160e8u: goto label_1160e8;
        case 0x1160ecu: goto label_1160ec;
        case 0x1160f0u: goto label_1160f0;
        case 0x1160f4u: goto label_1160f4;
        case 0x1160f8u: goto label_1160f8;
        case 0x1160fcu: goto label_1160fc;
        case 0x116100u: goto label_116100;
        case 0x116104u: goto label_116104;
        case 0x116108u: goto label_116108;
        case 0x11610cu: goto label_11610c;
        case 0x116110u: goto label_116110;
        case 0x116114u: goto label_116114;
        case 0x116118u: goto label_116118;
        case 0x11611cu: goto label_11611c;
        case 0x116120u: goto label_116120;
        case 0x116124u: goto label_116124;
        case 0x116128u: goto label_116128;
        case 0x11612cu: goto label_11612c;
        case 0x116130u: goto label_116130;
        case 0x116134u: goto label_116134;
        case 0x116138u: goto label_116138;
        case 0x11613cu: goto label_11613c;
        case 0x116140u: goto label_116140;
        case 0x116144u: goto label_116144;
        case 0x116148u: goto label_116148;
        case 0x11614cu: goto label_11614c;
        case 0x116150u: goto label_116150;
        case 0x116154u: goto label_116154;
        case 0x116158u: goto label_116158;
        case 0x11615cu: goto label_11615c;
        case 0x116160u: goto label_116160;
        case 0x116164u: goto label_116164;
        case 0x116168u: goto label_116168;
        case 0x11616cu: goto label_11616c;
        case 0x116170u: goto label_116170;
        case 0x116174u: goto label_116174;
        case 0x116178u: goto label_116178;
        case 0x11617cu: goto label_11617c;
        case 0x116180u: goto label_116180;
        case 0x116184u: goto label_116184;
        case 0x116188u: goto label_116188;
        case 0x11618cu: goto label_11618c;
        case 0x116190u: goto label_116190;
        case 0x116194u: goto label_116194;
        case 0x116198u: goto label_116198;
        case 0x11619cu: goto label_11619c;
        case 0x1161a0u: goto label_1161a0;
        case 0x1161a4u: goto label_1161a4;
        case 0x1161a8u: goto label_1161a8;
        case 0x1161acu: goto label_1161ac;
        case 0x1161b0u: goto label_1161b0;
        case 0x1161b4u: goto label_1161b4;
        case 0x1161b8u: goto label_1161b8;
        case 0x1161bcu: goto label_1161bc;
        case 0x1161c0u: goto label_1161c0;
        case 0x1161c4u: goto label_1161c4;
        case 0x1161c8u: goto label_1161c8;
        case 0x1161ccu: goto label_1161cc;
        case 0x1161d0u: goto label_1161d0;
        case 0x1161d4u: goto label_1161d4;
        case 0x1161d8u: goto label_1161d8;
        case 0x1161dcu: goto label_1161dc;
        case 0x1161e0u: goto label_1161e0;
        case 0x1161e4u: goto label_1161e4;
        case 0x1161e8u: goto label_1161e8;
        case 0x1161ecu: goto label_1161ec;
        case 0x1161f0u: goto label_1161f0;
        case 0x1161f4u: goto label_1161f4;
        case 0x1161f8u: goto label_1161f8;
        case 0x1161fcu: goto label_1161fc;
        case 0x116200u: goto label_116200;
        case 0x116204u: goto label_116204;
        case 0x116208u: goto label_116208;
        case 0x11620cu: goto label_11620c;
        case 0x116210u: goto label_116210;
        case 0x116214u: goto label_116214;
        case 0x116218u: goto label_116218;
        case 0x11621cu: goto label_11621c;
        case 0x116220u: goto label_116220;
        case 0x116224u: goto label_116224;
        case 0x116228u: goto label_116228;
        case 0x11622cu: goto label_11622c;
        case 0x116230u: goto label_116230;
        case 0x116234u: goto label_116234;
        case 0x116238u: goto label_116238;
        case 0x11623cu: goto label_11623c;
        case 0x116240u: goto label_116240;
        case 0x116244u: goto label_116244;
        case 0x116248u: goto label_116248;
        case 0x11624cu: goto label_11624c;
        case 0x116250u: goto label_116250;
        case 0x116254u: goto label_116254;
        case 0x116258u: goto label_116258;
        case 0x11625cu: goto label_11625c;
        case 0x116260u: goto label_116260;
        case 0x116264u: goto label_116264;
        case 0x116268u: goto label_116268;
        case 0x11626cu: goto label_11626c;
        case 0x116270u: goto label_116270;
        case 0x116274u: goto label_116274;
        case 0x116278u: goto label_116278;
        case 0x11627cu: goto label_11627c;
        case 0x116280u: goto label_116280;
        case 0x116284u: goto label_116284;
        case 0x116288u: goto label_116288;
        case 0x11628cu: goto label_11628c;
        case 0x116290u: goto label_116290;
        case 0x116294u: goto label_116294;
        case 0x116298u: goto label_116298;
        case 0x11629cu: goto label_11629c;
        case 0x1162a0u: goto label_1162a0;
        case 0x1162a4u: goto label_1162a4;
        case 0x1162a8u: goto label_1162a8;
        case 0x1162acu: goto label_1162ac;
        case 0x1162b0u: goto label_1162b0;
        case 0x1162b4u: goto label_1162b4;
        case 0x1162b8u: goto label_1162b8;
        case 0x1162bcu: goto label_1162bc;
        case 0x1162c0u: goto label_1162c0;
        case 0x1162c4u: goto label_1162c4;
        case 0x1162c8u: goto label_1162c8;
        case 0x1162ccu: goto label_1162cc;
        case 0x1162d0u: goto label_1162d0;
        case 0x1162d4u: goto label_1162d4;
        case 0x1162d8u: goto label_1162d8;
        case 0x1162dcu: goto label_1162dc;
        case 0x1162e0u: goto label_1162e0;
        case 0x1162e4u: goto label_1162e4;
        case 0x1162e8u: goto label_1162e8;
        case 0x1162ecu: goto label_1162ec;
        case 0x1162f0u: goto label_1162f0;
        case 0x1162f4u: goto label_1162f4;
        case 0x1162f8u: goto label_1162f8;
        case 0x1162fcu: goto label_1162fc;
        case 0x116300u: goto label_116300;
        case 0x116304u: goto label_116304;
        case 0x116308u: goto label_116308;
        case 0x11630cu: goto label_11630c;
        case 0x116310u: goto label_116310;
        case 0x116314u: goto label_116314;
        case 0x116318u: goto label_116318;
        case 0x11631cu: goto label_11631c;
        case 0x116320u: goto label_116320;
        case 0x116324u: goto label_116324;
        case 0x116328u: goto label_116328;
        case 0x11632cu: goto label_11632c;
        case 0x116330u: goto label_116330;
        case 0x116334u: goto label_116334;
        case 0x116338u: goto label_116338;
        case 0x11633cu: goto label_11633c;
        case 0x116340u: goto label_116340;
        case 0x116344u: goto label_116344;
        case 0x116348u: goto label_116348;
        case 0x11634cu: goto label_11634c;
        case 0x116350u: goto label_116350;
        case 0x116354u: goto label_116354;
        case 0x116358u: goto label_116358;
        case 0x11635cu: goto label_11635c;
        case 0x116360u: goto label_116360;
        case 0x116364u: goto label_116364;
        case 0x116368u: goto label_116368;
        case 0x11636cu: goto label_11636c;
        case 0x116370u: goto label_116370;
        case 0x116374u: goto label_116374;
        case 0x116378u: goto label_116378;
        case 0x11637cu: goto label_11637c;
        case 0x116380u: goto label_116380;
        case 0x116384u: goto label_116384;
        case 0x116388u: goto label_116388;
        case 0x11638cu: goto label_11638c;
        case 0x116390u: goto label_116390;
        case 0x116394u: goto label_116394;
        case 0x116398u: goto label_116398;
        case 0x11639cu: goto label_11639c;
        case 0x1163a0u: goto label_1163a0;
        case 0x1163a4u: goto label_1163a4;
        case 0x1163a8u: goto label_1163a8;
        case 0x1163acu: goto label_1163ac;
        case 0x1163b0u: goto label_1163b0;
        case 0x1163b4u: goto label_1163b4;
        case 0x1163b8u: goto label_1163b8;
        case 0x1163bcu: goto label_1163bc;
        case 0x1163c0u: goto label_1163c0;
        case 0x1163c4u: goto label_1163c4;
        case 0x1163c8u: goto label_1163c8;
        case 0x1163ccu: goto label_1163cc;
        case 0x1163d0u: goto label_1163d0;
        case 0x1163d4u: goto label_1163d4;
        case 0x1163d8u: goto label_1163d8;
        case 0x1163dcu: goto label_1163dc;
        case 0x1163e0u: goto label_1163e0;
        case 0x1163e4u: goto label_1163e4;
        case 0x1163e8u: goto label_1163e8;
        case 0x1163ecu: goto label_1163ec;
        case 0x1163f0u: goto label_1163f0;
        case 0x1163f4u: goto label_1163f4;
        case 0x1163f8u: goto label_1163f8;
        case 0x1163fcu: goto label_1163fc;
        case 0x116400u: goto label_116400;
        case 0x116404u: goto label_116404;
        case 0x116408u: goto label_116408;
        case 0x11640cu: goto label_11640c;
        case 0x116410u: goto label_116410;
        case 0x116414u: goto label_116414;
        case 0x116418u: goto label_116418;
        case 0x11641cu: goto label_11641c;
        case 0x116420u: goto label_116420;
        case 0x116424u: goto label_116424;
        case 0x116428u: goto label_116428;
        case 0x11642cu: goto label_11642c;
        case 0x116430u: goto label_116430;
        case 0x116434u: goto label_116434;
        case 0x116438u: goto label_116438;
        case 0x11643cu: goto label_11643c;
        case 0x116440u: goto label_116440;
        case 0x116444u: goto label_116444;
        case 0x116448u: goto label_116448;
        case 0x11644cu: goto label_11644c;
        case 0x116450u: goto label_116450;
        case 0x116454u: goto label_116454;
        case 0x116458u: goto label_116458;
        case 0x11645cu: goto label_11645c;
        case 0x116460u: goto label_116460;
        case 0x116464u: goto label_116464;
        case 0x116468u: goto label_116468;
        case 0x11646cu: goto label_11646c;
        case 0x116470u: goto label_116470;
        case 0x116474u: goto label_116474;
        case 0x116478u: goto label_116478;
        case 0x11647cu: goto label_11647c;
        case 0x116480u: goto label_116480;
        case 0x116484u: goto label_116484;
        case 0x116488u: goto label_116488;
        case 0x11648cu: goto label_11648c;
        case 0x116490u: goto label_116490;
        case 0x116494u: goto label_116494;
        case 0x116498u: goto label_116498;
        case 0x11649cu: goto label_11649c;
        case 0x1164a0u: goto label_1164a0;
        case 0x1164a4u: goto label_1164a4;
        case 0x1164a8u: goto label_1164a8;
        case 0x1164acu: goto label_1164ac;
        case 0x1164b0u: goto label_1164b0;
        case 0x1164b4u: goto label_1164b4;
        case 0x1164b8u: goto label_1164b8;
        case 0x1164bcu: goto label_1164bc;
        case 0x1164c0u: goto label_1164c0;
        case 0x1164c4u: goto label_1164c4;
        case 0x1164c8u: goto label_1164c8;
        case 0x1164ccu: goto label_1164cc;
        case 0x1164d0u: goto label_1164d0;
        case 0x1164d4u: goto label_1164d4;
        case 0x1164d8u: goto label_1164d8;
        case 0x1164dcu: goto label_1164dc;
        case 0x1164e0u: goto label_1164e0;
        case 0x1164e4u: goto label_1164e4;
        case 0x1164e8u: goto label_1164e8;
        case 0x1164ecu: goto label_1164ec;
        case 0x1164f0u: goto label_1164f0;
        case 0x1164f4u: goto label_1164f4;
        case 0x1164f8u: goto label_1164f8;
        case 0x1164fcu: goto label_1164fc;
        case 0x116500u: goto label_116500;
        case 0x116504u: goto label_116504;
        case 0x116508u: goto label_116508;
        case 0x11650cu: goto label_11650c;
        case 0x116510u: goto label_116510;
        case 0x116514u: goto label_116514;
        case 0x116518u: goto label_116518;
        case 0x11651cu: goto label_11651c;
        case 0x116520u: goto label_116520;
        case 0x116524u: goto label_116524;
        case 0x116528u: goto label_116528;
        case 0x11652cu: goto label_11652c;
        case 0x116530u: goto label_116530;
        case 0x116534u: goto label_116534;
        case 0x116538u: goto label_116538;
        case 0x11653cu: goto label_11653c;
        case 0x116540u: goto label_116540;
        case 0x116544u: goto label_116544;
        case 0x116548u: goto label_116548;
        case 0x11654cu: goto label_11654c;
        case 0x116550u: goto label_116550;
        case 0x116554u: goto label_116554;
        case 0x116558u: goto label_116558;
        case 0x11655cu: goto label_11655c;
        case 0x116560u: goto label_116560;
        case 0x116564u: goto label_116564;
        case 0x116568u: goto label_116568;
        case 0x11656cu: goto label_11656c;
        case 0x116570u: goto label_116570;
        case 0x116574u: goto label_116574;
        case 0x116578u: goto label_116578;
        case 0x11657cu: goto label_11657c;
        case 0x116580u: goto label_116580;
        case 0x116584u: goto label_116584;
        case 0x116588u: goto label_116588;
        case 0x11658cu: goto label_11658c;
        case 0x116590u: goto label_116590;
        case 0x116594u: goto label_116594;
        case 0x116598u: goto label_116598;
        case 0x11659cu: goto label_11659c;
        default: break;
    }

    ctx->pc = 0x116040u;

label_116040:
    // 0x116040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x116040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_116044:
    // 0x116044: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x116044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_116048:
    // 0x116048: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x116048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_11604c:
    // 0x11604c: 0x2484f1b0  addiu       $a0, $a0, -0xE50
    ctx->pc = 0x11604cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963632));
label_116050:
    // 0x116050: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x116050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_116054:
    // 0x116054: 0x3c12005d  lui         $s2, 0x5D
    ctx->pc = 0x116054u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)93 << 16));
label_116058:
    // 0x116058: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11605c:
    // 0x11605c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11605cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_116060:
    // 0x116060: 0x2650ea98  addiu       $s0, $s2, -0x1568
    ctx->pc = 0x116060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961816));
label_116064:
    // 0x116064: 0x8e45ea98  lw          $a1, -0x1568($s2)
    ctx->pc = 0x116064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294961816)));
label_116068:
    // 0x116068: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x116068u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_11606c:
    // 0x11606c: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x11606cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_116070:
    // 0x116070: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x116070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_116074:
    // 0x116074: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x116074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_116078:
    // 0x116078: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x116078u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_11607c:
    // 0x11607c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x11607cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_116080:
    // 0x116080: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x116080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_116084:
    // 0x116084: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x116084u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_116088:
    // 0x116088: 0xc043c32  jal         func_10F0C8
label_11608c:
    if (ctx->pc == 0x11608Cu) {
        ctx->pc = 0x11608Cu;
            // 0x11608c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->pc = 0x116090u;
        goto label_116090;
    }
    ctx->pc = 0x116088u;
    SET_GPR_U32(ctx, 31, 0x116090u);
    ctx->pc = 0x11608Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116088u;
            // 0x11608c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F0C8u;
    if (runtime->hasFunction(0x10F0C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116090u; }
        if (ctx->pc != 0x116090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F0C8_0x10f0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116090u; }
        if (ctx->pc != 0x116090u) { return; }
    }
    ctx->pc = 0x116090u;
label_116090:
    // 0x116090: 0x40803000  mtc0        $zero, Wired
    ctx->pc = 0x116090u;
    ctx->cop0_wired = GPR_U32(ctx, 0) & 0x3F; ctx->cop0_random = 47;
label_116094:
    // 0x116094: 0x40f  sync.p
    ctx->pc = 0x116094u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_116098:
    // 0x116098: 0x8e51ea98  lw          $s1, -0x1568($s2)
    ctx->pc = 0x116098u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294961816)));
label_11609c:
    // 0x11609c: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x11609cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_1160a0:
    // 0x1160a0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1160a4:
    if (ctx->pc == 0x1160A4u) {
        ctx->pc = 0x1160A4u;
            // 0x1160a4: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1160A8u;
        goto label_1160a8;
    }
    ctx->pc = 0x1160A0u;
    {
        const bool branch_taken_0x1160a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1160A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1160A0u;
            // 0x1160a4: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160a0) {
            ctx->pc = 0x1160BCu;
            goto label_1160bc;
        }
    }
    ctx->pc = 0x1160A8u;
label_1160a8:
    // 0x1160a8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1160a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1160ac:
    // 0x1160ac: 0xc043c32  jal         func_10F0C8
label_1160b0:
    if (ctx->pc == 0x1160B0u) {
        ctx->pc = 0x1160B0u;
            // 0x1160b0: 0x2484f1e8  addiu       $a0, $a0, -0xE18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963688));
        ctx->pc = 0x1160B4u;
        goto label_1160b4;
    }
    ctx->pc = 0x1160ACu;
    SET_GPR_U32(ctx, 31, 0x1160B4u);
    ctx->pc = 0x1160B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1160ACu;
            // 0x1160b0: 0x2484f1e8  addiu       $a0, $a0, -0xE18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F0C8u;
    if (runtime->hasFunction(0x10F0C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1160B4u; }
        if (ctx->pc != 0x1160B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F0C8_0x10f0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1160B4u; }
        if (ctx->pc != 0x1160B4u) { return; }
    }
    ctx->pc = 0x1160B4u;
label_1160b4:
    // 0x1160b4: 0xc045b16  jal         func_116C58
label_1160b8:
    if (ctx->pc == 0x1160B8u) {
        ctx->pc = 0x1160B8u;
            // 0x1160b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1160BCu;
        goto label_1160bc;
    }
    ctx->pc = 0x1160B4u;
    SET_GPR_U32(ctx, 31, 0x1160BCu);
    ctx->pc = 0x1160B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1160B4u;
            // 0x1160b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116C58u;
    if (runtime->hasFunction(0x116C58u)) {
        auto targetFn = runtime->lookupFunction(0x116C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1160BCu; }
        if (ctx->pc != 0x1160BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116C58_0x116c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1160BCu; }
        if (ctx->pc != 0x1160BCu) { return; }
    }
    ctx->pc = 0x1160BCu;
label_1160bc:
    // 0x1160bc: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1160bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1160c0:
    // 0x1160c0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1160c4:
    if (ctx->pc == 0x1160C4u) {
        ctx->pc = 0x1160C4u;
            // 0x1160c4: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x1160C8u;
        goto label_1160c8;
    }
    ctx->pc = 0x1160C0u;
    {
        const bool branch_taken_0x1160c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1160C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1160C0u;
            // 0x1160c4: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160c0) {
            ctx->pc = 0x1160F8u;
            goto label_1160f8;
        }
    }
    ctx->pc = 0x1160C8u;
label_1160c8:
    // 0x1160c8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1160c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1160cc:
    // 0x1160cc: 0x0  nop
    ctx->pc = 0x1160ccu;
    // NOP
label_1160d0:
    // 0x1160d0: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1160d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_1160d4:
    // 0x1160d4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1160d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1160d8:
    // 0x1160d8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1160d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1160dc:
    // 0x1160dc: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1160dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1160e0:
    // 0x1160e0: 0xc0457d8  jal         func_115F60
label_1160e4:
    if (ctx->pc == 0x1160E4u) {
        ctx->pc = 0x1160E4u;
            // 0x1160e4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x1160E8u;
        goto label_1160e8;
    }
    ctx->pc = 0x1160E0u;
    SET_GPR_U32(ctx, 31, 0x1160E8u);
    ctx->pc = 0x1160E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1160E0u;
            // 0x1160e4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115F60u;
    if (runtime->hasFunction(0x115F60u)) {
        auto targetFn = runtime->lookupFunction(0x115F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1160E8u; }
        if (ctx->pc != 0x1160E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115F60_0x115f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1160E8u; }
        if (ctx->pc != 0x1160E8u) { return; }
    }
    ctx->pc = 0x1160E8u;
label_1160e8:
    // 0x1160e8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1160e8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_1160ec:
    // 0x1160ec: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1160ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1160f0:
    // 0x1160f0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_1160f4:
    if (ctx->pc == 0x1160F4u) {
        ctx->pc = 0x1160F4u;
            // 0x1160f4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1160F8u;
        goto label_1160f8;
    }
    ctx->pc = 0x1160F0u;
    {
        const bool branch_taken_0x1160f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1160f0) {
            ctx->pc = 0x1160F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1160F0u;
            // 0x1160f4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1160D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1160d0;
        }
    }
    ctx->pc = 0x1160F8u;
label_1160f8:
    // 0x1160f8: 0x2650ea98  addiu       $s0, $s2, -0x1568
    ctx->pc = 0x1160f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961816));
label_1160fc:
    // 0x1160fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1160fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_116100:
    // 0x116100: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x116100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_116104:
    // 0x116104: 0x2a230031  slti        $v1, $s1, 0x31
    ctx->pc = 0x116104u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_116108:
    // 0x116108: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_11610c:
    if (ctx->pc == 0x11610Cu) {
        ctx->pc = 0x11610Cu;
            // 0x11610c: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->pc = 0x116110u;
        goto label_116110;
    }
    ctx->pc = 0x116108u;
    {
        const bool branch_taken_0x116108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11610Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116108u;
            // 0x11610c: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116108) {
            ctx->pc = 0x116128u;
            goto label_116128;
        }
    }
    ctx->pc = 0x116110u;
label_116110:
    // 0x116110: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x116110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_116114:
    // 0x116114: 0xc043c32  jal         func_10F0C8
label_116118:
    if (ctx->pc == 0x116118u) {
        ctx->pc = 0x116118u;
            // 0x116118: 0x2484f200  addiu       $a0, $a0, -0xE00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963712));
        ctx->pc = 0x11611Cu;
        goto label_11611c;
    }
    ctx->pc = 0x116114u;
    SET_GPR_U32(ctx, 31, 0x11611Cu);
    ctx->pc = 0x116118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116114u;
            // 0x116118: 0x2484f200  addiu       $a0, $a0, -0xE00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F0C8u;
    if (runtime->hasFunction(0x10F0C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11611Cu; }
        if (ctx->pc != 0x11611Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F0C8_0x10f0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11611Cu; }
        if (ctx->pc != 0x11611Cu) { return; }
    }
    ctx->pc = 0x11611Cu;
label_11611c:
    // 0x11611c: 0xc045b16  jal         func_116C58
label_116120:
    if (ctx->pc == 0x116120u) {
        ctx->pc = 0x116120u;
            // 0x116120: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x116124u;
        goto label_116124;
    }
    ctx->pc = 0x11611Cu;
    SET_GPR_U32(ctx, 31, 0x116124u);
    ctx->pc = 0x116120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11611Cu;
            // 0x116120: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116C58u;
    if (runtime->hasFunction(0x116C58u)) {
        auto targetFn = runtime->lookupFunction(0x116C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116124u; }
        if (ctx->pc != 0x116124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116C58_0x116c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116124u; }
        if (ctx->pc != 0x116124u) { return; }
    }
    ctx->pc = 0x116124u;
label_116124:
    // 0x116124: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x116124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_116128:
    // 0x116128: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_11612c:
    if (ctx->pc == 0x11612Cu) {
        ctx->pc = 0x11612Cu;
            // 0x11612c: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x116130u;
        goto label_116130;
    }
    ctx->pc = 0x116128u;
    {
        const bool branch_taken_0x116128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11612Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116128u;
            // 0x11612c: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116128) {
            ctx->pc = 0x116160u;
            goto label_116160;
        }
    }
    ctx->pc = 0x116130u;
label_116130:
    // 0x116130: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x116130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_116134:
    // 0x116134: 0x0  nop
    ctx->pc = 0x116134u;
    // NOP
label_116138:
    // 0x116138: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x116138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_11613c:
    // 0x11613c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x11613cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_116140:
    // 0x116140: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x116140u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_116144:
    // 0x116144: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x116144u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_116148:
    // 0x116148: 0xc0457d8  jal         func_115F60
label_11614c:
    if (ctx->pc == 0x11614Cu) {
        ctx->pc = 0x11614Cu;
            // 0x11614c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x116150u;
        goto label_116150;
    }
    ctx->pc = 0x116148u;
    SET_GPR_U32(ctx, 31, 0x116150u);
    ctx->pc = 0x11614Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116148u;
            // 0x11614c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115F60u;
    if (runtime->hasFunction(0x115F60u)) {
        auto targetFn = runtime->lookupFunction(0x115F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116150u; }
        if (ctx->pc != 0x116150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115F60_0x115f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116150u; }
        if (ctx->pc != 0x116150u) { return; }
    }
    ctx->pc = 0x116150u;
label_116150:
    // 0x116150: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x116150u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_116154:
    // 0x116154: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x116154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_116158:
    // 0x116158: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_11615c:
    if (ctx->pc == 0x11615Cu) {
        ctx->pc = 0x11615Cu;
            // 0x11615c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x116160u;
        goto label_116160;
    }
    ctx->pc = 0x116158u;
    {
        const bool branch_taken_0x116158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116158) {
            ctx->pc = 0x11615Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x116158u;
            // 0x11615c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x116138u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_116138;
        }
    }
    ctx->pc = 0x116160u;
label_116160:
    // 0x116160: 0x2650ea98  addiu       $s0, $s2, -0x1568
    ctx->pc = 0x116160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961816));
label_116164:
    // 0x116164: 0xae19000c  sw          $t9, 0xC($s0)
    ctx->pc = 0x116164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 25));
label_116168:
    // 0x116168: 0x40993000  mtc0        $t9, Wired
    ctx->pc = 0x116168u;
    ctx->cop0_wired = GPR_U32(ctx, 25) & 0x3F; ctx->cop0_random = 47;
label_11616c:
    // 0x11616c: 0x40f  sync.p
    ctx->pc = 0x11616cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_116170:
    // 0x116170: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x116170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_116174:
    // 0x116174: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
label_116178:
    if (ctx->pc == 0x116178u) {
        ctx->pc = 0x116178u;
            // 0x116178: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11617Cu;
        goto label_11617c;
    }
    ctx->pc = 0x116174u;
    {
        const bool branch_taken_0x116174 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x116174) {
            ctx->pc = 0x116178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x116174u;
            // 0x116178: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1161DCu;
            goto label_1161dc;
        }
    }
    ctx->pc = 0x11617Cu;
label_11617c:
    // 0x11617c: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x11617cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_116180:
    // 0x116180: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x116180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_116184:
    // 0x116184: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_116188:
    if (ctx->pc == 0x116188u) {
        ctx->pc = 0x116188u;
            // 0x116188: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->pc = 0x11618Cu;
        goto label_11618c;
    }
    ctx->pc = 0x116184u;
    {
        const bool branch_taken_0x116184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116184u;
            // 0x116188: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116184) {
            ctx->pc = 0x1161A4u;
            goto label_1161a4;
        }
    }
    ctx->pc = 0x11618Cu;
label_11618c:
    // 0x11618c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x11618cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_116190:
    // 0x116190: 0xc043c32  jal         func_10F0C8
label_116194:
    if (ctx->pc == 0x116194u) {
        ctx->pc = 0x116194u;
            // 0x116194: 0x2484f218  addiu       $a0, $a0, -0xDE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963736));
        ctx->pc = 0x116198u;
        goto label_116198;
    }
    ctx->pc = 0x116190u;
    SET_GPR_U32(ctx, 31, 0x116198u);
    ctx->pc = 0x116194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116190u;
            // 0x116194: 0x2484f218  addiu       $a0, $a0, -0xDE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F0C8u;
    if (runtime->hasFunction(0x10F0C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116198u; }
        if (ctx->pc != 0x116198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F0C8_0x10f0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116198u; }
        if (ctx->pc != 0x116198u) { return; }
    }
    ctx->pc = 0x116198u;
label_116198:
    // 0x116198: 0xc045b16  jal         func_116C58
label_11619c:
    if (ctx->pc == 0x11619Cu) {
        ctx->pc = 0x11619Cu;
            // 0x11619c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1161A0u;
        goto label_1161a0;
    }
    ctx->pc = 0x116198u;
    SET_GPR_U32(ctx, 31, 0x1161A0u);
    ctx->pc = 0x11619Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116198u;
            // 0x11619c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116C58u;
    if (runtime->hasFunction(0x116C58u)) {
        auto targetFn = runtime->lookupFunction(0x116C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1161A0u; }
        if (ctx->pc != 0x1161A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116C58_0x116c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1161A0u; }
        if (ctx->pc != 0x1161A0u) { return; }
    }
    ctx->pc = 0x1161A0u;
label_1161a0:
    // 0x1161a0: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1161a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1161a4:
    // 0x1161a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1161a8:
    if (ctx->pc == 0x1161A8u) {
        ctx->pc = 0x1161A8u;
            // 0x1161a8: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->pc = 0x1161ACu;
        goto label_1161ac;
    }
    ctx->pc = 0x1161A4u;
    {
        const bool branch_taken_0x1161a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1161A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1161A4u;
            // 0x1161a8: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161a4) {
            ctx->pc = 0x1161D8u;
            goto label_1161d8;
        }
    }
    ctx->pc = 0x1161ACu;
label_1161ac:
    // 0x1161ac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1161acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1161b0:
    // 0x1161b0: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1161b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_1161b4:
    // 0x1161b4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1161b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1161b8:
    // 0x1161b8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1161b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1161bc:
    // 0x1161bc: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1161bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1161c0:
    // 0x1161c0: 0xc0457d8  jal         func_115F60
label_1161c4:
    if (ctx->pc == 0x1161C4u) {
        ctx->pc = 0x1161C4u;
            // 0x1161c4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x1161C8u;
        goto label_1161c8;
    }
    ctx->pc = 0x1161C0u;
    SET_GPR_U32(ctx, 31, 0x1161C8u);
    ctx->pc = 0x1161C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1161C0u;
            // 0x1161c4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115F60u;
    if (runtime->hasFunction(0x115F60u)) {
        auto targetFn = runtime->lookupFunction(0x115F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1161C8u; }
        if (ctx->pc != 0x1161C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115F60_0x115f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1161C8u; }
        if (ctx->pc != 0x1161C8u) { return; }
    }
    ctx->pc = 0x1161C8u;
label_1161c8:
    // 0x1161c8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1161c8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_1161cc:
    // 0x1161cc: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1161ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1161d0:
    // 0x1161d0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_1161d4:
    if (ctx->pc == 0x1161D4u) {
        ctx->pc = 0x1161D4u;
            // 0x1161d4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1161D8u;
        goto label_1161d8;
    }
    ctx->pc = 0x1161D0u;
    {
        const bool branch_taken_0x1161d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1161d0) {
            ctx->pc = 0x1161D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1161D0u;
            // 0x1161d4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1161B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1161b0;
        }
    }
    ctx->pc = 0x1161D8u;
label_1161d8:
    // 0x1161d8: 0x320802d  daddu       $s0, $t9, $zero
    ctx->pc = 0x1161d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_1161dc:
    // 0x1161dc: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1161dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
label_1161e0:
    // 0x1161e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1161e4:
    if (ctx->pc == 0x1161E4u) {
        ctx->pc = 0x1161E4u;
            // 0x1161e4: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->pc = 0x1161E8u;
        goto label_1161e8;
    }
    ctx->pc = 0x1161E0u;
    {
        const bool branch_taken_0x1161e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1161E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1161E0u;
            // 0x1161e4: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161e0) {
            ctx->pc = 0x116218u;
            goto label_116218;
        }
    }
    ctx->pc = 0x1161E8u;
label_1161e8:
    // 0x1161e8: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x1161e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
label_1161ec:
    // 0x1161ec: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1161ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_1161f0:
    // 0x1161f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1161f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1161f4:
    // 0x1161f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1161f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1161f8:
    // 0x1161f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1161f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1161fc:
    // 0x1161fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1161fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116200:
    // 0x116200: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x116200u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116204:
    // 0x116204: 0xc0457d8  jal         func_115F60
label_116208:
    if (ctx->pc == 0x116208u) {
        ctx->pc = 0x116208u;
            // 0x116208: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x11620Cu;
        goto label_11620c;
    }
    ctx->pc = 0x116204u;
    SET_GPR_U32(ctx, 31, 0x11620Cu);
    ctx->pc = 0x116208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116204u;
            // 0x116208: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115F60u;
    if (runtime->hasFunction(0x115F60u)) {
        auto targetFn = runtime->lookupFunction(0x115F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11620Cu; }
        if (ctx->pc != 0x11620Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115F60_0x115f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11620Cu; }
        if (ctx->pc != 0x11620Cu) { return; }
    }
    ctx->pc = 0x11620Cu;
label_11620c:
    // 0x11620c: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x11620cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
label_116210:
    // 0x116210: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_116214:
    if (ctx->pc == 0x116214u) {
        ctx->pc = 0x116214u;
            // 0x116214: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->pc = 0x116218u;
        goto label_116218;
    }
    ctx->pc = 0x116210u;
    {
        const bool branch_taken_0x116210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116210u;
            // 0x116214: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116210) {
            ctx->pc = 0x1161F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1161f0;
        }
    }
    ctx->pc = 0x116218u;
label_116218:
    // 0x116218: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x116218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11621c:
    // 0x11621c: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x11621cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_116220:
    // 0x116220: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x116220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_116224:
    // 0x116224: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x116224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_116228:
    // 0x116228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11622c:
    // 0x11622c: 0x3e00008  jr          $ra
label_116230:
    if (ctx->pc == 0x116230u) {
        ctx->pc = 0x116230u;
            // 0x116230: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x116234u;
        goto label_116234;
    }
    ctx->pc = 0x11622Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11622Cu;
            // 0x116230: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116234u;
label_116234:
    // 0x116234: 0x0  nop
    ctx->pc = 0x116234u;
    // NOP
label_116238:
    // 0x116238: 0x0  nop
    ctx->pc = 0x116238u;
    // NOP
label_11623c:
    // 0x11623c: 0x0  nop
    ctx->pc = 0x11623cu;
    // NOP
label_116240:
    // 0x116240: 0x3c1a006c  lui         $k0, 0x6C
    ctx->pc = 0x116240u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)108 << 16));
label_116244:
    // 0x116244: 0x275ae0c0  addiu       $k0, $k0, -0x1F40
    ctx->pc = 0x116244u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 4294959296));
label_116248:
    // 0x116248: 0x7f410010  sq          $at, 0x10($k0)
    ctx->pc = 0x116248u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_11624c:
    // 0x11624c: 0x7f420020  sq          $v0, 0x20($k0)
    ctx->pc = 0x11624cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_116250:
    // 0x116250: 0x7f430030  sq          $v1, 0x30($k0)
    ctx->pc = 0x116250u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_116254:
    // 0x116254: 0x7f440040  sq          $a0, 0x40($k0)
    ctx->pc = 0x116254u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_116258:
    // 0x116258: 0x7f450050  sq          $a1, 0x50($k0)
    ctx->pc = 0x116258u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_11625c:
    // 0x11625c: 0x7f460060  sq          $a2, 0x60($k0)
    ctx->pc = 0x11625cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_116260:
    // 0x116260: 0x7f470070  sq          $a3, 0x70($k0)
    ctx->pc = 0x116260u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_116264:
    // 0x116264: 0x7f480080  sq          $t0, 0x80($k0)
    ctx->pc = 0x116264u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_116268:
    // 0x116268: 0x7f490090  sq          $t1, 0x90($k0)
    ctx->pc = 0x116268u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_11626c:
    // 0x11626c: 0x7f4a00a0  sq          $t2, 0xA0($k0)
    ctx->pc = 0x11626cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_116270:
    // 0x116270: 0x7f4b00b0  sq          $t3, 0xB0($k0)
    ctx->pc = 0x116270u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_116274:
    // 0x116274: 0x7f4c00c0  sq          $t4, 0xC0($k0)
    ctx->pc = 0x116274u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_116278:
    // 0x116278: 0x7f4d00d0  sq          $t5, 0xD0($k0)
    ctx->pc = 0x116278u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_11627c:
    // 0x11627c: 0x7f4e00e0  sq          $t6, 0xE0($k0)
    ctx->pc = 0x11627cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_116280:
    // 0x116280: 0x7f4f00f0  sq          $t7, 0xF0($k0)
    ctx->pc = 0x116280u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_116284:
    // 0x116284: 0x7f500100  sq          $s0, 0x100($k0)
    ctx->pc = 0x116284u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_116288:
    // 0x116288: 0x7f510110  sq          $s1, 0x110($k0)
    ctx->pc = 0x116288u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_11628c:
    // 0x11628c: 0x7f520120  sq          $s2, 0x120($k0)
    ctx->pc = 0x11628cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_116290:
    // 0x116290: 0x7f530130  sq          $s3, 0x130($k0)
    ctx->pc = 0x116290u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_116294:
    // 0x116294: 0x7f540140  sq          $s4, 0x140($k0)
    ctx->pc = 0x116294u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_116298:
    // 0x116298: 0x7f550150  sq          $s5, 0x150($k0)
    ctx->pc = 0x116298u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_11629c:
    // 0x11629c: 0x7f560160  sq          $s6, 0x160($k0)
    ctx->pc = 0x11629cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_1162a0:
    // 0x1162a0: 0x7f570170  sq          $s7, 0x170($k0)
    ctx->pc = 0x1162a0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_1162a4:
    // 0x1162a4: 0x7f580180  sq          $t8, 0x180($k0)
    ctx->pc = 0x1162a4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_1162a8:
    // 0x1162a8: 0x7f590190  sq          $t9, 0x190($k0)
    ctx->pc = 0x1162a8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_1162ac:
    // 0x1162ac: 0x7f5c01c0  sq          $gp, 0x1C0($k0)
    ctx->pc = 0x1162acu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_1162b0:
    // 0x1162b0: 0x7f5d01d0  sq          $sp, 0x1D0($k0)
    ctx->pc = 0x1162b0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_1162b4:
    // 0x1162b4: 0x7f5e01e0  sq          $fp, 0x1E0($k0)
    ctx->pc = 0x1162b4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_1162b8:
    // 0x1162b8: 0x7f5f01f0  sq          $ra, 0x1F0($k0)
    ctx->pc = 0x1162b8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_1162bc:
    // 0x1162bc: 0x1010  mfhi        $v0
    ctx->pc = 0x1162bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1162c0:
    // 0x1162c0: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x1162c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
label_1162c4:
    // 0x1162c4: 0xfc22e2c0  sd          $v0, -0x1D40($at)
    ctx->pc = 0x1162c4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294959808), GPR_U64(ctx, 2));
label_1162c8:
    // 0x1162c8: 0x70001010  mfhi1       $v0
    ctx->pc = 0x1162c8u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
label_1162cc:
    // 0x1162cc: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x1162ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
label_1162d0:
    // 0x1162d0: 0xfc22e2c8  sd          $v0, -0x1D38($at)
    ctx->pc = 0x1162d0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294959816), GPR_U64(ctx, 2));
label_1162d4:
    // 0x1162d4: 0x1012  mflo        $v0
    ctx->pc = 0x1162d4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1162d8:
    // 0x1162d8: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x1162d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
label_1162dc:
    // 0x1162dc: 0xfc22e2d0  sd          $v0, -0x1D30($at)
    ctx->pc = 0x1162dcu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294959824), GPR_U64(ctx, 2));
label_1162e0:
    // 0x1162e0: 0x70001012  mflo1       $v0
    ctx->pc = 0x1162e0u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_1162e4:
    // 0x1162e4: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x1162e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
label_1162e8:
    // 0x1162e8: 0xfc22e2d8  sd          $v0, -0x1D28($at)
    ctx->pc = 0x1162e8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294959832), GPR_U64(ctx, 2));
label_1162ec:
    // 0x1162ec: 0x1028  mfsa        $v0
    ctx->pc = 0x1162ecu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_1162f0:
    // 0x1162f0: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x1162f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
label_1162f4:
    // 0x1162f4: 0xfc22e2e0  sd          $v0, -0x1D20($at)
    ctx->pc = 0x1162f4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294959840), GPR_U64(ctx, 2));
label_1162f8:
    // 0x1162f8: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x1162f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
label_1162fc:
    // 0x1162fc: 0x40056800  mfc0        $a1, Cause
    ctx->pc = 0x1162fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_cause);
label_116300:
    // 0x116300: 0x40067000  mfc0        $a2, EPC
    ctx->pc = 0x116300u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_epc);
label_116304:
    // 0x116304: 0x40074000  mfc0        $a3, BadVaddr
    ctx->pc = 0x116304u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_badvaddr);
label_116308:
    // 0x116308: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x116308u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
label_11630c:
    // 0x11630c: 0x2508e0c0  addiu       $t0, $t0, -0x1F40
    ctx->pc = 0x11630cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959296));
label_116310:
    // 0x116310: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x116310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
label_116314:
    // 0x116314: 0xac26e2e8  sw          $a2, -0x1D18($at)
    ctx->pc = 0x116314u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959848), GPR_U32(ctx, 6));
label_116318:
    // 0x116318: 0x3c010011  lui         $at, 0x11
    ctx->pc = 0x116318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17 << 16));
label_11631c:
    // 0x11631c: 0x24216340  addiu       $at, $at, 0x6340
    ctx->pc = 0x11631cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 25408));
label_116320:
    // 0x116320: 0x40817000  mtc0        $at, EPC
    ctx->pc = 0x116320u;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_116324:
    // 0x116324: 0x40f  sync.p
    ctx->pc = 0x116324u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_116328:
    // 0x116328: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x116328u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_11632c:
    // 0x11632c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x11632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_116330:
    // 0x116330: 0x220824  and         $at, $at, $v0
    ctx->pc = 0x116330u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_116334:
    // 0x116334: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x116334u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_116338:
    // 0x116338: 0x40f  sync.p
    ctx->pc = 0x116338u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_11633c:
    // 0x11633c: 0x42000018  eret
    ctx->pc = 0x11633cu;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_116340:
    // 0x116340: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x116340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_116344:
    // 0x116344: 0x8c21e798  lw          $at, -0x1868($at)
    ctx->pc = 0x116344u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961048)));
label_116348:
    // 0x116348: 0x3c1d006c  lui         $sp, 0x6C
    ctx->pc = 0x116348u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)108 << 16));
label_11634c:
    // 0x11634c: 0x20f809  jalr        $at
label_116350:
    if (ctx->pc == 0x116350u) {
        ctx->pc = 0x116350u;
            // 0x116350: 0x27bde0c0  addiu       $sp, $sp, -0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294959296));
        ctx->pc = 0x116354u;
        goto label_116354;
    }
    ctx->pc = 0x11634Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x116354u);
        ctx->pc = 0x116350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11634Cu;
            // 0x116350: 0x27bde0c0  addiu       $sp, $sp, -0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294959296));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x116354u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x116354u; }
            if (ctx->pc != 0x116354u) { return; }
        }
        }
    }
    ctx->pc = 0x116354u;
label_116354:
    // 0x116354: 0x2403ffac  addiu       $v1, $zero, -0x54
    ctx->pc = 0x116354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967212));
label_116358:
    // 0x116358: 0xc  syscall     0
    ctx->pc = 0x116358u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
label_11635c:
    // 0x11635c: 0x0  nop
    ctx->pc = 0x11635cu;
    // NOP
label_116360:
    // 0x116360: 0x0  nop
    ctx->pc = 0x116360u;
    // NOP
label_116364:
    // 0x116364: 0x0  nop
    ctx->pc = 0x116364u;
    // NOP
label_116368:
    // 0x116368: 0x0  nop
    ctx->pc = 0x116368u;
    // NOP
label_11636c:
    // 0x11636c: 0x0  nop
    ctx->pc = 0x11636cu;
    // NOP
label_116370:
    // 0x116370: 0x0  nop
    ctx->pc = 0x116370u;
    // NOP
label_116374:
    // 0x116374: 0x0  nop
    ctx->pc = 0x116374u;
    // NOP
label_116378:
    // 0x116378: 0x0  nop
    ctx->pc = 0x116378u;
    // NOP
label_11637c:
    // 0x11637c: 0x0  nop
    ctx->pc = 0x11637cu;
    // NOP
label_116380:
    // 0x116380: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x116380u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_116384:
    // 0x116384: 0x241affe4  addiu       $k0, $zero, -0x1C
    ctx->pc = 0x116384u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_116388:
    // 0x116388: 0x3a0824  and         $at, $at, $k0
    ctx->pc = 0x116388u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 26));
label_11638c:
    // 0x11638c: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x11638cu;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_116390:
    // 0x116390: 0x40f  sync.p
    ctx->pc = 0x116390u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_116394:
    // 0x116394: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x116394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_116398:
    // 0x116398: 0x8c42e2e8  lw          $v0, -0x1D18($v0)
    ctx->pc = 0x116398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959848)));
label_11639c:
    // 0x11639c: 0x40827000  mtc0        $v0, EPC
    ctx->pc = 0x11639cu;
    ctx->cop0_epc = GPR_U32(ctx, 2);
label_1163a0:
    // 0x1163a0: 0x40f  sync.p
    ctx->pc = 0x1163a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1163a4:
    // 0x1163a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1163a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1163a8:
    // 0x1163a8: 0xdc42e2c0  ld          $v0, -0x1D40($v0)
    ctx->pc = 0x1163a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294959808)));
label_1163ac:
    // 0x1163ac: 0x400011  mthi        $v0
    ctx->pc = 0x1163acu;
    ctx->hi = GPR_U64(ctx, 2);
label_1163b0:
    // 0x1163b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1163b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1163b4:
    // 0x1163b4: 0xdc42e2c8  ld          $v0, -0x1D38($v0)
    ctx->pc = 0x1163b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294959816)));
label_1163b8:
    // 0x1163b8: 0x70400011  mthi1       $v0
    ctx->pc = 0x1163b8u;
    ctx->hi1 = GPR_U64(ctx, 2);
label_1163bc:
    // 0x1163bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1163bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1163c0:
    // 0x1163c0: 0xdc42e2d0  ld          $v0, -0x1D30($v0)
    ctx->pc = 0x1163c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294959824)));
label_1163c4:
    // 0x1163c4: 0x400013  mtlo        $v0
    ctx->pc = 0x1163c4u;
    ctx->lo = GPR_U64(ctx, 2);
label_1163c8:
    // 0x1163c8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1163c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1163cc:
    // 0x1163cc: 0xdc42e2d8  ld          $v0, -0x1D28($v0)
    ctx->pc = 0x1163ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294959832)));
label_1163d0:
    // 0x1163d0: 0x70400013  mtlo1       $v0
    ctx->pc = 0x1163d0u;
    ctx->lo1 = GPR_U64(ctx, 2);
label_1163d4:
    // 0x1163d4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1163d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1163d8:
    // 0x1163d8: 0xdc42e2e0  ld          $v0, -0x1D20($v0)
    ctx->pc = 0x1163d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294959840)));
label_1163dc:
    // 0x1163dc: 0x400029  mtsa        $v0
    ctx->pc = 0x1163dcu;
    ctx->sa = GPR_U32(ctx, 2) & 0x7F;
label_1163e0:
    // 0x1163e0: 0x40f  sync.p
    ctx->pc = 0x1163e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1163e4:
    // 0x1163e4: 0x3c1a006c  lui         $k0, 0x6C
    ctx->pc = 0x1163e4u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)108 << 16));
label_1163e8:
    // 0x1163e8: 0x275ae0c0  addiu       $k0, $k0, -0x1F40
    ctx->pc = 0x1163e8u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 4294959296));
label_1163ec:
    // 0x1163ec: 0x7b410010  lq          $at, 0x10($k0)
    ctx->pc = 0x1163ecu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 26), 16)));
label_1163f0:
    // 0x1163f0: 0x7b420020  lq          $v0, 0x20($k0)
    ctx->pc = 0x1163f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 26), 32)));
label_1163f4:
    // 0x1163f4: 0x7b430030  lq          $v1, 0x30($k0)
    ctx->pc = 0x1163f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 26), 48)));
label_1163f8:
    // 0x1163f8: 0x7b440040  lq          $a0, 0x40($k0)
    ctx->pc = 0x1163f8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 26), 64)));
label_1163fc:
    // 0x1163fc: 0x7b450050  lq          $a1, 0x50($k0)
    ctx->pc = 0x1163fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 26), 80)));
label_116400:
    // 0x116400: 0x7b460060  lq          $a2, 0x60($k0)
    ctx->pc = 0x116400u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 26), 96)));
label_116404:
    // 0x116404: 0x7b470070  lq          $a3, 0x70($k0)
    ctx->pc = 0x116404u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 26), 112)));
label_116408:
    // 0x116408: 0x7b480080  lq          $t0, 0x80($k0)
    ctx->pc = 0x116408u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 26), 128)));
label_11640c:
    // 0x11640c: 0x7b490090  lq          $t1, 0x90($k0)
    ctx->pc = 0x11640cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 26), 144)));
label_116410:
    // 0x116410: 0x7b4a00a0  lq          $t2, 0xA0($k0)
    ctx->pc = 0x116410u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 26), 160)));
label_116414:
    // 0x116414: 0x7b4b00b0  lq          $t3, 0xB0($k0)
    ctx->pc = 0x116414u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 26), 176)));
label_116418:
    // 0x116418: 0x7b4c00c0  lq          $t4, 0xC0($k0)
    ctx->pc = 0x116418u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 26), 192)));
label_11641c:
    // 0x11641c: 0x7b4d00d0  lq          $t5, 0xD0($k0)
    ctx->pc = 0x11641cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 26), 208)));
label_116420:
    // 0x116420: 0x7b4e00e0  lq          $t6, 0xE0($k0)
    ctx->pc = 0x116420u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 26), 224)));
label_116424:
    // 0x116424: 0x7b4f00f0  lq          $t7, 0xF0($k0)
    ctx->pc = 0x116424u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 26), 240)));
label_116428:
    // 0x116428: 0x7b500100  lq          $s0, 0x100($k0)
    ctx->pc = 0x116428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 26), 256)));
label_11642c:
    // 0x11642c: 0x7b510110  lq          $s1, 0x110($k0)
    ctx->pc = 0x11642cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 26), 272)));
label_116430:
    // 0x116430: 0x7b520120  lq          $s2, 0x120($k0)
    ctx->pc = 0x116430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 26), 288)));
label_116434:
    // 0x116434: 0x7b530130  lq          $s3, 0x130($k0)
    ctx->pc = 0x116434u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 26), 304)));
label_116438:
    // 0x116438: 0x7b540140  lq          $s4, 0x140($k0)
    ctx->pc = 0x116438u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 26), 320)));
label_11643c:
    // 0x11643c: 0x7b550150  lq          $s5, 0x150($k0)
    ctx->pc = 0x11643cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 26), 336)));
label_116440:
    // 0x116440: 0x7b560160  lq          $s6, 0x160($k0)
    ctx->pc = 0x116440u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 26), 352)));
label_116444:
    // 0x116444: 0x7b570170  lq          $s7, 0x170($k0)
    ctx->pc = 0x116444u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 26), 368)));
label_116448:
    // 0x116448: 0x7b580180  lq          $t8, 0x180($k0)
    ctx->pc = 0x116448u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 26), 384)));
label_11644c:
    // 0x11644c: 0x7b590190  lq          $t9, 0x190($k0)
    ctx->pc = 0x11644cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 26), 400)));
label_116450:
    // 0x116450: 0x7b5c01c0  lq          $gp, 0x1C0($k0)
    ctx->pc = 0x116450u;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 26), 448)));
label_116454:
    // 0x116454: 0x7b5d01d0  lq          $sp, 0x1D0($k0)
    ctx->pc = 0x116454u;
    SET_GPR_VEC(ctx, 29, READ128(ADD32(GPR_U32(ctx, 26), 464)));
label_116458:
    // 0x116458: 0x7b5e01e0  lq          $fp, 0x1E0($k0)
    ctx->pc = 0x116458u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 26), 480)));
label_11645c:
    // 0x11645c: 0x7b5f01f0  lq          $ra, 0x1F0($k0)
    ctx->pc = 0x11645cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 26), 496)));
label_116460:
    // 0x116460: 0x401a6000  mfc0        $k0, Status
    ctx->pc = 0x116460u;
    SET_GPR_S32(ctx, 26, (int32_t)ctx->cop0_status);
label_116464:
    // 0x116464: 0x375a0013  ori         $k0, $k0, 0x13
    ctx->pc = 0x116464u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)19);
label_116468:
    // 0x116468: 0x409a6000  mtc0        $k0, Status
    ctx->pc = 0x116468u;
    ctx->cop0_status = GPR_U32(ctx, 26) & 0xFF57FFFF;
label_11646c:
    // 0x11646c: 0x40f  sync.p
    ctx->pc = 0x11646cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_116470:
    // 0x116470: 0x42000018  eret
    ctx->pc = 0x116470u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_116474:
    // 0x116474: 0x0  nop
    ctx->pc = 0x116474u;
    // NOP
label_116478:
    // 0x116478: 0x0  nop
    ctx->pc = 0x116478u;
    // NOP
label_11647c:
    // 0x11647c: 0x0  nop
    ctx->pc = 0x11647cu;
    // NOP
label_116480:
    // 0x116480: 0x3c1a006c  lui         $k0, 0x6C
    ctx->pc = 0x116480u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)108 << 16));
label_116484:
    // 0x116484: 0x275ae0c0  addiu       $k0, $k0, -0x1F40
    ctx->pc = 0x116484u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 4294959296));
label_116488:
    // 0x116488: 0x7f410010  sq          $at, 0x10($k0)
    ctx->pc = 0x116488u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_11648c:
    // 0x11648c: 0x7f420020  sq          $v0, 0x20($k0)
    ctx->pc = 0x11648cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_116490:
    // 0x116490: 0x7f430030  sq          $v1, 0x30($k0)
    ctx->pc = 0x116490u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_116494:
    // 0x116494: 0x7f440040  sq          $a0, 0x40($k0)
    ctx->pc = 0x116494u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_116498:
    // 0x116498: 0x7f450050  sq          $a1, 0x50($k0)
    ctx->pc = 0x116498u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_11649c:
    // 0x11649c: 0x7f460060  sq          $a2, 0x60($k0)
    ctx->pc = 0x11649cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_1164a0:
    // 0x1164a0: 0x7f470070  sq          $a3, 0x70($k0)
    ctx->pc = 0x1164a0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_1164a4:
    // 0x1164a4: 0x7f480080  sq          $t0, 0x80($k0)
    ctx->pc = 0x1164a4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_1164a8:
    // 0x1164a8: 0x7f490090  sq          $t1, 0x90($k0)
    ctx->pc = 0x1164a8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_1164ac:
    // 0x1164ac: 0x7f4a00a0  sq          $t2, 0xA0($k0)
    ctx->pc = 0x1164acu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_1164b0:
    // 0x1164b0: 0x7f4b00b0  sq          $t3, 0xB0($k0)
    ctx->pc = 0x1164b0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_1164b4:
    // 0x1164b4: 0x7f4c00c0  sq          $t4, 0xC0($k0)
    ctx->pc = 0x1164b4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_1164b8:
    // 0x1164b8: 0x7f4d00d0  sq          $t5, 0xD0($k0)
    ctx->pc = 0x1164b8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_1164bc:
    // 0x1164bc: 0x7f4e00e0  sq          $t6, 0xE0($k0)
    ctx->pc = 0x1164bcu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_1164c0:
    // 0x1164c0: 0x7f4f00f0  sq          $t7, 0xF0($k0)
    ctx->pc = 0x1164c0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_1164c4:
    // 0x1164c4: 0x7f500100  sq          $s0, 0x100($k0)
    ctx->pc = 0x1164c4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_1164c8:
    // 0x1164c8: 0x7f510110  sq          $s1, 0x110($k0)
    ctx->pc = 0x1164c8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_1164cc:
    // 0x1164cc: 0x7f520120  sq          $s2, 0x120($k0)
    ctx->pc = 0x1164ccu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_1164d0:
    // 0x1164d0: 0x7f530130  sq          $s3, 0x130($k0)
    ctx->pc = 0x1164d0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_1164d4:
    // 0x1164d4: 0x7f540140  sq          $s4, 0x140($k0)
    ctx->pc = 0x1164d4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_1164d8:
    // 0x1164d8: 0x7f550150  sq          $s5, 0x150($k0)
    ctx->pc = 0x1164d8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_1164dc:
    // 0x1164dc: 0x7f560160  sq          $s6, 0x160($k0)
    ctx->pc = 0x1164dcu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_1164e0:
    // 0x1164e0: 0x7f570170  sq          $s7, 0x170($k0)
    ctx->pc = 0x1164e0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_1164e4:
    // 0x1164e4: 0x7f580180  sq          $t8, 0x180($k0)
    ctx->pc = 0x1164e4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_1164e8:
    // 0x1164e8: 0x7f590190  sq          $t9, 0x190($k0)
    ctx->pc = 0x1164e8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_1164ec:
    // 0x1164ec: 0x7f5c01c0  sq          $gp, 0x1C0($k0)
    ctx->pc = 0x1164ecu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_1164f0:
    // 0x1164f0: 0x7f5d01d0  sq          $sp, 0x1D0($k0)
    ctx->pc = 0x1164f0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_1164f4:
    // 0x1164f4: 0x7f5e01e0  sq          $fp, 0x1E0($k0)
    ctx->pc = 0x1164f4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_1164f8:
    // 0x1164f8: 0x7f5f01f0  sq          $ra, 0x1F0($k0)
    ctx->pc = 0x1164f8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_1164fc:
    // 0x1164fc: 0x1010  mfhi        $v0
    ctx->pc = 0x1164fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_116500:
    // 0x116500: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x116500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
label_116504:
    // 0x116504: 0xfc22e2c0  sd          $v0, -0x1D40($at)
    ctx->pc = 0x116504u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294959808), GPR_U64(ctx, 2));
label_116508:
    // 0x116508: 0x70001010  mfhi1       $v0
    ctx->pc = 0x116508u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
label_11650c:
    // 0x11650c: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x11650cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
label_116510:
    // 0x116510: 0xfc22e2c8  sd          $v0, -0x1D38($at)
    ctx->pc = 0x116510u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294959816), GPR_U64(ctx, 2));
label_116514:
    // 0x116514: 0x1012  mflo        $v0
    ctx->pc = 0x116514u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_116518:
    // 0x116518: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x116518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
label_11651c:
    // 0x11651c: 0xfc22e2d0  sd          $v0, -0x1D30($at)
    ctx->pc = 0x11651cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294959824), GPR_U64(ctx, 2));
label_116520:
    // 0x116520: 0x70001012  mflo1       $v0
    ctx->pc = 0x116520u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_116524:
    // 0x116524: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x116524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
label_116528:
    // 0x116528: 0xfc22e2d8  sd          $v0, -0x1D28($at)
    ctx->pc = 0x116528u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294959832), GPR_U64(ctx, 2));
label_11652c:
    // 0x11652c: 0x1028  mfsa        $v0
    ctx->pc = 0x11652cu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_116530:
    // 0x116530: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x116530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
label_116534:
    // 0x116534: 0xfc22e2e0  sd          $v0, -0x1D20($at)
    ctx->pc = 0x116534u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294959840), GPR_U64(ctx, 2));
label_116538:
    // 0x116538: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x116538u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
label_11653c:
    // 0x11653c: 0x40056800  mfc0        $a1, Cause
    ctx->pc = 0x11653cu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_cause);
label_116540:
    // 0x116540: 0x40067000  mfc0        $a2, EPC
    ctx->pc = 0x116540u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_epc);
label_116544:
    // 0x116544: 0x40074000  mfc0        $a3, BadVaddr
    ctx->pc = 0x116544u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_badvaddr);
label_116548:
    // 0x116548: 0x4008b800  mfc0        $t0, Reserved23
    ctx->pc = 0x116548u;
    SET_GPR_S32(ctx, 8, (int32_t)ctx->cop0_badpaddr);
label_11654c:
    // 0x11654c: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x11654cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
label_116550:
    // 0x116550: 0x2529e0c0  addiu       $t1, $t1, -0x1F40
    ctx->pc = 0x116550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959296));
label_116554:
    // 0x116554: 0x3c010011  lui         $at, 0x11
    ctx->pc = 0x116554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17 << 16));
label_116558:
    // 0x116558: 0x2421657c  addiu       $at, $at, 0x657C
    ctx->pc = 0x116558u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 25980));
label_11655c:
    // 0x11655c: 0x40817000  mtc0        $at, EPC
    ctx->pc = 0x11655cu;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_116560:
    // 0x116560: 0x40f  sync.p
    ctx->pc = 0x116560u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_116564:
    // 0x116564: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x116564u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_116568:
    // 0x116568: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x116568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_11656c:
    // 0x11656c: 0x220824  and         $at, $at, $v0
    ctx->pc = 0x11656cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_116570:
    // 0x116570: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x116570u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_116574:
    // 0x116574: 0x40f  sync.p
    ctx->pc = 0x116574u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_116578:
    // 0x116578: 0x42000018  eret
    ctx->pc = 0x116578u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_11657c:
    // 0x11657c: 0x30a2007c  andi        $v0, $a1, 0x7C
    ctx->pc = 0x11657cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)124);
label_116580:
    // 0x116580: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x116580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_116584:
    // 0x116584: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x116584u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_116588:
    // 0x116588: 0x8c21e7a0  lw          $at, -0x1860($at)
    ctx->pc = 0x116588u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961056)));
label_11658c:
    // 0x11658c: 0x3c1d006c  lui         $sp, 0x6C
    ctx->pc = 0x11658cu;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)108 << 16));
label_116590:
    // 0x116590: 0x20f809  jalr        $at
label_116594:
    if (ctx->pc == 0x116594u) {
        ctx->pc = 0x116594u;
            // 0x116594: 0x27bde0c0  addiu       $sp, $sp, -0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294959296));
        ctx->pc = 0x116598u;
        goto label_116598;
    }
    ctx->pc = 0x116590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x116598u);
        ctx->pc = 0x116594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116590u;
            // 0x116594: 0x27bde0c0  addiu       $sp, $sp, -0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294959296));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x116598u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x116598u; }
            if (ctx->pc != 0x116598u) { return; }
        }
        }
    }
    ctx->pc = 0x116598u;
label_116598:
    // 0x116598: 0x3ffffcd  break       1023, 1023
    ctx->pc = 0x116598u;
    runtime->handleBreak(rdram, ctx);
label_11659c:
    // 0x11659c: 0x0  nop
    ctx->pc = 0x11659cu;
    // NOP
}
