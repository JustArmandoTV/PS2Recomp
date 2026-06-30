#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C88F0
// Address: 0x1c88f0 - 0x1c8918
void sub_001C88F0_0x1c88f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C88F0_0x1c88f0");
#endif

    switch (ctx->pc) {
        case 0x1c8908u: goto label_1c8908;
        default: break;
    }

    ctx->pc = 0x1c88f0u;

    // 0x1c88f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c88f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c88f4: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x1c88f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x1c88f8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C88F8u;
    {
        const bool branch_taken_0x1c88f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C88FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C88F8u;
            // 0x1c88fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88f8) {
            ctx->pc = 0x1C8908u;
            goto label_1c8908;
        }
    }
    ctx->pc = 0x1C8900u;
    // 0x1c8900: 0xc07215a  jal         func_1C8568
    ctx->pc = 0x1C8900u;
    SET_GPR_U32(ctx, 31, 0x1C8908u);
    ctx->pc = 0x1C8568u;
    if (runtime->hasFunction(0x1C8568u)) {
        auto targetFn = runtime->lookupFunction(0x1C8568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8908u; }
        if (ctx->pc != 0x1C8908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8568_0x1c8568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8908u; }
        if (ctx->pc != 0x1C8908u) { return; }
    }
    ctx->pc = 0x1C8908u;
label_1c8908:
    // 0x1c8908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c890c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C890Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C890Cu;
            // 0x1c8910: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8914u;
    // 0x1c8914: 0x0  nop
    ctx->pc = 0x1c8914u;
    // NOP
}
