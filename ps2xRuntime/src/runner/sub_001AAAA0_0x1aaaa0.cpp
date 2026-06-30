#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AAAA0
// Address: 0x1aaaa0 - 0x1aaaf0
void sub_001AAAA0_0x1aaaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAAA0_0x1aaaa0");
#endif

    switch (ctx->pc) {
        case 0x1aaac4u: goto label_1aaac4;
        default: break;
    }

    ctx->pc = 0x1aaaa0u;

    // 0x1aaaa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aaaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aaaa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aaaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aaaa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aaaa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaaac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1aaaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1aaab0: 0x8e033720  lw          $v1, 0x3720($s0)
    ctx->pc = 0x1aaab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14112)));
    // 0x1aaab4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AAAB4u;
    {
        const bool branch_taken_0x1aaab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAAB4u;
            // 0x1aaab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaab4) {
            ctx->pc = 0x1AAADCu;
            goto label_1aaadc;
        }
    }
    ctx->pc = 0x1AAABCu;
    // 0x1aaabc: 0xc06aabc  jal         func_1AAAF0
    ctx->pc = 0x1AAABCu;
    SET_GPR_U32(ctx, 31, 0x1AAAC4u);
    ctx->pc = 0x1AAAF0u;
    if (runtime->hasFunction(0x1AAAF0u)) {
        auto targetFn = runtime->lookupFunction(0x1AAAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAAC4u; }
        if (ctx->pc != 0x1AAAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AAAF0_0x1aaaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAAC4u; }
        if (ctx->pc != 0x1AAAC4u) { return; }
    }
    ctx->pc = 0x1AAAC4u;
label_1aaac4:
    // 0x1aaac4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AAAC4u;
    {
        const bool branch_taken_0x1aaac4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1aaac4) {
            ctx->pc = 0x1AAAC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAAC4u;
            // 0x1aaac8: 0x8e023720  lw          $v0, 0x3720($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AAAD8u;
            goto label_1aaad8;
        }
    }
    ctx->pc = 0x1AAACCu;
    // 0x1aaacc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AAACCu;
    {
        const bool branch_taken_0x1aaacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAACCu;
            // 0x1aaad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaacc) {
            ctx->pc = 0x1AAADCu;
            goto label_1aaadc;
        }
    }
    ctx->pc = 0x1AAAD4u;
    // 0x1aaad4: 0x0  nop
    ctx->pc = 0x1aaad4u;
    // NOP
label_1aaad8:
    // 0x1aaad8: 0x244208a0  addiu       $v0, $v0, 0x8A0
    ctx->pc = 0x1aaad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2208));
label_1aaadc:
    // 0x1aaadc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aaadcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aaae0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1aaae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aaae4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAAE4u;
            // 0x1aaae8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AAAECu;
    // 0x1aaaec: 0x0  nop
    ctx->pc = 0x1aaaecu;
    // NOP
}
