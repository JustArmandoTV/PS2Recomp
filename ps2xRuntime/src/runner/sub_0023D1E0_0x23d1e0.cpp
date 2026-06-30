#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023D1E0
// Address: 0x23d1e0 - 0x23d210
void sub_0023D1E0_0x23d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D1E0_0x23d1e0");
#endif

    switch (ctx->pc) {
        case 0x23d200u: goto label_23d200;
        default: break;
    }

    ctx->pc = 0x23d1e0u;

    // 0x23d1e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23d1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23d1e4: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x23d1e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23d1e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d1ec: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D1ECu;
    {
        const bool branch_taken_0x23d1ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D1ECu;
            // 0x23d1f0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d1ec) {
            ctx->pc = 0x23D200u;
            goto label_23d200;
        }
    }
    ctx->pc = 0x23D1F4u;
    // 0x23d1f4: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x23d1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x23d1f8: 0xc08f484  jal         func_23D210
    ctx->pc = 0x23D1F8u;
    SET_GPR_U32(ctx, 31, 0x23D200u);
    ctx->pc = 0x23D1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D1F8u;
            // 0x23d1fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23D210u;
    if (runtime->hasFunction(0x23D210u)) {
        auto targetFn = runtime->lookupFunction(0x23D210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D200u; }
        if (ctx->pc != 0x23D200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023D210_0x23d210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D200u; }
        if (ctx->pc != 0x23D200u) { return; }
    }
    ctx->pc = 0x23D200u;
label_23d200:
    // 0x23d200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d204: 0x3e00008  jr          $ra
    ctx->pc = 0x23D204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D204u;
            // 0x23d208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23D20Cu;
    // 0x23d20c: 0x0  nop
    ctx->pc = 0x23d20cu;
    // NOP
}
