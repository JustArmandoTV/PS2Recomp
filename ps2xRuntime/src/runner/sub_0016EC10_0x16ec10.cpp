#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016EC10
// Address: 0x16ec10 - 0x16ec30
void sub_0016EC10_0x16ec10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EC10_0x16ec10");
#endif

    switch (ctx->pc) {
        case 0x16ec20u: goto label_16ec20;
        default: break;
    }

    ctx->pc = 0x16ec10u;

    // 0x16ec10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ec10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ec14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ec14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ec18: 0xc06121c  jal         func_184870
    ctx->pc = 0x16EC18u;
    SET_GPR_U32(ctx, 31, 0x16EC20u);
    ctx->pc = 0x184870u;
    if (runtime->hasFunction(0x184870u)) {
        auto targetFn = runtime->lookupFunction(0x184870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EC20u; }
        if (ctx->pc != 0x16EC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184870_0x184870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EC20u; }
        if (ctx->pc != 0x16EC20u) { return; }
    }
    ctx->pc = 0x16EC20u;
label_16ec20:
    // 0x16ec20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ec20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ec24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16ec24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ec28: 0x3e00008  jr          $ra
    ctx->pc = 0x16EC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EC28u;
            // 0x16ec2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16EC30u;
}
