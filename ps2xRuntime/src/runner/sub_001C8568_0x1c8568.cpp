#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C8568
// Address: 0x1c8568 - 0x1c8588
void sub_001C8568_0x1c8568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8568_0x1c8568");
#endif

    switch (ctx->pc) {
        case 0x1c8578u: goto label_1c8578;
        default: break;
    }

    ctx->pc = 0x1c8568u;

    // 0x1c8568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c856c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c856cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8570: 0xc0720e6  jal         func_1C8398
    ctx->pc = 0x1C8570u;
    SET_GPR_U32(ctx, 31, 0x1C8578u);
    ctx->pc = 0x1C8398u;
    if (runtime->hasFunction(0x1C8398u)) {
        auto targetFn = runtime->lookupFunction(0x1C8398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8578u; }
        if (ctx->pc != 0x1C8578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8398_0x1c8398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8578u; }
        if (ctx->pc != 0x1C8578u) { return; }
    }
    ctx->pc = 0x1C8578u;
label_1c8578:
    // 0x1c8578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c857c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c857cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8580: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8580u;
            // 0x1c8584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8588u;
}
