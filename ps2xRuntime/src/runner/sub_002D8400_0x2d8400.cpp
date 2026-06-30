#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D8400
// Address: 0x2d8400 - 0x2d8560
void sub_002D8400_0x2d8400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8400_0x2d8400");
#endif

    switch (ctx->pc) {
        case 0x2d8400u: goto label_2d8400;
        case 0x2d8404u: goto label_2d8404;
        case 0x2d8408u: goto label_2d8408;
        case 0x2d840cu: goto label_2d840c;
        case 0x2d8410u: goto label_2d8410;
        case 0x2d8414u: goto label_2d8414;
        case 0x2d8418u: goto label_2d8418;
        case 0x2d841cu: goto label_2d841c;
        case 0x2d8420u: goto label_2d8420;
        case 0x2d8424u: goto label_2d8424;
        case 0x2d8428u: goto label_2d8428;
        case 0x2d842cu: goto label_2d842c;
        case 0x2d8430u: goto label_2d8430;
        case 0x2d8434u: goto label_2d8434;
        case 0x2d8438u: goto label_2d8438;
        case 0x2d843cu: goto label_2d843c;
        case 0x2d8440u: goto label_2d8440;
        case 0x2d8444u: goto label_2d8444;
        case 0x2d8448u: goto label_2d8448;
        case 0x2d844cu: goto label_2d844c;
        case 0x2d8450u: goto label_2d8450;
        case 0x2d8454u: goto label_2d8454;
        case 0x2d8458u: goto label_2d8458;
        case 0x2d845cu: goto label_2d845c;
        case 0x2d8460u: goto label_2d8460;
        case 0x2d8464u: goto label_2d8464;
        case 0x2d8468u: goto label_2d8468;
        case 0x2d846cu: goto label_2d846c;
        case 0x2d8470u: goto label_2d8470;
        case 0x2d8474u: goto label_2d8474;
        case 0x2d8478u: goto label_2d8478;
        case 0x2d847cu: goto label_2d847c;
        case 0x2d8480u: goto label_2d8480;
        case 0x2d8484u: goto label_2d8484;
        case 0x2d8488u: goto label_2d8488;
        case 0x2d848cu: goto label_2d848c;
        case 0x2d8490u: goto label_2d8490;
        case 0x2d8494u: goto label_2d8494;
        case 0x2d8498u: goto label_2d8498;
        case 0x2d849cu: goto label_2d849c;
        case 0x2d84a0u: goto label_2d84a0;
        case 0x2d84a4u: goto label_2d84a4;
        case 0x2d84a8u: goto label_2d84a8;
        case 0x2d84acu: goto label_2d84ac;
        case 0x2d84b0u: goto label_2d84b0;
        case 0x2d84b4u: goto label_2d84b4;
        case 0x2d84b8u: goto label_2d84b8;
        case 0x2d84bcu: goto label_2d84bc;
        case 0x2d84c0u: goto label_2d84c0;
        case 0x2d84c4u: goto label_2d84c4;
        case 0x2d84c8u: goto label_2d84c8;
        case 0x2d84ccu: goto label_2d84cc;
        case 0x2d84d0u: goto label_2d84d0;
        case 0x2d84d4u: goto label_2d84d4;
        case 0x2d84d8u: goto label_2d84d8;
        case 0x2d84dcu: goto label_2d84dc;
        case 0x2d84e0u: goto label_2d84e0;
        case 0x2d84e4u: goto label_2d84e4;
        case 0x2d84e8u: goto label_2d84e8;
        case 0x2d84ecu: goto label_2d84ec;
        case 0x2d84f0u: goto label_2d84f0;
        case 0x2d84f4u: goto label_2d84f4;
        case 0x2d84f8u: goto label_2d84f8;
        case 0x2d84fcu: goto label_2d84fc;
        case 0x2d8500u: goto label_2d8500;
        case 0x2d8504u: goto label_2d8504;
        case 0x2d8508u: goto label_2d8508;
        case 0x2d850cu: goto label_2d850c;
        case 0x2d8510u: goto label_2d8510;
        case 0x2d8514u: goto label_2d8514;
        case 0x2d8518u: goto label_2d8518;
        case 0x2d851cu: goto label_2d851c;
        case 0x2d8520u: goto label_2d8520;
        case 0x2d8524u: goto label_2d8524;
        case 0x2d8528u: goto label_2d8528;
        case 0x2d852cu: goto label_2d852c;
        case 0x2d8530u: goto label_2d8530;
        case 0x2d8534u: goto label_2d8534;
        case 0x2d8538u: goto label_2d8538;
        case 0x2d853cu: goto label_2d853c;
        case 0x2d8540u: goto label_2d8540;
        case 0x2d8544u: goto label_2d8544;
        case 0x2d8548u: goto label_2d8548;
        case 0x2d854cu: goto label_2d854c;
        case 0x2d8550u: goto label_2d8550;
        case 0x2d8554u: goto label_2d8554;
        case 0x2d8558u: goto label_2d8558;
        case 0x2d855cu: goto label_2d855c;
        default: break;
    }

    ctx->pc = 0x2d8400u;

label_2d8400:
    // 0x2d8400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d8400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d8404:
    // 0x2d8404: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d8404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d8408:
    // 0x2d8408: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d840c:
    // 0x2d840c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d840cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d8410:
    // 0x2d8410: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x2d8410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2d8414:
    // 0x2d8414: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2d8418:
    if (ctx->pc == 0x2D8418u) {
        ctx->pc = 0x2D8418u;
            // 0x2d8418: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x2D841Cu;
        goto label_2d841c;
    }
    ctx->pc = 0x2D8414u;
    {
        const bool branch_taken_0x2d8414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8414) {
            ctx->pc = 0x2D8418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8414u;
            // 0x2d8418: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D8428u;
            goto label_2d8428;
        }
    }
    ctx->pc = 0x2D841Cu;
label_2d841c:
    // 0x2d841c: 0xc04008c  jal         func_100230
label_2d8420:
    if (ctx->pc == 0x2D8420u) {
        ctx->pc = 0x2D8424u;
        goto label_2d8424;
    }
    ctx->pc = 0x2D841Cu;
    SET_GPR_U32(ctx, 31, 0x2D8424u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8424u; }
        if (ctx->pc != 0x2D8424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8424u; }
        if (ctx->pc != 0x2D8424u) { return; }
    }
    ctx->pc = 0x2D8424u;
label_2d8424:
    // 0x2d8424: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2d8424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2d8428:
    // 0x2d8428: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2d8428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2d842c:
    // 0x2d842c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2d8430:
    if (ctx->pc == 0x2D8430u) {
        ctx->pc = 0x2D8430u;
            // 0x2d8430: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x2D8434u;
        goto label_2d8434;
    }
    ctx->pc = 0x2D842Cu;
    {
        const bool branch_taken_0x2d842c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d842c) {
            ctx->pc = 0x2D8430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D842Cu;
            // 0x2d8430: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D8444u;
            goto label_2d8444;
        }
    }
    ctx->pc = 0x2D8434u;
label_2d8434:
    // 0x2d8434: 0x3c05002e  lui         $a1, 0x2E
    ctx->pc = 0x2d8434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46 << 16));
label_2d8438:
    // 0x2d8438: 0xc0407c0  jal         func_101F00
label_2d843c:
    if (ctx->pc == 0x2D843Cu) {
        ctx->pc = 0x2D843Cu;
            // 0x2d843c: 0x24a58460  addiu       $a1, $a1, -0x7BA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935648));
        ctx->pc = 0x2D8440u;
        goto label_2d8440;
    }
    ctx->pc = 0x2D8438u;
    SET_GPR_U32(ctx, 31, 0x2D8440u);
    ctx->pc = 0x2D843Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8438u;
            // 0x2d843c: 0x24a58460  addiu       $a1, $a1, -0x7BA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8440u; }
        if (ctx->pc != 0x2D8440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8440u; }
        if (ctx->pc != 0x2D8440u) { return; }
    }
    ctx->pc = 0x2D8440u;
label_2d8440:
    // 0x2d8440: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2d8440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_2d8444:
    // 0x2d8444: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2d8444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2d8448:
    // 0x2d8448: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2d8448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2d844c:
    // 0x2d844c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2d844cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_2d8450:
    // 0x2d8450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d8450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8454:
    // 0x2d8454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8458:
    // 0x2d8458: 0x3e00008  jr          $ra
label_2d845c:
    if (ctx->pc == 0x2D845Cu) {
        ctx->pc = 0x2D845Cu;
            // 0x2d845c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2D8460u;
        goto label_2d8460;
    }
    ctx->pc = 0x2D8458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D845Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8458u;
            // 0x2d845c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8460u;
label_2d8460:
    // 0x2d8460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d8460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d8464:
    // 0x2d8464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d8464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d8468:
    // 0x2d8468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d8468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d846c:
    // 0x2d846c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d846cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d8470:
    // 0x2d8470: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d8470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d8474:
    // 0x2d8474: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_2d8478:
    if (ctx->pc == 0x2D8478u) {
        ctx->pc = 0x2D8478u;
            // 0x2d8478: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D847Cu;
        goto label_2d847c;
    }
    ctx->pc = 0x2D8474u;
    {
        const bool branch_taken_0x2d8474 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8474u;
            // 0x2d8478: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8474) {
            ctx->pc = 0x2D84D8u;
            goto label_2d84d8;
        }
    }
    ctx->pc = 0x2D847Cu;
label_2d847c:
    // 0x2d847c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d847cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d8480:
    // 0x2d8480: 0x24422e10  addiu       $v0, $v0, 0x2E10
    ctx->pc = 0x2d8480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11792));
label_2d8484:
    // 0x2d8484: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d8484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d8488:
    // 0x2d8488: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d8488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d848c:
    // 0x2d848c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2d848cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2d8490:
    // 0x2d8490: 0x320f809  jalr        $t9
label_2d8494:
    if (ctx->pc == 0x2D8494u) {
        ctx->pc = 0x2D8498u;
        goto label_2d8498;
    }
    ctx->pc = 0x2D8490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D8498u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D8498u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D8498u; }
            if (ctx->pc != 0x2D8498u) { return; }
        }
        }
    }
    ctx->pc = 0x2D8498u;
label_2d8498:
    // 0x2d8498: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_2d849c:
    if (ctx->pc == 0x2D849Cu) {
        ctx->pc = 0x2D849Cu;
            // 0x2d849c: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x2D84A0u;
        goto label_2d84a0;
    }
    ctx->pc = 0x2D8498u;
    {
        const bool branch_taken_0x2d8498 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8498) {
            ctx->pc = 0x2D849Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8498u;
            // 0x2d849c: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D84C4u;
            goto label_2d84c4;
        }
    }
    ctx->pc = 0x2D84A0u;
label_2d84a0:
    // 0x2d84a0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d84a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d84a4:
    // 0x2d84a4: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2d84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2d84a8:
    // 0x2d84a8: 0x24632e00  addiu       $v1, $v1, 0x2E00
    ctx->pc = 0x2d84a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11776));
label_2d84ac:
    // 0x2d84ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2d84b0:
    if (ctx->pc == 0x2D84B0u) {
        ctx->pc = 0x2D84B0u;
            // 0x2d84b0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2D84B4u;
        goto label_2d84b4;
    }
    ctx->pc = 0x2D84ACu;
    {
        const bool branch_taken_0x2d84ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D84B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D84ACu;
            // 0x2d84b0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d84ac) {
            ctx->pc = 0x2D84C0u;
            goto label_2d84c0;
        }
    }
    ctx->pc = 0x2D84B4u;
label_2d84b4:
    // 0x2d84b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d84b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d84b8:
    // 0x2d84b8: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x2d84b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_2d84bc:
    // 0x2d84bc: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2d84bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2d84c0:
    // 0x2d84c0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2d84c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2d84c4:
    // 0x2d84c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d84c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d84c8:
    // 0x2d84c8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d84cc:
    if (ctx->pc == 0x2D84CCu) {
        ctx->pc = 0x2D84CCu;
            // 0x2d84cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D84D0u;
        goto label_2d84d0;
    }
    ctx->pc = 0x2D84C8u;
    {
        const bool branch_taken_0x2d84c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d84c8) {
            ctx->pc = 0x2D84CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D84C8u;
            // 0x2d84cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D84DCu;
            goto label_2d84dc;
        }
    }
    ctx->pc = 0x2D84D0u;
label_2d84d0:
    // 0x2d84d0: 0xc0400a8  jal         func_1002A0
label_2d84d4:
    if (ctx->pc == 0x2D84D4u) {
        ctx->pc = 0x2D84D4u;
            // 0x2d84d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D84D8u;
        goto label_2d84d8;
    }
    ctx->pc = 0x2D84D0u;
    SET_GPR_U32(ctx, 31, 0x2D84D8u);
    ctx->pc = 0x2D84D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D84D0u;
            // 0x2d84d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D84D8u; }
        if (ctx->pc != 0x2D84D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D84D8u; }
        if (ctx->pc != 0x2D84D8u) { return; }
    }
    ctx->pc = 0x2D84D8u;
label_2d84d8:
    // 0x2d84d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d84d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d84dc:
    // 0x2d84dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d84dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d84e0:
    // 0x2d84e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d84e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d84e4:
    // 0x2d84e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d84e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d84e8:
    // 0x2d84e8: 0x3e00008  jr          $ra
label_2d84ec:
    if (ctx->pc == 0x2D84ECu) {
        ctx->pc = 0x2D84ECu;
            // 0x2d84ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D84F0u;
        goto label_2d84f0;
    }
    ctx->pc = 0x2D84E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D84ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D84E8u;
            // 0x2d84ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D84F0u;
label_2d84f0:
    // 0x2d84f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d84f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d84f4:
    // 0x2d84f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d84f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d84f8:
    // 0x2d84f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d84f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d84fc:
    // 0x2d84fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d84fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d8500:
    // 0x2d8500: 0x8c9001d4  lw          $s0, 0x1D4($a0)
    ctx->pc = 0x2d8500u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
label_2d8504:
    // 0x2d8504: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2d8508:
    if (ctx->pc == 0x2D8508u) {
        ctx->pc = 0x2D8508u;
            // 0x2d8508: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D850Cu;
        goto label_2d850c;
    }
    ctx->pc = 0x2D8504u;
    {
        const bool branch_taken_0x2d8504 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8504u;
            // 0x2d8508: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8504) {
            ctx->pc = 0x2D8520u;
            goto label_2d8520;
        }
    }
    ctx->pc = 0x2D850Cu;
label_2d850c:
    // 0x2d850c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d850cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d8510:
    // 0x2d8510: 0xc0b6158  jal         func_2D8560
label_2d8514:
    if (ctx->pc == 0x2D8514u) {
        ctx->pc = 0x2D8514u;
            // 0x2d8514: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2D8518u;
        goto label_2d8518;
    }
    ctx->pc = 0x2D8510u;
    SET_GPR_U32(ctx, 31, 0x2D8518u);
    ctx->pc = 0x2D8514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8510u;
            // 0x2d8514: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8560u;
    if (runtime->hasFunction(0x2D8560u)) {
        auto targetFn = runtime->lookupFunction(0x2D8560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8518u; }
        if (ctx->pc != 0x2D8518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8560_0x2d8560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8518u; }
        if (ctx->pc != 0x2D8518u) { return; }
    }
    ctx->pc = 0x2D8518u;
label_2d8518:
    // 0x2d8518: 0xc0400a8  jal         func_1002A0
label_2d851c:
    if (ctx->pc == 0x2D851Cu) {
        ctx->pc = 0x2D851Cu;
            // 0x2d851c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8520u;
        goto label_2d8520;
    }
    ctx->pc = 0x2D8518u;
    SET_GPR_U32(ctx, 31, 0x2D8520u);
    ctx->pc = 0x2D851Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8518u;
            // 0x2d851c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8520u; }
        if (ctx->pc != 0x2D8520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8520u; }
        if (ctx->pc != 0x2D8520u) { return; }
    }
    ctx->pc = 0x2D8520u;
label_2d8520:
    // 0x2d8520: 0xae2001d4  sw          $zero, 0x1D4($s1)
    ctx->pc = 0x2d8520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 0));
label_2d8524:
    // 0x2d8524: 0x8e2401dc  lw          $a0, 0x1DC($s1)
    ctx->pc = 0x2d8524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
label_2d8528:
    // 0x2d8528: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2d852c:
    if (ctx->pc == 0x2D852Cu) {
        ctx->pc = 0x2D852Cu;
            // 0x2d852c: 0xae2001dc  sw          $zero, 0x1DC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 476), GPR_U32(ctx, 0));
        ctx->pc = 0x2D8530u;
        goto label_2d8530;
    }
    ctx->pc = 0x2D8528u;
    {
        const bool branch_taken_0x2d8528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8528) {
            ctx->pc = 0x2D852Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8528u;
            // 0x2d852c: 0xae2001dc  sw          $zero, 0x1DC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D8544u;
            goto label_2d8544;
        }
    }
    ctx->pc = 0x2D8530u;
label_2d8530:
    // 0x2d8530: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d8530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d8534:
    // 0x2d8534: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2d8534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2d8538:
    // 0x2d8538: 0x320f809  jalr        $t9
label_2d853c:
    if (ctx->pc == 0x2D853Cu) {
        ctx->pc = 0x2D853Cu;
            // 0x2d853c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2D8540u;
        goto label_2d8540;
    }
    ctx->pc = 0x2D8538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D8540u);
        ctx->pc = 0x2D853Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8538u;
            // 0x2d853c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D8540u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D8540u; }
            if (ctx->pc != 0x2D8540u) { return; }
        }
        }
    }
    ctx->pc = 0x2D8540u;
label_2d8540:
    // 0x2d8540: 0xae2001dc  sw          $zero, 0x1DC($s1)
    ctx->pc = 0x2d8540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 476), GPR_U32(ctx, 0));
label_2d8544:
    // 0x2d8544: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d8544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d8548:
    // 0x2d8548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d854c:
    // 0x2d854c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d854cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8550:
    // 0x2d8550: 0x3e00008  jr          $ra
label_2d8554:
    if (ctx->pc == 0x2D8554u) {
        ctx->pc = 0x2D8554u;
            // 0x2d8554: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D8558u;
        goto label_2d8558;
    }
    ctx->pc = 0x2D8550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8550u;
            // 0x2d8554: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8558u;
label_2d8558:
    // 0x2d8558: 0x0  nop
    ctx->pc = 0x2d8558u;
    // NOP
label_2d855c:
    // 0x2d855c: 0x0  nop
    ctx->pc = 0x2d855cu;
    // NOP
}
