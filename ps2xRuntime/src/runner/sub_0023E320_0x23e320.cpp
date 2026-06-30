#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023E320
// Address: 0x23e320 - 0x23e470
void sub_0023E320_0x23e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E320_0x23e320");
#endif

    switch (ctx->pc) {
        case 0x23e320u: goto label_23e320;
        case 0x23e324u: goto label_23e324;
        case 0x23e328u: goto label_23e328;
        case 0x23e32cu: goto label_23e32c;
        case 0x23e330u: goto label_23e330;
        case 0x23e334u: goto label_23e334;
        case 0x23e338u: goto label_23e338;
        case 0x23e33cu: goto label_23e33c;
        case 0x23e340u: goto label_23e340;
        case 0x23e344u: goto label_23e344;
        case 0x23e348u: goto label_23e348;
        case 0x23e34cu: goto label_23e34c;
        case 0x23e350u: goto label_23e350;
        case 0x23e354u: goto label_23e354;
        case 0x23e358u: goto label_23e358;
        case 0x23e35cu: goto label_23e35c;
        case 0x23e360u: goto label_23e360;
        case 0x23e364u: goto label_23e364;
        case 0x23e368u: goto label_23e368;
        case 0x23e36cu: goto label_23e36c;
        case 0x23e370u: goto label_23e370;
        case 0x23e374u: goto label_23e374;
        case 0x23e378u: goto label_23e378;
        case 0x23e37cu: goto label_23e37c;
        case 0x23e380u: goto label_23e380;
        case 0x23e384u: goto label_23e384;
        case 0x23e388u: goto label_23e388;
        case 0x23e38cu: goto label_23e38c;
        case 0x23e390u: goto label_23e390;
        case 0x23e394u: goto label_23e394;
        case 0x23e398u: goto label_23e398;
        case 0x23e39cu: goto label_23e39c;
        case 0x23e3a0u: goto label_23e3a0;
        case 0x23e3a4u: goto label_23e3a4;
        case 0x23e3a8u: goto label_23e3a8;
        case 0x23e3acu: goto label_23e3ac;
        case 0x23e3b0u: goto label_23e3b0;
        case 0x23e3b4u: goto label_23e3b4;
        case 0x23e3b8u: goto label_23e3b8;
        case 0x23e3bcu: goto label_23e3bc;
        case 0x23e3c0u: goto label_23e3c0;
        case 0x23e3c4u: goto label_23e3c4;
        case 0x23e3c8u: goto label_23e3c8;
        case 0x23e3ccu: goto label_23e3cc;
        case 0x23e3d0u: goto label_23e3d0;
        case 0x23e3d4u: goto label_23e3d4;
        case 0x23e3d8u: goto label_23e3d8;
        case 0x23e3dcu: goto label_23e3dc;
        case 0x23e3e0u: goto label_23e3e0;
        case 0x23e3e4u: goto label_23e3e4;
        case 0x23e3e8u: goto label_23e3e8;
        case 0x23e3ecu: goto label_23e3ec;
        case 0x23e3f0u: goto label_23e3f0;
        case 0x23e3f4u: goto label_23e3f4;
        case 0x23e3f8u: goto label_23e3f8;
        case 0x23e3fcu: goto label_23e3fc;
        case 0x23e400u: goto label_23e400;
        case 0x23e404u: goto label_23e404;
        case 0x23e408u: goto label_23e408;
        case 0x23e40cu: goto label_23e40c;
        case 0x23e410u: goto label_23e410;
        case 0x23e414u: goto label_23e414;
        case 0x23e418u: goto label_23e418;
        case 0x23e41cu: goto label_23e41c;
        case 0x23e420u: goto label_23e420;
        case 0x23e424u: goto label_23e424;
        case 0x23e428u: goto label_23e428;
        case 0x23e42cu: goto label_23e42c;
        case 0x23e430u: goto label_23e430;
        case 0x23e434u: goto label_23e434;
        case 0x23e438u: goto label_23e438;
        case 0x23e43cu: goto label_23e43c;
        case 0x23e440u: goto label_23e440;
        case 0x23e444u: goto label_23e444;
        case 0x23e448u: goto label_23e448;
        case 0x23e44cu: goto label_23e44c;
        case 0x23e450u: goto label_23e450;
        case 0x23e454u: goto label_23e454;
        case 0x23e458u: goto label_23e458;
        case 0x23e45cu: goto label_23e45c;
        case 0x23e460u: goto label_23e460;
        case 0x23e464u: goto label_23e464;
        case 0x23e468u: goto label_23e468;
        case 0x23e46cu: goto label_23e46c;
        default: break;
    }

    ctx->pc = 0x23e320u;

label_23e320:
    // 0x23e320: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23e320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_23e324:
    // 0x23e324: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23e324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23e328:
    // 0x23e328: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23e328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_23e32c:
    // 0x23e32c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x23e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_23e330:
    // 0x23e330: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23e330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23e334:
    // 0x23e334: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23e334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23e338:
    // 0x23e338: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23e338u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23e33c:
    // 0x23e33c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23e33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23e340:
    // 0x23e340: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23e340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23e344:
    // 0x23e344: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23e344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23e348:
    // 0x23e348: 0x8c900318  lw          $s0, 0x318($a0)
    ctx->pc = 0x23e348u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 792)));
label_23e34c:
    // 0x23e34c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x23e34cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_23e350:
    // 0x23e350: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x23e350u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_23e354:
    // 0x23e354: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x23e354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_23e358:
    // 0x23e358: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23e358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23e35c:
    // 0x23e35c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x23e35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_23e360:
    // 0x23e360: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x23e360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_23e364:
    // 0x23e364: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x23e364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_23e368:
    // 0x23e368: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x23e368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23e36c:
    // 0x23e36c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x23e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_23e370:
    // 0x23e370: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x23e370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_23e374:
    // 0x23e374: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x23e374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23e378:
    // 0x23e378: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x23e378u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_23e37c:
    // 0x23e37c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_23e380:
    if (ctx->pc == 0x23E380u) {
        ctx->pc = 0x23E380u;
            // 0x23e380: 0x27b10050  addiu       $s1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x23E384u;
        goto label_23e384;
    }
    ctx->pc = 0x23E37Cu;
    {
        const bool branch_taken_0x23e37c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E37Cu;
            // 0x23e380: 0x27b10050  addiu       $s1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e37c) {
            ctx->pc = 0x23E38Cu;
            goto label_23e38c;
        }
    }
    ctx->pc = 0x23E384u;
label_23e384:
    // 0x23e384: 0x10000005  b           . + 4 + (0x5 << 2)
label_23e388:
    if (ctx->pc == 0x23E388u) {
        ctx->pc = 0x23E388u;
            // 0x23e388: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x23E38Cu;
        goto label_23e38c;
    }
    ctx->pc = 0x23E384u;
    {
        const bool branch_taken_0x23e384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E384u;
            // 0x23e388: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e384) {
            ctx->pc = 0x23E39Cu;
            goto label_23e39c;
        }
    }
    ctx->pc = 0x23E38Cu;
label_23e38c:
    // 0x23e38c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23e38cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23e390:
    // 0x23e390: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x23e390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_23e394:
    // 0x23e394: 0x320f809  jalr        $t9
label_23e398:
    if (ctx->pc == 0x23E398u) {
        ctx->pc = 0x23E39Cu;
        goto label_23e39c;
    }
    ctx->pc = 0x23E394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23E39Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23E39Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23E39Cu; }
            if (ctx->pc != 0x23E39Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23E39Cu;
label_23e39c:
    // 0x23e39c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23e39cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_23e3a0:
    // 0x23e3a0: 0x26450024  addiu       $a1, $s2, 0x24
    ctx->pc = 0x23e3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_23e3a4:
    // 0x23e3a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x23e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_23e3a8:
    // 0x23e3a8: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x23e3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_23e3ac:
    // 0x23e3ac: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x23e3acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_23e3b0:
    // 0x23e3b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23e3b4:
    // 0x23e3b4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x23e3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_23e3b8:
    // 0x23e3b8: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x23e3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_23e3bc:
    // 0x23e3bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23e3bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23e3c0:
    // 0x23e3c0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x23e3c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_23e3c4:
    // 0x23e3c4: 0x320f809  jalr        $t9
label_23e3c8:
    if (ctx->pc == 0x23E3C8u) {
        ctx->pc = 0x23E3C8u;
            // 0x23e3c8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x23E3CCu;
        goto label_23e3cc;
    }
    ctx->pc = 0x23E3C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23E3CCu);
        ctx->pc = 0x23E3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E3C4u;
            // 0x23e3c8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23E3CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23E3CCu; }
            if (ctx->pc != 0x23E3CCu) { return; }
        }
        }
    }
    ctx->pc = 0x23E3CCu;
label_23e3cc:
    // 0x23e3cc: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x23e3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_23e3d0:
    // 0x23e3d0: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_23e3d4:
    if (ctx->pc == 0x23E3D4u) {
        ctx->pc = 0x23E3D8u;
        goto label_23e3d8;
    }
    ctx->pc = 0x23E3D0u;
    {
        const bool branch_taken_0x23e3d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e3d0) {
            ctx->pc = 0x23E3E4u;
            goto label_23e3e4;
        }
    }
    ctx->pc = 0x23E3D8u;
label_23e3d8:
    // 0x23e3d8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x23e3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_23e3dc:
    // 0x23e3dc: 0xc07fb6c  jal         func_1FEDB0
label_23e3e0:
    if (ctx->pc == 0x23E3E0u) {
        ctx->pc = 0x23E3E0u;
            // 0x23e3e0: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->pc = 0x23E3E4u;
        goto label_23e3e4;
    }
    ctx->pc = 0x23E3DCu;
    SET_GPR_U32(ctx, 31, 0x23E3E4u);
    ctx->pc = 0x23E3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E3DCu;
            // 0x23e3e0: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEDB0u;
    if (runtime->hasFunction(0x1FEDB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E3E4u; }
        if (ctx->pc != 0x23E3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEDB0_0x1fedb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E3E4u; }
        if (ctx->pc != 0x23E3E4u) { return; }
    }
    ctx->pc = 0x23E3E4u;
label_23e3e4:
    // 0x23e3e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23e3e8:
    // 0x23e3e8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x23e3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_23e3ec:
    // 0x23e3ec: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x23e3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23e3f0:
    // 0x23e3f0: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x23e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_23e3f4:
    // 0x23e3f4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x23e3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23e3f8:
    // 0x23e3f8: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_23e3fc:
    if (ctx->pc == 0x23E3FCu) {
        ctx->pc = 0x23E3FCu;
            // 0x23e3fc: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->pc = 0x23E400u;
        goto label_23e400;
    }
    ctx->pc = 0x23E3F8u;
    {
        const bool branch_taken_0x23e3f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x23e3f8) {
            ctx->pc = 0x23E3FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23E3F8u;
            // 0x23e3fc: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23E414u;
            goto label_23e414;
        }
    }
    ctx->pc = 0x23E400u;
label_23e400:
    // 0x23e400: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23e400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23e404:
    // 0x23e404: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23e404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23e408:
    // 0x23e408: 0x320f809  jalr        $t9
label_23e40c:
    if (ctx->pc == 0x23E40Cu) {
        ctx->pc = 0x23E410u;
        goto label_23e410;
    }
    ctx->pc = 0x23E408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23E410u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23E410u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23E410u; }
            if (ctx->pc != 0x23E410u) { return; }
        }
        }
    }
    ctx->pc = 0x23E410u;
label_23e410:
    // 0x23e410: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x23e410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_23e414:
    // 0x23e414: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23e414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23e418:
    // 0x23e418: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23e418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23e41c:
    // 0x23e41c: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_23e420:
    if (ctx->pc == 0x23E420u) {
        ctx->pc = 0x23E420u;
            // 0x23e420: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x23E424u;
        goto label_23e424;
    }
    ctx->pc = 0x23E41Cu;
    {
        const bool branch_taken_0x23e41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e41c) {
            ctx->pc = 0x23E420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23E41Cu;
            // 0x23e420: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23E44Cu;
            goto label_23e44c;
        }
    }
    ctx->pc = 0x23E424u;
label_23e424:
    // 0x23e424: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23e424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23e428:
    // 0x23e428: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x23e428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_23e42c:
    // 0x23e42c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23e42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23e430:
    // 0x23e430: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x23e430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_23e434:
    // 0x23e434: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x23e434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_23e438:
    // 0x23e438: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x23e438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_23e43c:
    // 0x23e43c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x23e43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_23e440:
    // 0x23e440: 0xc0a7ab4  jal         func_29EAD0
label_23e444:
    if (ctx->pc == 0x23E444u) {
        ctx->pc = 0x23E444u;
            // 0x23e444: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x23E448u;
        goto label_23e448;
    }
    ctx->pc = 0x23E440u;
    SET_GPR_U32(ctx, 31, 0x23E448u);
    ctx->pc = 0x23E444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E440u;
            // 0x23e444: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E448u; }
        if (ctx->pc != 0x23E448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E448u; }
        if (ctx->pc != 0x23E448u) { return; }
    }
    ctx->pc = 0x23E448u;
label_23e448:
    // 0x23e448: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23e448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23e44c:
    // 0x23e44c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23e44cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23e450:
    // 0x23e450: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23e450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23e454:
    // 0x23e454: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23e454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23e458:
    // 0x23e458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23e458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23e45c:
    // 0x23e45c: 0x3e00008  jr          $ra
label_23e460:
    if (ctx->pc == 0x23E460u) {
        ctx->pc = 0x23E460u;
            // 0x23e460: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x23E464u;
        goto label_23e464;
    }
    ctx->pc = 0x23E45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E45Cu;
            // 0x23e460: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E464u;
label_23e464:
    // 0x23e464: 0x0  nop
    ctx->pc = 0x23e464u;
    // NOP
label_23e468:
    // 0x23e468: 0x0  nop
    ctx->pc = 0x23e468u;
    // NOP
label_23e46c:
    // 0x23e46c: 0x0  nop
    ctx->pc = 0x23e46cu;
    // NOP
}
