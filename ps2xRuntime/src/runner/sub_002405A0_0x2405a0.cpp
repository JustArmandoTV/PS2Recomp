#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002405A0
// Address: 0x2405a0 - 0x2405f0
void sub_002405A0_0x2405a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002405A0_0x2405a0");
#endif

    switch (ctx->pc) {
        case 0x2405d0u: goto label_2405d0;
        case 0x2405e4u: goto label_2405e4;
        default: break;
    }

    ctx->pc = 0x2405a0u;

    // 0x2405a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2405a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2405a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2405a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2405a8: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x2405a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x2405ac: 0x8cc30094  lw          $v1, 0x94($a2)
    ctx->pc = 0x2405acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x2405b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2405B0u;
    {
        const bool branch_taken_0x2405b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2405B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2405B0u;
            // 0x2405b4: 0x8ca70094  lw          $a3, 0x94($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405b0) {
            ctx->pc = 0x2405D8u;
            goto label_2405d8;
        }
    }
    ctx->pc = 0x2405B8u;
    // 0x2405b8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2405b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2405bc: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x2405bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x2405c0: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x2405c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x2405c4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2405c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2405c8: 0xc08d1cc  jal         func_234730
    ctx->pc = 0x2405C8u;
    SET_GPR_U32(ctx, 31, 0x2405D0u);
    ctx->pc = 0x2405CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2405C8u;
            // 0x2405cc: 0xa3a20010  sb          $v0, 0x10($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2405D0u; }
        if (ctx->pc != 0x2405D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2405D0u; }
        if (ctx->pc != 0x2405D0u) { return; }
    }
    ctx->pc = 0x2405D0u;
label_2405d0:
    // 0x2405d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2405D0u;
    {
        const bool branch_taken_0x2405d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2405D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2405D0u;
            // 0x2405d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405d0) {
            ctx->pc = 0x2405E8u;
            goto label_2405e8;
        }
    }
    ctx->pc = 0x2405D8u;
label_2405d8:
    // 0x2405d8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2405d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2405dc: 0xc09017c  jal         func_2405F0
    ctx->pc = 0x2405DCu;
    SET_GPR_U32(ctx, 31, 0x2405E4u);
    ctx->pc = 0x2405E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2405DCu;
            // 0x2405e0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2405F0u;
    if (runtime->hasFunction(0x2405F0u)) {
        auto targetFn = runtime->lookupFunction(0x2405F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2405E4u; }
        if (ctx->pc != 0x2405E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002405F0_0x2405f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2405E4u; }
        if (ctx->pc != 0x2405E4u) { return; }
    }
    ctx->pc = 0x2405E4u;
label_2405e4:
    // 0x2405e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2405e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2405e8:
    // 0x2405e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2405E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2405ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2405E8u;
            // 0x2405ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2405F0u;
}
