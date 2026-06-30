#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181D38
// Address: 0x181d38 - 0x181d68
void sub_00181D38_0x181d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181D38_0x181d38");
#endif

    switch (ctx->pc) {
        case 0x181d4cu: goto label_181d4c;
        case 0x181d54u: goto label_181d54;
        default: break;
    }

    ctx->pc = 0x181d38u;

    // 0x181d38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181d3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x181d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181d40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x181d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x181d44: 0xc060704  jal         func_181C10
    ctx->pc = 0x181D44u;
    SET_GPR_U32(ctx, 31, 0x181D4Cu);
    ctx->pc = 0x181D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181D44u;
            // 0x181d48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C10u;
    if (runtime->hasFunction(0x181C10u)) {
        auto targetFn = runtime->lookupFunction(0x181C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D4Cu; }
        if (ctx->pc != 0x181D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181C10_0x181c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D4Cu; }
        if (ctx->pc != 0x181D4Cu) { return; }
    }
    ctx->pc = 0x181D4Cu;
label_181d4c:
    // 0x181d4c: 0xc06075a  jal         func_181D68
    ctx->pc = 0x181D4Cu;
    SET_GPR_U32(ctx, 31, 0x181D54u);
    ctx->pc = 0x181D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181D4Cu;
            // 0x181d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D68u;
    if (runtime->hasFunction(0x181D68u)) {
        auto targetFn = runtime->lookupFunction(0x181D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D54u; }
        if (ctx->pc != 0x181D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D68_0x181d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D54u; }
        if (ctx->pc != 0x181D54u) { return; }
    }
    ctx->pc = 0x181D54u;
label_181d54:
    // 0x181d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181d58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x181d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181d5c: 0x806070a  j           func_181C28
    ctx->pc = 0x181D5Cu;
    ctx->pc = 0x181D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181D5Cu;
            // 0x181d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C28u;
    if (runtime->hasFunction(0x181C28u)) {
        auto targetFn = runtime->lookupFunction(0x181C28u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00181C28_0x181c28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x181D64u;
    // 0x181d64: 0x0  nop
    ctx->pc = 0x181d64u;
    // NOP
}
