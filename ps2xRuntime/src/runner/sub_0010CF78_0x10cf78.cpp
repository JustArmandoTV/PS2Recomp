#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010CF78
// Address: 0x10cf78 - 0x10d138
void sub_0010CF78_0x10cf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CF78_0x10cf78");
#endif

    switch (ctx->pc) {
        case 0x10cfa8u: goto label_10cfa8;
        case 0x10cfb0u: goto label_10cfb0;
        case 0x10cfc8u: goto label_10cfc8;
        case 0x10cff0u: goto label_10cff0;
        case 0x10d010u: goto label_10d010;
        case 0x10d030u: goto label_10d030;
        case 0x10d050u: goto label_10d050;
        case 0x10d0a0u: goto label_10d0a0;
        case 0x10d0a8u: goto label_10d0a8;
        case 0x10d100u: goto label_10d100;
        case 0x10d110u: goto label_10d110;
        case 0x10d120u: goto label_10d120;
        case 0x10d130u: goto label_10d130;
        default: break;
    }

    ctx->pc = 0x10cf78u;

    // 0x10cf78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10cf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10cf7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10cf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10cf80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10cf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10cf84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10cf84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10cf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cf8c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10cf8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10cf90: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10cf94: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10cf94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10cf98: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CF98u;
    {
        const bool branch_taken_0x10cf98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cf98) {
            ctx->pc = 0x10CFA8u;
            goto label_10cfa8;
        }
    }
    ctx->pc = 0x10CFA0u;
    // 0x10cfa0: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10CFA0u;
    SET_GPR_U32(ctx, 31, 0x10CFA8u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CFA8u; }
        if (ctx->pc != 0x10CFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CFA8u; }
        if (ctx->pc != 0x10CFA8u) { return; }
    }
    ctx->pc = 0x10CFA8u;
label_10cfa8:
    // 0x10cfa8: 0xc043030  jal         func_10C0C0
    ctx->pc = 0x10CFA8u;
    SET_GPR_U32(ctx, 31, 0x10CFB0u);
    ctx->pc = 0x10CFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CFA8u;
            // 0x10cfac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C0C0u;
    if (runtime->hasFunction(0x10C0C0u)) {
        auto targetFn = runtime->lookupFunction(0x10C0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CFB0u; }
        if (ctx->pc != 0x10CFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C0C0_0x10c0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CFB0u; }
        if (ctx->pc != 0x10CFB0u) { return; }
    }
    ctx->pc = 0x10CFB0u;
label_10cfb0:
    // 0x10cfb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10cfb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cfb4: 0xf  sync
    ctx->pc = 0x10cfb4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10cfb8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CFB8u;
    {
        const bool branch_taken_0x10cfb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CFB8u;
            // 0x10cfbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cfb8) {
            ctx->pc = 0x10CFCCu;
            goto label_10cfcc;
        }
    }
    ctx->pc = 0x10CFC0u;
    // 0x10cfc0: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x10CFC0u;
    SET_GPR_U32(ctx, 31, 0x10CFC8u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CFC8u; }
        if (ctx->pc != 0x10CFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CFC8u; }
        if (ctx->pc != 0x10CFC8u) { return; }
    }
    ctx->pc = 0x10CFC8u;
label_10cfc8:
    // 0x10cfc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10cfc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10cfcc:
    // 0x10cfcc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10cfccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cfd0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10cfd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cfd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10cfd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CFD8u;
            // 0x10cfdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CFE0u;
    // 0x10cfe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10cfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10cfe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10cfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10cfe8: 0xc043040  jal         func_10C100
    ctx->pc = 0x10CFE8u;
    SET_GPR_U32(ctx, 31, 0x10CFF0u);
    ctx->pc = 0x10C100u;
    if (runtime->hasFunction(0x10C100u)) {
        auto targetFn = runtime->lookupFunction(0x10C100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CFF0u; }
        if (ctx->pc != 0x10CFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C100_0x10c100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CFF0u; }
        if (ctx->pc != 0x10CFF0u) { return; }
    }
    ctx->pc = 0x10CFF0u;
label_10cff0:
    // 0x10cff0: 0xf  sync
    ctx->pc = 0x10cff0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10cff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10cff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cff8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CFF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CFF8u;
            // 0x10cffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D000u;
    // 0x10d000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10d000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10d004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d008: 0xc043044  jal         func_10C110
    ctx->pc = 0x10D008u;
    SET_GPR_U32(ctx, 31, 0x10D010u);
    ctx->pc = 0x10C110u;
    if (runtime->hasFunction(0x10C110u)) {
        auto targetFn = runtime->lookupFunction(0x10C110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D010u; }
        if (ctx->pc != 0x10D010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C110_0x10c110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D010u; }
        if (ctx->pc != 0x10D010u) { return; }
    }
    ctx->pc = 0x10D010u;
label_10d010:
    // 0x10d010: 0xf  sync
    ctx->pc = 0x10d010u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d018: 0x3e00008  jr          $ra
    ctx->pc = 0x10D018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D018u;
            // 0x10d01c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D020u;
    // 0x10d020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10d020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10d024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d028: 0xc043048  jal         func_10C120
    ctx->pc = 0x10D028u;
    SET_GPR_U32(ctx, 31, 0x10D030u);
    ctx->pc = 0x10C120u;
    if (runtime->hasFunction(0x10C120u)) {
        auto targetFn = runtime->lookupFunction(0x10C120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D030u; }
        if (ctx->pc != 0x10D030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C120_0x10c120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D030u; }
        if (ctx->pc != 0x10D030u) { return; }
    }
    ctx->pc = 0x10D030u;
label_10d030:
    // 0x10d030: 0xf  sync
    ctx->pc = 0x10d030u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d038: 0x3e00008  jr          $ra
    ctx->pc = 0x10D038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D038u;
            // 0x10d03c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D040u;
    // 0x10d040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10d040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10d044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d048: 0xc04304c  jal         func_10C130
    ctx->pc = 0x10D048u;
    SET_GPR_U32(ctx, 31, 0x10D050u);
    ctx->pc = 0x10C130u;
    if (runtime->hasFunction(0x10C130u)) {
        auto targetFn = runtime->lookupFunction(0x10C130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D050u; }
        if (ctx->pc != 0x10D050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C130_0x10c130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D050u; }
        if (ctx->pc != 0x10D050u) { return; }
    }
    ctx->pc = 0x10D050u;
label_10d050:
    // 0x10d050: 0xf  sync
    ctx->pc = 0x10d050u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d058: 0x3e00008  jr          $ra
    ctx->pc = 0x10D058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D058u;
            // 0x10d05c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D060u;
    // 0x10d060: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10d060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10d064: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10d064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10d068: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10d068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d06c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10d06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x10d070: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10d070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10d074: 0x3c16006c  lui         $s6, 0x6C
    ctx->pc = 0x10d074u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)108 << 16));
    // 0x10d078: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10d078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10d07c: 0x3c150063  lui         $s5, 0x63
    ctx->pc = 0x10d07cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)99 << 16));
    // 0x10d080: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10d080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10d084: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x10d084u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d088: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10d088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10d08c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x10d08cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10d090: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d094: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x10d094u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x10d098: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10d098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x10d09c: 0x26300009  addiu       $s0, $s1, 0x9
    ctx->pc = 0x10d09cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
label_10d0a0:
    // 0x10d0a0: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x10D0A0u;
    SET_GPR_U32(ctx, 31, 0x10D0A8u);
    ctx->pc = 0x10D0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D0A0u;
            // 0x10d0a4: 0x8ec49040  lw          $a0, -0x6FC0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294938688)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D0A8u; }
        if (ctx->pc != 0x10D0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D0A8u; }
        if (ctx->pc != 0x10D0A8u) { return; }
    }
    ctx->pc = 0x10D0A8u;
label_10d0a8:
    // 0x10d0a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x10d0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10d0ac: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x10d0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x10d0b0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x10d0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10d0b4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x10d0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10d0b8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x10d0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x10d0bc: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x10d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x10d0c0: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x10d0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x10d0c4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x10d0c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d0c8: 0x1054000f  beq         $v0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x10D0C8u;
    {
        const bool branch_taken_0x10d0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x10D0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D0C8u;
            // 0x10d0cc: 0x28450002  slti        $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d0c8) {
            ctx->pc = 0x10D108u;
            goto label_10d108;
        }
    }
    ctx->pc = 0x10D0D0u;
    // 0x10d0d0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D0D0u;
    {
        const bool branch_taken_0x10d0d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D0D0u;
            // 0x10d0d4: 0x26a4ebd0  addiu       $a0, $s5, -0x1430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d0d0) {
            ctx->pc = 0x10D0E8u;
            goto label_10d0e8;
        }
    }
    ctx->pc = 0x10D0D8u;
    // 0x10d0d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10D0D8u;
    {
        const bool branch_taken_0x10d0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D0D8u;
            // 0x10d0dc: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d0d8) {
            ctx->pc = 0x10D0F8u;
            goto label_10d0f8;
        }
    }
    ctx->pc = 0x10D0E0u;
    // 0x10d0e0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10D0E0u;
    {
        const bool branch_taken_0x10d0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d0e0) {
            ctx->pc = 0x10D128u;
            goto label_10d128;
        }
    }
    ctx->pc = 0x10D0E8u;
label_10d0e8:
    // 0x10d0e8: 0x1053000b  beq         $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x10D0E8u;
    {
        const bool branch_taken_0x10d0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x10D0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D0E8u;
            // 0x10d0ec: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d0e8) {
            ctx->pc = 0x10D118u;
            goto label_10d118;
        }
    }
    ctx->pc = 0x10D0F0u;
    // 0x10d0f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x10D0F0u;
    {
        const bool branch_taken_0x10d0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d0f0) {
            ctx->pc = 0x10D128u;
            goto label_10d128;
        }
    }
    ctx->pc = 0x10D0F8u;
label_10d0f8:
    // 0x10d0f8: 0xc0430a4  jal         func_10C290
    ctx->pc = 0x10D0F8u;
    SET_GPR_U32(ctx, 31, 0x10D100u);
    ctx->pc = 0x10D0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D0F8u;
            // 0x10d0fc: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C290u;
    if (runtime->hasFunction(0x10C290u)) {
        auto targetFn = runtime->lookupFunction(0x10C290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D100u; }
        if (ctx->pc != 0x10D100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C290_0x10c290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D100u; }
        if (ctx->pc != 0x10D100u) { return; }
    }
    ctx->pc = 0x10D100u;
label_10d100:
    // 0x10d100: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x10D100u;
    {
        const bool branch_taken_0x10d100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d100) {
            ctx->pc = 0x10D0A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10d0a0;
        }
    }
    ctx->pc = 0x10D108u;
label_10d108:
    // 0x10d108: 0xc043084  jal         func_10C210
    ctx->pc = 0x10D108u;
    SET_GPR_U32(ctx, 31, 0x10D110u);
    ctx->pc = 0x10D10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D108u;
            // 0x10d10c: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C210u;
    if (runtime->hasFunction(0x10C210u)) {
        auto targetFn = runtime->lookupFunction(0x10C210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D110u; }
        if (ctx->pc != 0x10D110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C210_0x10c210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D110u; }
        if (ctx->pc != 0x10D110u) { return; }
    }
    ctx->pc = 0x10D110u;
label_10d110:
    // 0x10d110: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x10D110u;
    {
        const bool branch_taken_0x10d110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d110) {
            ctx->pc = 0x10D0A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10d0a0;
        }
    }
    ctx->pc = 0x10D118u;
label_10d118:
    // 0x10d118: 0xc0430b4  jal         func_10C2D0
    ctx->pc = 0x10D118u;
    SET_GPR_U32(ctx, 31, 0x10D120u);
    ctx->pc = 0x10D11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D118u;
            // 0x10d11c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C2D0u;
    if (runtime->hasFunction(0x10C2D0u)) {
        auto targetFn = runtime->lookupFunction(0x10C2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D120u; }
        if (ctx->pc != 0x10D120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C2D0_0x10c2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D120u; }
        if (ctx->pc != 0x10D120u) { return; }
    }
    ctx->pc = 0x10D120u;
label_10d120:
    // 0x10d120: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x10D120u;
    {
        const bool branch_taken_0x10d120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d120) {
            ctx->pc = 0x10D0A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10d0a0;
        }
    }
    ctx->pc = 0x10D128u;
label_10d128:
    // 0x10d128: 0xc043c32  jal         func_10F0C8
    ctx->pc = 0x10D128u;
    SET_GPR_U32(ctx, 31, 0x10D130u);
    ctx->pc = 0x10F0C8u;
    if (runtime->hasFunction(0x10F0C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D130u; }
        if (ctx->pc != 0x10D130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F0C8_0x10f0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D130u; }
        if (ctx->pc != 0x10D130u) { return; }
    }
    ctx->pc = 0x10D130u;
label_10d130:
    // 0x10d130: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x10D130u;
    {
        const bool branch_taken_0x10d130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d130) {
            ctx->pc = 0x10D0A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10d0a0;
        }
    }
    ctx->pc = 0x10D138u;
}
