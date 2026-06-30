#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B85A8
// Address: 0x1b85a8 - 0x1b85e0
void sub_001B85A8_0x1b85a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B85A8_0x1b85a8");
#endif

    switch (ctx->pc) {
        case 0x1b85ccu: goto label_1b85cc;
        default: break;
    }

    ctx->pc = 0x1b85a8u;

    // 0x1b85a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b85a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b85ac: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1b85acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1b85b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b85b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b85b4: 0x24501e88  addiu       $s0, $v0, 0x1E88
    ctx->pc = 0x1b85b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7816));
    // 0x1b85b8: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1b85b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b85bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B85BCu;
    {
        const bool branch_taken_0x1b85bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B85C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B85BCu;
            // 0x1b85c0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b85bc) {
            ctx->pc = 0x1B85D0u;
            goto label_1b85d0;
        }
    }
    ctx->pc = 0x1B85C4u;
    // 0x1b85c4: 0xc06e140  jal         func_1B8500
    ctx->pc = 0x1B85C4u;
    SET_GPR_U32(ctx, 31, 0x1B85CCu);
    ctx->pc = 0x1B8500u;
    if (runtime->hasFunction(0x1B8500u)) {
        auto targetFn = runtime->lookupFunction(0x1B8500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B85CCu; }
        if (ctx->pc != 0x1B85CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8500_0x1b8500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B85CCu; }
        if (ctx->pc != 0x1B85CCu) { return; }
    }
    ctx->pc = 0x1B85CCu;
label_1b85cc:
    // 0x1b85cc: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1b85ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_1b85d0:
    // 0x1b85d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b85d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b85d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b85d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b85d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B85D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B85DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B85D8u;
            // 0x1b85dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B85E0u;
}
