#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001966A8
// Address: 0x1966a8 - 0x1966d8
void sub_001966A8_0x1966a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001966A8_0x1966a8");
#endif

    switch (ctx->pc) {
        case 0x1966b8u: goto label_1966b8;
        default: break;
    }

    ctx->pc = 0x1966a8u;

    // 0x1966a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1966a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1966ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1966acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1966b0: 0xc063eaa  jal         func_18FAA8
    ctx->pc = 0x1966B0u;
    SET_GPR_U32(ctx, 31, 0x1966B8u);
    ctx->pc = 0x18FAA8u;
    if (runtime->hasFunction(0x18FAA8u)) {
        auto targetFn = runtime->lookupFunction(0x18FAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1966B8u; }
        if (ctx->pc != 0x1966B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FAA8_0x18faa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1966B8u; }
        if (ctx->pc != 0x1966B8u) { return; }
    }
    ctx->pc = 0x1966B8u;
label_1966b8:
    // 0x1966b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1966b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1966bc: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x1966bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x1966c0: 0x24a50338  addiu       $a1, $a1, 0x338
    ctx->pc = 0x1966c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 824));
    // 0x1966c4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1966c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1966c8: 0x24063840  addiu       $a2, $zero, 0x3840
    ctx->pc = 0x1966c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14400));
    // 0x1966cc: 0x80628be  j           func_18A2F8
    ctx->pc = 0x1966CCu;
    ctx->pc = 0x1966D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1966CCu;
            // 0x1966d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A2F8u;
    {
        auto targetFn = runtime->lookupFunction(0x18A2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1966D4u;
    // 0x1966d4: 0x0  nop
    ctx->pc = 0x1966d4u;
    // NOP
}
