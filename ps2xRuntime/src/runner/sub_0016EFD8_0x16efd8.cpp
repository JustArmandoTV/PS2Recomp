#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016EFD8
// Address: 0x16efd8 - 0x16f008
void sub_0016EFD8_0x16efd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EFD8_0x16efd8");
#endif

    switch (ctx->pc) {
        case 0x16eff0u: goto label_16eff0;
        default: break;
    }

    ctx->pc = 0x16efd8u;

    // 0x16efd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16efd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16efdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16efdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16efe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16efe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16efe4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16efe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16efe8: 0xc058bca  jal         func_162F28
    ctx->pc = 0x16EFE8u;
    SET_GPR_U32(ctx, 31, 0x16EFF0u);
    ctx->pc = 0x16EFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EFE8u;
            // 0x16efec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162F28u;
    if (runtime->hasFunction(0x162F28u)) {
        auto targetFn = runtime->lookupFunction(0x162F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EFF0u; }
        if (ctx->pc != 0x16EFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00162F28_0x162f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EFF0u; }
        if (ctx->pc != 0x16EFF0u) { return; }
    }
    ctx->pc = 0x16EFF0u;
label_16eff0:
    // 0x16eff0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x16eff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16eff4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16eff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16eff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16eff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16effc: 0x8058b34  j           func_162CD0
    ctx->pc = 0x16EFFCu;
    ctx->pc = 0x16F000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EFFCu;
            // 0x16f000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162CD0u;
    {
        auto targetFn = runtime->lookupFunction(0x162CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16F004u;
    // 0x16f004: 0x0  nop
    ctx->pc = 0x16f004u;
    // NOP
}
