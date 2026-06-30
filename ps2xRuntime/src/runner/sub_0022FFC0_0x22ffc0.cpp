#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022FFC0
// Address: 0x22ffc0 - 0x230590
void sub_0022FFC0_0x22ffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FFC0_0x22ffc0");
#endif

    switch (ctx->pc) {
        case 0x22ffc0u: goto label_22ffc0;
        case 0x22ffc4u: goto label_22ffc4;
        case 0x22ffc8u: goto label_22ffc8;
        case 0x22ffccu: goto label_22ffcc;
        case 0x22ffd0u: goto label_22ffd0;
        case 0x22ffd4u: goto label_22ffd4;
        case 0x22ffd8u: goto label_22ffd8;
        case 0x22ffdcu: goto label_22ffdc;
        case 0x22ffe0u: goto label_22ffe0;
        case 0x22ffe4u: goto label_22ffe4;
        case 0x22ffe8u: goto label_22ffe8;
        case 0x22ffecu: goto label_22ffec;
        case 0x22fff0u: goto label_22fff0;
        case 0x22fff4u: goto label_22fff4;
        case 0x22fff8u: goto label_22fff8;
        case 0x22fffcu: goto label_22fffc;
        case 0x230000u: goto label_230000;
        case 0x230004u: goto label_230004;
        case 0x230008u: goto label_230008;
        case 0x23000cu: goto label_23000c;
        case 0x230010u: goto label_230010;
        case 0x230014u: goto label_230014;
        case 0x230018u: goto label_230018;
        case 0x23001cu: goto label_23001c;
        case 0x230020u: goto label_230020;
        case 0x230024u: goto label_230024;
        case 0x230028u: goto label_230028;
        case 0x23002cu: goto label_23002c;
        case 0x230030u: goto label_230030;
        case 0x230034u: goto label_230034;
        case 0x230038u: goto label_230038;
        case 0x23003cu: goto label_23003c;
        case 0x230040u: goto label_230040;
        case 0x230044u: goto label_230044;
        case 0x230048u: goto label_230048;
        case 0x23004cu: goto label_23004c;
        case 0x230050u: goto label_230050;
        case 0x230054u: goto label_230054;
        case 0x230058u: goto label_230058;
        case 0x23005cu: goto label_23005c;
        case 0x230060u: goto label_230060;
        case 0x230064u: goto label_230064;
        case 0x230068u: goto label_230068;
        case 0x23006cu: goto label_23006c;
        case 0x230070u: goto label_230070;
        case 0x230074u: goto label_230074;
        case 0x230078u: goto label_230078;
        case 0x23007cu: goto label_23007c;
        case 0x230080u: goto label_230080;
        case 0x230084u: goto label_230084;
        case 0x230088u: goto label_230088;
        case 0x23008cu: goto label_23008c;
        case 0x230090u: goto label_230090;
        case 0x230094u: goto label_230094;
        case 0x230098u: goto label_230098;
        case 0x23009cu: goto label_23009c;
        case 0x2300a0u: goto label_2300a0;
        case 0x2300a4u: goto label_2300a4;
        case 0x2300a8u: goto label_2300a8;
        case 0x2300acu: goto label_2300ac;
        case 0x2300b0u: goto label_2300b0;
        case 0x2300b4u: goto label_2300b4;
        case 0x2300b8u: goto label_2300b8;
        case 0x2300bcu: goto label_2300bc;
        case 0x2300c0u: goto label_2300c0;
        case 0x2300c4u: goto label_2300c4;
        case 0x2300c8u: goto label_2300c8;
        case 0x2300ccu: goto label_2300cc;
        case 0x2300d0u: goto label_2300d0;
        case 0x2300d4u: goto label_2300d4;
        case 0x2300d8u: goto label_2300d8;
        case 0x2300dcu: goto label_2300dc;
        case 0x2300e0u: goto label_2300e0;
        case 0x2300e4u: goto label_2300e4;
        case 0x2300e8u: goto label_2300e8;
        case 0x2300ecu: goto label_2300ec;
        case 0x2300f0u: goto label_2300f0;
        case 0x2300f4u: goto label_2300f4;
        case 0x2300f8u: goto label_2300f8;
        case 0x2300fcu: goto label_2300fc;
        case 0x230100u: goto label_230100;
        case 0x230104u: goto label_230104;
        case 0x230108u: goto label_230108;
        case 0x23010cu: goto label_23010c;
        case 0x230110u: goto label_230110;
        case 0x230114u: goto label_230114;
        case 0x230118u: goto label_230118;
        case 0x23011cu: goto label_23011c;
        case 0x230120u: goto label_230120;
        case 0x230124u: goto label_230124;
        case 0x230128u: goto label_230128;
        case 0x23012cu: goto label_23012c;
        case 0x230130u: goto label_230130;
        case 0x230134u: goto label_230134;
        case 0x230138u: goto label_230138;
        case 0x23013cu: goto label_23013c;
        case 0x230140u: goto label_230140;
        case 0x230144u: goto label_230144;
        case 0x230148u: goto label_230148;
        case 0x23014cu: goto label_23014c;
        case 0x230150u: goto label_230150;
        case 0x230154u: goto label_230154;
        case 0x230158u: goto label_230158;
        case 0x23015cu: goto label_23015c;
        case 0x230160u: goto label_230160;
        case 0x230164u: goto label_230164;
        case 0x230168u: goto label_230168;
        case 0x23016cu: goto label_23016c;
        case 0x230170u: goto label_230170;
        case 0x230174u: goto label_230174;
        case 0x230178u: goto label_230178;
        case 0x23017cu: goto label_23017c;
        case 0x230180u: goto label_230180;
        case 0x230184u: goto label_230184;
        case 0x230188u: goto label_230188;
        case 0x23018cu: goto label_23018c;
        case 0x230190u: goto label_230190;
        case 0x230194u: goto label_230194;
        case 0x230198u: goto label_230198;
        case 0x23019cu: goto label_23019c;
        case 0x2301a0u: goto label_2301a0;
        case 0x2301a4u: goto label_2301a4;
        case 0x2301a8u: goto label_2301a8;
        case 0x2301acu: goto label_2301ac;
        case 0x2301b0u: goto label_2301b0;
        case 0x2301b4u: goto label_2301b4;
        case 0x2301b8u: goto label_2301b8;
        case 0x2301bcu: goto label_2301bc;
        case 0x2301c0u: goto label_2301c0;
        case 0x2301c4u: goto label_2301c4;
        case 0x2301c8u: goto label_2301c8;
        case 0x2301ccu: goto label_2301cc;
        case 0x2301d0u: goto label_2301d0;
        case 0x2301d4u: goto label_2301d4;
        case 0x2301d8u: goto label_2301d8;
        case 0x2301dcu: goto label_2301dc;
        case 0x2301e0u: goto label_2301e0;
        case 0x2301e4u: goto label_2301e4;
        case 0x2301e8u: goto label_2301e8;
        case 0x2301ecu: goto label_2301ec;
        case 0x2301f0u: goto label_2301f0;
        case 0x2301f4u: goto label_2301f4;
        case 0x2301f8u: goto label_2301f8;
        case 0x2301fcu: goto label_2301fc;
        case 0x230200u: goto label_230200;
        case 0x230204u: goto label_230204;
        case 0x230208u: goto label_230208;
        case 0x23020cu: goto label_23020c;
        case 0x230210u: goto label_230210;
        case 0x230214u: goto label_230214;
        case 0x230218u: goto label_230218;
        case 0x23021cu: goto label_23021c;
        case 0x230220u: goto label_230220;
        case 0x230224u: goto label_230224;
        case 0x230228u: goto label_230228;
        case 0x23022cu: goto label_23022c;
        case 0x230230u: goto label_230230;
        case 0x230234u: goto label_230234;
        case 0x230238u: goto label_230238;
        case 0x23023cu: goto label_23023c;
        case 0x230240u: goto label_230240;
        case 0x230244u: goto label_230244;
        case 0x230248u: goto label_230248;
        case 0x23024cu: goto label_23024c;
        case 0x230250u: goto label_230250;
        case 0x230254u: goto label_230254;
        case 0x230258u: goto label_230258;
        case 0x23025cu: goto label_23025c;
        case 0x230260u: goto label_230260;
        case 0x230264u: goto label_230264;
        case 0x230268u: goto label_230268;
        case 0x23026cu: goto label_23026c;
        case 0x230270u: goto label_230270;
        case 0x230274u: goto label_230274;
        case 0x230278u: goto label_230278;
        case 0x23027cu: goto label_23027c;
        case 0x230280u: goto label_230280;
        case 0x230284u: goto label_230284;
        case 0x230288u: goto label_230288;
        case 0x23028cu: goto label_23028c;
        case 0x230290u: goto label_230290;
        case 0x230294u: goto label_230294;
        case 0x230298u: goto label_230298;
        case 0x23029cu: goto label_23029c;
        case 0x2302a0u: goto label_2302a0;
        case 0x2302a4u: goto label_2302a4;
        case 0x2302a8u: goto label_2302a8;
        case 0x2302acu: goto label_2302ac;
        case 0x2302b0u: goto label_2302b0;
        case 0x2302b4u: goto label_2302b4;
        case 0x2302b8u: goto label_2302b8;
        case 0x2302bcu: goto label_2302bc;
        case 0x2302c0u: goto label_2302c0;
        case 0x2302c4u: goto label_2302c4;
        case 0x2302c8u: goto label_2302c8;
        case 0x2302ccu: goto label_2302cc;
        case 0x2302d0u: goto label_2302d0;
        case 0x2302d4u: goto label_2302d4;
        case 0x2302d8u: goto label_2302d8;
        case 0x2302dcu: goto label_2302dc;
        case 0x2302e0u: goto label_2302e0;
        case 0x2302e4u: goto label_2302e4;
        case 0x2302e8u: goto label_2302e8;
        case 0x2302ecu: goto label_2302ec;
        case 0x2302f0u: goto label_2302f0;
        case 0x2302f4u: goto label_2302f4;
        case 0x2302f8u: goto label_2302f8;
        case 0x2302fcu: goto label_2302fc;
        case 0x230300u: goto label_230300;
        case 0x230304u: goto label_230304;
        case 0x230308u: goto label_230308;
        case 0x23030cu: goto label_23030c;
        case 0x230310u: goto label_230310;
        case 0x230314u: goto label_230314;
        case 0x230318u: goto label_230318;
        case 0x23031cu: goto label_23031c;
        case 0x230320u: goto label_230320;
        case 0x230324u: goto label_230324;
        case 0x230328u: goto label_230328;
        case 0x23032cu: goto label_23032c;
        case 0x230330u: goto label_230330;
        case 0x230334u: goto label_230334;
        case 0x230338u: goto label_230338;
        case 0x23033cu: goto label_23033c;
        case 0x230340u: goto label_230340;
        case 0x230344u: goto label_230344;
        case 0x230348u: goto label_230348;
        case 0x23034cu: goto label_23034c;
        case 0x230350u: goto label_230350;
        case 0x230354u: goto label_230354;
        case 0x230358u: goto label_230358;
        case 0x23035cu: goto label_23035c;
        case 0x230360u: goto label_230360;
        case 0x230364u: goto label_230364;
        case 0x230368u: goto label_230368;
        case 0x23036cu: goto label_23036c;
        case 0x230370u: goto label_230370;
        case 0x230374u: goto label_230374;
        case 0x230378u: goto label_230378;
        case 0x23037cu: goto label_23037c;
        case 0x230380u: goto label_230380;
        case 0x230384u: goto label_230384;
        case 0x230388u: goto label_230388;
        case 0x23038cu: goto label_23038c;
        case 0x230390u: goto label_230390;
        case 0x230394u: goto label_230394;
        case 0x230398u: goto label_230398;
        case 0x23039cu: goto label_23039c;
        case 0x2303a0u: goto label_2303a0;
        case 0x2303a4u: goto label_2303a4;
        case 0x2303a8u: goto label_2303a8;
        case 0x2303acu: goto label_2303ac;
        case 0x2303b0u: goto label_2303b0;
        case 0x2303b4u: goto label_2303b4;
        case 0x2303b8u: goto label_2303b8;
        case 0x2303bcu: goto label_2303bc;
        case 0x2303c0u: goto label_2303c0;
        case 0x2303c4u: goto label_2303c4;
        case 0x2303c8u: goto label_2303c8;
        case 0x2303ccu: goto label_2303cc;
        case 0x2303d0u: goto label_2303d0;
        case 0x2303d4u: goto label_2303d4;
        case 0x2303d8u: goto label_2303d8;
        case 0x2303dcu: goto label_2303dc;
        case 0x2303e0u: goto label_2303e0;
        case 0x2303e4u: goto label_2303e4;
        case 0x2303e8u: goto label_2303e8;
        case 0x2303ecu: goto label_2303ec;
        case 0x2303f0u: goto label_2303f0;
        case 0x2303f4u: goto label_2303f4;
        case 0x2303f8u: goto label_2303f8;
        case 0x2303fcu: goto label_2303fc;
        case 0x230400u: goto label_230400;
        case 0x230404u: goto label_230404;
        case 0x230408u: goto label_230408;
        case 0x23040cu: goto label_23040c;
        case 0x230410u: goto label_230410;
        case 0x230414u: goto label_230414;
        case 0x230418u: goto label_230418;
        case 0x23041cu: goto label_23041c;
        case 0x230420u: goto label_230420;
        case 0x230424u: goto label_230424;
        case 0x230428u: goto label_230428;
        case 0x23042cu: goto label_23042c;
        case 0x230430u: goto label_230430;
        case 0x230434u: goto label_230434;
        case 0x230438u: goto label_230438;
        case 0x23043cu: goto label_23043c;
        case 0x230440u: goto label_230440;
        case 0x230444u: goto label_230444;
        case 0x230448u: goto label_230448;
        case 0x23044cu: goto label_23044c;
        case 0x230450u: goto label_230450;
        case 0x230454u: goto label_230454;
        case 0x230458u: goto label_230458;
        case 0x23045cu: goto label_23045c;
        case 0x230460u: goto label_230460;
        case 0x230464u: goto label_230464;
        case 0x230468u: goto label_230468;
        case 0x23046cu: goto label_23046c;
        case 0x230470u: goto label_230470;
        case 0x230474u: goto label_230474;
        case 0x230478u: goto label_230478;
        case 0x23047cu: goto label_23047c;
        case 0x230480u: goto label_230480;
        case 0x230484u: goto label_230484;
        case 0x230488u: goto label_230488;
        case 0x23048cu: goto label_23048c;
        case 0x230490u: goto label_230490;
        case 0x230494u: goto label_230494;
        case 0x230498u: goto label_230498;
        case 0x23049cu: goto label_23049c;
        case 0x2304a0u: goto label_2304a0;
        case 0x2304a4u: goto label_2304a4;
        case 0x2304a8u: goto label_2304a8;
        case 0x2304acu: goto label_2304ac;
        case 0x2304b0u: goto label_2304b0;
        case 0x2304b4u: goto label_2304b4;
        case 0x2304b8u: goto label_2304b8;
        case 0x2304bcu: goto label_2304bc;
        case 0x2304c0u: goto label_2304c0;
        case 0x2304c4u: goto label_2304c4;
        case 0x2304c8u: goto label_2304c8;
        case 0x2304ccu: goto label_2304cc;
        case 0x2304d0u: goto label_2304d0;
        case 0x2304d4u: goto label_2304d4;
        case 0x2304d8u: goto label_2304d8;
        case 0x2304dcu: goto label_2304dc;
        case 0x2304e0u: goto label_2304e0;
        case 0x2304e4u: goto label_2304e4;
        case 0x2304e8u: goto label_2304e8;
        case 0x2304ecu: goto label_2304ec;
        case 0x2304f0u: goto label_2304f0;
        case 0x2304f4u: goto label_2304f4;
        case 0x2304f8u: goto label_2304f8;
        case 0x2304fcu: goto label_2304fc;
        case 0x230500u: goto label_230500;
        case 0x230504u: goto label_230504;
        case 0x230508u: goto label_230508;
        case 0x23050cu: goto label_23050c;
        case 0x230510u: goto label_230510;
        case 0x230514u: goto label_230514;
        case 0x230518u: goto label_230518;
        case 0x23051cu: goto label_23051c;
        case 0x230520u: goto label_230520;
        case 0x230524u: goto label_230524;
        case 0x230528u: goto label_230528;
        case 0x23052cu: goto label_23052c;
        case 0x230530u: goto label_230530;
        case 0x230534u: goto label_230534;
        case 0x230538u: goto label_230538;
        case 0x23053cu: goto label_23053c;
        case 0x230540u: goto label_230540;
        case 0x230544u: goto label_230544;
        case 0x230548u: goto label_230548;
        case 0x23054cu: goto label_23054c;
        case 0x230550u: goto label_230550;
        case 0x230554u: goto label_230554;
        case 0x230558u: goto label_230558;
        case 0x23055cu: goto label_23055c;
        case 0x230560u: goto label_230560;
        case 0x230564u: goto label_230564;
        case 0x230568u: goto label_230568;
        case 0x23056cu: goto label_23056c;
        case 0x230570u: goto label_230570;
        case 0x230574u: goto label_230574;
        case 0x230578u: goto label_230578;
        case 0x23057cu: goto label_23057c;
        case 0x230580u: goto label_230580;
        case 0x230584u: goto label_230584;
        case 0x230588u: goto label_230588;
        case 0x23058cu: goto label_23058c;
        default: break;
    }

    ctx->pc = 0x22ffc0u;

label_22ffc0:
    // 0x22ffc0: 0x27bdf750  addiu       $sp, $sp, -0x8B0
    ctx->pc = 0x22ffc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965072));
label_22ffc4:
    // 0x22ffc4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22ffc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_22ffc8:
    // 0x22ffc8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x22ffc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_22ffcc:
    // 0x22ffcc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22ffccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_22ffd0:
    // 0x22ffd0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22ffd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22ffd4:
    // 0x22ffd4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22ffd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22ffd8:
    // 0x22ffd8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22ffd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22ffdc:
    // 0x22ffdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22ffdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22ffe0:
    // 0x22ffe0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22ffe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22ffe4:
    // 0x22ffe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ffe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22ffe8:
    // 0x22ffe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22ffe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22ffec:
    // 0x22ffec: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x22ffecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_22fff0:
    // 0x22fff0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_22fff4:
    if (ctx->pc == 0x22FFF4u) {
        ctx->pc = 0x22FFF4u;
            // 0x22fff4: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22FFF8u;
        goto label_22fff8;
    }
    ctx->pc = 0x22FFF0u;
    {
        const bool branch_taken_0x22fff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FFF0u;
            // 0x22fff4: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fff0) {
            ctx->pc = 0x23001Cu;
            goto label_23001c;
        }
    }
    ctx->pc = 0x22FFF8u;
label_22fff8:
    // 0x22fff8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x22fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_22fffc:
    // 0x22fffc: 0x27a508a0  addiu       $a1, $sp, 0x8A0
    ctx->pc = 0x22fffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
label_230000:
    // 0x230000: 0xa3a208a0  sb          $v0, 0x8A0($sp)
    ctx->pc = 0x230000u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2208), (uint8_t)GPR_U32(ctx, 2));
label_230004:
    // 0x230004: 0xa3a608a8  sb          $a2, 0x8A8($sp)
    ctx->pc = 0x230004u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2216), (uint8_t)GPR_U32(ctx, 6));
label_230008:
    // 0x230008: 0xafb308a4  sw          $s3, 0x8A4($sp)
    ctx->pc = 0x230008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2212), GPR_U32(ctx, 19));
label_23000c:
    // 0x23000c: 0xc08d1cc  jal         func_234730
label_230010:
    if (ctx->pc == 0x230010u) {
        ctx->pc = 0x230010u;
            // 0x230010: 0xa3b208a9  sb          $s2, 0x8A9($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 2217), (uint8_t)GPR_U32(ctx, 18));
        ctx->pc = 0x230014u;
        goto label_230014;
    }
    ctx->pc = 0x23000Cu;
    SET_GPR_U32(ctx, 31, 0x230014u);
    ctx->pc = 0x230010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23000Cu;
            // 0x230010: 0xa3b208a9  sb          $s2, 0x8A9($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 2217), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230014u; }
        if (ctx->pc != 0x230014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230014u; }
        if (ctx->pc != 0x230014u) { return; }
    }
    ctx->pc = 0x230014u;
label_230014:
    // 0x230014: 0x10000152  b           . + 4 + (0x152 << 2)
label_230018:
    if (ctx->pc == 0x230018u) {
        ctx->pc = 0x230018u;
            // 0x230018: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x23001Cu;
        goto label_23001c;
    }
    ctx->pc = 0x230014u;
    {
        const bool branch_taken_0x230014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230014u;
            // 0x230018: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230014) {
            ctx->pc = 0x230560u;
            goto label_230560;
        }
    }
    ctx->pc = 0x23001Cu;
label_23001c:
    // 0x23001c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23001cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_230020:
    // 0x230020: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x230020u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_230024:
    // 0x230024: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x230024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_230028:
    // 0x230028: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x230028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23002c:
    // 0x23002c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x23002cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_230030:
    // 0x230030: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x230030u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_230034:
    // 0x230034: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_230038:
    if (ctx->pc == 0x230038u) {
        ctx->pc = 0x230038u;
            // 0x230038: 0x24e7ea60  addiu       $a3, $a3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961760));
        ctx->pc = 0x23003Cu;
        goto label_23003c;
    }
    ctx->pc = 0x230034u;
    {
        const bool branch_taken_0x230034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x230038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230034u;
            // 0x230038: 0x24e7ea60  addiu       $a3, $a3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230034) {
            ctx->pc = 0x230070u;
            goto label_230070;
        }
    }
    ctx->pc = 0x23003Cu;
label_23003c:
    // 0x23003c: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x23003cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_230040:
    // 0x230040: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x230040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_230044:
    // 0x230044: 0x2484c8b0  addiu       $a0, $a0, -0x3750
    ctx->pc = 0x230044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953136));
label_230048:
    // 0x230048: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x230048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_23004c:
    // 0x23004c: 0x2463c8c8  addiu       $v1, $v1, -0x3738
    ctx->pc = 0x23004cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953160));
label_230050:
    // 0x230050: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x230050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_230054:
    // 0x230054: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x230054u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_230058:
    // 0x230058: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x230058u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_23005c:
    // 0x23005c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x23005cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_230060:
    // 0x230060: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x230060u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_230064:
    // 0x230064: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x230064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_230068:
    // 0x230068: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x230068u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_23006c:
    // 0x23006c: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x23006cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_230070:
    // 0x230070: 0x8e850084  lw          $a1, 0x84($s4)
    ctx->pc = 0x230070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_230074:
    // 0x230074: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x230074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_230078:
    // 0x230078: 0x27a4049c  addiu       $a0, $sp, 0x49C
    ctx->pc = 0x230078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1180));
label_23007c:
    // 0x23007c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x23007cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_230080:
    // 0x230080: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x230080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_230084:
    // 0x230084: 0xae850084  sw          $a1, 0x84($s4)
    ctx->pc = 0x230084u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 5));
label_230088:
    // 0x230088: 0xafa40490  sw          $a0, 0x490($sp)
    ctx->pc = 0x230088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 4));
label_23008c:
    // 0x23008c: 0xafa30498  sw          $v1, 0x498($sp)
    ctx->pc = 0x23008cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1176), GPR_U32(ctx, 3));
label_230090:
    // 0x230090: 0x14c00098  bnez        $a2, . + 4 + (0x98 << 2)
label_230094:
    if (ctx->pc == 0x230094u) {
        ctx->pc = 0x230094u;
            // 0x230094: 0xafa00494  sw          $zero, 0x494($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 0));
        ctx->pc = 0x230098u;
        goto label_230098;
    }
    ctx->pc = 0x230090u;
    {
        const bool branch_taken_0x230090 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x230094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230090u;
            // 0x230094: 0xafa00494  sw          $zero, 0x494($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230090) {
            ctx->pc = 0x2302F4u;
            goto label_2302f4;
        }
    }
    ctx->pc = 0x230098u;
label_230098:
    // 0x230098: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x230098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23009c:
    // 0x23009c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x23009cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2300a0:
    // 0x2300a0: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x2300a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_2300a4:
    // 0x2300a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2300a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2300a8:
    // 0x2300a8: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x2300a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_2300ac:
    // 0x2300ac: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2300acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2300b0:
    // 0x2300b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2300b4:
    if (ctx->pc == 0x2300B4u) {
        ctx->pc = 0x2300B4u;
            // 0x2300b4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x2300B8u;
        goto label_2300b8;
    }
    ctx->pc = 0x2300B0u;
    {
        const bool branch_taken_0x2300b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2300B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2300B0u;
            // 0x2300b4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2300b0) {
            ctx->pc = 0x2300E0u;
            goto label_2300e0;
        }
    }
    ctx->pc = 0x2300B8u;
label_2300b8:
    // 0x2300b8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2300b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2300bc:
    // 0x2300bc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2300bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2300c0:
    // 0x2300c0: 0x2442c858  addiu       $v0, $v0, -0x37A8
    ctx->pc = 0x2300c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953048));
label_2300c4:
    // 0x2300c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2300c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2300c8:
    // 0x2300c8: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2300c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_2300cc:
    // 0x2300cc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2300ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2300d0:
    // 0x2300d0: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2300d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_2300d4:
    // 0x2300d4: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x2300d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_2300d8:
    // 0x2300d8: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x2300d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_2300dc:
    // 0x2300dc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2300dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2300e0:
    // 0x2300e0: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x2300e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_2300e4:
    // 0x2300e4: 0x26650024  addiu       $a1, $s3, 0x24
    ctx->pc = 0x2300e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
label_2300e8:
    // 0x2300e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2300e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2300ec:
    // 0x2300ec: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x2300ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_2300f0:
    // 0x2300f0: 0x320f809  jalr        $t9
label_2300f4:
    if (ctx->pc == 0x2300F4u) {
        ctx->pc = 0x2300F4u;
            // 0x2300f4: 0x27a60490  addiu       $a2, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->pc = 0x2300F8u;
        goto label_2300f8;
    }
    ctx->pc = 0x2300F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2300F8u);
        ctx->pc = 0x2300F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2300F0u;
            // 0x2300f4: 0x27a60490  addiu       $a2, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2300F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2300F8u; }
            if (ctx->pc != 0x2300F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2300F8u;
label_2300f8:
    // 0x2300f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2300f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2300fc:
    // 0x2300fc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2300fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_230100:
    // 0x230100: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x230100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_230104:
    // 0x230104: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x230104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_230108:
    // 0x230108: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x230108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_23010c:
    // 0x23010c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x23010cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_230110:
    // 0x230110: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_230114:
    if (ctx->pc == 0x230114u) {
        ctx->pc = 0x230114u;
            // 0x230114: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x230118u;
        goto label_230118;
    }
    ctx->pc = 0x230110u;
    {
        const bool branch_taken_0x230110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230110u;
            // 0x230114: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230110) {
            ctx->pc = 0x230140u;
            goto label_230140;
        }
    }
    ctx->pc = 0x230118u;
label_230118:
    // 0x230118: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x230118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_23011c:
    // 0x23011c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x23011cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_230120:
    // 0x230120: 0x2442c8d0  addiu       $v0, $v0, -0x3730
    ctx->pc = 0x230120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953168));
label_230124:
    // 0x230124: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x230124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_230128:
    // 0x230128: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x230128u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_23012c:
    // 0x23012c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x23012cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_230130:
    // 0x230130: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x230130u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_230134:
    // 0x230134: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x230134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_230138:
    // 0x230138: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x230138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_23013c:
    // 0x23013c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x23013cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_230140:
    // 0x230140: 0x8fa20494  lw          $v0, 0x494($sp)
    ctx->pc = 0x230140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
label_230144:
    // 0x230144: 0x1840002e  blez        $v0, . + 4 + (0x2E << 2)
label_230148:
    if (ctx->pc == 0x230148u) {
        ctx->pc = 0x230148u;
            // 0x230148: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23014Cu;
        goto label_23014c;
    }
    ctx->pc = 0x230144u;
    {
        const bool branch_taken_0x230144 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x230148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230144u;
            // 0x230148: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230144) {
            ctx->pc = 0x230200u;
            goto label_230200;
        }
    }
    ctx->pc = 0x23014Cu;
label_23014c:
    // 0x23014c: 0x8fa30490  lw          $v1, 0x490($sp)
    ctx->pc = 0x23014cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_230150:
    // 0x230150: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x230150u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_230154:
    // 0x230154: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x230154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_230158:
    // 0x230158: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x230158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23015c:
    // 0x23015c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x23015cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_230160:
    // 0x230160: 0x80830005  lb          $v1, 0x5($a0)
    ctx->pc = 0x230160u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_230164:
    // 0x230164: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x230164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_230168:
    // 0x230168: 0x80830018  lb          $v1, 0x18($a0)
    ctx->pc = 0x230168u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
label_23016c:
    // 0x23016c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_230170:
    if (ctx->pc == 0x230170u) {
        ctx->pc = 0x230170u;
            // 0x230170: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230174u;
        goto label_230174;
    }
    ctx->pc = 0x23016Cu;
    {
        const bool branch_taken_0x23016c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23016c) {
            ctx->pc = 0x230170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23016Cu;
            // 0x230170: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23017Cu;
            goto label_23017c;
        }
    }
    ctx->pc = 0x230174u;
label_230174:
    // 0x230174: 0x80820010  lb          $v0, 0x10($a0)
    ctx->pc = 0x230174u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_230178:
    // 0x230178: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x230178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_23017c:
    // 0x23017c: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_230180:
    if (ctx->pc == 0x230180u) {
        ctx->pc = 0x230184u;
        goto label_230184;
    }
    ctx->pc = 0x23017Cu;
    {
        const bool branch_taken_0x23017c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23017c) {
            ctx->pc = 0x2301E8u;
            goto label_2301e8;
        }
    }
    ctx->pc = 0x230184u;
label_230184:
    // 0x230184: 0x8e860070  lw          $a2, 0x70($s4)
    ctx->pc = 0x230184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_230188:
    // 0x230188: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23018c:
    // 0x23018c: 0xc08bec4  jal         func_22FB10
label_230190:
    if (ctx->pc == 0x230190u) {
        ctx->pc = 0x230190u;
            // 0x230190: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x230194u;
        goto label_230194;
    }
    ctx->pc = 0x23018Cu;
    SET_GPR_U32(ctx, 31, 0x230194u);
    ctx->pc = 0x230190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23018Cu;
            // 0x230190: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FB10u;
    if (runtime->hasFunction(0x22FB10u)) {
        auto targetFn = runtime->lookupFunction(0x22FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230194u; }
        if (ctx->pc != 0x230194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FB10_0x22fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230194u; }
        if (ctx->pc != 0x230194u) { return; }
    }
    ctx->pc = 0x230194u;
label_230194:
    // 0x230194: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_230198:
    if (ctx->pc == 0x230198u) {
        ctx->pc = 0x23019Cu;
        goto label_23019c;
    }
    ctx->pc = 0x230194u;
    {
        const bool branch_taken_0x230194 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x230194) {
            ctx->pc = 0x2301B0u;
            goto label_2301b0;
        }
    }
    ctx->pc = 0x23019Cu;
label_23019c:
    // 0x23019c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x23019cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2301a0:
    // 0x2301a0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2301a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2301a4:
    // 0x2301a4: 0x320f809  jalr        $t9
label_2301a8:
    if (ctx->pc == 0x2301A8u) {
        ctx->pc = 0x2301A8u;
            // 0x2301a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2301ACu;
        goto label_2301ac;
    }
    ctx->pc = 0x2301A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2301ACu);
        ctx->pc = 0x2301A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2301A4u;
            // 0x2301a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2301ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2301ACu; }
            if (ctx->pc != 0x2301ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2301ACu;
label_2301ac:
    // 0x2301ac: 0x0  nop
    ctx->pc = 0x2301acu;
    // NOP
label_2301b0:
    // 0x2301b0: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x2301b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
label_2301b4:
    // 0x2301b4: 0x8fa40490  lw          $a0, 0x490($sp)
    ctx->pc = 0x2301b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_2301b8:
    // 0x2301b8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2301b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_2301bc:
    // 0x2301bc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2301bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2301c0:
    // 0x2301c0: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x2301c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2301c4:
    // 0x2301c4: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2301c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2301c8:
    // 0x2301c8: 0xafa50494  sw          $a1, 0x494($sp)
    ctx->pc = 0x2301c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 5));
label_2301cc:
    // 0x2301cc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2301ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2301d0:
    // 0x2301d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2301d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2301d4:
    // 0x2301d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2301d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2301d8:
    // 0x2301d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2301d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2301dc:
    // 0x2301dc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2301dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2301e0:
    // 0x2301e0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2301e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2301e4:
    // 0x2301e4: 0x0  nop
    ctx->pc = 0x2301e4u;
    // NOP
label_2301e8:
    // 0x2301e8: 0x8fa20494  lw          $v0, 0x494($sp)
    ctx->pc = 0x2301e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
label_2301ec:
    // 0x2301ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2301ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2301f0:
    // 0x2301f0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2301f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2301f4:
    // 0x2301f4: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
label_2301f8:
    if (ctx->pc == 0x2301F8u) {
        ctx->pc = 0x2301F8u;
            // 0x2301f8: 0x8fa30490  lw          $v1, 0x490($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->pc = 0x2301FCu;
        goto label_2301fc;
    }
    ctx->pc = 0x2301F4u;
    {
        const bool branch_taken_0x2301f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2301f4) {
            ctx->pc = 0x2301F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2301F4u;
            // 0x2301f8: 0x8fa30490  lw          $v1, 0x490($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230150u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_230150;
        }
    }
    ctx->pc = 0x2301FCu;
label_2301fc:
    // 0x2301fc: 0x0  nop
    ctx->pc = 0x2301fcu;
    // NOP
label_230200:
    // 0x230200: 0x27a2008c  addiu       $v0, $sp, 0x8C
    ctx->pc = 0x230200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_230204:
    // 0x230204: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x230204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_230208:
    // 0x230208: 0x26750034  addiu       $s5, $s3, 0x34
    ctx->pc = 0x230208u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
label_23020c:
    // 0x23020c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x23020cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_230210:
    // 0x230210: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x230210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_230214:
    // 0x230214: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x230214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_230218:
    // 0x230218: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x230218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_23021c:
    // 0x23021c: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x23021cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_230220:
    // 0x230220: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
label_230224:
    if (ctx->pc == 0x230224u) {
        ctx->pc = 0x230224u;
            // 0x230224: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230228u;
        goto label_230228;
    }
    ctx->pc = 0x230220u;
    {
        const bool branch_taken_0x230220 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x230224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230220u;
            // 0x230224: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230220) {
            ctx->pc = 0x2302B0u;
            goto label_2302b0;
        }
    }
    ctx->pc = 0x230228u;
label_230228:
    // 0x230228: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x230228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23022c:
    // 0x23022c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23022cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_230230:
    // 0x230230: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x230230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_230234:
    // 0x230234: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x230234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_230238:
    // 0x230238: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x230238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_23023c:
    // 0x23023c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_230240:
    if (ctx->pc == 0x230240u) {
        ctx->pc = 0x230244u;
        goto label_230244;
    }
    ctx->pc = 0x23023Cu;
    {
        const bool branch_taken_0x23023c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23023c) {
            ctx->pc = 0x230250u;
            goto label_230250;
        }
    }
    ctx->pc = 0x230244u;
label_230244:
    // 0x230244: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x230244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_230248:
    // 0x230248: 0xc0a728c  jal         func_29CA30
label_23024c:
    if (ctx->pc == 0x23024Cu) {
        ctx->pc = 0x23024Cu;
            // 0x23024c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x230250u;
        goto label_230250;
    }
    ctx->pc = 0x230248u;
    SET_GPR_U32(ctx, 31, 0x230250u);
    ctx->pc = 0x23024Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230248u;
            // 0x23024c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230250u; }
        if (ctx->pc != 0x230250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230250u; }
        if (ctx->pc != 0x230250u) { return; }
    }
    ctx->pc = 0x230250u;
label_230250:
    // 0x230250: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x230250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_230254:
    // 0x230254: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x230254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_230258:
    // 0x230258: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x230258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_23025c:
    // 0x23025c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x23025cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_230260:
    // 0x230260: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x230260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_230264:
    // 0x230264: 0xafa40084  sw          $a0, 0x84($sp)
    ctx->pc = 0x230264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
label_230268:
    // 0x230268: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x230268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23026c:
    // 0x23026c: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x23026cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_230270:
    // 0x230270: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x230270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_230274:
    // 0x230274: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x230274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_230278:
    // 0x230278: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x230278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_23027c:
    // 0x23027c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x23027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_230280:
    // 0x230280: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x230280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_230284:
    // 0x230284: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x230284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_230288:
    // 0x230288: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x230288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23028c:
    // 0x23028c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23028cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_230290:
    // 0x230290: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x230290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_230294:
    // 0x230294: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x230294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_230298:
    // 0x230298: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x230298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_23029c:
    // 0x23029c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x23029cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2302a0:
    // 0x2302a0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2302a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2302a4:
    // 0x2302a4: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_2302a8:
    if (ctx->pc == 0x2302A8u) {
        ctx->pc = 0x2302A8u;
            // 0x2302a8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x2302ACu;
        goto label_2302ac;
    }
    ctx->pc = 0x2302A4u;
    {
        const bool branch_taken_0x2302a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2302A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2302A4u;
            // 0x2302a8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2302a4) {
            ctx->pc = 0x23022Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23022c;
        }
    }
    ctx->pc = 0x2302ACu;
label_2302ac:
    // 0x2302ac: 0x0  nop
    ctx->pc = 0x2302acu;
    // NOP
label_2302b0:
    // 0x2302b0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2302b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2302b4:
    // 0x2302b4: 0xc07fb8c  jal         func_1FEE30
label_2302b8:
    if (ctx->pc == 0x2302B8u) {
        ctx->pc = 0x2302B8u;
            // 0x2302b8: 0x27a50490  addiu       $a1, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->pc = 0x2302BCu;
        goto label_2302bc;
    }
    ctx->pc = 0x2302B4u;
    SET_GPR_U32(ctx, 31, 0x2302BCu);
    ctx->pc = 0x2302B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2302B4u;
            // 0x2302b8: 0x27a50490  addiu       $a1, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE30u;
    if (runtime->hasFunction(0x1FEE30u)) {
        auto targetFn = runtime->lookupFunction(0x1FEE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2302BCu; }
        if (ctx->pc != 0x2302BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEE30_0x1fee30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2302BCu; }
        if (ctx->pc != 0x2302BCu) { return; }
    }
    ctx->pc = 0x2302BCu;
label_2302bc:
    // 0x2302bc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2302bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2302c0:
    // 0x2302c0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2302c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2302c4:
    // 0x2302c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2302c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2302c8:
    // 0x2302c8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_2302cc:
    if (ctx->pc == 0x2302CCu) {
        ctx->pc = 0x2302D0u;
        goto label_2302d0;
    }
    ctx->pc = 0x2302C8u;
    {
        const bool branch_taken_0x2302c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2302c8) {
            ctx->pc = 0x2302F4u;
            goto label_2302f4;
        }
    }
    ctx->pc = 0x2302D0u;
label_2302d0:
    // 0x2302d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2302d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2302d4:
    // 0x2302d4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2302d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2302d8:
    // 0x2302d8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2302d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2302dc:
    // 0x2302dc: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2302dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2302e0:
    // 0x2302e0: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2302e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2302e4:
    // 0x2302e4: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x2302e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_2302e8:
    // 0x2302e8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2302e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2302ec:
    // 0x2302ec: 0xc0a7ab4  jal         func_29EAD0
label_2302f0:
    if (ctx->pc == 0x2302F0u) {
        ctx->pc = 0x2302F0u;
            // 0x2302f0: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x2302F4u;
        goto label_2302f4;
    }
    ctx->pc = 0x2302ECu;
    SET_GPR_U32(ctx, 31, 0x2302F4u);
    ctx->pc = 0x2302F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2302ECu;
            // 0x2302f0: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2302F4u; }
        if (ctx->pc != 0x2302F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2302F4u; }
        if (ctx->pc != 0x2302F4u) { return; }
    }
    ctx->pc = 0x2302F4u;
label_2302f4:
    // 0x2302f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2302f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2302f8:
    // 0x2302f8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2302f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_2302fc:
    // 0x2302fc: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x2302fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_230300:
    // 0x230300: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x230300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_230304:
    // 0x230304: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x230304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_230308:
    // 0x230308: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x230308u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_23030c:
    // 0x23030c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_230310:
    if (ctx->pc == 0x230310u) {
        ctx->pc = 0x230310u;
            // 0x230310: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x230314u;
        goto label_230314;
    }
    ctx->pc = 0x23030Cu;
    {
        const bool branch_taken_0x23030c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x230310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23030Cu;
            // 0x230310: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23030c) {
            ctx->pc = 0x23033Cu;
            goto label_23033c;
        }
    }
    ctx->pc = 0x230314u;
label_230314:
    // 0x230314: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x230314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_230318:
    // 0x230318: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x230318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_23031c:
    // 0x23031c: 0x2463c8e0  addiu       $v1, $v1, -0x3720
    ctx->pc = 0x23031cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953184));
label_230320:
    // 0x230320: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x230320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_230324:
    // 0x230324: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x230324u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_230328:
    // 0x230328: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x230328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_23032c:
    // 0x23032c: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x23032cu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_230330:
    // 0x230330: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x230330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_230334:
    // 0x230334: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x230334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_230338:
    // 0x230338: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x230338u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_23033c:
    // 0x23033c: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x23033cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_230340:
    // 0x230340: 0x26750034  addiu       $s5, $s3, 0x34
    ctx->pc = 0x230340u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
label_230344:
    // 0x230344: 0x9664002a  lhu         $a0, 0x2A($s3)
    ctx->pc = 0x230344u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 42)));
label_230348:
    // 0x230348: 0x1860003b  blez        $v1, . + 4 + (0x3B << 2)
label_23034c:
    if (ctx->pc == 0x23034Cu) {
        ctx->pc = 0x23034Cu;
            // 0x23034c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230350u;
        goto label_230350;
    }
    ctx->pc = 0x230348u;
    {
        const bool branch_taken_0x230348 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23034Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230348u;
            // 0x23034c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230348) {
            ctx->pc = 0x230438u;
            goto label_230438;
        }
    }
    ctx->pc = 0x230350u;
label_230350:
    // 0x230350: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x230350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_230354:
    // 0x230354: 0x44b021  addu        $s6, $v0, $a0
    ctx->pc = 0x230354u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_230358:
    // 0x230358: 0x8e850070  lw          $a1, 0x70($s4)
    ctx->pc = 0x230358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_23035c:
    // 0x23035c: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x23035cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_230360:
    // 0x230360: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x230360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_230364:
    // 0x230364: 0x27a408ac  addiu       $a0, $sp, 0x8AC
    ctx->pc = 0x230364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2220));
label_230368:
    // 0x230368: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x230368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23036c:
    // 0x23036c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x23036cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_230370:
    // 0x230370: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x230370u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_230374:
    // 0x230374: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x230374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_230378:
    // 0x230378: 0x320f809  jalr        $t9
label_23037c:
    if (ctx->pc == 0x23037Cu) {
        ctx->pc = 0x23037Cu;
            // 0x23037c: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x230380u;
        goto label_230380;
    }
    ctx->pc = 0x230378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x230380u);
        ctx->pc = 0x23037Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230378u;
            // 0x23037c: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x230380u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230380u; }
            if (ctx->pc != 0x230380u) { return; }
        }
        }
    }
    ctx->pc = 0x230380u;
label_230380:
    // 0x230380: 0x27a308ac  addiu       $v1, $sp, 0x8AC
    ctx->pc = 0x230380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2220));
label_230384:
    // 0x230384: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x230384u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_230388:
    // 0x230388: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_23038c:
    if (ctx->pc == 0x23038Cu) {
        ctx->pc = 0x230390u;
        goto label_230390;
    }
    ctx->pc = 0x230388u;
    {
        const bool branch_taken_0x230388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x230388) {
            ctx->pc = 0x2303F8u;
            goto label_2303f8;
        }
    }
    ctx->pc = 0x230390u;
label_230390:
    // 0x230390: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x230390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_230394:
    // 0x230394: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x230394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_230398:
    // 0x230398: 0x94a4001a  lhu         $a0, 0x1A($a1)
    ctx->pc = 0x230398u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
label_23039c:
    // 0x23039c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x23039cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_2303a0:
    // 0x2303a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2303a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2303a4:
    // 0x2303a4: 0x806319f0  lb          $v1, 0x19F0($v1)
    ctx->pc = 0x2303a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 6640)));
label_2303a8:
    // 0x2303a8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_2303ac:
    if (ctx->pc == 0x2303ACu) {
        ctx->pc = 0x2303B0u;
        goto label_2303b0;
    }
    ctx->pc = 0x2303A8u;
    {
        const bool branch_taken_0x2303a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2303a8) {
            ctx->pc = 0x2303F8u;
            goto label_2303f8;
        }
    }
    ctx->pc = 0x2303B0u;
label_2303b0:
    // 0x2303b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2303b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2303b4:
    // 0x2303b4: 0x1643001a  bne         $s2, $v1, . + 4 + (0x1A << 2)
label_2303b8:
    if (ctx->pc == 0x2303B8u) {
        ctx->pc = 0x2303BCu;
        goto label_2303bc;
    }
    ctx->pc = 0x2303B4u;
    {
        const bool branch_taken_0x2303b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x2303b4) {
            ctx->pc = 0x230420u;
            goto label_230420;
        }
    }
    ctx->pc = 0x2303BCu;
label_2303bc:
    // 0x2303bc: 0x926200a8  lbu         $v0, 0xA8($s3)
    ctx->pc = 0x2303bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 168)));
label_2303c0:
    // 0x2303c0: 0x80a30010  lb          $v1, 0x10($a1)
    ctx->pc = 0x2303c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_2303c4:
    // 0x2303c4: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2303c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_2303c8:
    // 0x2303c8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2303c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2303cc:
    // 0x2303cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2303d0:
    if (ctx->pc == 0x2303D0u) {
        ctx->pc = 0x2303D0u;
            // 0x2303d0: 0xa31821  addu        $v1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->pc = 0x2303D4u;
        goto label_2303d4;
    }
    ctx->pc = 0x2303CCu;
    {
        const bool branch_taken_0x2303cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2303D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2303CCu;
            // 0x2303d0: 0xa31821  addu        $v1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2303cc) {
            ctx->pc = 0x2303DCu;
            goto label_2303dc;
        }
    }
    ctx->pc = 0x2303D4u;
label_2303d4:
    // 0x2303d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2303d8:
    if (ctx->pc == 0x2303D8u) {
        ctx->pc = 0x2303D8u;
            // 0x2303d8: 0x8c660094  lw          $a2, 0x94($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
        ctx->pc = 0x2303DCu;
        goto label_2303dc;
    }
    ctx->pc = 0x2303D4u;
    {
        const bool branch_taken_0x2303d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2303D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2303D4u;
            // 0x2303d8: 0x8c660094  lw          $a2, 0x94($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2303d4) {
            ctx->pc = 0x2303E0u;
            goto label_2303e0;
        }
    }
    ctx->pc = 0x2303DCu;
label_2303dc:
    // 0x2303dc: 0x8e660094  lw          $a2, 0x94($s3)
    ctx->pc = 0x2303dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_2303e0:
    // 0x2303e0: 0x8e85006c  lw          $a1, 0x6C($s4)
    ctx->pc = 0x2303e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_2303e4:
    // 0x2303e4: 0xc0923f4  jal         func_248FD0
label_2303e8:
    if (ctx->pc == 0x2303E8u) {
        ctx->pc = 0x2303E8u;
            // 0x2303e8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2303ECu;
        goto label_2303ec;
    }
    ctx->pc = 0x2303E4u;
    SET_GPR_U32(ctx, 31, 0x2303ECu);
    ctx->pc = 0x2303E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2303E4u;
            // 0x2303e8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x248FD0u;
    if (runtime->hasFunction(0x248FD0u)) {
        auto targetFn = runtime->lookupFunction(0x248FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2303ECu; }
        if (ctx->pc != 0x2303ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00248FD0_0x248fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2303ECu; }
        if (ctx->pc != 0x2303ECu) { return; }
    }
    ctx->pc = 0x2303ECu;
label_2303ec:
    // 0x2303ec: 0x1000000c  b           . + 4 + (0xC << 2)
label_2303f0:
    if (ctx->pc == 0x2303F0u) {
        ctx->pc = 0x2303F4u;
        goto label_2303f4;
    }
    ctx->pc = 0x2303ECu;
    {
        const bool branch_taken_0x2303ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2303ec) {
            ctx->pc = 0x230420u;
            goto label_230420;
        }
    }
    ctx->pc = 0x2303F4u;
label_2303f4:
    // 0x2303f4: 0x0  nop
    ctx->pc = 0x2303f4u;
    // NOP
label_2303f8:
    // 0x2303f8: 0xc08e2f4  jal         func_238BD0
label_2303fc:
    if (ctx->pc == 0x2303FCu) {
        ctx->pc = 0x2303FCu;
            // 0x2303fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x230400u;
        goto label_230400;
    }
    ctx->pc = 0x2303F8u;
    SET_GPR_U32(ctx, 31, 0x230400u);
    ctx->pc = 0x2303FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2303F8u;
            // 0x2303fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238BD0u;
    if (runtime->hasFunction(0x238BD0u)) {
        auto targetFn = runtime->lookupFunction(0x238BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230400u; }
        if (ctx->pc != 0x230400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238BD0_0x238bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230400u; }
        if (ctx->pc != 0x230400u) { return; }
    }
    ctx->pc = 0x230400u;
label_230400:
    // 0x230400: 0x8e660094  lw          $a2, 0x94($s3)
    ctx->pc = 0x230400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_230404:
    // 0x230404: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x230404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_230408:
    // 0x230408: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x230408u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_23040c:
    // 0x23040c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x23040cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_230410:
    // 0x230410: 0x90c50027  lbu         $a1, 0x27($a2)
    ctx->pc = 0x230410u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 39)));
label_230414:
    // 0x230414: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x230414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_230418:
    // 0x230418: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x230418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_23041c:
    // 0x23041c: 0xa0c30027  sb          $v1, 0x27($a2)
    ctx->pc = 0x23041cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 39), (uint8_t)GPR_U32(ctx, 3));
label_230420:
    // 0x230420: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x230420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_230424:
    // 0x230424: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x230424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_230428:
    // 0x230428: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x230428u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23042c:
    // 0x23042c: 0x5460ffcb  bnel        $v1, $zero, . + 4 + (-0x35 << 2)
label_230430:
    if (ctx->pc == 0x230430u) {
        ctx->pc = 0x230430u;
            // 0x230430: 0x8e850070  lw          $a1, 0x70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
        ctx->pc = 0x230434u;
        goto label_230434;
    }
    ctx->pc = 0x23042Cu;
    {
        const bool branch_taken_0x23042c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23042c) {
            ctx->pc = 0x230430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23042Cu;
            // 0x230430: 0x8e850070  lw          $a1, 0x70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23035Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23035c;
        }
    }
    ctx->pc = 0x230434u;
label_230434:
    // 0x230434: 0x0  nop
    ctx->pc = 0x230434u;
    // NOP
label_230438:
    // 0x230438: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x230438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
label_23043c:
    // 0x23043c: 0x5860001c  blezl       $v1, . + 4 + (0x1C << 2)
label_230440:
    if (ctx->pc == 0x230440u) {
        ctx->pc = 0x230440u;
            // 0x230440: 0x8e830084  lw          $v1, 0x84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
        ctx->pc = 0x230444u;
        goto label_230444;
    }
    ctx->pc = 0x23043Cu;
    {
        const bool branch_taken_0x23043c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x23043c) {
            ctx->pc = 0x230440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23043Cu;
            // 0x230440: 0x8e830084  lw          $v1, 0x84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2304B0u;
            goto label_2304b0;
        }
    }
    ctx->pc = 0x230444u;
label_230444:
    // 0x230444: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x230444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_230448:
    // 0x230448: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x230448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_23044c:
    // 0x23044c: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x23044cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_230450:
    // 0x230450: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x230450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_230454:
    // 0x230454: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x230454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_230458:
    // 0x230458: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x230458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23045c:
    // 0x23045c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_230460:
    if (ctx->pc == 0x230460u) {
        ctx->pc = 0x230460u;
            // 0x230460: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x230464u;
        goto label_230464;
    }
    ctx->pc = 0x23045Cu;
    {
        const bool branch_taken_0x23045c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23045Cu;
            // 0x230460: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23045c) {
            ctx->pc = 0x23048Cu;
            goto label_23048c;
        }
    }
    ctx->pc = 0x230464u;
label_230464:
    // 0x230464: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x230464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_230468:
    // 0x230468: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x230468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_23046c:
    // 0x23046c: 0x2442c8f0  addiu       $v0, $v0, -0x3710
    ctx->pc = 0x23046cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953200));
label_230470:
    // 0x230470: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x230470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_230474:
    // 0x230474: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x230474u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_230478:
    // 0x230478: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x230478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_23047c:
    // 0x23047c: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x23047cu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_230480:
    // 0x230480: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x230480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_230484:
    // 0x230484: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x230484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_230488:
    // 0x230488: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x230488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_23048c:
    // 0x23048c: 0x8e870070  lw          $a3, 0x70($s4)
    ctx->pc = 0x23048cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_230490:
    // 0x230490: 0x50e00003  beql        $a3, $zero, . + 4 + (0x3 << 2)
label_230494:
    if (ctx->pc == 0x230494u) {
        ctx->pc = 0x230494u;
            // 0x230494: 0x8e840058  lw          $a0, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->pc = 0x230498u;
        goto label_230498;
    }
    ctx->pc = 0x230490u;
    {
        const bool branch_taken_0x230490 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x230490) {
            ctx->pc = 0x230494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230490u;
            // 0x230494: 0x8e840058  lw          $a0, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2304A0u;
            goto label_2304a0;
        }
    }
    ctx->pc = 0x230498u;
label_230498:
    // 0x230498: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x230498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_23049c:
    // 0x23049c: 0x8e840058  lw          $a0, 0x58($s4)
    ctx->pc = 0x23049cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_2304a0:
    // 0x2304a0: 0x8fa60494  lw          $a2, 0x494($sp)
    ctx->pc = 0x2304a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
label_2304a4:
    // 0x2304a4: 0xc07fb38  jal         func_1FECE0
label_2304a8:
    if (ctx->pc == 0x2304A8u) {
        ctx->pc = 0x2304A8u;
            // 0x2304a8: 0x8fa50490  lw          $a1, 0x490($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->pc = 0x2304ACu;
        goto label_2304ac;
    }
    ctx->pc = 0x2304A4u;
    SET_GPR_U32(ctx, 31, 0x2304ACu);
    ctx->pc = 0x2304A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2304A4u;
            // 0x2304a8: 0x8fa50490  lw          $a1, 0x490($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (runtime->hasFunction(0x1FECE0u)) {
        auto targetFn = runtime->lookupFunction(0x1FECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2304ACu; }
        if (ctx->pc != 0x2304ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FECE0_0x1fece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2304ACu; }
        if (ctx->pc != 0x2304ACu) { return; }
    }
    ctx->pc = 0x2304ACu;
label_2304ac:
    // 0x2304ac: 0x8e830084  lw          $v1, 0x84($s4)
    ctx->pc = 0x2304acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_2304b0:
    // 0x2304b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2304b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2304b4:
    // 0x2304b4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_2304b8:
    if (ctx->pc == 0x2304B8u) {
        ctx->pc = 0x2304B8u;
            // 0x2304b8: 0xae830084  sw          $v1, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x2304BCu;
        goto label_2304bc;
    }
    ctx->pc = 0x2304B4u;
    {
        const bool branch_taken_0x2304b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2304B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2304B4u;
            // 0x2304b8: 0xae830084  sw          $v1, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2304b4) {
            ctx->pc = 0x2304DCu;
            goto label_2304dc;
        }
    }
    ctx->pc = 0x2304BCu;
label_2304bc:
    // 0x2304bc: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x2304bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_2304c0:
    // 0x2304c0: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_2304c4:
    if (ctx->pc == 0x2304C4u) {
        ctx->pc = 0x2304C4u;
            // 0x2304c4: 0x8fa40498  lw          $a0, 0x498($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
        ctx->pc = 0x2304C8u;
        goto label_2304c8;
    }
    ctx->pc = 0x2304C0u;
    {
        const bool branch_taken_0x2304c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2304c0) {
            ctx->pc = 0x2304C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2304C0u;
            // 0x2304c4: 0x8fa40498  lw          $a0, 0x498($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2304E0u;
            goto label_2304e0;
        }
    }
    ctx->pc = 0x2304C8u;
label_2304c8:
    // 0x2304c8: 0x8283008c  lb          $v1, 0x8C($s4)
    ctx->pc = 0x2304c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
label_2304cc:
    // 0x2304cc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2304d0:
    if (ctx->pc == 0x2304D0u) {
        ctx->pc = 0x2304D4u;
        goto label_2304d4;
    }
    ctx->pc = 0x2304CCu;
    {
        const bool branch_taken_0x2304cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2304cc) {
            ctx->pc = 0x2304DCu;
            goto label_2304dc;
        }
    }
    ctx->pc = 0x2304D4u;
label_2304d4:
    // 0x2304d4: 0xc08d1c4  jal         func_234710
label_2304d8:
    if (ctx->pc == 0x2304D8u) {
        ctx->pc = 0x2304D8u;
            // 0x2304d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2304DCu;
        goto label_2304dc;
    }
    ctx->pc = 0x2304D4u;
    SET_GPR_U32(ctx, 31, 0x2304DCu);
    ctx->pc = 0x2304D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2304D4u;
            // 0x2304d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2304DCu; }
        if (ctx->pc != 0x2304DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2304DCu; }
        if (ctx->pc != 0x2304DCu) { return; }
    }
    ctx->pc = 0x2304DCu;
label_2304dc:
    // 0x2304dc: 0x8fa40498  lw          $a0, 0x498($sp)
    ctx->pc = 0x2304dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
label_2304e0:
    // 0x2304e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2304e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2304e4:
    // 0x2304e4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2304e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2304e8:
    // 0x2304e8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_2304ec:
    if (ctx->pc == 0x2304ECu) {
        ctx->pc = 0x2304F0u;
        goto label_2304f0;
    }
    ctx->pc = 0x2304E8u;
    {
        const bool branch_taken_0x2304e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2304e8) {
            ctx->pc = 0x230514u;
            goto label_230514;
        }
    }
    ctx->pc = 0x2304F0u;
label_2304f0:
    // 0x2304f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2304f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2304f4:
    // 0x2304f4: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x2304f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
label_2304f8:
    // 0x2304f8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2304f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2304fc:
    // 0x2304fc: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2304fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_230500:
    // 0x230500: 0x8fa50490  lw          $a1, 0x490($sp)
    ctx->pc = 0x230500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_230504:
    // 0x230504: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x230504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_230508:
    // 0x230508: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x230508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_23050c:
    // 0x23050c: 0xc0a7ab4  jal         func_29EAD0
label_230510:
    if (ctx->pc == 0x230510u) {
        ctx->pc = 0x230510u;
            // 0x230510: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x230514u;
        goto label_230514;
    }
    ctx->pc = 0x23050Cu;
    SET_GPR_U32(ctx, 31, 0x230514u);
    ctx->pc = 0x230510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23050Cu;
            // 0x230510: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230514u; }
        if (ctx->pc != 0x230514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230514u; }
        if (ctx->pc != 0x230514u) { return; }
    }
    ctx->pc = 0x230514u;
label_230514:
    // 0x230514: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x230514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_230518:
    // 0x230518: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x230518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_23051c:
    // 0x23051c: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x23051cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_230520:
    // 0x230520: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x230520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_230524:
    // 0x230524: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x230524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_230528:
    // 0x230528: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x230528u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_23052c:
    // 0x23052c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_230530:
    if (ctx->pc == 0x230530u) {
        ctx->pc = 0x230530u;
            // 0x230530: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x230534u;
        goto label_230534;
    }
    ctx->pc = 0x23052Cu;
    {
        const bool branch_taken_0x23052c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x230530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23052Cu;
            // 0x230530: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23052c) {
            ctx->pc = 0x23055Cu;
            goto label_23055c;
        }
    }
    ctx->pc = 0x230534u;
label_230534:
    // 0x230534: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x230534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_230538:
    // 0x230538: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x230538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_23053c:
    // 0x23053c: 0x2463c8a8  addiu       $v1, $v1, -0x3758
    ctx->pc = 0x23053cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953128));
label_230540:
    // 0x230540: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x230540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_230544:
    // 0x230544: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x230544u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_230548:
    // 0x230548: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x230548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_23054c:
    // 0x23054c: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x23054cu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_230550:
    // 0x230550: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x230550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_230554:
    // 0x230554: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x230554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_230558:
    // 0x230558: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x230558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_23055c:
    // 0x23055c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x23055cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_230560:
    // 0x230560: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x230560u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_230564:
    // 0x230564: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x230564u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_230568:
    // 0x230568: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x230568u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23056c:
    // 0x23056c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23056cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_230570:
    // 0x230570: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x230570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_230574:
    // 0x230574: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x230574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_230578:
    // 0x230578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x230578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23057c:
    // 0x23057c: 0x3e00008  jr          $ra
label_230580:
    if (ctx->pc == 0x230580u) {
        ctx->pc = 0x230580u;
            // 0x230580: 0x27bd08b0  addiu       $sp, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->pc = 0x230584u;
        goto label_230584;
    }
    ctx->pc = 0x23057Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23057Cu;
            // 0x230580: 0x27bd08b0  addiu       $sp, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x230584u;
label_230584:
    // 0x230584: 0x0  nop
    ctx->pc = 0x230584u;
    // NOP
label_230588:
    // 0x230588: 0x0  nop
    ctx->pc = 0x230588u;
    // NOP
label_23058c:
    // 0x23058c: 0x0  nop
    ctx->pc = 0x23058cu;
    // NOP
}
