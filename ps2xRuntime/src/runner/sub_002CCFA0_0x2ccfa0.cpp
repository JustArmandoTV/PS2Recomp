#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CCFA0
// Address: 0x2ccfa0 - 0x2cd460
void sub_002CCFA0_0x2ccfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCFA0_0x2ccfa0");
#endif

    switch (ctx->pc) {
        case 0x2ccfa0u: goto label_2ccfa0;
        case 0x2ccfa4u: goto label_2ccfa4;
        case 0x2ccfa8u: goto label_2ccfa8;
        case 0x2ccfacu: goto label_2ccfac;
        case 0x2ccfb0u: goto label_2ccfb0;
        case 0x2ccfb4u: goto label_2ccfb4;
        case 0x2ccfb8u: goto label_2ccfb8;
        case 0x2ccfbcu: goto label_2ccfbc;
        case 0x2ccfc0u: goto label_2ccfc0;
        case 0x2ccfc4u: goto label_2ccfc4;
        case 0x2ccfc8u: goto label_2ccfc8;
        case 0x2ccfccu: goto label_2ccfcc;
        case 0x2ccfd0u: goto label_2ccfd0;
        case 0x2ccfd4u: goto label_2ccfd4;
        case 0x2ccfd8u: goto label_2ccfd8;
        case 0x2ccfdcu: goto label_2ccfdc;
        case 0x2ccfe0u: goto label_2ccfe0;
        case 0x2ccfe4u: goto label_2ccfe4;
        case 0x2ccfe8u: goto label_2ccfe8;
        case 0x2ccfecu: goto label_2ccfec;
        case 0x2ccff0u: goto label_2ccff0;
        case 0x2ccff4u: goto label_2ccff4;
        case 0x2ccff8u: goto label_2ccff8;
        case 0x2ccffcu: goto label_2ccffc;
        case 0x2cd000u: goto label_2cd000;
        case 0x2cd004u: goto label_2cd004;
        case 0x2cd008u: goto label_2cd008;
        case 0x2cd00cu: goto label_2cd00c;
        case 0x2cd010u: goto label_2cd010;
        case 0x2cd014u: goto label_2cd014;
        case 0x2cd018u: goto label_2cd018;
        case 0x2cd01cu: goto label_2cd01c;
        case 0x2cd020u: goto label_2cd020;
        case 0x2cd024u: goto label_2cd024;
        case 0x2cd028u: goto label_2cd028;
        case 0x2cd02cu: goto label_2cd02c;
        case 0x2cd030u: goto label_2cd030;
        case 0x2cd034u: goto label_2cd034;
        case 0x2cd038u: goto label_2cd038;
        case 0x2cd03cu: goto label_2cd03c;
        case 0x2cd040u: goto label_2cd040;
        case 0x2cd044u: goto label_2cd044;
        case 0x2cd048u: goto label_2cd048;
        case 0x2cd04cu: goto label_2cd04c;
        case 0x2cd050u: goto label_2cd050;
        case 0x2cd054u: goto label_2cd054;
        case 0x2cd058u: goto label_2cd058;
        case 0x2cd05cu: goto label_2cd05c;
        case 0x2cd060u: goto label_2cd060;
        case 0x2cd064u: goto label_2cd064;
        case 0x2cd068u: goto label_2cd068;
        case 0x2cd06cu: goto label_2cd06c;
        case 0x2cd070u: goto label_2cd070;
        case 0x2cd074u: goto label_2cd074;
        case 0x2cd078u: goto label_2cd078;
        case 0x2cd07cu: goto label_2cd07c;
        case 0x2cd080u: goto label_2cd080;
        case 0x2cd084u: goto label_2cd084;
        case 0x2cd088u: goto label_2cd088;
        case 0x2cd08cu: goto label_2cd08c;
        case 0x2cd090u: goto label_2cd090;
        case 0x2cd094u: goto label_2cd094;
        case 0x2cd098u: goto label_2cd098;
        case 0x2cd09cu: goto label_2cd09c;
        case 0x2cd0a0u: goto label_2cd0a0;
        case 0x2cd0a4u: goto label_2cd0a4;
        case 0x2cd0a8u: goto label_2cd0a8;
        case 0x2cd0acu: goto label_2cd0ac;
        case 0x2cd0b0u: goto label_2cd0b0;
        case 0x2cd0b4u: goto label_2cd0b4;
        case 0x2cd0b8u: goto label_2cd0b8;
        case 0x2cd0bcu: goto label_2cd0bc;
        case 0x2cd0c0u: goto label_2cd0c0;
        case 0x2cd0c4u: goto label_2cd0c4;
        case 0x2cd0c8u: goto label_2cd0c8;
        case 0x2cd0ccu: goto label_2cd0cc;
        case 0x2cd0d0u: goto label_2cd0d0;
        case 0x2cd0d4u: goto label_2cd0d4;
        case 0x2cd0d8u: goto label_2cd0d8;
        case 0x2cd0dcu: goto label_2cd0dc;
        case 0x2cd0e0u: goto label_2cd0e0;
        case 0x2cd0e4u: goto label_2cd0e4;
        case 0x2cd0e8u: goto label_2cd0e8;
        case 0x2cd0ecu: goto label_2cd0ec;
        case 0x2cd0f0u: goto label_2cd0f0;
        case 0x2cd0f4u: goto label_2cd0f4;
        case 0x2cd0f8u: goto label_2cd0f8;
        case 0x2cd0fcu: goto label_2cd0fc;
        case 0x2cd100u: goto label_2cd100;
        case 0x2cd104u: goto label_2cd104;
        case 0x2cd108u: goto label_2cd108;
        case 0x2cd10cu: goto label_2cd10c;
        case 0x2cd110u: goto label_2cd110;
        case 0x2cd114u: goto label_2cd114;
        case 0x2cd118u: goto label_2cd118;
        case 0x2cd11cu: goto label_2cd11c;
        case 0x2cd120u: goto label_2cd120;
        case 0x2cd124u: goto label_2cd124;
        case 0x2cd128u: goto label_2cd128;
        case 0x2cd12cu: goto label_2cd12c;
        case 0x2cd130u: goto label_2cd130;
        case 0x2cd134u: goto label_2cd134;
        case 0x2cd138u: goto label_2cd138;
        case 0x2cd13cu: goto label_2cd13c;
        case 0x2cd140u: goto label_2cd140;
        case 0x2cd144u: goto label_2cd144;
        case 0x2cd148u: goto label_2cd148;
        case 0x2cd14cu: goto label_2cd14c;
        case 0x2cd150u: goto label_2cd150;
        case 0x2cd154u: goto label_2cd154;
        case 0x2cd158u: goto label_2cd158;
        case 0x2cd15cu: goto label_2cd15c;
        case 0x2cd160u: goto label_2cd160;
        case 0x2cd164u: goto label_2cd164;
        case 0x2cd168u: goto label_2cd168;
        case 0x2cd16cu: goto label_2cd16c;
        case 0x2cd170u: goto label_2cd170;
        case 0x2cd174u: goto label_2cd174;
        case 0x2cd178u: goto label_2cd178;
        case 0x2cd17cu: goto label_2cd17c;
        case 0x2cd180u: goto label_2cd180;
        case 0x2cd184u: goto label_2cd184;
        case 0x2cd188u: goto label_2cd188;
        case 0x2cd18cu: goto label_2cd18c;
        case 0x2cd190u: goto label_2cd190;
        case 0x2cd194u: goto label_2cd194;
        case 0x2cd198u: goto label_2cd198;
        case 0x2cd19cu: goto label_2cd19c;
        case 0x2cd1a0u: goto label_2cd1a0;
        case 0x2cd1a4u: goto label_2cd1a4;
        case 0x2cd1a8u: goto label_2cd1a8;
        case 0x2cd1acu: goto label_2cd1ac;
        case 0x2cd1b0u: goto label_2cd1b0;
        case 0x2cd1b4u: goto label_2cd1b4;
        case 0x2cd1b8u: goto label_2cd1b8;
        case 0x2cd1bcu: goto label_2cd1bc;
        case 0x2cd1c0u: goto label_2cd1c0;
        case 0x2cd1c4u: goto label_2cd1c4;
        case 0x2cd1c8u: goto label_2cd1c8;
        case 0x2cd1ccu: goto label_2cd1cc;
        case 0x2cd1d0u: goto label_2cd1d0;
        case 0x2cd1d4u: goto label_2cd1d4;
        case 0x2cd1d8u: goto label_2cd1d8;
        case 0x2cd1dcu: goto label_2cd1dc;
        case 0x2cd1e0u: goto label_2cd1e0;
        case 0x2cd1e4u: goto label_2cd1e4;
        case 0x2cd1e8u: goto label_2cd1e8;
        case 0x2cd1ecu: goto label_2cd1ec;
        case 0x2cd1f0u: goto label_2cd1f0;
        case 0x2cd1f4u: goto label_2cd1f4;
        case 0x2cd1f8u: goto label_2cd1f8;
        case 0x2cd1fcu: goto label_2cd1fc;
        case 0x2cd200u: goto label_2cd200;
        case 0x2cd204u: goto label_2cd204;
        case 0x2cd208u: goto label_2cd208;
        case 0x2cd20cu: goto label_2cd20c;
        case 0x2cd210u: goto label_2cd210;
        case 0x2cd214u: goto label_2cd214;
        case 0x2cd218u: goto label_2cd218;
        case 0x2cd21cu: goto label_2cd21c;
        case 0x2cd220u: goto label_2cd220;
        case 0x2cd224u: goto label_2cd224;
        case 0x2cd228u: goto label_2cd228;
        case 0x2cd22cu: goto label_2cd22c;
        case 0x2cd230u: goto label_2cd230;
        case 0x2cd234u: goto label_2cd234;
        case 0x2cd238u: goto label_2cd238;
        case 0x2cd23cu: goto label_2cd23c;
        case 0x2cd240u: goto label_2cd240;
        case 0x2cd244u: goto label_2cd244;
        case 0x2cd248u: goto label_2cd248;
        case 0x2cd24cu: goto label_2cd24c;
        case 0x2cd250u: goto label_2cd250;
        case 0x2cd254u: goto label_2cd254;
        case 0x2cd258u: goto label_2cd258;
        case 0x2cd25cu: goto label_2cd25c;
        case 0x2cd260u: goto label_2cd260;
        case 0x2cd264u: goto label_2cd264;
        case 0x2cd268u: goto label_2cd268;
        case 0x2cd26cu: goto label_2cd26c;
        case 0x2cd270u: goto label_2cd270;
        case 0x2cd274u: goto label_2cd274;
        case 0x2cd278u: goto label_2cd278;
        case 0x2cd27cu: goto label_2cd27c;
        case 0x2cd280u: goto label_2cd280;
        case 0x2cd284u: goto label_2cd284;
        case 0x2cd288u: goto label_2cd288;
        case 0x2cd28cu: goto label_2cd28c;
        case 0x2cd290u: goto label_2cd290;
        case 0x2cd294u: goto label_2cd294;
        case 0x2cd298u: goto label_2cd298;
        case 0x2cd29cu: goto label_2cd29c;
        case 0x2cd2a0u: goto label_2cd2a0;
        case 0x2cd2a4u: goto label_2cd2a4;
        case 0x2cd2a8u: goto label_2cd2a8;
        case 0x2cd2acu: goto label_2cd2ac;
        case 0x2cd2b0u: goto label_2cd2b0;
        case 0x2cd2b4u: goto label_2cd2b4;
        case 0x2cd2b8u: goto label_2cd2b8;
        case 0x2cd2bcu: goto label_2cd2bc;
        case 0x2cd2c0u: goto label_2cd2c0;
        case 0x2cd2c4u: goto label_2cd2c4;
        case 0x2cd2c8u: goto label_2cd2c8;
        case 0x2cd2ccu: goto label_2cd2cc;
        case 0x2cd2d0u: goto label_2cd2d0;
        case 0x2cd2d4u: goto label_2cd2d4;
        case 0x2cd2d8u: goto label_2cd2d8;
        case 0x2cd2dcu: goto label_2cd2dc;
        case 0x2cd2e0u: goto label_2cd2e0;
        case 0x2cd2e4u: goto label_2cd2e4;
        case 0x2cd2e8u: goto label_2cd2e8;
        case 0x2cd2ecu: goto label_2cd2ec;
        case 0x2cd2f0u: goto label_2cd2f0;
        case 0x2cd2f4u: goto label_2cd2f4;
        case 0x2cd2f8u: goto label_2cd2f8;
        case 0x2cd2fcu: goto label_2cd2fc;
        case 0x2cd300u: goto label_2cd300;
        case 0x2cd304u: goto label_2cd304;
        case 0x2cd308u: goto label_2cd308;
        case 0x2cd30cu: goto label_2cd30c;
        case 0x2cd310u: goto label_2cd310;
        case 0x2cd314u: goto label_2cd314;
        case 0x2cd318u: goto label_2cd318;
        case 0x2cd31cu: goto label_2cd31c;
        case 0x2cd320u: goto label_2cd320;
        case 0x2cd324u: goto label_2cd324;
        case 0x2cd328u: goto label_2cd328;
        case 0x2cd32cu: goto label_2cd32c;
        case 0x2cd330u: goto label_2cd330;
        case 0x2cd334u: goto label_2cd334;
        case 0x2cd338u: goto label_2cd338;
        case 0x2cd33cu: goto label_2cd33c;
        case 0x2cd340u: goto label_2cd340;
        case 0x2cd344u: goto label_2cd344;
        case 0x2cd348u: goto label_2cd348;
        case 0x2cd34cu: goto label_2cd34c;
        case 0x2cd350u: goto label_2cd350;
        case 0x2cd354u: goto label_2cd354;
        case 0x2cd358u: goto label_2cd358;
        case 0x2cd35cu: goto label_2cd35c;
        case 0x2cd360u: goto label_2cd360;
        case 0x2cd364u: goto label_2cd364;
        case 0x2cd368u: goto label_2cd368;
        case 0x2cd36cu: goto label_2cd36c;
        case 0x2cd370u: goto label_2cd370;
        case 0x2cd374u: goto label_2cd374;
        case 0x2cd378u: goto label_2cd378;
        case 0x2cd37cu: goto label_2cd37c;
        case 0x2cd380u: goto label_2cd380;
        case 0x2cd384u: goto label_2cd384;
        case 0x2cd388u: goto label_2cd388;
        case 0x2cd38cu: goto label_2cd38c;
        case 0x2cd390u: goto label_2cd390;
        case 0x2cd394u: goto label_2cd394;
        case 0x2cd398u: goto label_2cd398;
        case 0x2cd39cu: goto label_2cd39c;
        case 0x2cd3a0u: goto label_2cd3a0;
        case 0x2cd3a4u: goto label_2cd3a4;
        case 0x2cd3a8u: goto label_2cd3a8;
        case 0x2cd3acu: goto label_2cd3ac;
        case 0x2cd3b0u: goto label_2cd3b0;
        case 0x2cd3b4u: goto label_2cd3b4;
        case 0x2cd3b8u: goto label_2cd3b8;
        case 0x2cd3bcu: goto label_2cd3bc;
        case 0x2cd3c0u: goto label_2cd3c0;
        case 0x2cd3c4u: goto label_2cd3c4;
        case 0x2cd3c8u: goto label_2cd3c8;
        case 0x2cd3ccu: goto label_2cd3cc;
        case 0x2cd3d0u: goto label_2cd3d0;
        case 0x2cd3d4u: goto label_2cd3d4;
        case 0x2cd3d8u: goto label_2cd3d8;
        case 0x2cd3dcu: goto label_2cd3dc;
        case 0x2cd3e0u: goto label_2cd3e0;
        case 0x2cd3e4u: goto label_2cd3e4;
        case 0x2cd3e8u: goto label_2cd3e8;
        case 0x2cd3ecu: goto label_2cd3ec;
        case 0x2cd3f0u: goto label_2cd3f0;
        case 0x2cd3f4u: goto label_2cd3f4;
        case 0x2cd3f8u: goto label_2cd3f8;
        case 0x2cd3fcu: goto label_2cd3fc;
        case 0x2cd400u: goto label_2cd400;
        case 0x2cd404u: goto label_2cd404;
        case 0x2cd408u: goto label_2cd408;
        case 0x2cd40cu: goto label_2cd40c;
        case 0x2cd410u: goto label_2cd410;
        case 0x2cd414u: goto label_2cd414;
        case 0x2cd418u: goto label_2cd418;
        case 0x2cd41cu: goto label_2cd41c;
        case 0x2cd420u: goto label_2cd420;
        case 0x2cd424u: goto label_2cd424;
        case 0x2cd428u: goto label_2cd428;
        case 0x2cd42cu: goto label_2cd42c;
        case 0x2cd430u: goto label_2cd430;
        case 0x2cd434u: goto label_2cd434;
        case 0x2cd438u: goto label_2cd438;
        case 0x2cd43cu: goto label_2cd43c;
        case 0x2cd440u: goto label_2cd440;
        case 0x2cd444u: goto label_2cd444;
        case 0x2cd448u: goto label_2cd448;
        case 0x2cd44cu: goto label_2cd44c;
        case 0x2cd450u: goto label_2cd450;
        case 0x2cd454u: goto label_2cd454;
        case 0x2cd458u: goto label_2cd458;
        case 0x2cd45cu: goto label_2cd45c;
        default: break;
    }

    ctx->pc = 0x2ccfa0u;

label_2ccfa0:
    // 0x2ccfa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ccfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ccfa4:
    // 0x2ccfa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ccfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ccfa8:
    // 0x2ccfa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ccfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ccfac:
    // 0x2ccfac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ccfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ccfb0:
    // 0x2ccfb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ccfb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ccfb4:
    // 0x2ccfb4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2ccfb8:
    if (ctx->pc == 0x2CCFB8u) {
        ctx->pc = 0x2CCFB8u;
            // 0x2ccfb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCFBCu;
        goto label_2ccfbc;
    }
    ctx->pc = 0x2CCFB4u;
    {
        const bool branch_taken_0x2ccfb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCFB4u;
            // 0x2ccfb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccfb4) {
            ctx->pc = 0x2CD0E8u;
            goto label_2cd0e8;
        }
    }
    ctx->pc = 0x2CCFBCu;
label_2ccfbc:
    // 0x2ccfbc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ccfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2ccfc0:
    // 0x2ccfc0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ccfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ccfc4:
    // 0x2ccfc4: 0x2463ff00  addiu       $v1, $v1, -0x100
    ctx->pc = 0x2ccfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
label_2ccfc8:
    // 0x2ccfc8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2ccfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_2ccfcc:
    // 0x2ccfcc: 0x2442ff38  addiu       $v0, $v0, -0xC8
    ctx->pc = 0x2ccfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967096));
label_2ccfd0:
    // 0x2ccfd0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2ccfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2ccfd4:
    // 0x2ccfd4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2ccfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2ccfd8:
    // 0x2ccfd8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2ccfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2ccfdc:
    // 0x2ccfdc: 0xc0407c0  jal         func_101F00
label_2ccfe0:
    if (ctx->pc == 0x2CCFE0u) {
        ctx->pc = 0x2CCFE0u;
            // 0x2ccfe0: 0x24a5ceb0  addiu       $a1, $a1, -0x3150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954672));
        ctx->pc = 0x2CCFE4u;
        goto label_2ccfe4;
    }
    ctx->pc = 0x2CCFDCu;
    SET_GPR_U32(ctx, 31, 0x2CCFE4u);
    ctx->pc = 0x2CCFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCFDCu;
            // 0x2ccfe0: 0x24a5ceb0  addiu       $a1, $a1, -0x3150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCFE4u; }
        if (ctx->pc != 0x2CCFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCFE4u; }
        if (ctx->pc != 0x2CCFE4u) { return; }
    }
    ctx->pc = 0x2CCFE4u;
label_2ccfe4:
    // 0x2ccfe4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2ccfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2ccfe8:
    // 0x2ccfe8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2ccfec:
    if (ctx->pc == 0x2CCFECu) {
        ctx->pc = 0x2CCFECu;
            // 0x2ccfec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2CCFF0u;
        goto label_2ccff0;
    }
    ctx->pc = 0x2CCFE8u;
    {
        const bool branch_taken_0x2ccfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccfe8) {
            ctx->pc = 0x2CCFECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCFE8u;
            // 0x2ccfec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CCFFCu;
            goto label_2ccffc;
        }
    }
    ctx->pc = 0x2CCFF0u;
label_2ccff0:
    // 0x2ccff0: 0xc07507c  jal         func_1D41F0
label_2ccff4:
    if (ctx->pc == 0x2CCFF4u) {
        ctx->pc = 0x2CCFF4u;
            // 0x2ccff4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2CCFF8u;
        goto label_2ccff8;
    }
    ctx->pc = 0x2CCFF0u;
    SET_GPR_U32(ctx, 31, 0x2CCFF8u);
    ctx->pc = 0x2CCFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCFF0u;
            // 0x2ccff4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCFF8u; }
        if (ctx->pc != 0x2CCFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCFF8u; }
        if (ctx->pc != 0x2CCFF8u) { return; }
    }
    ctx->pc = 0x2CCFF8u;
label_2ccff8:
    // 0x2ccff8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2ccff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2ccffc:
    // 0x2ccffc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2cd000:
    if (ctx->pc == 0x2CD000u) {
        ctx->pc = 0x2CD000u;
            // 0x2cd000: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2CD004u;
        goto label_2cd004;
    }
    ctx->pc = 0x2CCFFCu;
    {
        const bool branch_taken_0x2ccffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccffc) {
            ctx->pc = 0x2CD000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCFFCu;
            // 0x2cd000: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CD02Cu;
            goto label_2cd02c;
        }
    }
    ctx->pc = 0x2CD004u;
label_2cd004:
    // 0x2cd004: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2cd008:
    if (ctx->pc == 0x2CD008u) {
        ctx->pc = 0x2CD00Cu;
        goto label_2cd00c;
    }
    ctx->pc = 0x2CD004u;
    {
        const bool branch_taken_0x2cd004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd004) {
            ctx->pc = 0x2CD028u;
            goto label_2cd028;
        }
    }
    ctx->pc = 0x2CD00Cu;
label_2cd00c:
    // 0x2cd00c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cd010:
    if (ctx->pc == 0x2CD010u) {
        ctx->pc = 0x2CD014u;
        goto label_2cd014;
    }
    ctx->pc = 0x2CD00Cu;
    {
        const bool branch_taken_0x2cd00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd00c) {
            ctx->pc = 0x2CD028u;
            goto label_2cd028;
        }
    }
    ctx->pc = 0x2CD014u;
label_2cd014:
    // 0x2cd014: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2cd014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2cd018:
    // 0x2cd018: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2cd01c:
    if (ctx->pc == 0x2CD01Cu) {
        ctx->pc = 0x2CD020u;
        goto label_2cd020;
    }
    ctx->pc = 0x2CD018u;
    {
        const bool branch_taken_0x2cd018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd018) {
            ctx->pc = 0x2CD028u;
            goto label_2cd028;
        }
    }
    ctx->pc = 0x2CD020u;
label_2cd020:
    // 0x2cd020: 0xc0400a8  jal         func_1002A0
label_2cd024:
    if (ctx->pc == 0x2CD024u) {
        ctx->pc = 0x2CD028u;
        goto label_2cd028;
    }
    ctx->pc = 0x2CD020u;
    SET_GPR_U32(ctx, 31, 0x2CD028u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD028u; }
        if (ctx->pc != 0x2CD028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD028u; }
        if (ctx->pc != 0x2CD028u) { return; }
    }
    ctx->pc = 0x2CD028u;
label_2cd028:
    // 0x2cd028: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2cd028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2cd02c:
    // 0x2cd02c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2cd030:
    if (ctx->pc == 0x2CD030u) {
        ctx->pc = 0x2CD030u;
            // 0x2cd030: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2CD034u;
        goto label_2cd034;
    }
    ctx->pc = 0x2CD02Cu;
    {
        const bool branch_taken_0x2cd02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd02c) {
            ctx->pc = 0x2CD030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD02Cu;
            // 0x2cd030: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CD05Cu;
            goto label_2cd05c;
        }
    }
    ctx->pc = 0x2CD034u;
label_2cd034:
    // 0x2cd034: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2cd038:
    if (ctx->pc == 0x2CD038u) {
        ctx->pc = 0x2CD03Cu;
        goto label_2cd03c;
    }
    ctx->pc = 0x2CD034u;
    {
        const bool branch_taken_0x2cd034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd034) {
            ctx->pc = 0x2CD058u;
            goto label_2cd058;
        }
    }
    ctx->pc = 0x2CD03Cu;
label_2cd03c:
    // 0x2cd03c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cd040:
    if (ctx->pc == 0x2CD040u) {
        ctx->pc = 0x2CD044u;
        goto label_2cd044;
    }
    ctx->pc = 0x2CD03Cu;
    {
        const bool branch_taken_0x2cd03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd03c) {
            ctx->pc = 0x2CD058u;
            goto label_2cd058;
        }
    }
    ctx->pc = 0x2CD044u;
label_2cd044:
    // 0x2cd044: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2cd044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2cd048:
    // 0x2cd048: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2cd04c:
    if (ctx->pc == 0x2CD04Cu) {
        ctx->pc = 0x2CD050u;
        goto label_2cd050;
    }
    ctx->pc = 0x2CD048u;
    {
        const bool branch_taken_0x2cd048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd048) {
            ctx->pc = 0x2CD058u;
            goto label_2cd058;
        }
    }
    ctx->pc = 0x2CD050u;
label_2cd050:
    // 0x2cd050: 0xc0400a8  jal         func_1002A0
label_2cd054:
    if (ctx->pc == 0x2CD054u) {
        ctx->pc = 0x2CD058u;
        goto label_2cd058;
    }
    ctx->pc = 0x2CD050u;
    SET_GPR_U32(ctx, 31, 0x2CD058u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD058u; }
        if (ctx->pc != 0x2CD058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD058u; }
        if (ctx->pc != 0x2CD058u) { return; }
    }
    ctx->pc = 0x2CD058u;
label_2cd058:
    // 0x2cd058: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2cd058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2cd05c:
    // 0x2cd05c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cd060:
    if (ctx->pc == 0x2CD060u) {
        ctx->pc = 0x2CD064u;
        goto label_2cd064;
    }
    ctx->pc = 0x2CD05Cu;
    {
        const bool branch_taken_0x2cd05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd05c) {
            ctx->pc = 0x2CD078u;
            goto label_2cd078;
        }
    }
    ctx->pc = 0x2CD064u;
label_2cd064:
    // 0x2cd064: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cd064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cd068:
    // 0x2cd068: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cd068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2cd06c:
    // 0x2cd06c: 0x2463fee8  addiu       $v1, $v1, -0x118
    ctx->pc = 0x2cd06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967016));
label_2cd070:
    // 0x2cd070: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2cd070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2cd074:
    // 0x2cd074: 0xac400e48  sw          $zero, 0xE48($v0)
    ctx->pc = 0x2cd074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3656), GPR_U32(ctx, 0));
label_2cd078:
    // 0x2cd078: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2cd07c:
    if (ctx->pc == 0x2CD07Cu) {
        ctx->pc = 0x2CD07Cu;
            // 0x2cd07c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2CD080u;
        goto label_2cd080;
    }
    ctx->pc = 0x2CD078u;
    {
        const bool branch_taken_0x2cd078 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd078) {
            ctx->pc = 0x2CD07Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD078u;
            // 0x2cd07c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CD0D4u;
            goto label_2cd0d4;
        }
    }
    ctx->pc = 0x2CD080u;
label_2cd080:
    // 0x2cd080: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cd080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cd084:
    // 0x2cd084: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2cd084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2cd088:
    // 0x2cd088: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cd088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2cd08c:
    // 0x2cd08c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2cd08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2cd090:
    // 0x2cd090: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2cd094:
    if (ctx->pc == 0x2CD094u) {
        ctx->pc = 0x2CD094u;
            // 0x2cd094: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2CD098u;
        goto label_2cd098;
    }
    ctx->pc = 0x2CD090u;
    {
        const bool branch_taken_0x2cd090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd090) {
            ctx->pc = 0x2CD094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD090u;
            // 0x2cd094: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CD0ACu;
            goto label_2cd0ac;
        }
    }
    ctx->pc = 0x2CD098u;
label_2cd098:
    // 0x2cd098: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cd098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cd09c:
    // 0x2cd09c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2cd09cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2cd0a0:
    // 0x2cd0a0: 0x320f809  jalr        $t9
label_2cd0a4:
    if (ctx->pc == 0x2CD0A4u) {
        ctx->pc = 0x2CD0A4u;
            // 0x2cd0a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CD0A8u;
        goto label_2cd0a8;
    }
    ctx->pc = 0x2CD0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CD0A8u);
        ctx->pc = 0x2CD0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD0A0u;
            // 0x2cd0a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CD0A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CD0A8u; }
            if (ctx->pc != 0x2CD0A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2CD0A8u;
label_2cd0a8:
    // 0x2cd0a8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2cd0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2cd0ac:
    // 0x2cd0ac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2cd0b0:
    if (ctx->pc == 0x2CD0B0u) {
        ctx->pc = 0x2CD0B0u;
            // 0x2cd0b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CD0B4u;
        goto label_2cd0b4;
    }
    ctx->pc = 0x2CD0ACu;
    {
        const bool branch_taken_0x2cd0ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd0ac) {
            ctx->pc = 0x2CD0B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD0ACu;
            // 0x2cd0b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CD0C8u;
            goto label_2cd0c8;
        }
    }
    ctx->pc = 0x2CD0B4u;
label_2cd0b4:
    // 0x2cd0b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cd0b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cd0b8:
    // 0x2cd0b8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2cd0b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2cd0bc:
    // 0x2cd0bc: 0x320f809  jalr        $t9
label_2cd0c0:
    if (ctx->pc == 0x2CD0C0u) {
        ctx->pc = 0x2CD0C0u;
            // 0x2cd0c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CD0C4u;
        goto label_2cd0c4;
    }
    ctx->pc = 0x2CD0BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CD0C4u);
        ctx->pc = 0x2CD0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD0BCu;
            // 0x2cd0c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CD0C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CD0C4u; }
            if (ctx->pc != 0x2CD0C4u) { return; }
        }
        }
    }
    ctx->pc = 0x2CD0C4u;
label_2cd0c4:
    // 0x2cd0c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cd0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cd0c8:
    // 0x2cd0c8: 0xc075bf8  jal         func_1D6FE0
label_2cd0cc:
    if (ctx->pc == 0x2CD0CCu) {
        ctx->pc = 0x2CD0CCu;
            // 0x2cd0cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CD0D0u;
        goto label_2cd0d0;
    }
    ctx->pc = 0x2CD0C8u;
    SET_GPR_U32(ctx, 31, 0x2CD0D0u);
    ctx->pc = 0x2CD0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD0C8u;
            // 0x2cd0cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD0D0u; }
        if (ctx->pc != 0x2CD0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD0D0u; }
        if (ctx->pc != 0x2CD0D0u) { return; }
    }
    ctx->pc = 0x2CD0D0u;
label_2cd0d0:
    // 0x2cd0d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2cd0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2cd0d4:
    // 0x2cd0d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cd0d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cd0d8:
    // 0x2cd0d8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cd0dc:
    if (ctx->pc == 0x2CD0DCu) {
        ctx->pc = 0x2CD0DCu;
            // 0x2cd0dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CD0E0u;
        goto label_2cd0e0;
    }
    ctx->pc = 0x2CD0D8u;
    {
        const bool branch_taken_0x2cd0d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cd0d8) {
            ctx->pc = 0x2CD0DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD0D8u;
            // 0x2cd0dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CD0ECu;
            goto label_2cd0ec;
        }
    }
    ctx->pc = 0x2CD0E0u;
label_2cd0e0:
    // 0x2cd0e0: 0xc0400a8  jal         func_1002A0
label_2cd0e4:
    if (ctx->pc == 0x2CD0E4u) {
        ctx->pc = 0x2CD0E4u;
            // 0x2cd0e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CD0E8u;
        goto label_2cd0e8;
    }
    ctx->pc = 0x2CD0E0u;
    SET_GPR_U32(ctx, 31, 0x2CD0E8u);
    ctx->pc = 0x2CD0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD0E0u;
            // 0x2cd0e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD0E8u; }
        if (ctx->pc != 0x2CD0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD0E8u; }
        if (ctx->pc != 0x2CD0E8u) { return; }
    }
    ctx->pc = 0x2CD0E8u;
label_2cd0e8:
    // 0x2cd0e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cd0e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cd0ec:
    // 0x2cd0ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cd0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cd0f0:
    // 0x2cd0f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cd0f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cd0f4:
    // 0x2cd0f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd0f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cd0f8:
    // 0x2cd0f8: 0x3e00008  jr          $ra
label_2cd0fc:
    if (ctx->pc == 0x2CD0FCu) {
        ctx->pc = 0x2CD0FCu;
            // 0x2cd0fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CD100u;
        goto label_2cd100;
    }
    ctx->pc = 0x2CD0F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD0F8u;
            // 0x2cd0fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD100u;
label_2cd100:
    // 0x2cd100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cd100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cd104:
    // 0x2cd104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cd104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2cd108:
    // 0x2cd108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cd10c:
    // 0x2cd10c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cd10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cd110:
    // 0x2cd110: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
label_2cd114:
    if (ctx->pc == 0x2CD114u) {
        ctx->pc = 0x2CD114u;
            // 0x2cd114: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CD118u;
        goto label_2cd118;
    }
    ctx->pc = 0x2CD110u;
    {
        const bool branch_taken_0x2cd110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd110) {
            ctx->pc = 0x2CD114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD110u;
            // 0x2cd114: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CD170u;
            goto label_2cd170;
        }
    }
    ctx->pc = 0x2CD118u;
label_2cd118:
    // 0x2cd118: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cd118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cd11c:
    // 0x2cd11c: 0x24426300  addiu       $v0, $v0, 0x6300
    ctx->pc = 0x2cd11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25344));
label_2cd120:
    // 0x2cd120: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2cd124:
    if (ctx->pc == 0x2CD124u) {
        ctx->pc = 0x2CD124u;
            // 0x2cd124: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2CD128u;
        goto label_2cd128;
    }
    ctx->pc = 0x2CD120u;
    {
        const bool branch_taken_0x2cd120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD120u;
            // 0x2cd124: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd120) {
            ctx->pc = 0x2CD154u;
            goto label_2cd154;
        }
    }
    ctx->pc = 0x2CD128u;
label_2cd128:
    // 0x2cd128: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cd128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cd12c:
    // 0x2cd12c: 0x24426440  addiu       $v0, $v0, 0x6440
    ctx->pc = 0x2cd12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25664));
label_2cd130:
    // 0x2cd130: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2cd134:
    if (ctx->pc == 0x2CD134u) {
        ctx->pc = 0x2CD134u;
            // 0x2cd134: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2CD138u;
        goto label_2cd138;
    }
    ctx->pc = 0x2CD130u;
    {
        const bool branch_taken_0x2cd130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD130u;
            // 0x2cd134: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd130) {
            ctx->pc = 0x2CD154u;
            goto label_2cd154;
        }
    }
    ctx->pc = 0x2CD138u;
label_2cd138:
    // 0x2cd138: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cd138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cd13c:
    // 0x2cd13c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2cd13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2cd140:
    // 0x2cd140: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2cd144:
    if (ctx->pc == 0x2CD144u) {
        ctx->pc = 0x2CD144u;
            // 0x2cd144: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2CD148u;
        goto label_2cd148;
    }
    ctx->pc = 0x2CD140u;
    {
        const bool branch_taken_0x2cd140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD140u;
            // 0x2cd144: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd140) {
            ctx->pc = 0x2CD154u;
            goto label_2cd154;
        }
    }
    ctx->pc = 0x2CD148u;
label_2cd148:
    // 0x2cd148: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cd148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cd14c:
    // 0x2cd14c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2cd14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2cd150:
    // 0x2cd150: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2cd150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2cd154:
    // 0x2cd154: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2cd154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2cd158:
    // 0x2cd158: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cd158u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cd15c:
    // 0x2cd15c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2cd160:
    if (ctx->pc == 0x2CD160u) {
        ctx->pc = 0x2CD164u;
        goto label_2cd164;
    }
    ctx->pc = 0x2CD15Cu;
    {
        const bool branch_taken_0x2cd15c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cd15c) {
            ctx->pc = 0x2CD16Cu;
            goto label_2cd16c;
        }
    }
    ctx->pc = 0x2CD164u;
label_2cd164:
    // 0x2cd164: 0xc0400a8  jal         func_1002A0
label_2cd168:
    if (ctx->pc == 0x2CD168u) {
        ctx->pc = 0x2CD168u;
            // 0x2cd168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CD16Cu;
        goto label_2cd16c;
    }
    ctx->pc = 0x2CD164u;
    SET_GPR_U32(ctx, 31, 0x2CD16Cu);
    ctx->pc = 0x2CD168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD164u;
            // 0x2cd168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD16Cu; }
        if (ctx->pc != 0x2CD16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD16Cu; }
        if (ctx->pc != 0x2CD16Cu) { return; }
    }
    ctx->pc = 0x2CD16Cu;
label_2cd16c:
    // 0x2cd16c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cd16cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cd170:
    // 0x2cd170: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cd170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cd174:
    // 0x2cd174: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cd178:
    // 0x2cd178: 0x3e00008  jr          $ra
label_2cd17c:
    if (ctx->pc == 0x2CD17Cu) {
        ctx->pc = 0x2CD17Cu;
            // 0x2cd17c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2CD180u;
        goto label_2cd180;
    }
    ctx->pc = 0x2CD178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD178u;
            // 0x2cd17c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD180u;
label_2cd180:
    // 0x2cd180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cd180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cd184:
    // 0x2cd184: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cd184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cd188:
    // 0x2cd188: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cd188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2cd18c:
    // 0x2cd18c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cd18cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cd190:
    // 0x2cd190: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cd194:
    // 0x2cd194: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2cd194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2cd198:
    // 0x2cd198: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cd198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cd19c:
    // 0x2cd19c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2cd19cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2cd1a0:
    // 0x2cd1a0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2cd1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_2cd1a4:
    // 0x2cd1a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cd1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd1a8:
    // 0x2cd1a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2cd1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2cd1ac:
    // 0x2cd1ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cd1acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cd1b0:
    // 0x2cd1b0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2cd1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_2cd1b4:
    // 0x2cd1b4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2cd1b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2cd1b8:
    // 0x2cd1b8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2cd1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_2cd1bc:
    // 0x2cd1bc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2cd1bcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2cd1c0:
    // 0x2cd1c0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2cd1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_2cd1c4:
    // 0x2cd1c4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2cd1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_2cd1c8:
    // 0x2cd1c8: 0xc04cbd8  jal         func_132F60
label_2cd1cc:
    if (ctx->pc == 0x2CD1CCu) {
        ctx->pc = 0x2CD1CCu;
            // 0x2cd1cc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2CD1D0u;
        goto label_2cd1d0;
    }
    ctx->pc = 0x2CD1C8u;
    SET_GPR_U32(ctx, 31, 0x2CD1D0u);
    ctx->pc = 0x2CD1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD1C8u;
            // 0x2cd1cc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD1D0u; }
        if (ctx->pc != 0x2CD1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD1D0u; }
        if (ctx->pc != 0x2CD1D0u) { return; }
    }
    ctx->pc = 0x2CD1D0u;
label_2cd1d0:
    // 0x2cd1d0: 0xc04c968  jal         func_1325A0
label_2cd1d4:
    if (ctx->pc == 0x2CD1D4u) {
        ctx->pc = 0x2CD1D4u;
            // 0x2cd1d4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x2CD1D8u;
        goto label_2cd1d8;
    }
    ctx->pc = 0x2CD1D0u;
    SET_GPR_U32(ctx, 31, 0x2CD1D8u);
    ctx->pc = 0x2CD1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD1D0u;
            // 0x2cd1d4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD1D8u; }
        if (ctx->pc != 0x2CD1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD1D8u; }
        if (ctx->pc != 0x2CD1D8u) { return; }
    }
    ctx->pc = 0x2CD1D8u;
label_2cd1d8:
    // 0x2cd1d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cd1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2cd1dc:
    // 0x2cd1dc: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2cd1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_2cd1e0:
    // 0x2cd1e0: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x2cd1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2cd1e4:
    // 0x2cd1e4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2cd1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_2cd1e8:
    // 0x2cd1e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cd1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cd1ec:
    // 0x2cd1ec: 0x24a5c560  addiu       $a1, $a1, -0x3AA0
    ctx->pc = 0x2cd1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952288));
label_2cd1f0:
    // 0x2cd1f0: 0x24846440  addiu       $a0, $a0, 0x6440
    ctx->pc = 0x2cd1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25664));
label_2cd1f4:
    // 0x2cd1f4: 0x24636300  addiu       $v1, $v1, 0x6300
    ctx->pc = 0x2cd1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25344));
label_2cd1f8:
    // 0x2cd1f8: 0x8cc60788  lw          $a2, 0x788($a2)
    ctx->pc = 0x2cd1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1928)));
label_2cd1fc:
    // 0x2cd1fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cd1fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cd200:
    // 0x2cd200: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2cd200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2cd204:
    // 0x2cd204: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x2cd204u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2cd208:
    // 0x2cd208: 0xa205004d  sb          $a1, 0x4D($s0)
    ctx->pc = 0x2cd208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 5));
label_2cd20c:
    // 0x2cd20c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2cd20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2cd210:
    // 0x2cd210: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2cd210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_2cd214:
    // 0x2cd214: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2cd214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_2cd218:
    // 0x2cd218: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2cd218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_2cd21c:
    // 0x2cd21c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2cd21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2cd220:
    // 0x2cd220: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x2cd220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_2cd224:
    // 0x2cd224: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cd224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cd228:
    // 0x2cd228: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cd22c:
    // 0x2cd22c: 0x3e00008  jr          $ra
label_2cd230:
    if (ctx->pc == 0x2CD230u) {
        ctx->pc = 0x2CD230u;
            // 0x2cd230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2CD234u;
        goto label_2cd234;
    }
    ctx->pc = 0x2CD22Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD22Cu;
            // 0x2cd230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD234u;
label_2cd234:
    // 0x2cd234: 0x0  nop
    ctx->pc = 0x2cd234u;
    // NOP
label_2cd238:
    // 0x2cd238: 0x0  nop
    ctx->pc = 0x2cd238u;
    // NOP
label_2cd23c:
    // 0x2cd23c: 0x0  nop
    ctx->pc = 0x2cd23cu;
    // NOP
label_2cd240:
    // 0x2cd240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cd240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cd244:
    // 0x2cd244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cd244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2cd248:
    // 0x2cd248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cd24c:
    // 0x2cd24c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cd24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cd250:
    // 0x2cd250: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_2cd254:
    if (ctx->pc == 0x2CD254u) {
        ctx->pc = 0x2CD254u;
            // 0x2cd254: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CD258u;
        goto label_2cd258;
    }
    ctx->pc = 0x2CD250u;
    {
        const bool branch_taken_0x2cd250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd250) {
            ctx->pc = 0x2CD254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD250u;
            // 0x2cd254: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CD2A0u;
            goto label_2cd2a0;
        }
    }
    ctx->pc = 0x2CD258u;
label_2cd258:
    // 0x2cd258: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cd258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cd25c:
    // 0x2cd25c: 0x24426440  addiu       $v0, $v0, 0x6440
    ctx->pc = 0x2cd25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25664));
label_2cd260:
    // 0x2cd260: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2cd264:
    if (ctx->pc == 0x2CD264u) {
        ctx->pc = 0x2CD264u;
            // 0x2cd264: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2CD268u;
        goto label_2cd268;
    }
    ctx->pc = 0x2CD260u;
    {
        const bool branch_taken_0x2cd260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD260u;
            // 0x2cd264: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd260) {
            ctx->pc = 0x2CD284u;
            goto label_2cd284;
        }
    }
    ctx->pc = 0x2CD268u;
label_2cd268:
    // 0x2cd268: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cd268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cd26c:
    // 0x2cd26c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2cd26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2cd270:
    // 0x2cd270: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2cd274:
    if (ctx->pc == 0x2CD274u) {
        ctx->pc = 0x2CD274u;
            // 0x2cd274: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2CD278u;
        goto label_2cd278;
    }
    ctx->pc = 0x2CD270u;
    {
        const bool branch_taken_0x2cd270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD270u;
            // 0x2cd274: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd270) {
            ctx->pc = 0x2CD284u;
            goto label_2cd284;
        }
    }
    ctx->pc = 0x2CD278u;
label_2cd278:
    // 0x2cd278: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cd278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cd27c:
    // 0x2cd27c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2cd27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2cd280:
    // 0x2cd280: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2cd280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2cd284:
    // 0x2cd284: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2cd284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2cd288:
    // 0x2cd288: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cd288u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cd28c:
    // 0x2cd28c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2cd290:
    if (ctx->pc == 0x2CD290u) {
        ctx->pc = 0x2CD294u;
        goto label_2cd294;
    }
    ctx->pc = 0x2CD28Cu;
    {
        const bool branch_taken_0x2cd28c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cd28c) {
            ctx->pc = 0x2CD29Cu;
            goto label_2cd29c;
        }
    }
    ctx->pc = 0x2CD294u;
label_2cd294:
    // 0x2cd294: 0xc0400a8  jal         func_1002A0
label_2cd298:
    if (ctx->pc == 0x2CD298u) {
        ctx->pc = 0x2CD298u;
            // 0x2cd298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CD29Cu;
        goto label_2cd29c;
    }
    ctx->pc = 0x2CD294u;
    SET_GPR_U32(ctx, 31, 0x2CD29Cu);
    ctx->pc = 0x2CD298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD294u;
            // 0x2cd298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD29Cu; }
        if (ctx->pc != 0x2CD29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD29Cu; }
        if (ctx->pc != 0x2CD29Cu) { return; }
    }
    ctx->pc = 0x2CD29Cu;
label_2cd29c:
    // 0x2cd29c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cd29cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cd2a0:
    // 0x2cd2a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cd2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cd2a4:
    // 0x2cd2a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd2a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cd2a8:
    // 0x2cd2a8: 0x3e00008  jr          $ra
label_2cd2ac:
    if (ctx->pc == 0x2CD2ACu) {
        ctx->pc = 0x2CD2ACu;
            // 0x2cd2ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2CD2B0u;
        goto label_2cd2b0;
    }
    ctx->pc = 0x2CD2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD2A8u;
            // 0x2cd2ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD2B0u;
label_2cd2b0:
    // 0x2cd2b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cd2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cd2b4:
    // 0x2cd2b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cd2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cd2b8:
    // 0x2cd2b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cd2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cd2bc:
    // 0x2cd2bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cd2c0:
    // 0x2cd2c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cd2c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cd2c4:
    // 0x2cd2c4: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
label_2cd2c8:
    if (ctx->pc == 0x2CD2C8u) {
        ctx->pc = 0x2CD2C8u;
            // 0x2cd2c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CD2CCu;
        goto label_2cd2cc;
    }
    ctx->pc = 0x2CD2C4u;
    {
        const bool branch_taken_0x2cd2c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD2C4u;
            // 0x2cd2c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd2c4) {
            ctx->pc = 0x2CD378u;
            goto label_2cd378;
        }
    }
    ctx->pc = 0x2CD2CCu;
label_2cd2cc:
    // 0x2cd2cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cd2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cd2d0:
    // 0x2cd2d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cd2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cd2d4:
    // 0x2cd2d4: 0x24636360  addiu       $v1, $v1, 0x6360
    ctx->pc = 0x2cd2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25440));
label_2cd2d8:
    // 0x2cd2d8: 0x244263b4  addiu       $v0, $v0, 0x63B4
    ctx->pc = 0x2cd2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25524));
label_2cd2dc:
    // 0x2cd2dc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2cd2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2cd2e0:
    // 0x2cd2e0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2cd2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2cd2e4:
    // 0x2cd2e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cd2e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cd2e8:
    // 0x2cd2e8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2cd2e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2cd2ec:
    // 0x2cd2ec: 0x320f809  jalr        $t9
label_2cd2f0:
    if (ctx->pc == 0x2CD2F0u) {
        ctx->pc = 0x2CD2F4u;
        goto label_2cd2f4;
    }
    ctx->pc = 0x2CD2ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CD2F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CD2F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CD2F4u; }
            if (ctx->pc != 0x2CD2F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2CD2F4u;
label_2cd2f4:
    // 0x2cd2f4: 0x26220060  addiu       $v0, $s1, 0x60
    ctx->pc = 0x2cd2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_2cd2f8:
    // 0x2cd2f8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2cd2fc:
    if (ctx->pc == 0x2CD2FCu) {
        ctx->pc = 0x2CD300u;
        goto label_2cd300;
    }
    ctx->pc = 0x2CD2F8u;
    {
        const bool branch_taken_0x2cd2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd2f8) {
            ctx->pc = 0x2CD32Cu;
            goto label_2cd32c;
        }
    }
    ctx->pc = 0x2CD300u;
label_2cd300:
    // 0x2cd300: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cd300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cd304:
    // 0x2cd304: 0x24422280  addiu       $v0, $v0, 0x2280
    ctx->pc = 0x2cd304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8832));
label_2cd308:
    // 0x2cd308: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2cd308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2cd30c:
    // 0x2cd30c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2cd30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2cd310:
    // 0x2cd310: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2cd314:
    if (ctx->pc == 0x2CD314u) {
        ctx->pc = 0x2CD314u;
            // 0x2cd314: 0xae200060  sw          $zero, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x2CD318u;
        goto label_2cd318;
    }
    ctx->pc = 0x2CD310u;
    {
        const bool branch_taken_0x2cd310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd310) {
            ctx->pc = 0x2CD314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD310u;
            // 0x2cd314: 0xae200060  sw          $zero, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CD32Cu;
            goto label_2cd32c;
        }
    }
    ctx->pc = 0x2CD318u;
label_2cd318:
    // 0x2cd318: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cd318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cd31c:
    // 0x2cd31c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2cd31cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2cd320:
    // 0x2cd320: 0x320f809  jalr        $t9
label_2cd324:
    if (ctx->pc == 0x2CD324u) {
        ctx->pc = 0x2CD324u;
            // 0x2cd324: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CD328u;
        goto label_2cd328;
    }
    ctx->pc = 0x2CD320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CD328u);
        ctx->pc = 0x2CD324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD320u;
            // 0x2cd324: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CD328u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CD328u; }
            if (ctx->pc != 0x2CD328u) { return; }
        }
        }
    }
    ctx->pc = 0x2CD328u;
label_2cd328:
    // 0x2cd328: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x2cd328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_2cd32c:
    // 0x2cd32c: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
label_2cd330:
    if (ctx->pc == 0x2CD330u) {
        ctx->pc = 0x2CD330u;
            // 0x2cd330: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2CD334u;
        goto label_2cd334;
    }
    ctx->pc = 0x2CD32Cu;
    {
        const bool branch_taken_0x2cd32c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd32c) {
            ctx->pc = 0x2CD330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD32Cu;
            // 0x2cd330: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CD364u;
            goto label_2cd364;
        }
    }
    ctx->pc = 0x2CD334u;
label_2cd334:
    // 0x2cd334: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cd334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cd338:
    // 0x2cd338: 0x24426440  addiu       $v0, $v0, 0x6440
    ctx->pc = 0x2cd338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25664));
label_2cd33c:
    // 0x2cd33c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2cd340:
    if (ctx->pc == 0x2CD340u) {
        ctx->pc = 0x2CD340u;
            // 0x2cd340: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2CD344u;
        goto label_2cd344;
    }
    ctx->pc = 0x2CD33Cu;
    {
        const bool branch_taken_0x2cd33c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD33Cu;
            // 0x2cd340: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd33c) {
            ctx->pc = 0x2CD360u;
            goto label_2cd360;
        }
    }
    ctx->pc = 0x2CD344u;
label_2cd344:
    // 0x2cd344: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cd344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cd348:
    // 0x2cd348: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2cd348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2cd34c:
    // 0x2cd34c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2cd350:
    if (ctx->pc == 0x2CD350u) {
        ctx->pc = 0x2CD350u;
            // 0x2cd350: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2CD354u;
        goto label_2cd354;
    }
    ctx->pc = 0x2CD34Cu;
    {
        const bool branch_taken_0x2cd34c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD34Cu;
            // 0x2cd350: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd34c) {
            ctx->pc = 0x2CD360u;
            goto label_2cd360;
        }
    }
    ctx->pc = 0x2CD354u;
label_2cd354:
    // 0x2cd354: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cd354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cd358:
    // 0x2cd358: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2cd358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2cd35c:
    // 0x2cd35c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cd35cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2cd360:
    // 0x2cd360: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2cd360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2cd364:
    // 0x2cd364: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cd364u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cd368:
    // 0x2cd368: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cd36c:
    if (ctx->pc == 0x2CD36Cu) {
        ctx->pc = 0x2CD36Cu;
            // 0x2cd36c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CD370u;
        goto label_2cd370;
    }
    ctx->pc = 0x2CD368u;
    {
        const bool branch_taken_0x2cd368 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cd368) {
            ctx->pc = 0x2CD36Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD368u;
            // 0x2cd36c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CD37Cu;
            goto label_2cd37c;
        }
    }
    ctx->pc = 0x2CD370u;
label_2cd370:
    // 0x2cd370: 0xc0400a8  jal         func_1002A0
label_2cd374:
    if (ctx->pc == 0x2CD374u) {
        ctx->pc = 0x2CD374u;
            // 0x2cd374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CD378u;
        goto label_2cd378;
    }
    ctx->pc = 0x2CD370u;
    SET_GPR_U32(ctx, 31, 0x2CD378u);
    ctx->pc = 0x2CD374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD370u;
            // 0x2cd374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD378u; }
        if (ctx->pc != 0x2CD378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD378u; }
        if (ctx->pc != 0x2CD378u) { return; }
    }
    ctx->pc = 0x2CD378u;
label_2cd378:
    // 0x2cd378: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cd378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cd37c:
    // 0x2cd37c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cd37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cd380:
    // 0x2cd380: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cd380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cd384:
    // 0x2cd384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cd388:
    // 0x2cd388: 0x3e00008  jr          $ra
label_2cd38c:
    if (ctx->pc == 0x2CD38Cu) {
        ctx->pc = 0x2CD38Cu;
            // 0x2cd38c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CD390u;
        goto label_2cd390;
    }
    ctx->pc = 0x2CD388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD388u;
            // 0x2cd38c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD390u;
label_2cd390:
    // 0x2cd390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cd390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cd394:
    // 0x2cd394: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cd394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cd398:
    // 0x2cd398: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cd398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2cd39c:
    // 0x2cd39c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cd39cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cd3a0:
    // 0x2cd3a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cd3a4:
    // 0x2cd3a4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2cd3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2cd3a8:
    // 0x2cd3a8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cd3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cd3ac:
    // 0x2cd3ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2cd3acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2cd3b0:
    // 0x2cd3b0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2cd3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_2cd3b4:
    // 0x2cd3b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cd3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd3b8:
    // 0x2cd3b8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2cd3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2cd3bc:
    // 0x2cd3bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cd3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cd3c0:
    // 0x2cd3c0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2cd3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_2cd3c4:
    // 0x2cd3c4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2cd3c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2cd3c8:
    // 0x2cd3c8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2cd3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_2cd3cc:
    // 0x2cd3cc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2cd3ccu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2cd3d0:
    // 0x2cd3d0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2cd3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_2cd3d4:
    // 0x2cd3d4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2cd3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_2cd3d8:
    // 0x2cd3d8: 0xc04cbd8  jal         func_132F60
label_2cd3dc:
    if (ctx->pc == 0x2CD3DCu) {
        ctx->pc = 0x2CD3DCu;
            // 0x2cd3dc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2CD3E0u;
        goto label_2cd3e0;
    }
    ctx->pc = 0x2CD3D8u;
    SET_GPR_U32(ctx, 31, 0x2CD3E0u);
    ctx->pc = 0x2CD3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD3D8u;
            // 0x2cd3dc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD3E0u; }
        if (ctx->pc != 0x2CD3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD3E0u; }
        if (ctx->pc != 0x2CD3E0u) { return; }
    }
    ctx->pc = 0x2CD3E0u;
label_2cd3e0:
    // 0x2cd3e0: 0xc04c968  jal         func_1325A0
label_2cd3e4:
    if (ctx->pc == 0x2CD3E4u) {
        ctx->pc = 0x2CD3E4u;
            // 0x2cd3e4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x2CD3E8u;
        goto label_2cd3e8;
    }
    ctx->pc = 0x2CD3E0u;
    SET_GPR_U32(ctx, 31, 0x2CD3E8u);
    ctx->pc = 0x2CD3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD3E0u;
            // 0x2cd3e4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD3E8u; }
        if (ctx->pc != 0x2CD3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD3E8u; }
        if (ctx->pc != 0x2CD3E8u) { return; }
    }
    ctx->pc = 0x2CD3E8u;
label_2cd3e8:
    // 0x2cd3e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cd3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2cd3ec:
    // 0x2cd3ec: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x2cd3ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
label_2cd3f0:
    // 0x2cd3f0: 0x8c480e80  lw          $t0, 0xE80($v0)
    ctx->pc = 0x2cd3f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2cd3f4:
    // 0x2cd3f4: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x2cd3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_2cd3f8:
    // 0x2cd3f8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x2cd3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_2cd3fc:
    // 0x2cd3fc: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2cd3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_2cd400:
    // 0x2cd400: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cd400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cd404:
    // 0x2cd404: 0x24e7c560  addiu       $a3, $a3, -0x3AA0
    ctx->pc = 0x2cd404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952288));
label_2cd408:
    // 0x2cd408: 0x8d080788  lw          $t0, 0x788($t0)
    ctx->pc = 0x2cd408u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1928)));
label_2cd40c:
    // 0x2cd40c: 0x24c66440  addiu       $a2, $a2, 0x6440
    ctx->pc = 0x2cd40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25664));
label_2cd410:
    // 0x2cd410: 0x24a52280  addiu       $a1, $a1, 0x2280
    ctx->pc = 0x2cd410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8832));
label_2cd414:
    // 0x2cd414: 0x24846360  addiu       $a0, $a0, 0x6360
    ctx->pc = 0x2cd414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25440));
label_2cd418:
    // 0x2cd418: 0x246363b4  addiu       $v1, $v1, 0x63B4
    ctx->pc = 0x2cd418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25524));
label_2cd41c:
    // 0x2cd41c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cd41cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cd420:
    // 0x2cd420: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2cd420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2cd424:
    // 0x2cd424: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x2cd424u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_2cd428:
    // 0x2cd428: 0xa207004d  sb          $a3, 0x4D($s0)
    ctx->pc = 0x2cd428u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 7));
label_2cd42c:
    // 0x2cd42c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2cd42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_2cd430:
    // 0x2cd430: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2cd430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_2cd434:
    // 0x2cd434: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2cd434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_2cd438:
    // 0x2cd438: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2cd438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_2cd43c:
    // 0x2cd43c: 0xae050064  sw          $a1, 0x64($s0)
    ctx->pc = 0x2cd43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 5));
label_2cd440:
    // 0x2cd440: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2cd440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_2cd444:
    // 0x2cd444: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2cd444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2cd448:
    // 0x2cd448: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2cd448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_2cd44c:
    // 0x2cd44c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cd44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cd450:
    // 0x2cd450: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cd454:
    // 0x2cd454: 0x3e00008  jr          $ra
label_2cd458:
    if (ctx->pc == 0x2CD458u) {
        ctx->pc = 0x2CD458u;
            // 0x2cd458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2CD45Cu;
        goto label_2cd45c;
    }
    ctx->pc = 0x2CD454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD454u;
            // 0x2cd458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD45Cu;
label_2cd45c:
    // 0x2cd45c: 0x0  nop
    ctx->pc = 0x2cd45cu;
    // NOP
}
