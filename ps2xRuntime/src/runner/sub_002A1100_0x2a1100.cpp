#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A1100
// Address: 0x2a1100 - 0x2a1120
void sub_002A1100_0x2a1100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1100_0x2a1100");
#endif

    switch (ctx->pc) {
        case 0x2a1110u: goto label_2a1110;
        default: break;
    }

    ctx->pc = 0x2a1100u;

    // 0x2a1100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a1100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a1104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a1104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a1108: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x2A1108u;
    SET_GPR_U32(ctx, 31, 0x2A1110u);
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1110u; }
        if (ctx->pc != 0x2A1110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1110u; }
        if (ctx->pc != 0x2A1110u) { return; }
    }
    ctx->pc = 0x2A1110u;
label_2a1110:
    // 0x2a1110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a1110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1114: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1114u;
            // 0x2a1118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A111Cu;
    // 0x2a111c: 0x0  nop
    ctx->pc = 0x2a111cu;
    // NOP
}
