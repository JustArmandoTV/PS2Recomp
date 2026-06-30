#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042B480
// Address: 0x42b480 - 0x42b5f0
void sub_0042B480_0x42b480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042B480_0x42b480");
#endif

    switch (ctx->pc) {
        case 0x42b480u: goto label_42b480;
        case 0x42b484u: goto label_42b484;
        case 0x42b488u: goto label_42b488;
        case 0x42b48cu: goto label_42b48c;
        case 0x42b490u: goto label_42b490;
        case 0x42b494u: goto label_42b494;
        case 0x42b498u: goto label_42b498;
        case 0x42b49cu: goto label_42b49c;
        case 0x42b4a0u: goto label_42b4a0;
        case 0x42b4a4u: goto label_42b4a4;
        case 0x42b4a8u: goto label_42b4a8;
        case 0x42b4acu: goto label_42b4ac;
        case 0x42b4b0u: goto label_42b4b0;
        case 0x42b4b4u: goto label_42b4b4;
        case 0x42b4b8u: goto label_42b4b8;
        case 0x42b4bcu: goto label_42b4bc;
        case 0x42b4c0u: goto label_42b4c0;
        case 0x42b4c4u: goto label_42b4c4;
        case 0x42b4c8u: goto label_42b4c8;
        case 0x42b4ccu: goto label_42b4cc;
        case 0x42b4d0u: goto label_42b4d0;
        case 0x42b4d4u: goto label_42b4d4;
        case 0x42b4d8u: goto label_42b4d8;
        case 0x42b4dcu: goto label_42b4dc;
        case 0x42b4e0u: goto label_42b4e0;
        case 0x42b4e4u: goto label_42b4e4;
        case 0x42b4e8u: goto label_42b4e8;
        case 0x42b4ecu: goto label_42b4ec;
        case 0x42b4f0u: goto label_42b4f0;
        case 0x42b4f4u: goto label_42b4f4;
        case 0x42b4f8u: goto label_42b4f8;
        case 0x42b4fcu: goto label_42b4fc;
        case 0x42b500u: goto label_42b500;
        case 0x42b504u: goto label_42b504;
        case 0x42b508u: goto label_42b508;
        case 0x42b50cu: goto label_42b50c;
        case 0x42b510u: goto label_42b510;
        case 0x42b514u: goto label_42b514;
        case 0x42b518u: goto label_42b518;
        case 0x42b51cu: goto label_42b51c;
        case 0x42b520u: goto label_42b520;
        case 0x42b524u: goto label_42b524;
        case 0x42b528u: goto label_42b528;
        case 0x42b52cu: goto label_42b52c;
        case 0x42b530u: goto label_42b530;
        case 0x42b534u: goto label_42b534;
        case 0x42b538u: goto label_42b538;
        case 0x42b53cu: goto label_42b53c;
        case 0x42b540u: goto label_42b540;
        case 0x42b544u: goto label_42b544;
        case 0x42b548u: goto label_42b548;
        case 0x42b54cu: goto label_42b54c;
        case 0x42b550u: goto label_42b550;
        case 0x42b554u: goto label_42b554;
        case 0x42b558u: goto label_42b558;
        case 0x42b55cu: goto label_42b55c;
        case 0x42b560u: goto label_42b560;
        case 0x42b564u: goto label_42b564;
        case 0x42b568u: goto label_42b568;
        case 0x42b56cu: goto label_42b56c;
        case 0x42b570u: goto label_42b570;
        case 0x42b574u: goto label_42b574;
        case 0x42b578u: goto label_42b578;
        case 0x42b57cu: goto label_42b57c;
        case 0x42b580u: goto label_42b580;
        case 0x42b584u: goto label_42b584;
        case 0x42b588u: goto label_42b588;
        case 0x42b58cu: goto label_42b58c;
        case 0x42b590u: goto label_42b590;
        case 0x42b594u: goto label_42b594;
        case 0x42b598u: goto label_42b598;
        case 0x42b59cu: goto label_42b59c;
        case 0x42b5a0u: goto label_42b5a0;
        case 0x42b5a4u: goto label_42b5a4;
        case 0x42b5a8u: goto label_42b5a8;
        case 0x42b5acu: goto label_42b5ac;
        case 0x42b5b0u: goto label_42b5b0;
        case 0x42b5b4u: goto label_42b5b4;
        case 0x42b5b8u: goto label_42b5b8;
        case 0x42b5bcu: goto label_42b5bc;
        case 0x42b5c0u: goto label_42b5c0;
        case 0x42b5c4u: goto label_42b5c4;
        case 0x42b5c8u: goto label_42b5c8;
        case 0x42b5ccu: goto label_42b5cc;
        case 0x42b5d0u: goto label_42b5d0;
        case 0x42b5d4u: goto label_42b5d4;
        case 0x42b5d8u: goto label_42b5d8;
        case 0x42b5dcu: goto label_42b5dc;
        case 0x42b5e0u: goto label_42b5e0;
        case 0x42b5e4u: goto label_42b5e4;
        case 0x42b5e8u: goto label_42b5e8;
        case 0x42b5ecu: goto label_42b5ec;
        default: break;
    }

    ctx->pc = 0x42b480u;

label_42b480:
    // 0x42b480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42b480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_42b484:
    // 0x42b484: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x42b484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_42b488:
    // 0x42b488: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x42b488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_42b48c:
    // 0x42b48c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_42b490:
    if (ctx->pc == 0x42B490u) {
        ctx->pc = 0x42B490u;
            // 0x42b490: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x42B494u;
        goto label_42b494;
    }
    ctx->pc = 0x42B48Cu;
    {
        const bool branch_taken_0x42b48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B48Cu;
            // 0x42b490: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b48c) {
            ctx->pc = 0x42B4A4u;
            goto label_42b4a4;
        }
    }
    ctx->pc = 0x42B494u;
label_42b494:
    // 0x42b494: 0xc055234  jal         func_1548D0
label_42b498:
    if (ctx->pc == 0x42B498u) {
        ctx->pc = 0x42B49Cu;
        goto label_42b49c;
    }
    ctx->pc = 0x42B494u;
    SET_GPR_U32(ctx, 31, 0x42B49Cu);
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B49Cu; }
        if (ctx->pc != 0x42B49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B49Cu; }
        if (ctx->pc != 0x42B49Cu) { return; }
    }
    ctx->pc = 0x42B49Cu;
label_42b49c:
    // 0x42b49c: 0x10000004  b           . + 4 + (0x4 << 2)
label_42b4a0:
    if (ctx->pc == 0x42B4A0u) {
        ctx->pc = 0x42B4A0u;
            // 0x42b4a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x42B4A4u;
        goto label_42b4a4;
    }
    ctx->pc = 0x42B49Cu;
    {
        const bool branch_taken_0x42b49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B49Cu;
            // 0x42b4a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b49c) {
            ctx->pc = 0x42B4B0u;
            goto label_42b4b0;
        }
    }
    ctx->pc = 0x42B4A4u;
label_42b4a4:
    // 0x42b4a4: 0xc0550f8  jal         func_1543E0
label_42b4a8:
    if (ctx->pc == 0x42B4A8u) {
        ctx->pc = 0x42B4ACu;
        goto label_42b4ac;
    }
    ctx->pc = 0x42B4A4u;
    SET_GPR_U32(ctx, 31, 0x42B4ACu);
    ctx->pc = 0x1543E0u;
    if (runtime->hasFunction(0x1543E0u)) {
        auto targetFn = runtime->lookupFunction(0x1543E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B4ACu; }
        if (ctx->pc != 0x42B4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001543E0_0x1543e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B4ACu; }
        if (ctx->pc != 0x42B4ACu) { return; }
    }
    ctx->pc = 0x42B4ACu;
label_42b4ac:
    // 0x42b4ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42b4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42b4b0:
    // 0x42b4b0: 0x3e00008  jr          $ra
label_42b4b4:
    if (ctx->pc == 0x42B4B4u) {
        ctx->pc = 0x42B4B4u;
            // 0x42b4b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x42B4B8u;
        goto label_42b4b8;
    }
    ctx->pc = 0x42B4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42B4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B4B0u;
            // 0x42b4b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42B4B8u;
label_42b4b8:
    // 0x42b4b8: 0x0  nop
    ctx->pc = 0x42b4b8u;
    // NOP
label_42b4bc:
    // 0x42b4bc: 0x0  nop
    ctx->pc = 0x42b4bcu;
    // NOP
label_42b4c0:
    // 0x42b4c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x42b4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_42b4c4:
    // 0x42b4c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x42b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42b4c8:
    // 0x42b4c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x42b4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_42b4cc:
    // 0x42b4cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42b4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_42b4d0:
    // 0x42b4d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42b4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42b4d4:
    // 0x42b4d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42b4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42b4d8:
    // 0x42b4d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42b4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42b4dc:
    // 0x42b4dc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x42b4dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_42b4e0:
    // 0x42b4e0: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
label_42b4e4:
    if (ctx->pc == 0x42B4E4u) {
        ctx->pc = 0x42B4E4u;
            // 0x42b4e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B4E8u;
        goto label_42b4e8;
    }
    ctx->pc = 0x42B4E0u;
    {
        const bool branch_taken_0x42b4e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x42B4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B4E0u;
            // 0x42b4e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b4e0) {
            ctx->pc = 0x42B518u;
            goto label_42b518;
        }
    }
    ctx->pc = 0x42B4E8u;
label_42b4e8:
    // 0x42b4e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x42b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_42b4ec:
    // 0x42b4ec: 0x50a30007  beql        $a1, $v1, . + 4 + (0x7 << 2)
label_42b4f0:
    if (ctx->pc == 0x42B4F0u) {
        ctx->pc = 0x42B4F0u;
            // 0x42b4f0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x42B4F4u;
        goto label_42b4f4;
    }
    ctx->pc = 0x42B4ECu;
    {
        const bool branch_taken_0x42b4ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x42b4ec) {
            ctx->pc = 0x42B4F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42B4ECu;
            // 0x42b4f0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42B50Cu;
            goto label_42b50c;
        }
    }
    ctx->pc = 0x42B4F4u;
label_42b4f4:
    // 0x42b4f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x42b4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42b4f8:
    // 0x42b4f8: 0x10a30015  beq         $a1, $v1, . + 4 + (0x15 << 2)
label_42b4fc:
    if (ctx->pc == 0x42B4FCu) {
        ctx->pc = 0x42B500u;
        goto label_42b500;
    }
    ctx->pc = 0x42B4F8u;
    {
        const bool branch_taken_0x42b4f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x42b4f8) {
            ctx->pc = 0x42B550u;
            goto label_42b550;
        }
    }
    ctx->pc = 0x42B500u;
label_42b500:
    // 0x42b500: 0x10000013  b           . + 4 + (0x13 << 2)
label_42b504:
    if (ctx->pc == 0x42B504u) {
        ctx->pc = 0x42B508u;
        goto label_42b508;
    }
    ctx->pc = 0x42B500u;
    {
        const bool branch_taken_0x42b500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b500) {
            ctx->pc = 0x42B550u;
            goto label_42b550;
        }
    }
    ctx->pc = 0x42B508u;
label_42b508:
    // 0x42b508: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42b508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42b50c:
    // 0x42b50c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x42b50cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_42b510:
    // 0x42b510: 0x320f809  jalr        $t9
label_42b514:
    if (ctx->pc == 0x42B514u) {
        ctx->pc = 0x42B518u;
        goto label_42b518;
    }
    ctx->pc = 0x42B510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42B518u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x42B518u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42B518u; }
            if (ctx->pc != 0x42B518u) { return; }
        }
        }
    }
    ctx->pc = 0x42B518u;
label_42b518:
    // 0x42b518: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x42b518u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_42b51c:
    // 0x42b51c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_42b520:
    if (ctx->pc == 0x42B520u) {
        ctx->pc = 0x42B524u;
        goto label_42b524;
    }
    ctx->pc = 0x42B51Cu;
    {
        const bool branch_taken_0x42b51c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b51c) {
            ctx->pc = 0x42B550u;
            goto label_42b550;
        }
    }
    ctx->pc = 0x42B524u;
label_42b524:
    // 0x42b524: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x42b524u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42b528:
    // 0x42b528: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x42b528u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42b52c:
    // 0x42b52c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x42b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_42b530:
    // 0x42b530: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x42b530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_42b534:
    // 0x42b534: 0xc0e3658  jal         func_38D960
label_42b538:
    if (ctx->pc == 0x42B538u) {
        ctx->pc = 0x42B538u;
            // 0x42b538: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x42B53Cu;
        goto label_42b53c;
    }
    ctx->pc = 0x42B534u;
    SET_GPR_U32(ctx, 31, 0x42B53Cu);
    ctx->pc = 0x42B538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B534u;
            // 0x42b538: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B53Cu; }
        if (ctx->pc != 0x42B53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B53Cu; }
        if (ctx->pc != 0x42B53Cu) { return; }
    }
    ctx->pc = 0x42B53Cu;
label_42b53c:
    // 0x42b53c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x42b53cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_42b540:
    // 0x42b540: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x42b540u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_42b544:
    // 0x42b544: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_42b548:
    if (ctx->pc == 0x42B548u) {
        ctx->pc = 0x42B548u;
            // 0x42b548: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x42B54Cu;
        goto label_42b54c;
    }
    ctx->pc = 0x42B544u;
    {
        const bool branch_taken_0x42b544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B544u;
            // 0x42b548: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b544) {
            ctx->pc = 0x42B52Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42b52c;
        }
    }
    ctx->pc = 0x42B54Cu;
label_42b54c:
    // 0x42b54c: 0x0  nop
    ctx->pc = 0x42b54cu;
    // NOP
label_42b550:
    // 0x42b550: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x42b550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_42b554:
    // 0x42b554: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42b554u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42b558:
    // 0x42b558: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42b558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42b55c:
    // 0x42b55c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42b55cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42b560:
    // 0x42b560: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42b560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42b564:
    // 0x42b564: 0x3e00008  jr          $ra
label_42b568:
    if (ctx->pc == 0x42B568u) {
        ctx->pc = 0x42B568u;
            // 0x42b568: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x42B56Cu;
        goto label_42b56c;
    }
    ctx->pc = 0x42B564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42B568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B564u;
            // 0x42b568: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42B56Cu;
label_42b56c:
    // 0x42b56c: 0x0  nop
    ctx->pc = 0x42b56cu;
    // NOP
label_42b570:
    // 0x42b570: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x42b570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_42b574:
    // 0x42b574: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x42b574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_42b578:
    // 0x42b578: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42b578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_42b57c:
    // 0x42b57c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42b57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42b580:
    // 0x42b580: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42b580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42b584:
    // 0x42b584: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42b584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42b588:
    // 0x42b588: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x42b588u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_42b58c:
    // 0x42b58c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_42b590:
    if (ctx->pc == 0x42B590u) {
        ctx->pc = 0x42B590u;
            // 0x42b590: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B594u;
        goto label_42b594;
    }
    ctx->pc = 0x42B58Cu;
    {
        const bool branch_taken_0x42b58c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B58Cu;
            // 0x42b590: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b58c) {
            ctx->pc = 0x42B5C8u;
            goto label_42b5c8;
        }
    }
    ctx->pc = 0x42B594u;
label_42b594:
    // 0x42b594: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x42b594u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42b598:
    // 0x42b598: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x42b598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42b59c:
    // 0x42b59c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x42b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_42b5a0:
    // 0x42b5a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x42b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_42b5a4:
    // 0x42b5a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x42b5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42b5a8:
    // 0x42b5a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42b5a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42b5ac:
    // 0x42b5ac: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x42b5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_42b5b0:
    // 0x42b5b0: 0x320f809  jalr        $t9
label_42b5b4:
    if (ctx->pc == 0x42B5B4u) {
        ctx->pc = 0x42B5B8u;
        goto label_42b5b8;
    }
    ctx->pc = 0x42B5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42B5B8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x42B5B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42B5B8u; }
            if (ctx->pc != 0x42B5B8u) { return; }
        }
        }
    }
    ctx->pc = 0x42B5B8u;
label_42b5b8:
    // 0x42b5b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x42b5b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_42b5bc:
    // 0x42b5bc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x42b5bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_42b5c0:
    // 0x42b5c0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_42b5c4:
    if (ctx->pc == 0x42B5C4u) {
        ctx->pc = 0x42B5C4u;
            // 0x42b5c4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x42B5C8u;
        goto label_42b5c8;
    }
    ctx->pc = 0x42B5C0u;
    {
        const bool branch_taken_0x42b5c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B5C0u;
            // 0x42b5c4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b5c0) {
            ctx->pc = 0x42B59Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42b59c;
        }
    }
    ctx->pc = 0x42B5C8u;
label_42b5c8:
    // 0x42b5c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x42b5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_42b5cc:
    // 0x42b5cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42b5ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42b5d0:
    // 0x42b5d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42b5d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42b5d4:
    // 0x42b5d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42b5d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42b5d8:
    // 0x42b5d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42b5d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42b5dc:
    // 0x42b5dc: 0x3e00008  jr          $ra
label_42b5e0:
    if (ctx->pc == 0x42B5E0u) {
        ctx->pc = 0x42B5E0u;
            // 0x42b5e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x42B5E4u;
        goto label_42b5e4;
    }
    ctx->pc = 0x42B5DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42B5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B5DCu;
            // 0x42b5e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42B5E4u;
label_42b5e4:
    // 0x42b5e4: 0x0  nop
    ctx->pc = 0x42b5e4u;
    // NOP
label_42b5e8:
    // 0x42b5e8: 0x0  nop
    ctx->pc = 0x42b5e8u;
    // NOP
label_42b5ec:
    // 0x42b5ec: 0x0  nop
    ctx->pc = 0x42b5ecu;
    // NOP
}
