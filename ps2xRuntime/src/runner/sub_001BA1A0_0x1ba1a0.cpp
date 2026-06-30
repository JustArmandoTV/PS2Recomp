#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA1A0
// Address: 0x1ba1a0 - 0x1ba1e8
void sub_001BA1A0_0x1ba1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA1A0_0x1ba1a0");
#endif

    switch (ctx->pc) {
        case 0x1ba1b4u: goto label_1ba1b4;
        default: break;
    }

    ctx->pc = 0x1ba1a0u;

    // 0x1ba1a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba1a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba1a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ba1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ba1ac: 0xc06e87a  jal         func_1BA1E8
    ctx->pc = 0x1BA1ACu;
    SET_GPR_U32(ctx, 31, 0x1BA1B4u);
    ctx->pc = 0x1BA1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA1ACu;
            // 0x1ba1b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA1E8u;
    if (runtime->hasFunction(0x1BA1E8u)) {
        auto targetFn = runtime->lookupFunction(0x1BA1E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1B4u; }
        if (ctx->pc != 0x1BA1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA1E8_0x1ba1e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1B4u; }
        if (ctx->pc != 0x1BA1B4u) { return; }
    }
    ctx->pc = 0x1BA1B4u;
label_1ba1b4:
    // 0x1ba1b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA1B4u;
    {
        const bool branch_taken_0x1ba1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA1B4u;
            // 0x1ba1b8: 0x2404006b  addiu       $a0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba1b4) {
            ctx->pc = 0x1BA1D4u;
            goto label_1ba1d4;
        }
    }
    ctx->pc = 0x1BA1BCu;
    // 0x1ba1bc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ba1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ba1c0: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA1C0u;
    {
        const bool branch_taken_0x1ba1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1BA1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA1C0u;
            // 0x1ba1c4: 0x2843006e  slti        $v1, $v0, 0x6E (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)110) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba1c0) {
            ctx->pc = 0x1BA1D0u;
            goto label_1ba1d0;
        }
    }
    ctx->pc = 0x1BA1C8u;
    // 0x1ba1c8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA1C8u;
    {
        const bool branch_taken_0x1ba1c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA1C8u;
            // 0x1ba1cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba1c8) {
            ctx->pc = 0x1BA1D4u;
            goto label_1ba1d4;
        }
    }
    ctx->pc = 0x1BA1D0u;
label_1ba1d0:
    // 0x1ba1d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba1d4:
    // 0x1ba1d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba1d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba1d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ba1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA1DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA1DCu;
            // 0x1ba1e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA1E4u;
    // 0x1ba1e4: 0x0  nop
    ctx->pc = 0x1ba1e4u;
    // NOP
}
