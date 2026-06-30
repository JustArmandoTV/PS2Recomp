#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016EA70
// Address: 0x16ea70 - 0x16eaa0
void sub_0016EA70_0x16ea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EA70_0x16ea70");
#endif

    ctx->pc = 0x16ea70u;

    // 0x16ea70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ea70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ea74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ea74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ea78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ea78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ea7c: 0x80610da  j           func_184368
    ctx->pc = 0x16EA7Cu;
    ctx->pc = 0x16EA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EA7Cu;
            // 0x16ea80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184368u;
    {
        auto targetFn = runtime->lookupFunction(0x184368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16EA84u;
    // 0x16ea84: 0x0  nop
    ctx->pc = 0x16ea84u;
    // NOP
    // 0x16ea88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ea88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ea8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ea8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ea90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ea90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ea94: 0x8061104  j           func_184410
    ctx->pc = 0x16EA94u;
    ctx->pc = 0x16EA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EA94u;
            // 0x16ea98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184410u;
    {
        auto targetFn = runtime->lookupFunction(0x184410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16EA9Cu;
    // 0x16ea9c: 0x0  nop
    ctx->pc = 0x16ea9cu;
    // NOP
}
