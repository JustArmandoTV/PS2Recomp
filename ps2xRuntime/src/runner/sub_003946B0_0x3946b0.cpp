#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003946B0
// Address: 0x3946b0 - 0x394750
void sub_003946B0_0x3946b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003946B0_0x3946b0");
#endif

    switch (ctx->pc) {
        case 0x3946b0u: goto label_3946b0;
        case 0x3946b4u: goto label_3946b4;
        case 0x3946b8u: goto label_3946b8;
        case 0x3946bcu: goto label_3946bc;
        case 0x3946c0u: goto label_3946c0;
        case 0x3946c4u: goto label_3946c4;
        case 0x3946c8u: goto label_3946c8;
        case 0x3946ccu: goto label_3946cc;
        case 0x3946d0u: goto label_3946d0;
        case 0x3946d4u: goto label_3946d4;
        case 0x3946d8u: goto label_3946d8;
        case 0x3946dcu: goto label_3946dc;
        case 0x3946e0u: goto label_3946e0;
        case 0x3946e4u: goto label_3946e4;
        case 0x3946e8u: goto label_3946e8;
        case 0x3946ecu: goto label_3946ec;
        case 0x3946f0u: goto label_3946f0;
        case 0x3946f4u: goto label_3946f4;
        case 0x3946f8u: goto label_3946f8;
        case 0x3946fcu: goto label_3946fc;
        case 0x394700u: goto label_394700;
        case 0x394704u: goto label_394704;
        case 0x394708u: goto label_394708;
        case 0x39470cu: goto label_39470c;
        case 0x394710u: goto label_394710;
        case 0x394714u: goto label_394714;
        case 0x394718u: goto label_394718;
        case 0x39471cu: goto label_39471c;
        case 0x394720u: goto label_394720;
        case 0x394724u: goto label_394724;
        case 0x394728u: goto label_394728;
        case 0x39472cu: goto label_39472c;
        case 0x394730u: goto label_394730;
        case 0x394734u: goto label_394734;
        case 0x394738u: goto label_394738;
        case 0x39473cu: goto label_39473c;
        case 0x394740u: goto label_394740;
        case 0x394744u: goto label_394744;
        case 0x394748u: goto label_394748;
        case 0x39474cu: goto label_39474c;
        default: break;
    }

    ctx->pc = 0x3946b0u;

label_3946b0:
    // 0x3946b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3946b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3946b4:
    // 0x3946b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3946b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3946b8:
    // 0x3946b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3946b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3946bc:
    // 0x3946bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3946bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3946c0:
    // 0x3946c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3946c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3946c4:
    // 0x3946c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3946c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3946c8:
    // 0x3946c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3946c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3946cc:
    // 0x3946cc: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x3946ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_3946d0:
    // 0x3946d0: 0x26106130  addiu       $s0, $s0, 0x6130
    ctx->pc = 0x3946d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24880));
label_3946d4:
    // 0x3946d4: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x3946d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3946d8:
    // 0x3946d8: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
label_3946dc:
    if (ctx->pc == 0x3946DCu) {
        ctx->pc = 0x3946E0u;
        goto label_3946e0;
    }
    ctx->pc = 0x3946D8u;
    {
        const bool branch_taken_0x3946d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3946d8) {
            ctx->pc = 0x394720u;
            goto label_394720;
        }
    }
    ctx->pc = 0x3946E0u;
label_3946e0:
    // 0x3946e0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3946e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3946e4:
    // 0x3946e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3946e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3946e8:
    // 0x3946e8: 0x8e720058  lw          $s2, 0x58($s3)
    ctx->pc = 0x3946e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3946ec:
    // 0x3946ec: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3946ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3946f0:
    // 0x3946f0: 0x320f809  jalr        $t9
label_3946f4:
    if (ctx->pc == 0x3946F4u) {
        ctx->pc = 0x3946F4u;
            // 0x3946f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3946F8u;
        goto label_3946f8;
    }
    ctx->pc = 0x3946F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3946F8u);
        ctx->pc = 0x3946F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3946F0u;
            // 0x3946f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3946F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3946F8u; }
            if (ctx->pc != 0x3946F8u) { return; }
        }
        }
    }
    ctx->pc = 0x3946F8u;
label_3946f8:
    // 0x3946f8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3946f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3946fc:
    // 0x3946fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3946fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_394700:
    // 0x394700: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x394700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_394704:
    // 0x394704: 0xc057b7c  jal         func_15EDF0
label_394708:
    if (ctx->pc == 0x394708u) {
        ctx->pc = 0x394708u;
            // 0x394708: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x39470Cu;
        goto label_39470c;
    }
    ctx->pc = 0x394704u;
    SET_GPR_U32(ctx, 31, 0x39470Cu);
    ctx->pc = 0x394708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x394704u;
            // 0x394708: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39470Cu; }
        if (ctx->pc != 0x39470Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39470Cu; }
        if (ctx->pc != 0x39470Cu) { return; }
    }
    ctx->pc = 0x39470Cu;
label_39470c:
    // 0x39470c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x39470cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_394710:
    // 0x394710: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x394710u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_394714:
    // 0x394714: 0x24636130  addiu       $v1, $v1, 0x6130
    ctx->pc = 0x394714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24880));
label_394718:
    // 0x394718: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x394718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_39471c:
    // 0x39471c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x39471cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_394720:
    // 0x394720: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x394720u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_394724:
    // 0x394724: 0x2e230002  sltiu       $v1, $s1, 0x2
    ctx->pc = 0x394724u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_394728:
    // 0x394728: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_39472c:
    if (ctx->pc == 0x39472Cu) {
        ctx->pc = 0x39472Cu;
            // 0x39472c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x394730u;
        goto label_394730;
    }
    ctx->pc = 0x394728u;
    {
        const bool branch_taken_0x394728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39472Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394728u;
            // 0x39472c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394728) {
            ctx->pc = 0x3946D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3946d4;
        }
    }
    ctx->pc = 0x394730u;
label_394730:
    // 0x394730: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x394730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_394734:
    // 0x394734: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x394734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_394738:
    // 0x394738: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x394738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39473c:
    // 0x39473c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39473cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_394740:
    // 0x394740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x394740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_394744:
    // 0x394744: 0x3e00008  jr          $ra
label_394748:
    if (ctx->pc == 0x394748u) {
        ctx->pc = 0x394748u;
            // 0x394748: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x39474Cu;
        goto label_39474c;
    }
    ctx->pc = 0x394744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394744u;
            // 0x394748: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39474Cu;
label_39474c:
    // 0x39474c: 0x0  nop
    ctx->pc = 0x39474cu;
    // NOP
}
