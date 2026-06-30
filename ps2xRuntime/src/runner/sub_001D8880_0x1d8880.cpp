#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8880
// Address: 0x1d8880 - 0x1d88d0
void sub_001D8880_0x1d8880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8880_0x1d8880");
#endif

    switch (ctx->pc) {
        case 0x1d88b4u: goto label_1d88b4;
        default: break;
    }

    ctx->pc = 0x1d8880u;

    // 0x1d8880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8884: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1d8884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1d8888: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d888c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d888cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8890: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d8890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8894: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d8894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8898: 0x8c650eb0  lw          $a1, 0xEB0($v1)
    ctx->pc = 0x1d8898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3760)));
    // 0x1d889c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D889Cu;
    {
        const bool branch_taken_0x1d889c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D88A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D889Cu;
            // 0x1d88a0: 0x24700eb0  addiu       $s0, $v1, 0xEB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d889c) {
            ctx->pc = 0x1D88B8u;
            goto label_1d88b8;
        }
    }
    ctx->pc = 0x1D88A4u;
    // 0x1d88a4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1d88a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1d88a8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x1d88a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x1d88ac: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x1D88ACu;
    SET_GPR_U32(ctx, 31, 0x1D88B4u);
    ctx->pc = 0x1D88B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D88ACu;
            // 0x1d88b0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D88B4u; }
        if (ctx->pc != 0x1D88B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D88B4u; }
        if (ctx->pc != 0x1D88B4u) { return; }
    }
    ctx->pc = 0x1D88B4u;
label_1d88b4:
    // 0x1d88b4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1d88b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1d88b8:
    // 0x1d88b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d88b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d88bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d88bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d88c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D88C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D88C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D88C0u;
            // 0x1d88c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D88C8u;
    // 0x1d88c8: 0x0  nop
    ctx->pc = 0x1d88c8u;
    // NOP
    // 0x1d88cc: 0x0  nop
    ctx->pc = 0x1d88ccu;
    // NOP
}
