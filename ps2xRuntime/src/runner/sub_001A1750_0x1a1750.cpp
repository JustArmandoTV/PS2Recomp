#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1750
// Address: 0x1a1750 - 0x1a1798
void sub_001A1750_0x1a1750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1750_0x1a1750");
#endif

    switch (ctx->pc) {
        case 0x1a1768u: goto label_1a1768;
        default: break;
    }

    ctx->pc = 0x1a1750u;

    // 0x1a1750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a1758: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a175c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a175cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a1760: 0xc0685c8  jal         func_1A1720
    ctx->pc = 0x1A1760u;
    SET_GPR_U32(ctx, 31, 0x1A1768u);
    ctx->pc = 0x1A1764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1760u;
            // 0x1a1764: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1720u;
    if (runtime->hasFunction(0x1A1720u)) {
        auto targetFn = runtime->lookupFunction(0x1A1720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1768u; }
        if (ctx->pc != 0x1A1768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1720_0x1a1720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1768u; }
        if (ctx->pc != 0x1A1768u) { return; }
    }
    ctx->pc = 0x1A1768u;
label_1a1768:
    // 0x1a1768: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1768u;
    {
        const bool branch_taken_0x1a1768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A176Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1768u;
            // 0x1a176c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1768) {
            ctx->pc = 0x1A1784u;
            goto label_1a1784;
        }
    }
    ctx->pc = 0x1A1770u;
    // 0x1a1770: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a1770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1774: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1774u;
    {
        const bool branch_taken_0x1a1774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A1778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1774u;
            // 0x1a1778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1774) {
            ctx->pc = 0x1A1784u;
            goto label_1a1784;
        }
    }
    ctx->pc = 0x1A177Cu;
    // 0x1a177c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1a177cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a1780: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a1780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a1784:
    // 0x1a1784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1788: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a1788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a178c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A178Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A178Cu;
            // 0x1a1790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1794u;
    // 0x1a1794: 0x0  nop
    ctx->pc = 0x1a1794u;
    // NOP
}
