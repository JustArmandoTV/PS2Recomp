#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8590
// Address: 0x1d8590 - 0x1d85d0
void sub_001D8590_0x1d8590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8590_0x1d8590");
#endif

    switch (ctx->pc) {
        case 0x1d85b8u: goto label_1d85b8;
        default: break;
    }

    ctx->pc = 0x1d8590u;

    // 0x1d8590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d8598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d859c: 0x8c851148  lw          $a1, 0x1148($a0)
    ctx->pc = 0x1d859cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4424)));
    // 0x1d85a0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D85A0u;
    {
        const bool branch_taken_0x1d85a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D85A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D85A0u;
            // 0x1d85a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85a0) {
            ctx->pc = 0x1D85BCu;
            goto label_1d85bc;
        }
    }
    ctx->pc = 0x1D85A8u;
    // 0x1d85a8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1d85a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1d85ac: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x1d85acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x1d85b0: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x1D85B0u;
    SET_GPR_U32(ctx, 31, 0x1D85B8u);
    ctx->pc = 0x1D85B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D85B0u;
            // 0x1d85b4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D85B8u; }
        if (ctx->pc != 0x1D85B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D85B8u; }
        if (ctx->pc != 0x1D85B8u) { return; }
    }
    ctx->pc = 0x1D85B8u;
label_1d85b8:
    // 0x1d85b8: 0xae001148  sw          $zero, 0x1148($s0)
    ctx->pc = 0x1d85b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4424), GPR_U32(ctx, 0));
label_1d85bc:
    // 0x1d85bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d85bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d85c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d85c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d85c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D85C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D85C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D85C4u;
            // 0x1d85c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D85CCu;
    // 0x1d85cc: 0x0  nop
    ctx->pc = 0x1d85ccu;
    // NOP
}
