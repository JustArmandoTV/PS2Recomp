#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F2CD0
// Address: 0x3f2cd0 - 0x3f2d00
void sub_003F2CD0_0x3f2cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2CD0_0x3f2cd0");
#endif

    switch (ctx->pc) {
        case 0x3f2ce8u: goto label_3f2ce8;
        case 0x3f2cf0u: goto label_3f2cf0;
        default: break;
    }

    ctx->pc = 0x3f2cd0u;

    // 0x3f2cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f2cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f2cd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f2cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f2cd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f2cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f2cdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f2cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2ce0: 0xc0fc418  jal         func_3F1060
    ctx->pc = 0x3F2CE0u;
    SET_GPR_U32(ctx, 31, 0x3F2CE8u);
    ctx->pc = 0x3F2CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2CE0u;
            // 0x3f2ce4: 0x260401a0  addiu       $a0, $s0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F1060u;
    if (runtime->hasFunction(0x3F1060u)) {
        auto targetFn = runtime->lookupFunction(0x3F1060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2CE8u; }
        if (ctx->pc != 0x3F2CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F1060_0x3f1060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2CE8u; }
        if (ctx->pc != 0x3F2CE8u) { return; }
    }
    ctx->pc = 0x3F2CE8u;
label_3f2ce8:
    // 0x3f2ce8: 0xc0fc418  jal         func_3F1060
    ctx->pc = 0x3F2CE8u;
    SET_GPR_U32(ctx, 31, 0x3F2CF0u);
    ctx->pc = 0x3F2CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2CE8u;
            // 0x3f2cec: 0x260401fc  addiu       $a0, $s0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 508));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F1060u;
    if (runtime->hasFunction(0x3F1060u)) {
        auto targetFn = runtime->lookupFunction(0x3F1060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2CF0u; }
        if (ctx->pc != 0x3F2CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F1060_0x3f1060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2CF0u; }
        if (ctx->pc != 0x3F2CF0u) { return; }
    }
    ctx->pc = 0x3F2CF0u;
label_3f2cf0:
    // 0x3f2cf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f2cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f2cf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f2cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2CF8u;
            // 0x3f2cfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F2D00u;
}
