#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2C40
// Address: 0x1a2c40 - 0x1a2c70
void sub_001A2C40_0x1a2c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2C40_0x1a2c40");
#endif

    switch (ctx->pc) {
        case 0x1a2c50u: goto label_1a2c50;
        default: break;
    }

    ctx->pc = 0x1a2c40u;

    // 0x1a2c40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2c44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2c48: 0xc05c2e2  jal         func_170B88
    ctx->pc = 0x1A2C48u;
    SET_GPR_U32(ctx, 31, 0x1A2C50u);
    ctx->pc = 0x170B88u;
    if (runtime->hasFunction(0x170B88u)) {
        auto targetFn = runtime->lookupFunction(0x170B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2C50u; }
        if (ctx->pc != 0x1A2C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B88_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2C50u; }
        if (ctx->pc != 0x1A2C50u) { return; }
    }
    ctx->pc = 0x1A2C50u;
label_1a2c50:
    // 0x1a2c50: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1a2c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x1a2c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2c58: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a2c58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a2c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2C5Cu;
            // 0x1a2c60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2C64u;
    // 0x1a2c64: 0x0  nop
    ctx->pc = 0x1a2c64u;
    // NOP
    // 0x1a2c68: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2C70u;
}
