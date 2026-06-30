#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281060
// Address: 0x281060 - 0x281080
void sub_00281060_0x281060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281060_0x281060");
#endif

    switch (ctx->pc) {
        case 0x281070u: goto label_281070;
        default: break;
    }

    ctx->pc = 0x281060u;

    // 0x281060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x281064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281068: 0xc0a0488  jal         func_281220
    ctx->pc = 0x281068u;
    SET_GPR_U32(ctx, 31, 0x281070u);
    ctx->pc = 0x28106Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281068u;
            // 0x28106c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281220u;
    if (runtime->hasFunction(0x281220u)) {
        auto targetFn = runtime->lookupFunction(0x281220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281070u; }
        if (ctx->pc != 0x281070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281220_0x281220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281070u; }
        if (ctx->pc != 0x281070u) { return; }
    }
    ctx->pc = 0x281070u;
label_281070:
    // 0x281070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281074: 0x3e00008  jr          $ra
    ctx->pc = 0x281074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281074u;
            // 0x281078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28107Cu;
    // 0x28107c: 0x0  nop
    ctx->pc = 0x28107cu;
    // NOP
}
