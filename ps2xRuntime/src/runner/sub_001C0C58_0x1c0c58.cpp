#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0C58
// Address: 0x1c0c58 - 0x1c0c88
void sub_001C0C58_0x1c0c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0C58_0x1c0c58");
#endif

    switch (ctx->pc) {
        case 0x1c0c6cu: goto label_1c0c6c;
        default: break;
    }

    ctx->pc = 0x1c0c58u;

    // 0x1c0c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0c5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c0c60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c0c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c0c64: 0xc071236  jal         func_1C48D8
    ctx->pc = 0x1C0C64u;
    SET_GPR_U32(ctx, 31, 0x1C0C6Cu);
    ctx->pc = 0x1C0C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C64u;
            // 0x1c0c68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C6Cu; }
        if (ctx->pc != 0x1C0C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C6Cu; }
        if (ctx->pc != 0x1C0C6Cu) { return; }
    }
    ctx->pc = 0x1C0C6Cu;
label_1c0c6c:
    // 0x1c0c6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c0c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0c78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c0c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c80: 0x80706c8  j           func_1C1B20
    ctx->pc = 0x1C0C80u;
    ctx->pc = 0x1C0C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C80u;
            // 0x1c0c84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B20u;
    {
        auto targetFn = runtime->lookupFunction(0x1C1B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C0C88u;
}
