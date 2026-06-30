#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044F1B0
// Address: 0x44f1b0 - 0x44f450
void sub_0044F1B0_0x44f1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F1B0_0x44f1b0");
#endif

    switch (ctx->pc) {
        case 0x44f1b0u: goto label_44f1b0;
        case 0x44f1b4u: goto label_44f1b4;
        case 0x44f1b8u: goto label_44f1b8;
        case 0x44f1bcu: goto label_44f1bc;
        case 0x44f1c0u: goto label_44f1c0;
        case 0x44f1c4u: goto label_44f1c4;
        case 0x44f1c8u: goto label_44f1c8;
        case 0x44f1ccu: goto label_44f1cc;
        case 0x44f1d0u: goto label_44f1d0;
        case 0x44f1d4u: goto label_44f1d4;
        case 0x44f1d8u: goto label_44f1d8;
        case 0x44f1dcu: goto label_44f1dc;
        case 0x44f1e0u: goto label_44f1e0;
        case 0x44f1e4u: goto label_44f1e4;
        case 0x44f1e8u: goto label_44f1e8;
        case 0x44f1ecu: goto label_44f1ec;
        case 0x44f1f0u: goto label_44f1f0;
        case 0x44f1f4u: goto label_44f1f4;
        case 0x44f1f8u: goto label_44f1f8;
        case 0x44f1fcu: goto label_44f1fc;
        case 0x44f200u: goto label_44f200;
        case 0x44f204u: goto label_44f204;
        case 0x44f208u: goto label_44f208;
        case 0x44f20cu: goto label_44f20c;
        case 0x44f210u: goto label_44f210;
        case 0x44f214u: goto label_44f214;
        case 0x44f218u: goto label_44f218;
        case 0x44f21cu: goto label_44f21c;
        case 0x44f220u: goto label_44f220;
        case 0x44f224u: goto label_44f224;
        case 0x44f228u: goto label_44f228;
        case 0x44f22cu: goto label_44f22c;
        case 0x44f230u: goto label_44f230;
        case 0x44f234u: goto label_44f234;
        case 0x44f238u: goto label_44f238;
        case 0x44f23cu: goto label_44f23c;
        case 0x44f240u: goto label_44f240;
        case 0x44f244u: goto label_44f244;
        case 0x44f248u: goto label_44f248;
        case 0x44f24cu: goto label_44f24c;
        case 0x44f250u: goto label_44f250;
        case 0x44f254u: goto label_44f254;
        case 0x44f258u: goto label_44f258;
        case 0x44f25cu: goto label_44f25c;
        case 0x44f260u: goto label_44f260;
        case 0x44f264u: goto label_44f264;
        case 0x44f268u: goto label_44f268;
        case 0x44f26cu: goto label_44f26c;
        case 0x44f270u: goto label_44f270;
        case 0x44f274u: goto label_44f274;
        case 0x44f278u: goto label_44f278;
        case 0x44f27cu: goto label_44f27c;
        case 0x44f280u: goto label_44f280;
        case 0x44f284u: goto label_44f284;
        case 0x44f288u: goto label_44f288;
        case 0x44f28cu: goto label_44f28c;
        case 0x44f290u: goto label_44f290;
        case 0x44f294u: goto label_44f294;
        case 0x44f298u: goto label_44f298;
        case 0x44f29cu: goto label_44f29c;
        case 0x44f2a0u: goto label_44f2a0;
        case 0x44f2a4u: goto label_44f2a4;
        case 0x44f2a8u: goto label_44f2a8;
        case 0x44f2acu: goto label_44f2ac;
        case 0x44f2b0u: goto label_44f2b0;
        case 0x44f2b4u: goto label_44f2b4;
        case 0x44f2b8u: goto label_44f2b8;
        case 0x44f2bcu: goto label_44f2bc;
        case 0x44f2c0u: goto label_44f2c0;
        case 0x44f2c4u: goto label_44f2c4;
        case 0x44f2c8u: goto label_44f2c8;
        case 0x44f2ccu: goto label_44f2cc;
        case 0x44f2d0u: goto label_44f2d0;
        case 0x44f2d4u: goto label_44f2d4;
        case 0x44f2d8u: goto label_44f2d8;
        case 0x44f2dcu: goto label_44f2dc;
        case 0x44f2e0u: goto label_44f2e0;
        case 0x44f2e4u: goto label_44f2e4;
        case 0x44f2e8u: goto label_44f2e8;
        case 0x44f2ecu: goto label_44f2ec;
        case 0x44f2f0u: goto label_44f2f0;
        case 0x44f2f4u: goto label_44f2f4;
        case 0x44f2f8u: goto label_44f2f8;
        case 0x44f2fcu: goto label_44f2fc;
        case 0x44f300u: goto label_44f300;
        case 0x44f304u: goto label_44f304;
        case 0x44f308u: goto label_44f308;
        case 0x44f30cu: goto label_44f30c;
        case 0x44f310u: goto label_44f310;
        case 0x44f314u: goto label_44f314;
        case 0x44f318u: goto label_44f318;
        case 0x44f31cu: goto label_44f31c;
        case 0x44f320u: goto label_44f320;
        case 0x44f324u: goto label_44f324;
        case 0x44f328u: goto label_44f328;
        case 0x44f32cu: goto label_44f32c;
        case 0x44f330u: goto label_44f330;
        case 0x44f334u: goto label_44f334;
        case 0x44f338u: goto label_44f338;
        case 0x44f33cu: goto label_44f33c;
        case 0x44f340u: goto label_44f340;
        case 0x44f344u: goto label_44f344;
        case 0x44f348u: goto label_44f348;
        case 0x44f34cu: goto label_44f34c;
        case 0x44f350u: goto label_44f350;
        case 0x44f354u: goto label_44f354;
        case 0x44f358u: goto label_44f358;
        case 0x44f35cu: goto label_44f35c;
        case 0x44f360u: goto label_44f360;
        case 0x44f364u: goto label_44f364;
        case 0x44f368u: goto label_44f368;
        case 0x44f36cu: goto label_44f36c;
        case 0x44f370u: goto label_44f370;
        case 0x44f374u: goto label_44f374;
        case 0x44f378u: goto label_44f378;
        case 0x44f37cu: goto label_44f37c;
        case 0x44f380u: goto label_44f380;
        case 0x44f384u: goto label_44f384;
        case 0x44f388u: goto label_44f388;
        case 0x44f38cu: goto label_44f38c;
        case 0x44f390u: goto label_44f390;
        case 0x44f394u: goto label_44f394;
        case 0x44f398u: goto label_44f398;
        case 0x44f39cu: goto label_44f39c;
        case 0x44f3a0u: goto label_44f3a0;
        case 0x44f3a4u: goto label_44f3a4;
        case 0x44f3a8u: goto label_44f3a8;
        case 0x44f3acu: goto label_44f3ac;
        case 0x44f3b0u: goto label_44f3b0;
        case 0x44f3b4u: goto label_44f3b4;
        case 0x44f3b8u: goto label_44f3b8;
        case 0x44f3bcu: goto label_44f3bc;
        case 0x44f3c0u: goto label_44f3c0;
        case 0x44f3c4u: goto label_44f3c4;
        case 0x44f3c8u: goto label_44f3c8;
        case 0x44f3ccu: goto label_44f3cc;
        case 0x44f3d0u: goto label_44f3d0;
        case 0x44f3d4u: goto label_44f3d4;
        case 0x44f3d8u: goto label_44f3d8;
        case 0x44f3dcu: goto label_44f3dc;
        case 0x44f3e0u: goto label_44f3e0;
        case 0x44f3e4u: goto label_44f3e4;
        case 0x44f3e8u: goto label_44f3e8;
        case 0x44f3ecu: goto label_44f3ec;
        case 0x44f3f0u: goto label_44f3f0;
        case 0x44f3f4u: goto label_44f3f4;
        case 0x44f3f8u: goto label_44f3f8;
        case 0x44f3fcu: goto label_44f3fc;
        case 0x44f400u: goto label_44f400;
        case 0x44f404u: goto label_44f404;
        case 0x44f408u: goto label_44f408;
        case 0x44f40cu: goto label_44f40c;
        case 0x44f410u: goto label_44f410;
        case 0x44f414u: goto label_44f414;
        case 0x44f418u: goto label_44f418;
        case 0x44f41cu: goto label_44f41c;
        case 0x44f420u: goto label_44f420;
        case 0x44f424u: goto label_44f424;
        case 0x44f428u: goto label_44f428;
        case 0x44f42cu: goto label_44f42c;
        case 0x44f430u: goto label_44f430;
        case 0x44f434u: goto label_44f434;
        case 0x44f438u: goto label_44f438;
        case 0x44f43cu: goto label_44f43c;
        case 0x44f440u: goto label_44f440;
        case 0x44f444u: goto label_44f444;
        case 0x44f448u: goto label_44f448;
        case 0x44f44cu: goto label_44f44c;
        default: break;
    }

    ctx->pc = 0x44f1b0u;

label_44f1b0:
    // 0x44f1b0: 0x3e00008  jr          $ra
label_44f1b4:
    if (ctx->pc == 0x44F1B4u) {
        ctx->pc = 0x44F1B4u;
            // 0x44f1b4: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x44F1B8u;
        goto label_44f1b8;
    }
    ctx->pc = 0x44F1B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44F1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F1B0u;
            // 0x44f1b4: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44F1B8u;
label_44f1b8:
    // 0x44f1b8: 0x0  nop
    ctx->pc = 0x44f1b8u;
    // NOP
label_44f1bc:
    // 0x44f1bc: 0x0  nop
    ctx->pc = 0x44f1bcu;
    // NOP
label_44f1c0:
    // 0x44f1c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x44f1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_44f1c4:
    // 0x44f1c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x44f1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_44f1c8:
    // 0x44f1c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x44f1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_44f1cc:
    // 0x44f1cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x44f1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_44f1d0:
    // 0x44f1d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x44f1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_44f1d4:
    // 0x44f1d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44f1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44f1d8:
    // 0x44f1d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44f1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44f1dc:
    // 0x44f1dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44f1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44f1e0:
    // 0x44f1e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44f1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44f1e4:
    // 0x44f1e4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x44f1e4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_44f1e8:
    // 0x44f1e8: 0x10a30025  beq         $a1, $v1, . + 4 + (0x25 << 2)
label_44f1ec:
    if (ctx->pc == 0x44F1ECu) {
        ctx->pc = 0x44F1ECu;
            // 0x44f1ec: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44F1F0u;
        goto label_44f1f0;
    }
    ctx->pc = 0x44F1E8u;
    {
        const bool branch_taken_0x44f1e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x44F1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F1E8u;
            // 0x44f1ec: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f1e8) {
            ctx->pc = 0x44F280u;
            goto label_44f280;
        }
    }
    ctx->pc = 0x44F1F0u;
label_44f1f0:
    // 0x44f1f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x44f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_44f1f4:
    // 0x44f1f4: 0x50a3001f  beql        $a1, $v1, . + 4 + (0x1F << 2)
label_44f1f8:
    if (ctx->pc == 0x44F1F8u) {
        ctx->pc = 0x44F1F8u;
            // 0x44f1f8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x44F1FCu;
        goto label_44f1fc;
    }
    ctx->pc = 0x44F1F4u;
    {
        const bool branch_taken_0x44f1f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x44f1f4) {
            ctx->pc = 0x44F1F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44F1F4u;
            // 0x44f1f8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44F274u;
            goto label_44f274;
        }
    }
    ctx->pc = 0x44F1FCu;
label_44f1fc:
    // 0x44f1fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x44f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44f200:
    // 0x44f200: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_44f204:
    if (ctx->pc == 0x44F204u) {
        ctx->pc = 0x44F208u;
        goto label_44f208;
    }
    ctx->pc = 0x44F200u;
    {
        const bool branch_taken_0x44f200 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x44f200) {
            ctx->pc = 0x44F210u;
            goto label_44f210;
        }
    }
    ctx->pc = 0x44F208u;
label_44f208:
    // 0x44f208: 0x10000071  b           . + 4 + (0x71 << 2)
label_44f20c:
    if (ctx->pc == 0x44F20Cu) {
        ctx->pc = 0x44F210u;
        goto label_44f210;
    }
    ctx->pc = 0x44F208u;
    {
        const bool branch_taken_0x44f208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f208) {
            ctx->pc = 0x44F3D0u;
            goto label_44f3d0;
        }
    }
    ctx->pc = 0x44F210u;
label_44f210:
    // 0x44f210: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44f210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_44f214:
    // 0x44f214: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x44f214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44f218:
    // 0x44f218: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x44f218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_44f21c:
    // 0x44f21c: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x44f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_44f220:
    // 0x44f220: 0x1064006b  beq         $v1, $a0, . + 4 + (0x6B << 2)
label_44f224:
    if (ctx->pc == 0x44F224u) {
        ctx->pc = 0x44F228u;
        goto label_44f228;
    }
    ctx->pc = 0x44F220u;
    {
        const bool branch_taken_0x44f220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x44f220) {
            ctx->pc = 0x44F3D0u;
            goto label_44f3d0;
        }
    }
    ctx->pc = 0x44F228u;
label_44f228:
    // 0x44f228: 0x8ea70070  lw          $a3, 0x70($s5)
    ctx->pc = 0x44f228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_44f22c:
    // 0x44f22c: 0x10e00068  beqz        $a3, . + 4 + (0x68 << 2)
label_44f230:
    if (ctx->pc == 0x44F230u) {
        ctx->pc = 0x44F234u;
        goto label_44f234;
    }
    ctx->pc = 0x44F22Cu;
    {
        const bool branch_taken_0x44f22c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f22c) {
            ctx->pc = 0x44F3D0u;
            goto label_44f3d0;
        }
    }
    ctx->pc = 0x44F234u;
label_44f234:
    // 0x44f234: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x44f234u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44f238:
    // 0x44f238: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x44f238u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44f23c:
    // 0x44f23c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_44f240:
    // 0x44f240: 0x8c6675a0  lw          $a2, 0x75A0($v1)
    ctx->pc = 0x44f240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30112)));
label_44f244:
    // 0x44f244: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x44f244u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_44f248:
    // 0x44f248: 0x8ea50074  lw          $a1, 0x74($s5)
    ctx->pc = 0x44f248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_44f24c:
    // 0x44f24c: 0x127202b  sltu        $a0, $t1, $a3
    ctx->pc = 0x44f24cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_44f250:
    // 0x44f250: 0x8cc60098  lw          $a2, 0x98($a2)
    ctx->pc = 0x44f250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 152)));
label_44f254:
    // 0x44f254: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x44f254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_44f258:
    // 0x44f258: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x44f258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44f25c:
    // 0x44f25c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x44f25cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_44f260:
    // 0x44f260: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x44f260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44f264:
    // 0x44f264: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
label_44f268:
    if (ctx->pc == 0x44F268u) {
        ctx->pc = 0x44F268u;
            // 0x44f268: 0xe4a00064  swc1        $f0, 0x64($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
        ctx->pc = 0x44F26Cu;
        goto label_44f26c;
    }
    ctx->pc = 0x44F264u;
    {
        const bool branch_taken_0x44f264 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x44F268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F264u;
            // 0x44f268: 0xe4a00064  swc1        $f0, 0x64($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f264) {
            ctx->pc = 0x44F240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44f240;
        }
    }
    ctx->pc = 0x44F26Cu;
label_44f26c:
    // 0x44f26c: 0x10000058  b           . + 4 + (0x58 << 2)
label_44f270:
    if (ctx->pc == 0x44F270u) {
        ctx->pc = 0x44F274u;
        goto label_44f274;
    }
    ctx->pc = 0x44F26Cu;
    {
        const bool branch_taken_0x44f26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f26c) {
            ctx->pc = 0x44F3D0u;
            goto label_44f3d0;
        }
    }
    ctx->pc = 0x44F274u;
label_44f274:
    // 0x44f274: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x44f274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_44f278:
    // 0x44f278: 0x320f809  jalr        $t9
label_44f27c:
    if (ctx->pc == 0x44F27Cu) {
        ctx->pc = 0x44F280u;
        goto label_44f280;
    }
    ctx->pc = 0x44F278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44F280u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x44F280u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44F280u; }
            if (ctx->pc != 0x44F280u) { return; }
        }
        }
    }
    ctx->pc = 0x44F280u;
label_44f280:
    // 0x44f280: 0x8eb10070  lw          $s1, 0x70($s5)
    ctx->pc = 0x44f280u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_44f284:
    // 0x44f284: 0x12200052  beqz        $s1, . + 4 + (0x52 << 2)
label_44f288:
    if (ctx->pc == 0x44F288u) {
        ctx->pc = 0x44F28Cu;
        goto label_44f28c;
    }
    ctx->pc = 0x44F284u;
    {
        const bool branch_taken_0x44f284 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f284) {
            ctx->pc = 0x44F3D0u;
            goto label_44f3d0;
        }
    }
    ctx->pc = 0x44F28Cu;
label_44f28c:
    // 0x44f28c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x44f28cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44f290:
    // 0x44f290: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44f290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44f294:
    // 0x44f294: 0x8ea40074  lw          $a0, 0x74($s5)
    ctx->pc = 0x44f294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_44f298:
    // 0x44f298: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x44f298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44f29c:
    // 0x44f29c: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x44f29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_44f2a0:
    // 0x44f2a0: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x44f2a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44f2a4:
    // 0x44f2a4: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x44f2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_44f2a8:
    // 0x44f2a8: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
label_44f2ac:
    if (ctx->pc == 0x44F2ACu) {
        ctx->pc = 0x44F2B0u;
        goto label_44f2b0;
    }
    ctx->pc = 0x44F2A8u;
    {
        const bool branch_taken_0x44f2a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x44f2a8) {
            ctx->pc = 0x44F348u;
            goto label_44f348;
        }
    }
    ctx->pc = 0x44F2B0u;
label_44f2b0:
    // 0x44f2b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44f2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44f2b4:
    // 0x44f2b4: 0x1085000a  beq         $a0, $a1, . + 4 + (0xA << 2)
label_44f2b8:
    if (ctx->pc == 0x44F2B8u) {
        ctx->pc = 0x44F2BCu;
        goto label_44f2bc;
    }
    ctx->pc = 0x44F2B4u;
    {
        const bool branch_taken_0x44f2b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x44f2b4) {
            ctx->pc = 0x44F2E0u;
            goto label_44f2e0;
        }
    }
    ctx->pc = 0x44F2BCu;
label_44f2bc:
    // 0x44f2bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_44f2c0:
    if (ctx->pc == 0x44F2C0u) {
        ctx->pc = 0x44F2C4u;
        goto label_44f2c4;
    }
    ctx->pc = 0x44F2BCu;
    {
        const bool branch_taken_0x44f2bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f2bc) {
            ctx->pc = 0x44F2D0u;
            goto label_44f2d0;
        }
    }
    ctx->pc = 0x44F2C4u;
label_44f2c4:
    // 0x44f2c4: 0x1000003e  b           . + 4 + (0x3E << 2)
label_44f2c8:
    if (ctx->pc == 0x44F2C8u) {
        ctx->pc = 0x44F2CCu;
        goto label_44f2cc;
    }
    ctx->pc = 0x44F2C4u;
    {
        const bool branch_taken_0x44f2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f2c4) {
            ctx->pc = 0x44F3C0u;
            goto label_44f3c0;
        }
    }
    ctx->pc = 0x44F2CCu;
label_44f2cc:
    // 0x44f2cc: 0x0  nop
    ctx->pc = 0x44f2ccu;
    // NOP
label_44f2d0:
    // 0x44f2d0: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x44f2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_44f2d4:
    // 0x44f2d4: 0x1000003a  b           . + 4 + (0x3A << 2)
label_44f2d8:
    if (ctx->pc == 0x44F2D8u) {
        ctx->pc = 0x44F2D8u;
            // 0x44f2d8: 0xae650060  sw          $a1, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 5));
        ctx->pc = 0x44F2DCu;
        goto label_44f2dc;
    }
    ctx->pc = 0x44F2D4u;
    {
        const bool branch_taken_0x44f2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F2D4u;
            // 0x44f2d8: 0xae650060  sw          $a1, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f2d4) {
            ctx->pc = 0x44F3C0u;
            goto label_44f3c0;
        }
    }
    ctx->pc = 0x44F2DCu;
label_44f2dc:
    // 0x44f2dc: 0x0  nop
    ctx->pc = 0x44f2dcu;
    // NOP
label_44f2e0:
    // 0x44f2e0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x44f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_44f2e4:
    // 0x44f2e4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x44f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_44f2e8:
    // 0x44f2e8: 0xc6600068  lwc1        $f0, 0x68($s3)
    ctx->pc = 0x44f2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44f2ec:
    // 0x44f2ec: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x44f2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44f2f0:
    // 0x44f2f0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x44f2f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_44f2f4:
    // 0x44f2f4: 0xe6610068  swc1        $f1, 0x68($s3)
    ctx->pc = 0x44f2f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
label_44f2f8:
    // 0x44f2f8: 0xc6600064  lwc1        $f0, 0x64($s3)
    ctx->pc = 0x44f2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44f2fc:
    // 0x44f2fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x44f2fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44f300:
    // 0x44f300: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_44f304:
    if (ctx->pc == 0x44F304u) {
        ctx->pc = 0x44F308u;
        goto label_44f308;
    }
    ctx->pc = 0x44F300u;
    {
        const bool branch_taken_0x44f300 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x44f300) {
            ctx->pc = 0x44F30Cu;
            goto label_44f30c;
        }
    }
    ctx->pc = 0x44F308u;
label_44f308:
    // 0x44f308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44f308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44f30c:
    // 0x44f30c: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_44f310:
    if (ctx->pc == 0x44F310u) {
        ctx->pc = 0x44F310u;
            // 0x44f310: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x44F314u;
        goto label_44f314;
    }
    ctx->pc = 0x44F30Cu;
    {
        const bool branch_taken_0x44f30c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x44f30c) {
            ctx->pc = 0x44F310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44F30Cu;
            // 0x44f310: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44F320u;
            goto label_44f320;
        }
    }
    ctx->pc = 0x44F314u;
label_44f314:
    // 0x44f314: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x44f314u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44f318:
    // 0x44f318: 0x10000007  b           . + 4 + (0x7 << 2)
label_44f31c:
    if (ctx->pc == 0x44F31Cu) {
        ctx->pc = 0x44F31Cu;
            // 0x44f31c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x44F320u;
        goto label_44f320;
    }
    ctx->pc = 0x44F318u;
    {
        const bool branch_taken_0x44f318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F318u;
            // 0x44f31c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f318) {
            ctx->pc = 0x44F338u;
            goto label_44f338;
        }
    }
    ctx->pc = 0x44F320u;
label_44f320:
    // 0x44f320: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x44f320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_44f324:
    // 0x44f324: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x44f324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_44f328:
    // 0x44f328: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x44f328u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44f32c:
    // 0x44f32c: 0x0  nop
    ctx->pc = 0x44f32cu;
    // NOP
label_44f330:
    // 0x44f330: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x44f330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_44f334:
    // 0x44f334: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x44f334u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_44f338:
    // 0x44f338: 0xc6600068  lwc1        $f0, 0x68($s3)
    ctx->pc = 0x44f338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44f33c:
    // 0x44f33c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x44f33cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_44f340:
    // 0x44f340: 0x1000001f  b           . + 4 + (0x1F << 2)
label_44f344:
    if (ctx->pc == 0x44F344u) {
        ctx->pc = 0x44F344u;
            // 0x44f344: 0xe6600068  swc1        $f0, 0x68($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
        ctx->pc = 0x44F348u;
        goto label_44f348;
    }
    ctx->pc = 0x44F340u;
    {
        const bool branch_taken_0x44f340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F340u;
            // 0x44f344: 0xe6600068  swc1        $f0, 0x68($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f340) {
            ctx->pc = 0x44F3C0u;
            goto label_44f3c0;
        }
    }
    ctx->pc = 0x44F348u;
label_44f348:
    // 0x44f348: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x44f348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_44f34c:
    // 0x44f34c: 0x8c5089e8  lw          $s0, -0x7618($v0)
    ctx->pc = 0x44f34cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_44f350:
    // 0x44f350: 0xc661006c  lwc1        $f1, 0x6C($s3)
    ctx->pc = 0x44f350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44f354:
    // 0x44f354: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x44f354u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44f358:
    // 0x44f358: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x44f358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_44f35c:
    // 0x44f35c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x44f35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_44f360:
    // 0x44f360: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x44f360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44f364:
    // 0x44f364: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x44f364u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_44f368:
    // 0x44f368: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x44f368u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44f36c:
    // 0x44f36c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_44f370:
    if (ctx->pc == 0x44F370u) {
        ctx->pc = 0x44F370u;
            // 0x44f370: 0xe661006c  swc1        $f1, 0x6C($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 108), bits); }
        ctx->pc = 0x44F374u;
        goto label_44f374;
    }
    ctx->pc = 0x44F36Cu;
    {
        const bool branch_taken_0x44f36c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x44F370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F36Cu;
            // 0x44f370: 0xe661006c  swc1        $f1, 0x6C($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f36c) {
            ctx->pc = 0x44F388u;
            goto label_44f388;
        }
    }
    ctx->pc = 0x44F374u;
label_44f374:
    // 0x44f374: 0x92630070  lbu         $v1, 0x70($s3)
    ctx->pc = 0x44f374u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
label_44f378:
    // 0x44f378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44f378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44f37c:
    // 0x44f37c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_44f380:
    if (ctx->pc == 0x44F380u) {
        ctx->pc = 0x44F384u;
        goto label_44f384;
    }
    ctx->pc = 0x44F37Cu;
    {
        const bool branch_taken_0x44f37c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x44f37c) {
            ctx->pc = 0x44F388u;
            goto label_44f388;
        }
    }
    ctx->pc = 0x44F384u;
label_44f384:
    // 0x44f384: 0xae620060  sw          $v0, 0x60($s3)
    ctx->pc = 0x44f384u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
label_44f388:
    // 0x44f388: 0xc05ccc0  jal         func_173300
label_44f38c:
    if (ctx->pc == 0x44F38Cu) {
        ctx->pc = 0x44F38Cu;
            // 0x44f38c: 0x8e040198  lw          $a0, 0x198($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
        ctx->pc = 0x44F390u;
        goto label_44f390;
    }
    ctx->pc = 0x44F388u;
    SET_GPR_U32(ctx, 31, 0x44F390u);
    ctx->pc = 0x44F38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F388u;
            // 0x44f38c: 0x8e040198  lw          $a0, 0x198($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173300u;
    if (runtime->hasFunction(0x173300u)) {
        auto targetFn = runtime->lookupFunction(0x173300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F390u; }
        if (ctx->pc != 0x44F390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173300_0x173300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F390u; }
        if (ctx->pc != 0x44F390u) { return; }
    }
    ctx->pc = 0x44F390u;
label_44f390:
    // 0x44f390: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x44f390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_44f394:
    // 0x44f394: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_44f398:
    if (ctx->pc == 0x44F398u) {
        ctx->pc = 0x44F39Cu;
        goto label_44f39c;
    }
    ctx->pc = 0x44F394u;
    {
        const bool branch_taken_0x44f394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x44f394) {
            ctx->pc = 0x44F3C0u;
            goto label_44f3c0;
        }
    }
    ctx->pc = 0x44F39Cu;
label_44f39c:
    // 0x44f39c: 0x92640070  lbu         $a0, 0x70($s3)
    ctx->pc = 0x44f39cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
label_44f3a0:
    // 0x44f3a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44f3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44f3a4:
    // 0x44f3a4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_44f3a8:
    if (ctx->pc == 0x44F3A8u) {
        ctx->pc = 0x44F3ACu;
        goto label_44f3ac;
    }
    ctx->pc = 0x44F3A4u;
    {
        const bool branch_taken_0x44f3a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x44f3a4) {
            ctx->pc = 0x44F3C0u;
            goto label_44f3c0;
        }
    }
    ctx->pc = 0x44F3ACu;
label_44f3ac:
    // 0x44f3ac: 0x8e040198  lw          $a0, 0x198($s0)
    ctx->pc = 0x44f3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
label_44f3b0:
    // 0x44f3b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44f3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44f3b4:
    // 0x44f3b4: 0xc05d7c2  jal         func_175F08
label_44f3b8:
    if (ctx->pc == 0x44F3B8u) {
        ctx->pc = 0x44F3B8u;
            // 0x44f3b8: 0x24060053  addiu       $a2, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->pc = 0x44F3BCu;
        goto label_44f3bc;
    }
    ctx->pc = 0x44F3B4u;
    SET_GPR_U32(ctx, 31, 0x44F3BCu);
    ctx->pc = 0x44F3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F3B4u;
            // 0x44f3b8: 0x24060053  addiu       $a2, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175F08u;
    if (runtime->hasFunction(0x175F08u)) {
        auto targetFn = runtime->lookupFunction(0x175F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F3BCu; }
        if (ctx->pc != 0x44F3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175F08_0x175f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F3BCu; }
        if (ctx->pc != 0x44F3BCu) { return; }
    }
    ctx->pc = 0x44F3BCu;
label_44f3bc:
    // 0x44f3bc: 0xa2600070  sb          $zero, 0x70($s3)
    ctx->pc = 0x44f3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 0));
label_44f3c0:
    // 0x44f3c0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x44f3c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_44f3c4:
    // 0x44f3c4: 0x291182b  sltu        $v1, $s4, $s1
    ctx->pc = 0x44f3c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_44f3c8:
    // 0x44f3c8: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
label_44f3cc:
    if (ctx->pc == 0x44F3CCu) {
        ctx->pc = 0x44F3CCu;
            // 0x44f3cc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x44F3D0u;
        goto label_44f3d0;
    }
    ctx->pc = 0x44F3C8u;
    {
        const bool branch_taken_0x44f3c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44F3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F3C8u;
            // 0x44f3cc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f3c8) {
            ctx->pc = 0x44F294u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44f294;
        }
    }
    ctx->pc = 0x44F3D0u;
label_44f3d0:
    // 0x44f3d0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x44f3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_44f3d4:
    // 0x44f3d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x44f3d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_44f3d8:
    // 0x44f3d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x44f3d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44f3dc:
    // 0x44f3dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44f3dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44f3e0:
    // 0x44f3e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44f3e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44f3e4:
    // 0x44f3e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44f3e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44f3e8:
    // 0x44f3e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44f3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44f3ec:
    // 0x44f3ec: 0x3e00008  jr          $ra
label_44f3f0:
    if (ctx->pc == 0x44F3F0u) {
        ctx->pc = 0x44F3F0u;
            // 0x44f3f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x44F3F4u;
        goto label_44f3f4;
    }
    ctx->pc = 0x44F3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44F3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F3ECu;
            // 0x44f3f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44F3F4u;
label_44f3f4:
    // 0x44f3f4: 0x0  nop
    ctx->pc = 0x44f3f4u;
    // NOP
label_44f3f8:
    // 0x44f3f8: 0x0  nop
    ctx->pc = 0x44f3f8u;
    // NOP
label_44f3fc:
    // 0x44f3fc: 0x0  nop
    ctx->pc = 0x44f3fcu;
    // NOP
label_44f400:
    // 0x44f400: 0x8c860070  lw          $a2, 0x70($a0)
    ctx->pc = 0x44f400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_44f404:
    // 0x44f404: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_44f408:
    if (ctx->pc == 0x44F408u) {
        ctx->pc = 0x44F40Cu;
        goto label_44f40c;
    }
    ctx->pc = 0x44F404u;
    {
        const bool branch_taken_0x44f404 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f404) {
            ctx->pc = 0x44F448u;
            goto label_44f448;
        }
    }
    ctx->pc = 0x44F40Cu;
label_44f40c:
    // 0x44f40c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x44f40cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44f410:
    // 0x44f410: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x44f410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44f414:
    // 0x44f414: 0x8c850074  lw          $a1, 0x74($a0)
    ctx->pc = 0x44f414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_44f418:
    // 0x44f418: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x44f418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_44f41c:
    // 0x44f41c: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x44f41cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_44f420:
    // 0x44f420: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x44f420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_44f424:
    // 0x44f424: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x44f424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44f428:
    // 0x44f428: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x44f428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_44f42c:
    // 0x44f42c: 0xaca00060  sw          $zero, 0x60($a1)
    ctx->pc = 0x44f42cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
label_44f430:
    // 0x44f430: 0xaca00068  sw          $zero, 0x68($a1)
    ctx->pc = 0x44f430u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 0));
label_44f434:
    // 0x44f434: 0xa0a00070  sb          $zero, 0x70($a1)
    ctx->pc = 0x44f434u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 112), (uint8_t)GPR_U32(ctx, 0));
label_44f438:
    // 0x44f438: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x44f438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44f43c:
    // 0x44f43c: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_44f440:
    if (ctx->pc == 0x44F440u) {
        ctx->pc = 0x44F440u;
            // 0x44f440: 0xe4a0006c  swc1        $f0, 0x6C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 108), bits); }
        ctx->pc = 0x44F444u;
        goto label_44f444;
    }
    ctx->pc = 0x44F43Cu;
    {
        const bool branch_taken_0x44f43c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44F440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F43Cu;
            // 0x44f440: 0xe4a0006c  swc1        $f0, 0x6C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f43c) {
            ctx->pc = 0x44F414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44f414;
        }
    }
    ctx->pc = 0x44F444u;
label_44f444:
    // 0x44f444: 0x0  nop
    ctx->pc = 0x44f444u;
    // NOP
label_44f448:
    // 0x44f448: 0x3e00008  jr          $ra
label_44f44c:
    if (ctx->pc == 0x44F44Cu) {
        ctx->pc = 0x44F450u;
        goto label_fallthrough_0x44f448;
    }
    ctx->pc = 0x44F448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x44f448:
    ctx->pc = 0x44F450u;
}
