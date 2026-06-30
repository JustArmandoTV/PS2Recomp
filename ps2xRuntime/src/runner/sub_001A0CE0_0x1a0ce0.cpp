#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0CE0
// Address: 0x1a0ce0 - 0x1a0d80
void sub_001A0CE0_0x1a0ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0CE0_0x1a0ce0");
#endif

    switch (ctx->pc) {
        case 0x1a0cf8u: goto label_1a0cf8;
        case 0x1a0d20u: goto label_1a0d20;
        case 0x1a0d48u: goto label_1a0d48;
        case 0x1a0d70u: goto label_1a0d70;
        default: break;
    }

    ctx->pc = 0x1a0ce0u;

    // 0x1a0ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0ce4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a0ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ce8: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1a0ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a0cec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0cf0: 0xc06836c  jal         func_1A0DB0
    ctx->pc = 0x1A0CF0u;
    SET_GPR_U32(ctx, 31, 0x1A0CF8u);
    ctx->pc = 0x1A0CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0CF0u;
            // 0x1a0cf4: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0DB0u;
    if (runtime->hasFunction(0x1A0DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CF8u; }
        if (ctx->pc != 0x1A0CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0DB0_0x1a0db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CF8u; }
        if (ctx->pc != 0x1A0CF8u) { return; }
    }
    ctx->pc = 0x1A0CF8u;
label_1a0cf8:
    // 0x1a0cf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0CFCu;
            // 0x1a0d00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0D04u;
    // 0x1a0d04: 0x0  nop
    ctx->pc = 0x1a0d04u;
    // NOP
    // 0x1a0d08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0d0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a0d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d10: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1a0d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a0d14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0d18: 0xc068360  jal         func_1A0D80
    ctx->pc = 0x1A0D18u;
    SET_GPR_U32(ctx, 31, 0x1A0D20u);
    ctx->pc = 0x1A0D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D18u;
            // 0x1a0d1c: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D80u;
    if (runtime->hasFunction(0x1A0D80u)) {
        auto targetFn = runtime->lookupFunction(0x1A0D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D20u; }
        if (ctx->pc != 0x1A0D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0D80_0x1a0d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D20u; }
        if (ctx->pc != 0x1A0D20u) { return; }
    }
    ctx->pc = 0x1A0D20u;
label_1a0d20:
    // 0x1a0d20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0d24: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D24u;
            // 0x1a0d28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0D2Cu;
    // 0x1a0d2c: 0x0  nop
    ctx->pc = 0x1a0d2cu;
    // NOP
    // 0x1a0d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0d34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a0d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d38: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1a0d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a0d3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0d40: 0xc06836c  jal         func_1A0DB0
    ctx->pc = 0x1A0D40u;
    SET_GPR_U32(ctx, 31, 0x1A0D48u);
    ctx->pc = 0x1A0D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D40u;
            // 0x1a0d44: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0DB0u;
    if (runtime->hasFunction(0x1A0DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D48u; }
        if (ctx->pc != 0x1A0D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0DB0_0x1a0db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D48u; }
        if (ctx->pc != 0x1A0D48u) { return; }
    }
    ctx->pc = 0x1A0D48u;
label_1a0d48:
    // 0x1a0d48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D4Cu;
            // 0x1a0d50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0D54u;
    // 0x1a0d54: 0x0  nop
    ctx->pc = 0x1a0d54u;
    // NOP
    // 0x1a0d58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0d5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a0d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d60: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1a0d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a0d64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0d68: 0xc068378  jal         func_1A0DE0
    ctx->pc = 0x1A0D68u;
    SET_GPR_U32(ctx, 31, 0x1A0D70u);
    ctx->pc = 0x1A0D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D68u;
            // 0x1a0d6c: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0DE0u;
    if (runtime->hasFunction(0x1A0DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D70u; }
        if (ctx->pc != 0x1A0D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0DE0_0x1a0de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D70u; }
        if (ctx->pc != 0x1A0D70u) { return; }
    }
    ctx->pc = 0x1A0D70u;
label_1a0d70:
    // 0x1a0d70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0d74: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D74u;
            // 0x1a0d78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0D7Cu;
    // 0x1a0d7c: 0x0  nop
    ctx->pc = 0x1a0d7cu;
    // NOP
}
