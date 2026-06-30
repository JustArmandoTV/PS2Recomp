#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B9220
// Address: 0x3b9220 - 0x3b9360
void sub_003B9220_0x3b9220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9220_0x3b9220");
#endif

    switch (ctx->pc) {
        case 0x3b926cu: goto label_3b926c;
        case 0x3b927cu: goto label_3b927c;
        case 0x3b929cu: goto label_3b929c;
        case 0x3b9308u: goto label_3b9308;
        default: break;
    }

    ctx->pc = 0x3b9220u;

    // 0x3b9220: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b9220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3b9224: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3b9224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3b9228: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3b9228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3b922c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3b922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3b9230: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3b9230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3b9234: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3b9234u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9238: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b9238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3b923c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3b923cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9240: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b9240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b9244: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3b9244u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b9248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b924c: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x3b924cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x3b9250: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b9250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b9254: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3b9254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3b9258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b9258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b925c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3b925cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b9260: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3b9260u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b9264: 0x12600032  beqz        $s3, . + 4 + (0x32 << 2)
    ctx->pc = 0x3B9264u;
    {
        const bool branch_taken_0x3b9264 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9264u;
            // 0x3b9268: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9264) {
            ctx->pc = 0x3B9330u;
            goto label_3b9330;
        }
    }
    ctx->pc = 0x3B926Cu;
label_3b926c:
    // 0x3b926c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b926cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9270: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b9270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9274: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3B9274u;
    SET_GPR_U32(ctx, 31, 0x3B927Cu);
    ctx->pc = 0x3B9278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9274u;
            // 0x3b9278: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B927Cu; }
        if (ctx->pc != 0x3B927Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B927Cu; }
        if (ctx->pc != 0x3B927Cu) { return; }
    }
    ctx->pc = 0x3B927Cu;
label_3b927c:
    // 0x3b927c: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x3b927cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b9280: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3B9280u;
    {
        const bool branch_taken_0x3b9280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9280) {
            ctx->pc = 0x3B92F8u;
            goto label_3b92f8;
        }
    }
    ctx->pc = 0x3B9288u;
    // 0x3b9288: 0xa7a2007e  sh          $v0, 0x7E($sp)
    ctx->pc = 0x3b9288u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b928c: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x3b928cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x3b9290: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3b9290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3b9294: 0xc0ee610  jal         func_3B9840
    ctx->pc = 0x3B9294u;
    SET_GPR_U32(ctx, 31, 0x3B929Cu);
    ctx->pc = 0x3B9298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9294u;
            // 0x3b9298: 0x27a6007e  addiu       $a2, $sp, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9840u;
    if (runtime->hasFunction(0x3B9840u)) {
        auto targetFn = runtime->lookupFunction(0x3B9840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B929Cu; }
        if (ctx->pc != 0x3B929Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9840_0x3b9840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B929Cu; }
        if (ctx->pc != 0x3B929Cu) { return; }
    }
    ctx->pc = 0x3B929Cu;
label_3b929c:
    // 0x3b929c: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x3b929cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x3b92a0: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x3b92a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x3b92a4: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B92A4u;
    {
        const bool branch_taken_0x3b92a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b92a4) {
            ctx->pc = 0x3B92A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B92A4u;
            // 0x3b92a8: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B92B0u;
            goto label_3b92b0;
        }
    }
    ctx->pc = 0x3B92ACu;
    // 0x3b92ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b92acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b92b0:
    // 0x3b92b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B92B0u;
    {
        const bool branch_taken_0x3b92b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b92b0) {
            ctx->pc = 0x3B92C8u;
            goto label_3b92c8;
        }
    }
    ctx->pc = 0x3B92B8u;
    // 0x3b92b8: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x3b92b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x3b92bc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3B92BCu;
    {
        const bool branch_taken_0x3b92bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B92C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B92BCu;
            // 0x3b92c0: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b92bc) {
            ctx->pc = 0x3B9318u;
            goto label_3b9318;
        }
    }
    ctx->pc = 0x3B92C4u;
    // 0x3b92c4: 0x0  nop
    ctx->pc = 0x3b92c4u;
    // NOP
label_3b92c8:
    // 0x3b92c8: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x3b92c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b92cc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3b92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3b92d0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B92D0u;
    {
        const bool branch_taken_0x3b92d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b92d0) {
            ctx->pc = 0x3B92F0u;
            goto label_3b92f0;
        }
    }
    ctx->pc = 0x3B92D8u;
    // 0x3b92d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b92d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b92dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b92dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b92e0: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x3b92e0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b92e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B92E4u;
    {
        const bool branch_taken_0x3b92e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B92E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B92E4u;
            // 0x3b92e8: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b92e4) {
            ctx->pc = 0x3B9318u;
            goto label_3b9318;
        }
    }
    ctx->pc = 0x3B92ECu;
    // 0x3b92ec: 0x0  nop
    ctx->pc = 0x3b92ecu;
    // NOP
label_3b92f0:
    // 0x3b92f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3B92F0u;
    {
        const bool branch_taken_0x3b92f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B92F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B92F0u;
            // 0x3b92f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b92f0) {
            ctx->pc = 0x3B9318u;
            goto label_3b9318;
        }
    }
    ctx->pc = 0x3B92F8u;
label_3b92f8:
    // 0x3b92f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b92f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b92fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b92fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9300: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3B9300u;
    SET_GPR_U32(ctx, 31, 0x3B9308u);
    ctx->pc = 0x3B9304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9300u;
            // 0x3b9304: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9308u; }
        if (ctx->pc != 0x3B9308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9308u; }
        if (ctx->pc != 0x3B9308u) { return; }
    }
    ctx->pc = 0x3B9308u;
label_3b9308:
    // 0x3b9308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b9308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b930c: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x3b930cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b9310: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B9310u;
    {
        const bool branch_taken_0x3b9310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9310u;
            // 0x3b9314: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9310) {
            ctx->pc = 0x3B9330u;
            goto label_3b9330;
        }
    }
    ctx->pc = 0x3B9318u;
label_3b9318:
    // 0x3b9318: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3b9318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3b931c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x3b931cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x3b9320: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x3b9320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3b9324: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x3B9324u;
    {
        const bool branch_taken_0x3b9324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9324u;
            // 0x3b9328: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9324) {
            ctx->pc = 0x3B926Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b926c;
        }
    }
    ctx->pc = 0x3B932Cu;
    // 0x3b932c: 0x0  nop
    ctx->pc = 0x3b932cu;
    // NOP
label_3b9330:
    // 0x3b9330: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3b9330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9334: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3b9334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b9338: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3b9338u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b933c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3b933cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b9340: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b9340u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b9344: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b9344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b9348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b9348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b934c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b934cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9350: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9350u;
            // 0x3b9354: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B9358u;
    // 0x3b9358: 0x0  nop
    ctx->pc = 0x3b9358u;
    // NOP
    // 0x3b935c: 0x0  nop
    ctx->pc = 0x3b935cu;
    // NOP
}
