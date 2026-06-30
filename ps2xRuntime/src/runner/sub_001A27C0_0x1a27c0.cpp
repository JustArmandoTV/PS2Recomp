#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A27C0
// Address: 0x1a27c0 - 0x1a27e8
void sub_001A27C0_0x1a27c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A27C0_0x1a27c0");
#endif

    switch (ctx->pc) {
        case 0x1a27d4u: goto label_1a27d4;
        default: break;
    }

    ctx->pc = 0x1a27c0u;

    // 0x1a27c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a27c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a27c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a27c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a27c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a27c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a27cc: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x1A27CCu;
    SET_GPR_U32(ctx, 31, 0x1A27D4u);
    ctx->pc = 0x1A27D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A27CCu;
            // 0x1a27d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A27D4u; }
        if (ctx->pc != 0x1A27D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A27D4u; }
        if (ctx->pc != 0x1A27D4u) { return; }
    }
    ctx->pc = 0x1A27D4u;
label_1a27d4:
    // 0x1a27d4: 0xac500058  sw          $s0, 0x58($v0)
    ctx->pc = 0x1a27d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 16));
    // 0x1a27d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a27d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a27dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a27dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a27e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A27E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A27E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A27E0u;
            // 0x1a27e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A27E8u;
}
