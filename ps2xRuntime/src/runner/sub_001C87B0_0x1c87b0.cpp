#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C87B0
// Address: 0x1c87b0 - 0x1c8808
void sub_001C87B0_0x1c87b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C87B0_0x1c87b0");
#endif

    switch (ctx->pc) {
        case 0x1c87c0u: goto label_1c87c0;
        default: break;
    }

    ctx->pc = 0x1c87b0u;

    // 0x1c87b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c87b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c87b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c87b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c87b8: 0xc0721e8  jal         func_1C87A0
    ctx->pc = 0x1C87B8u;
    SET_GPR_U32(ctx, 31, 0x1C87C0u);
    ctx->pc = 0x1C87A0u;
    if (runtime->hasFunction(0x1C87A0u)) {
        auto targetFn = runtime->lookupFunction(0x1C87A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87C0u; }
        if (ctx->pc != 0x1C87C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C87A0_0x1c87a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87C0u; }
        if (ctx->pc != 0x1C87C0u) { return; }
    }
    ctx->pc = 0x1C87C0u;
label_1c87c0:
    // 0x1c87c0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c87c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1c87c4: 0x3c05006e  lui         $a1, 0x6E
    ctx->pc = 0x1c87c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)110 << 16));
    // 0x1c87c8: 0x2484a6c4  addiu       $a0, $a0, -0x593C
    ctx->pc = 0x1c87c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944452));
    // 0x1c87cc: 0x24a53058  addiu       $a1, $a1, 0x3058
    ctx->pc = 0x1c87ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12376));
    // 0x1c87d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c87d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c87d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c87d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c87d8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1c87d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1c87dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c87dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c87e0: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C87E0u;
    {
        const bool branch_taken_0x1c87e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1C87E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C87E0u;
            // 0x1c87e4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c87e0) {
            ctx->pc = 0x1C87F8u;
            goto label_1c87f8;
        }
    }
    ctx->pc = 0x1C87E8u;
    // 0x1c87e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c87e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c87ec: 0x8071fc4  j           func_1C7F10
    ctx->pc = 0x1C87ECu;
    ctx->pc = 0x1C87F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C87ECu;
            // 0x1c87f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7F10u;
    if (runtime->hasFunction(0x1C7F10u)) {
        auto targetFn = runtime->lookupFunction(0x1C7F10u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C7F10_0x1c7f10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C87F4u;
    // 0x1c87f4: 0x0  nop
    ctx->pc = 0x1c87f4u;
    // NOP
label_1c87f8:
    // 0x1c87f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c87f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c87fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C87FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C87FCu;
            // 0x1c8800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8804u;
    // 0x1c8804: 0x0  nop
    ctx->pc = 0x1c8804u;
    // NOP
}
