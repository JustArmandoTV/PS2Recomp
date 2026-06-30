#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F040
// Address: 0x19f040 - 0x19f070
void sub_0019F040_0x19f040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F040_0x19f040");
#endif

    switch (ctx->pc) {
        case 0x19f054u: goto label_19f054;
        default: break;
    }

    ctx->pc = 0x19f040u;

    // 0x19f040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f048: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19f048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19f04c: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19F04Cu;
    SET_GPR_U32(ctx, 31, 0x19F054u);
    ctx->pc = 0x19F050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F04Cu;
            // 0x19f050: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F054u; }
        if (ctx->pc != 0x19F054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F054u; }
        if (ctx->pc != 0x19F054u) { return; }
    }
    ctx->pc = 0x19F054u;
label_19f054:
    // 0x19f054: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19f054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f058: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19f058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f05c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f05cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f060: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f064: 0x806f9f4  j           func_1BE7D0
    ctx->pc = 0x19F064u;
    ctx->pc = 0x19F068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F064u;
            // 0x19f068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1BE7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19F06Cu;
    // 0x19f06c: 0x0  nop
    ctx->pc = 0x19f06cu;
    // NOP
}
