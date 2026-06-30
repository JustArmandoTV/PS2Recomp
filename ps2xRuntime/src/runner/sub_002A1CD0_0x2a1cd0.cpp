#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A1CD0
// Address: 0x2a1cd0 - 0x2a1d10
void sub_002A1CD0_0x2a1cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1CD0_0x2a1cd0");
#endif

    switch (ctx->pc) {
        case 0x2a1ce4u: goto label_2a1ce4;
        case 0x2a1cecu: goto label_2a1cec;
        case 0x2a1cf4u: goto label_2a1cf4;
        case 0x2a1cfcu: goto label_2a1cfc;
        default: break;
    }

    ctx->pc = 0x2a1cd0u;

    // 0x2a1cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a1cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a1cd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a1cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a1cd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a1cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a1cdc: 0xc04fc34  jal         func_13F0D0
    ctx->pc = 0x2A1CDCu;
    SET_GPR_U32(ctx, 31, 0x2A1CE4u);
    ctx->pc = 0x2A1CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1CDCu;
            // 0x2a1ce0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F0D0u;
    if (runtime->hasFunction(0x13F0D0u)) {
        auto targetFn = runtime->lookupFunction(0x13F0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1CE4u; }
        if (ctx->pc != 0x2A1CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F0D0_0x13f0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1CE4u; }
        if (ctx->pc != 0x2A1CE4u) { return; }
    }
    ctx->pc = 0x2A1CE4u;
label_2a1ce4:
    // 0x2a1ce4: 0xc04e804  jal         func_13A010
    ctx->pc = 0x2A1CE4u;
    SET_GPR_U32(ctx, 31, 0x2A1CECu);
    ctx->pc = 0x2A1CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1CE4u;
            // 0x2a1ce8: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A010u;
    if (runtime->hasFunction(0x13A010u)) {
        auto targetFn = runtime->lookupFunction(0x13A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1CECu; }
        if (ctx->pc != 0x2A1CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A010_0x13a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1CECu; }
        if (ctx->pc != 0x2A1CECu) { return; }
    }
    ctx->pc = 0x2A1CECu;
label_2a1cec:
    // 0x2a1cec: 0xc04e6fc  jal         func_139BF0
    ctx->pc = 0x2A1CECu;
    SET_GPR_U32(ctx, 31, 0x2A1CF4u);
    ctx->pc = 0x139BF0u;
    if (runtime->hasFunction(0x139BF0u)) {
        auto targetFn = runtime->lookupFunction(0x139BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1CF4u; }
        if (ctx->pc != 0x2A1CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139BF0_0x139bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1CF4u; }
        if (ctx->pc != 0x2A1CF4u) { return; }
    }
    ctx->pc = 0x2A1CF4u;
label_2a1cf4:
    // 0x2a1cf4: 0xc056ad8  jal         func_15AB60
    ctx->pc = 0x2A1CF4u;
    SET_GPR_U32(ctx, 31, 0x2A1CFCu);
    ctx->pc = 0x15AB60u;
    if (runtime->hasFunction(0x15AB60u)) {
        auto targetFn = runtime->lookupFunction(0x15AB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1CFCu; }
        if (ctx->pc != 0x2A1CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AB60_0x15ab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1CFCu; }
        if (ctx->pc != 0x2A1CFCu) { return; }
    }
    ctx->pc = 0x2A1CFCu;
label_2a1cfc:
    // 0x2a1cfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a1cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1d00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a1d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1d04: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1D04u;
            // 0x2a1d08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1D0Cu;
    // 0x2a1d0c: 0x0  nop
    ctx->pc = 0x2a1d0cu;
    // NOP
}
