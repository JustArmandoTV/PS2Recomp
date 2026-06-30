#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C93B0
// Address: 0x3c93b0 - 0x3c9550
void sub_003C93B0_0x3c93b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C93B0_0x3c93b0");
#endif

    switch (ctx->pc) {
        case 0x3c93b0u: goto label_3c93b0;
        case 0x3c93b4u: goto label_3c93b4;
        case 0x3c93b8u: goto label_3c93b8;
        case 0x3c93bcu: goto label_3c93bc;
        case 0x3c93c0u: goto label_3c93c0;
        case 0x3c93c4u: goto label_3c93c4;
        case 0x3c93c8u: goto label_3c93c8;
        case 0x3c93ccu: goto label_3c93cc;
        case 0x3c93d0u: goto label_3c93d0;
        case 0x3c93d4u: goto label_3c93d4;
        case 0x3c93d8u: goto label_3c93d8;
        case 0x3c93dcu: goto label_3c93dc;
        case 0x3c93e0u: goto label_3c93e0;
        case 0x3c93e4u: goto label_3c93e4;
        case 0x3c93e8u: goto label_3c93e8;
        case 0x3c93ecu: goto label_3c93ec;
        case 0x3c93f0u: goto label_3c93f0;
        case 0x3c93f4u: goto label_3c93f4;
        case 0x3c93f8u: goto label_3c93f8;
        case 0x3c93fcu: goto label_3c93fc;
        case 0x3c9400u: goto label_3c9400;
        case 0x3c9404u: goto label_3c9404;
        case 0x3c9408u: goto label_3c9408;
        case 0x3c940cu: goto label_3c940c;
        case 0x3c9410u: goto label_3c9410;
        case 0x3c9414u: goto label_3c9414;
        case 0x3c9418u: goto label_3c9418;
        case 0x3c941cu: goto label_3c941c;
        case 0x3c9420u: goto label_3c9420;
        case 0x3c9424u: goto label_3c9424;
        case 0x3c9428u: goto label_3c9428;
        case 0x3c942cu: goto label_3c942c;
        case 0x3c9430u: goto label_3c9430;
        case 0x3c9434u: goto label_3c9434;
        case 0x3c9438u: goto label_3c9438;
        case 0x3c943cu: goto label_3c943c;
        case 0x3c9440u: goto label_3c9440;
        case 0x3c9444u: goto label_3c9444;
        case 0x3c9448u: goto label_3c9448;
        case 0x3c944cu: goto label_3c944c;
        case 0x3c9450u: goto label_3c9450;
        case 0x3c9454u: goto label_3c9454;
        case 0x3c9458u: goto label_3c9458;
        case 0x3c945cu: goto label_3c945c;
        case 0x3c9460u: goto label_3c9460;
        case 0x3c9464u: goto label_3c9464;
        case 0x3c9468u: goto label_3c9468;
        case 0x3c946cu: goto label_3c946c;
        case 0x3c9470u: goto label_3c9470;
        case 0x3c9474u: goto label_3c9474;
        case 0x3c9478u: goto label_3c9478;
        case 0x3c947cu: goto label_3c947c;
        case 0x3c9480u: goto label_3c9480;
        case 0x3c9484u: goto label_3c9484;
        case 0x3c9488u: goto label_3c9488;
        case 0x3c948cu: goto label_3c948c;
        case 0x3c9490u: goto label_3c9490;
        case 0x3c9494u: goto label_3c9494;
        case 0x3c9498u: goto label_3c9498;
        case 0x3c949cu: goto label_3c949c;
        case 0x3c94a0u: goto label_3c94a0;
        case 0x3c94a4u: goto label_3c94a4;
        case 0x3c94a8u: goto label_3c94a8;
        case 0x3c94acu: goto label_3c94ac;
        case 0x3c94b0u: goto label_3c94b0;
        case 0x3c94b4u: goto label_3c94b4;
        case 0x3c94b8u: goto label_3c94b8;
        case 0x3c94bcu: goto label_3c94bc;
        case 0x3c94c0u: goto label_3c94c0;
        case 0x3c94c4u: goto label_3c94c4;
        case 0x3c94c8u: goto label_3c94c8;
        case 0x3c94ccu: goto label_3c94cc;
        case 0x3c94d0u: goto label_3c94d0;
        case 0x3c94d4u: goto label_3c94d4;
        case 0x3c94d8u: goto label_3c94d8;
        case 0x3c94dcu: goto label_3c94dc;
        case 0x3c94e0u: goto label_3c94e0;
        case 0x3c94e4u: goto label_3c94e4;
        case 0x3c94e8u: goto label_3c94e8;
        case 0x3c94ecu: goto label_3c94ec;
        case 0x3c94f0u: goto label_3c94f0;
        case 0x3c94f4u: goto label_3c94f4;
        case 0x3c94f8u: goto label_3c94f8;
        case 0x3c94fcu: goto label_3c94fc;
        case 0x3c9500u: goto label_3c9500;
        case 0x3c9504u: goto label_3c9504;
        case 0x3c9508u: goto label_3c9508;
        case 0x3c950cu: goto label_3c950c;
        case 0x3c9510u: goto label_3c9510;
        case 0x3c9514u: goto label_3c9514;
        case 0x3c9518u: goto label_3c9518;
        case 0x3c951cu: goto label_3c951c;
        case 0x3c9520u: goto label_3c9520;
        case 0x3c9524u: goto label_3c9524;
        case 0x3c9528u: goto label_3c9528;
        case 0x3c952cu: goto label_3c952c;
        case 0x3c9530u: goto label_3c9530;
        case 0x3c9534u: goto label_3c9534;
        case 0x3c9538u: goto label_3c9538;
        case 0x3c953cu: goto label_3c953c;
        case 0x3c9540u: goto label_3c9540;
        case 0x3c9544u: goto label_3c9544;
        case 0x3c9548u: goto label_3c9548;
        case 0x3c954cu: goto label_3c954c;
        default: break;
    }

    ctx->pc = 0x3c93b0u;

label_3c93b0:
    // 0x3c93b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c93b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c93b4:
    // 0x3c93b4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3c93b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c93b8:
    // 0x3c93b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c93b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c93bc:
    // 0x3c93bc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3c93bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_3c93c0:
    // 0x3c93c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c93c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c93c4:
    // 0x3c93c4: 0x3445aa48  ori         $a1, $v0, 0xAA48
    ctx->pc = 0x3c93c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43592);
label_3c93c8:
    // 0x3c93c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c93c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c93cc:
    // 0x3c93cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c93ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c93d0:
    // 0x3c93d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c93d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c93d4:
    // 0x3c93d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3c93d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c93d8:
    // 0x3c93d8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3c93d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3c93dc:
    // 0x3c93dc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3c93dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c93e0:
    // 0x3c93e0: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3c93e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3c93e4:
    // 0x3c93e4: 0x24084000  addiu       $t0, $zero, 0x4000
    ctx->pc = 0x3c93e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_3c93e8:
    // 0x3c93e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c93e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c93ec:
    // 0x3c93ec: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x3c93ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c93f0:
    // 0x3c93f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c93f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c93f4:
    // 0x3c93f4: 0xc0b9404  jal         func_2E5010
label_3c93f8:
    if (ctx->pc == 0x3C93F8u) {
        ctx->pc = 0x3C93F8u;
            // 0x3c93f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C93FCu;
        goto label_3c93fc;
    }
    ctx->pc = 0x3C93F4u;
    SET_GPR_U32(ctx, 31, 0x3C93FCu);
    ctx->pc = 0x3C93F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C93F4u;
            // 0x3c93f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C93FCu; }
        if (ctx->pc != 0x3C93FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C93FCu; }
        if (ctx->pc != 0x3C93FCu) { return; }
    }
    ctx->pc = 0x3C93FCu;
label_3c93fc:
    // 0x3c93fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3c93fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3c9400:
    // 0x3c9400: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3c9400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9404:
    // 0x3c9404: 0x24638e70  addiu       $v1, $v1, -0x7190
    ctx->pc = 0x3c9404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938224));
label_3c9408:
    // 0x3c9408: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3c9408u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3c940c:
    // 0x3c940c: 0xae5100d0  sw          $s1, 0xD0($s2)
    ctx->pc = 0x3c940cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 17));
label_3c9410:
    // 0x3c9410: 0xae5000d4  sw          $s0, 0xD4($s2)
    ctx->pc = 0x3c9410u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 16));
label_3c9414:
    // 0x3c9414: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c9414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c9418:
    // 0x3c9418: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c9418u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c941c:
    // 0x3c941c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c941cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c9420:
    // 0x3c9420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c9420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c9424:
    // 0x3c9424: 0x3e00008  jr          $ra
label_3c9428:
    if (ctx->pc == 0x3C9428u) {
        ctx->pc = 0x3C9428u;
            // 0x3c9428: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3C942Cu;
        goto label_3c942c;
    }
    ctx->pc = 0x3C9424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9424u;
            // 0x3c9428: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C942Cu;
label_3c942c:
    // 0x3c942c: 0x0  nop
    ctx->pc = 0x3c942cu;
    // NOP
label_3c9430:
    // 0x3c9430: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c9430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3c9434:
    // 0x3c9434: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3c9434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3c9438:
    // 0x3c9438: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3c9438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3c943c:
    // 0x3c943c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c943cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3c9440:
    // 0x3c9440: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3c9440u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c9444:
    // 0x3c9444: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c9444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c9448:
    // 0x3c9448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c9448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c944c:
    // 0x3c944c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c944cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c9450:
    // 0x3c9450: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x3c9450u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3c9454:
    // 0x3c9454: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_3c9458:
    if (ctx->pc == 0x3C9458u) {
        ctx->pc = 0x3C9458u;
            // 0x3c9458: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C945Cu;
        goto label_3c945c;
    }
    ctx->pc = 0x3C9454u;
    {
        const bool branch_taken_0x3c9454 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9454u;
            // 0x3c9458: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9454) {
            ctx->pc = 0x3C9498u;
            goto label_3c9498;
        }
    }
    ctx->pc = 0x3C945Cu;
label_3c945c:
    // 0x3c945c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c945cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c9460:
    // 0x3c9460: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3c9460u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c9464:
    // 0x3c9464: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3c9464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c9468:
    // 0x3c9468: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x3c9468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_3c946c:
    // 0x3c946c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3c946cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3c9470:
    // 0x3c9470: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3c9470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c9474:
    // 0x3c9474: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c9474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c9478:
    // 0x3c9478: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3c9478u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3c947c:
    // 0x3c947c: 0x320f809  jalr        $t9
label_3c9480:
    if (ctx->pc == 0x3C9480u) {
        ctx->pc = 0x3C9484u;
        goto label_3c9484;
    }
    ctx->pc = 0x3C947Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C9484u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C9484u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C9484u; }
            if (ctx->pc != 0x3C9484u) { return; }
        }
        }
    }
    ctx->pc = 0x3C9484u;
label_3c9484:
    // 0x3c9484: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3c9484u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3c9488:
    // 0x3c9488: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3c9488u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3c948c:
    // 0x3c948c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3c948cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3c9490:
    // 0x3c9490: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3c9494:
    if (ctx->pc == 0x3C9494u) {
        ctx->pc = 0x3C9494u;
            // 0x3c9494: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3C9498u;
        goto label_3c9498;
    }
    ctx->pc = 0x3C9490u;
    {
        const bool branch_taken_0x3c9490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C9494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9490u;
            // 0x3c9494: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9490) {
            ctx->pc = 0x3C9468u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c9468;
        }
    }
    ctx->pc = 0x3C9498u;
label_3c9498:
    // 0x3c9498: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3c9498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c949c:
    // 0x3c949c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3c949cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3c94a0:
    // 0x3c94a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3c94a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c94a4:
    // 0x3c94a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c94a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c94a8:
    // 0x3c94a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c94a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c94ac:
    // 0x3c94ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c94acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c94b0:
    // 0x3c94b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c94b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c94b4:
    // 0x3c94b4: 0x3e00008  jr          $ra
label_3c94b8:
    if (ctx->pc == 0x3C94B8u) {
        ctx->pc = 0x3C94B8u;
            // 0x3c94b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3C94BCu;
        goto label_3c94bc;
    }
    ctx->pc = 0x3C94B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C94B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C94B4u;
            // 0x3c94b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C94BCu;
label_3c94bc:
    // 0x3c94bc: 0x0  nop
    ctx->pc = 0x3c94bcu;
    // NOP
label_3c94c0:
    // 0x3c94c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c94c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c94c4:
    // 0x3c94c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c94c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3c94c8:
    // 0x3c94c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c94c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c94cc:
    // 0x3c94cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c94ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c94d0:
    // 0x3c94d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c94d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c94d4:
    // 0x3c94d4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_3c94d8:
    if (ctx->pc == 0x3C94D8u) {
        ctx->pc = 0x3C94D8u;
            // 0x3c94d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C94DCu;
        goto label_3c94dc;
    }
    ctx->pc = 0x3C94D4u;
    {
        const bool branch_taken_0x3c94d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C94D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C94D4u;
            // 0x3c94d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c94d4) {
            ctx->pc = 0x3C9530u;
            goto label_3c9530;
        }
    }
    ctx->pc = 0x3C94DCu;
label_3c94dc:
    // 0x3c94dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3c94dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3c94e0:
    // 0x3c94e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3c94e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3c94e4:
    // 0x3c94e4: 0x24638ea0  addiu       $v1, $v1, -0x7160
    ctx->pc = 0x3c94e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938272));
label_3c94e8:
    // 0x3c94e8: 0x24428ed8  addiu       $v0, $v0, -0x7128
    ctx->pc = 0x3c94e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938328));
label_3c94ec:
    // 0x3c94ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3c94ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3c94f0:
    // 0x3c94f0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_3c94f4:
    if (ctx->pc == 0x3C94F4u) {
        ctx->pc = 0x3C94F4u;
            // 0x3c94f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3C94F8u;
        goto label_3c94f8;
    }
    ctx->pc = 0x3C94F0u;
    {
        const bool branch_taken_0x3c94f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C94F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C94F0u;
            // 0x3c94f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c94f0) {
            ctx->pc = 0x3C9518u;
            goto label_3c9518;
        }
    }
    ctx->pc = 0x3C94F8u;
label_3c94f8:
    // 0x3c94f8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3c94f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3c94fc:
    // 0x3c94fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3c94fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3c9500:
    // 0x3c9500: 0x24638f50  addiu       $v1, $v1, -0x70B0
    ctx->pc = 0x3c9500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938448));
label_3c9504:
    // 0x3c9504: 0x24428f88  addiu       $v0, $v0, -0x7078
    ctx->pc = 0x3c9504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938504));
label_3c9508:
    // 0x3c9508: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3c9508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3c950c:
    // 0x3c950c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c950cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c9510:
    // 0x3c9510: 0xc0f2554  jal         func_3C9550
label_3c9514:
    if (ctx->pc == 0x3C9514u) {
        ctx->pc = 0x3C9514u;
            // 0x3c9514: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3C9518u;
        goto label_3c9518;
    }
    ctx->pc = 0x3C9510u;
    SET_GPR_U32(ctx, 31, 0x3C9518u);
    ctx->pc = 0x3C9514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9510u;
            // 0x3c9514: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C9550u;
    if (runtime->hasFunction(0x3C9550u)) {
        auto targetFn = runtime->lookupFunction(0x3C9550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9518u; }
        if (ctx->pc != 0x3C9518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C9550_0x3c9550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9518u; }
        if (ctx->pc != 0x3C9518u) { return; }
    }
    ctx->pc = 0x3C9518u;
label_3c9518:
    // 0x3c9518: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3c9518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3c951c:
    // 0x3c951c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3c951cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3c9520:
    // 0x3c9520: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3c9524:
    if (ctx->pc == 0x3C9524u) {
        ctx->pc = 0x3C9524u;
            // 0x3c9524: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9528u;
        goto label_3c9528;
    }
    ctx->pc = 0x3C9520u;
    {
        const bool branch_taken_0x3c9520 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3c9520) {
            ctx->pc = 0x3C9524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9520u;
            // 0x3c9524: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C9534u;
            goto label_3c9534;
        }
    }
    ctx->pc = 0x3C9528u;
label_3c9528:
    // 0x3c9528: 0xc0400a8  jal         func_1002A0
label_3c952c:
    if (ctx->pc == 0x3C952Cu) {
        ctx->pc = 0x3C952Cu;
            // 0x3c952c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9530u;
        goto label_3c9530;
    }
    ctx->pc = 0x3C9528u;
    SET_GPR_U32(ctx, 31, 0x3C9530u);
    ctx->pc = 0x3C952Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9528u;
            // 0x3c952c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9530u; }
        if (ctx->pc != 0x3C9530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9530u; }
        if (ctx->pc != 0x3C9530u) { return; }
    }
    ctx->pc = 0x3C9530u;
label_3c9530:
    // 0x3c9530: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c9530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9534:
    // 0x3c9534: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c9534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c9538:
    // 0x3c9538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c9538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c953c:
    // 0x3c953c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c953cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c9540:
    // 0x3c9540: 0x3e00008  jr          $ra
label_3c9544:
    if (ctx->pc == 0x3C9544u) {
        ctx->pc = 0x3C9544u;
            // 0x3c9544: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3C9548u;
        goto label_3c9548;
    }
    ctx->pc = 0x3C9540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9540u;
            // 0x3c9544: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C9548u;
label_3c9548:
    // 0x3c9548: 0x0  nop
    ctx->pc = 0x3c9548u;
    // NOP
label_3c954c:
    // 0x3c954c: 0x0  nop
    ctx->pc = 0x3c954cu;
    // NOP
}
