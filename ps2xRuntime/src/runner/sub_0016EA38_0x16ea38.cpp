#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016EA38
// Address: 0x16ea38 - 0x16ea70
void sub_0016EA38_0x16ea38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EA38_0x16ea38");
#endif

    switch (ctx->pc) {
        case 0x16ea4cu: goto label_16ea4c;
        case 0x16ea50u: goto label_16ea50;
        default: break;
    }

    ctx->pc = 0x16ea38u;

    // 0x16ea38: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16ea38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16ea3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ea3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ea40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ea40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ea44: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x16EA44u;
    SET_GPR_U32(ctx, 31, 0x16EA4Cu);
    ctx->pc = 0x16EA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EA44u;
            // 0x16ea48: 0x24843f40  addiu       $a0, $a0, 0x3F40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EA4Cu; }
        if (ctx->pc != 0x16EA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EA4Cu; }
        if (ctx->pc != 0x16EA4Cu) { return; }
    }
    ctx->pc = 0x16EA4Cu;
label_16ea4c:
    // 0x16ea4c: 0x0  nop
    ctx->pc = 0x16ea4cu;
    // NOP
label_16ea50:
    // 0x16ea50: 0x0  nop
    ctx->pc = 0x16ea50u;
    // NOP
    // 0x16ea54: 0x0  nop
    ctx->pc = 0x16ea54u;
    // NOP
    // 0x16ea58: 0x0  nop
    ctx->pc = 0x16ea58u;
    // NOP
    // 0x16ea5c: 0x0  nop
    ctx->pc = 0x16ea5cu;
    // NOP
    // 0x16ea60: 0x0  nop
    ctx->pc = 0x16ea60u;
    // NOP
    // 0x16ea64: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x16EA64u;
    {
        const bool branch_taken_0x16ea64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ea64) {
            ctx->pc = 0x16EA50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16ea50;
        }
    }
    ctx->pc = 0x16EA6Cu;
    // 0x16ea6c: 0x0  nop
    ctx->pc = 0x16ea6cu;
    // NOP
}
