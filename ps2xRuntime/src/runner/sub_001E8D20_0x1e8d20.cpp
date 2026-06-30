#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E8D20
// Address: 0x1e8d20 - 0x1e8d50
void sub_001E8D20_0x1e8d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8D20_0x1e8d20");
#endif

    switch (ctx->pc) {
        case 0x1e8d38u: goto label_1e8d38;
        default: break;
    }

    ctx->pc = 0x1e8d20u;

    // 0x1e8d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e8d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e8d24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e8d24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d28: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x1e8d28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1e8d2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8d30: 0xc07a354  jal         func_1E8D50
    ctx->pc = 0x1E8D30u;
    SET_GPR_U32(ctx, 31, 0x1E8D38u);
    ctx->pc = 0x1E8D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D30u;
            // 0x1e8d34: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8D50u;
    if (runtime->hasFunction(0x1E8D50u)) {
        auto targetFn = runtime->lookupFunction(0x1E8D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D38u; }
        if (ctx->pc != 0x1E8D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8D50_0x1e8d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D38u; }
        if (ctx->pc != 0x1E8D38u) { return; }
    }
    ctx->pc = 0x1E8D38u;
label_1e8d38:
    // 0x1e8d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D3Cu;
            // 0x1e8d40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8D44u;
    // 0x1e8d44: 0x0  nop
    ctx->pc = 0x1e8d44u;
    // NOP
    // 0x1e8d48: 0x0  nop
    ctx->pc = 0x1e8d48u;
    // NOP
    // 0x1e8d4c: 0x0  nop
    ctx->pc = 0x1e8d4cu;
    // NOP
}
