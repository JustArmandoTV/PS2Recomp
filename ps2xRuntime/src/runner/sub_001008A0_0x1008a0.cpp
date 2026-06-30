#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001008A0
// Address: 0x1008a0 - 0x1008d0
void sub_001008A0_0x1008a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001008A0_0x1008a0");
#endif

    switch (ctx->pc) {
        case 0x1008b0u: goto label_1008b0;
        default: break;
    }

    ctx->pc = 0x1008a0u;

    // 0x1008a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1008a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1008a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1008a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1008a8: 0xc049760  jal         func_125D80
    ctx->pc = 0x1008A8u;
    SET_GPR_U32(ctx, 31, 0x1008B0u);
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1008B0u; }
        if (ctx->pc != 0x1008B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1008B0u; }
        if (ctx->pc != 0x1008B0u) { return; }
    }
    ctx->pc = 0x1008B0u;
label_1008b0:
    // 0x1008b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1008b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1008b4: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1008b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1008b8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1008b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1008bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1008BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1008C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1008BCu;
            // 0x1008c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1008C4u;
    // 0x1008c4: 0x0  nop
    ctx->pc = 0x1008c4u;
    // NOP
    // 0x1008c8: 0x0  nop
    ctx->pc = 0x1008c8u;
    // NOP
    // 0x1008cc: 0x0  nop
    ctx->pc = 0x1008ccu;
    // NOP
}
