#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181CF8
// Address: 0x181cf8 - 0x181d38
void sub_00181CF8_0x181cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181CF8_0x181cf8");
#endif

    switch (ctx->pc) {
        case 0x181d14u: goto label_181d14;
        default: break;
    }

    ctx->pc = 0x181cf8u;

    // 0x181cf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181cfc: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x181cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x181d00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181d04: 0x2484bee8  addiu       $a0, $a0, -0x4118
    ctx->pc = 0x181d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950632));
    // 0x181d08: 0x24060168  addiu       $a2, $zero, 0x168
    ctx->pc = 0x181d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x181d0c: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x181D0Cu;
    SET_GPR_U32(ctx, 31, 0x181D14u);
    ctx->pc = 0x181D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181D0Cu;
            // 0x181d10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D14u; }
        if (ctx->pc != 0x181D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D14u; }
        if (ctx->pc != 0x181D14u) { return; }
    }
    ctx->pc = 0x181D14u;
label_181d14:
    // 0x181d14: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x181d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x181d18: 0x2463bf18  addiu       $v1, $v1, -0x40E8
    ctx->pc = 0x181d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950680));
    // 0x181d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181d20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x181d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x181d24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x181d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x181d28: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x181d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x181d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x181D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181D2Cu;
            // 0x181d30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181D34u;
    // 0x181d34: 0x0  nop
    ctx->pc = 0x181d34u;
    // NOP
}
