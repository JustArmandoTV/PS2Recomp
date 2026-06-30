#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C7678
// Address: 0x1c7678 - 0x1c76b8
void sub_001C7678_0x1c7678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7678_0x1c7678");
#endif

    ctx->pc = 0x1c7678u;

    // 0x1c7678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c767c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c767cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7680: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C7680u;
    {
        const bool branch_taken_0x1c7680 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7680u;
            // 0x1c7684: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7680) {
            ctx->pc = 0x1C76A8u;
            goto label_1c76a8;
        }
    }
    ctx->pc = 0x1C7688u;
    // 0x1c7688: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1c7688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1c768c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C768Cu;
    {
        const bool branch_taken_0x1c768c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C768Cu;
            // 0x1c7690: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c768c) {
            ctx->pc = 0x1C76A0u;
            goto label_1c76a0;
        }
    }
    ctx->pc = 0x1C7694u;
    // 0x1c7694: 0x8071d5e  j           func_1C7578
    ctx->pc = 0x1C7694u;
    ctx->pc = 0x1C7698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7694u;
            // 0x1c7698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7578u;
    {
        auto targetFn = runtime->lookupFunction(0x1C7578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C769Cu;
    // 0x1c769c: 0x0  nop
    ctx->pc = 0x1c769cu;
    // NOP
label_1c76a0:
    // 0x1c76a0: 0x8071cfa  j           func_1C73E8
    ctx->pc = 0x1C76A0u;
    ctx->pc = 0x1C76A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C76A0u;
            // 0x1c76a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C73E8u;
    {
        auto targetFn = runtime->lookupFunction(0x1C73E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C76A8u;
label_1c76a8:
    // 0x1c76a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c76a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c76ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C76ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C76B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C76ACu;
            // 0x1c76b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C76B4u;
    // 0x1c76b4: 0x0  nop
    ctx->pc = 0x1c76b4u;
    // NOP
}
