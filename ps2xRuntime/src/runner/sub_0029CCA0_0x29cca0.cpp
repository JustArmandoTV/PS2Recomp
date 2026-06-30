#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029CCA0
// Address: 0x29cca0 - 0x29ccf0
void sub_0029CCA0_0x29cca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CCA0_0x29cca0");
#endif

    switch (ctx->pc) {
        case 0x29ccbcu: goto label_29ccbc;
        case 0x29cce0u: goto label_29cce0;
        default: break;
    }

    ctx->pc = 0x29cca0u;

    // 0x29cca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29cca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29cca4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x29cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x29cca8: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x29cca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29ccac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ccacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29ccb0: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x29ccb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x29ccb4: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x29CCB4u;
    {
        const bool branch_taken_0x29ccb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CCB4u;
            // 0x29ccb8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ccb4) {
            ctx->pc = 0x29CCD8u;
            goto label_29ccd8;
        }
    }
    ctx->pc = 0x29CCBCu;
label_29ccbc:
    // 0x29ccbc: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x29ccbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x29ccc0: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x29ccc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29ccc4: 0x0  nop
    ctx->pc = 0x29ccc4u;
    // NOP
    // 0x29ccc8: 0x0  nop
    ctx->pc = 0x29ccc8u;
    // NOP
    // 0x29cccc: 0x0  nop
    ctx->pc = 0x29ccccu;
    // NOP
    // 0x29ccd0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29CCD0u;
    {
        const bool branch_taken_0x29ccd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ccd0) {
            ctx->pc = 0x29CCBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ccbc;
        }
    }
    ctx->pc = 0x29CCD8u;
label_29ccd8:
    // 0x29ccd8: 0xc0a733c  jal         func_29CCF0
    ctx->pc = 0x29CCD8u;
    SET_GPR_U32(ctx, 31, 0x29CCE0u);
    ctx->pc = 0x29CCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CCD8u;
            // 0x29ccdc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CCF0u;
    if (runtime->hasFunction(0x29CCF0u)) {
        auto targetFn = runtime->lookupFunction(0x29CCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CCE0u; }
        if (ctx->pc != 0x29CCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CCF0_0x29ccf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CCE0u; }
        if (ctx->pc != 0x29CCE0u) { return; }
    }
    ctx->pc = 0x29CCE0u;
label_29cce0:
    // 0x29cce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29cce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29cce4: 0x3e00008  jr          $ra
    ctx->pc = 0x29CCE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CCE4u;
            // 0x29cce8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CCECu;
    // 0x29ccec: 0x0  nop
    ctx->pc = 0x29ccecu;
    // NOP
}
