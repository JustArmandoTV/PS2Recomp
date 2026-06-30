#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8830
// Address: 0x1d8830 - 0x1d8860
void sub_001D8830_0x1d8830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8830_0x1d8830");
#endif

    switch (ctx->pc) {
        case 0x1d884cu: goto label_1d884c;
        default: break;
    }

    ctx->pc = 0x1d8830u;

    // 0x1d8830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8838: 0x8c84114c  lw          $a0, 0x114C($a0)
    ctx->pc = 0x1d8838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4428)));
    // 0x1d883c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D883Cu;
    {
        const bool branch_taken_0x1d883c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d883c) {
            ctx->pc = 0x1D8840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D883Cu;
            // 0x1d8840: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8850u;
            goto label_1d8850;
        }
    }
    ctx->pc = 0x1D8844u;
    // 0x1d8844: 0xc0f56d0  jal         func_3D5B40
    ctx->pc = 0x1D8844u;
    SET_GPR_U32(ctx, 31, 0x1D884Cu);
    ctx->pc = 0x3D5B40u;
    if (runtime->hasFunction(0x3D5B40u)) {
        auto targetFn = runtime->lookupFunction(0x3D5B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D884Cu; }
        if (ctx->pc != 0x1D884Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D5B40_0x3d5b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D884Cu; }
        if (ctx->pc != 0x1D884Cu) { return; }
    }
    ctx->pc = 0x1D884Cu;
label_1d884c:
    // 0x1d884c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d884cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8850:
    // 0x1d8850: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8850u;
            // 0x1d8854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8858u;
    // 0x1d8858: 0x0  nop
    ctx->pc = 0x1d8858u;
    // NOP
    // 0x1d885c: 0x0  nop
    ctx->pc = 0x1d885cu;
    // NOP
}
