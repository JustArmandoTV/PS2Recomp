#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00218F88
// Address: 0x218f88 - 0x218fb0
void sub_00218F88_0x218f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218F88_0x218f88");
#endif

    switch (ctx->pc) {
        case 0x218fa4u: goto label_218fa4;
        default: break;
    }

    ctx->pc = 0x218f88u;

    // 0x218f88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218f8c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x218f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x218f90: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x218f90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x218f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218f98: 0x2484d6c0  addiu       $a0, $a0, -0x2940
    ctx->pc = 0x218f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956736));
    // 0x218f9c: 0xc0a7b68  jal         func_29EDA0
    ctx->pc = 0x218F9Cu;
    SET_GPR_U32(ctx, 31, 0x218FA4u);
    ctx->pc = 0x218FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218F9Cu;
            // 0x218fa0: 0x24a5e038  addiu       $a1, $a1, -0x1FC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EDA0u;
    if (runtime->hasFunction(0x29EDA0u)) {
        auto targetFn = runtime->lookupFunction(0x29EDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FA4u; }
        if (ctx->pc != 0x218FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EDA0_0x29eda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FA4u; }
        if (ctx->pc != 0x218FA4u) { return; }
    }
    ctx->pc = 0x218FA4u;
label_218fa4:
    // 0x218fa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x218FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218FA8u;
            // 0x218fac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x218FB0u;
}
