#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00126090
// Address: 0x126090 - 0x1260b8
void sub_00126090_0x126090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126090_0x126090");
#endif

    switch (ctx->pc) {
        case 0x1260a4u: goto label_1260a4;
        default: break;
    }

    ctx->pc = 0x126090u;

    // 0x126090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x126094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x126094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12609c: 0xc04b618  jal         func_12D860
    ctx->pc = 0x12609Cu;
    SET_GPR_U32(ctx, 31, 0x1260A4u);
    ctx->pc = 0x1260A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12609Cu;
            // 0x1260a0: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D860u;
    if (runtime->hasFunction(0x12D860u)) {
        auto targetFn = runtime->lookupFunction(0x12D860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1260A4u; }
        if (ctx->pc != 0x1260A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D860_0x12d860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1260A4u; }
        if (ctx->pc != 0x1260A4u) { return; }
    }
    ctx->pc = 0x1260A4u;
label_1260a4:
    // 0x1260a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1260a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1260a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1260a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1260ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1260acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1260b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1260B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1260B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1260B0u;
            // 0x1260b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1260B8u;
}
