#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100880
// Address: 0x100880 - 0x1008a0
void sub_00100880_0x100880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100880_0x100880");
#endif

    switch (ctx->pc) {
        case 0x100890u: goto label_100890;
        default: break;
    }

    ctx->pc = 0x100880u;

    // 0x100880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100888: 0xc049760  jal         func_125D80
    ctx->pc = 0x100888u;
    SET_GPR_U32(ctx, 31, 0x100890u);
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100890u; }
        if (ctx->pc != 0x100890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100890u; }
        if (ctx->pc != 0x100890u) { return; }
    }
    ctx->pc = 0x100890u;
label_100890:
    // 0x100890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100894: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x100894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x100898: 0x3e00008  jr          $ra
    ctx->pc = 0x100898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10089Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100898u;
            // 0x10089c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1008A0u;
}
