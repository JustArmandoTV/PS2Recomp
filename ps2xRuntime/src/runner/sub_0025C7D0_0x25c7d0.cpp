#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025C7D0
// Address: 0x25c7d0 - 0x25c7f0
void sub_0025C7D0_0x25c7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C7D0_0x25c7d0");
#endif

    switch (ctx->pc) {
        case 0x25c7e4u: goto label_25c7e4;
        default: break;
    }

    ctx->pc = 0x25c7d0u;

    // 0x25c7d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25c7d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25c7d8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x25c7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x25c7dc: 0xc097240  jal         func_25C900
    ctx->pc = 0x25C7DCu;
    SET_GPR_U32(ctx, 31, 0x25C7E4u);
    ctx->pc = 0x25C7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C7DCu;
            // 0x25c7e0: 0x83a6001c  lb          $a2, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C900u;
    if (runtime->hasFunction(0x25C900u)) {
        auto targetFn = runtime->lookupFunction(0x25C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C7E4u; }
        if (ctx->pc != 0x25C7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025C900_0x25c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C7E4u; }
        if (ctx->pc != 0x25C7E4u) { return; }
    }
    ctx->pc = 0x25C7E4u;
label_25c7e4:
    // 0x25c7e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x25C7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C7E8u;
            // 0x25c7ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C7F0u;
}
