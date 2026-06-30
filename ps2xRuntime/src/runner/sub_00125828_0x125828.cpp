#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125828
// Address: 0x125828 - 0x125888
void sub_00125828_0x125828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125828_0x125828");
#endif

    switch (ctx->pc) {
        case 0x125854u: goto label_125854;
        case 0x125860u: goto label_125860;
        case 0x125870u: goto label_125870;
        case 0x125878u: goto label_125878;
        default: break;
    }

    ctx->pc = 0x125828u;

    // 0x125828: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x125828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12582c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x12582cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125830: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x125830u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125834: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x125834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x125838: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x125838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12583c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12583cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125840: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x125840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x125844: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x125844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x125848: 0xffaf0060  sd          $t7, 0x60($sp)
    ctx->pc = 0x125848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 15));
    // 0x12584c: 0xc04955a  jal         func_125568
    ctx->pc = 0x12584Cu;
    SET_GPR_U32(ctx, 31, 0x125854u);
    ctx->pc = 0x125850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12584Cu;
            // 0x125850: 0xffae0068  sd          $t6, 0x68($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125568u;
    if (runtime->hasFunction(0x125568u)) {
        auto targetFn = runtime->lookupFunction(0x125568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125854u; }
        if (ctx->pc != 0x125854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125568_0x125568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125854u; }
        if (ctx->pc != 0x125854u) { return; }
    }
    ctx->pc = 0x125854u;
label_125854:
    // 0x125854: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x125854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x125858: 0xc04955a  jal         func_125568
    ctx->pc = 0x125858u;
    SET_GPR_U32(ctx, 31, 0x125860u);
    ctx->pc = 0x12585Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125858u;
            // 0x12585c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125568u;
    if (runtime->hasFunction(0x125568u)) {
        auto targetFn = runtime->lookupFunction(0x125568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125860u; }
        if (ctx->pc != 0x125860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125568_0x125568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125860u; }
        if (ctx->pc != 0x125860u) { return; }
    }
    ctx->pc = 0x125860u;
label_125860:
    // 0x125860: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x125860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125864: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x125864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125868: 0xc04957c  jal         func_1255F0
    ctx->pc = 0x125868u;
    SET_GPR_U32(ctx, 31, 0x125870u);
    ctx->pc = 0x12586Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125868u;
            // 0x12586c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1255F0u;
    if (runtime->hasFunction(0x1255F0u)) {
        auto targetFn = runtime->lookupFunction(0x1255F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125870u; }
        if (ctx->pc != 0x125870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001255F0_0x1255f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125870u; }
        if (ctx->pc != 0x125870u) { return; }
    }
    ctx->pc = 0x125870u;
label_125870:
    // 0x125870: 0xc049524  jal         func_125490
    ctx->pc = 0x125870u;
    SET_GPR_U32(ctx, 31, 0x125878u);
    ctx->pc = 0x125874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125870u;
            // 0x125874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125490u;
    if (runtime->hasFunction(0x125490u)) {
        auto targetFn = runtime->lookupFunction(0x125490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125878u; }
        if (ctx->pc != 0x125878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125490_0x125490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125878u; }
        if (ctx->pc != 0x125878u) { return; }
    }
    ctx->pc = 0x125878u;
label_125878:
    // 0x125878: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x125878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12587c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x12587cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x125880: 0x3e00008  jr          $ra
    ctx->pc = 0x125880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125880u;
            // 0x125884: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125888u;
}
