#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196720
// Address: 0x196720 - 0x196760
void sub_00196720_0x196720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196720_0x196720");
#endif

    switch (ctx->pc) {
        case 0x196748u: goto label_196748;
        default: break;
    }

    ctx->pc = 0x196720u;

    // 0x196720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196728: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x196728u;
    {
        const bool branch_taken_0x196728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19672Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196728u;
            // 0x19672c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196728) {
            ctx->pc = 0x196734u;
            goto label_196734;
        }
    }
    ctx->pc = 0x196730u;
    // 0x196730: 0x8c8203d4  lw          $v0, 0x3D4($a0)
    ctx->pc = 0x196730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 980)));
label_196734:
    // 0x196734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19673c: 0x80628e8  j           func_18A3A0
    ctx->pc = 0x19673Cu;
    ctx->pc = 0x196740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19673Cu;
            // 0x196740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A3A0u;
    {
        auto targetFn = runtime->lookupFunction(0x18A3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x196744u;
    // 0x196744: 0x0  nop
    ctx->pc = 0x196744u;
    // NOP
label_196748:
    // 0x196748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19674c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19674cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196750: 0x8c8403d4  lw          $a0, 0x3D4($a0)
    ctx->pc = 0x196750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 980)));
    // 0x196754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196758: 0x80628f2  j           func_18A3C8
    ctx->pc = 0x196758u;
    ctx->pc = 0x19675Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196758u;
            // 0x19675c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C8u;
    {
        auto targetFn = runtime->lookupFunction(0x18A3C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x196760u;
}
