#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053EB40
// Address: 0x53eb40 - 0x53eb80
void sub_0053EB40_0x53eb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053EB40_0x53eb40");
#endif

    switch (ctx->pc) {
        case 0x53eb58u: goto label_53eb58;
        case 0x53eb64u: goto label_53eb64;
        case 0x53eb6cu: goto label_53eb6c;
        default: break;
    }

    ctx->pc = 0x53eb40u;

    // 0x53eb40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53eb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x53eb44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x53eb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x53eb48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53eb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x53eb4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53eb4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53eb50: 0xc14fae0  jal         func_53EB80
    ctx->pc = 0x53EB50u;
    SET_GPR_U32(ctx, 31, 0x53EB58u);
    ctx->pc = 0x53EB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EB50u;
            // 0x53eb54: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53EB80u;
    if (runtime->hasFunction(0x53EB80u)) {
        auto targetFn = runtime->lookupFunction(0x53EB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EB58u; }
        if (ctx->pc != 0x53EB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053EB80_0x53eb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EB58u; }
        if (ctx->pc != 0x53EB58u) { return; }
    }
    ctx->pc = 0x53EB58u;
label_53eb58:
    // 0x53eb58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x53eb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53eb5c: 0xc0b38a0  jal         func_2CE280
    ctx->pc = 0x53EB5Cu;
    SET_GPR_U32(ctx, 31, 0x53EB64u);
    ctx->pc = 0x53EB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EB5Cu;
            // 0x53eb60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE280u;
    if (runtime->hasFunction(0x2CE280u)) {
        auto targetFn = runtime->lookupFunction(0x2CE280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EB64u; }
        if (ctx->pc != 0x53EB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE280_0x2ce280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EB64u; }
        if (ctx->pc != 0x53EB64u) { return; }
    }
    ctx->pc = 0x53EB64u;
label_53eb64:
    // 0x53eb64: 0xc0b389c  jal         func_2CE270
    ctx->pc = 0x53EB64u;
    SET_GPR_U32(ctx, 31, 0x53EB6Cu);
    ctx->pc = 0x53EB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EB64u;
            // 0x53eb68: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE270u;
    if (runtime->hasFunction(0x2CE270u)) {
        auto targetFn = runtime->lookupFunction(0x2CE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EB6Cu; }
        if (ctx->pc != 0x53EB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE270_0x2ce270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EB6Cu; }
        if (ctx->pc != 0x53EB6Cu) { return; }
    }
    ctx->pc = 0x53EB6Cu;
label_53eb6c:
    // 0x53eb6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x53eb6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53eb70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53eb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x53eb74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53eb74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x53eb78: 0x3e00008  jr          $ra
    ctx->pc = 0x53EB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53EB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53EB78u;
            // 0x53eb7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53EB80u;
}
