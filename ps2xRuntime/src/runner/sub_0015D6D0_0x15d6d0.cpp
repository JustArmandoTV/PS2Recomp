#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D6D0
// Address: 0x15d6d0 - 0x15d730
void sub_0015D6D0_0x15d6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D6D0_0x15d6d0");
#endif

    switch (ctx->pc) {
        case 0x15d6d4u: goto label_15d6d4;
        default: break;
    }

    ctx->pc = 0x15d6d0u;

    // 0x15d6d0: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x15d6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_15d6d4:
    // 0x15d6d4: 0x8c62a000  lw          $v0, -0x6000($v1)
    ctx->pc = 0x15d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x15d6d8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x15d6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x15d6dc: 0x0  nop
    ctx->pc = 0x15d6dcu;
    // NOP
    // 0x15d6e0: 0x0  nop
    ctx->pc = 0x15d6e0u;
    // NOP
    // 0x15d6e4: 0x0  nop
    ctx->pc = 0x15d6e4u;
    // NOP
    // 0x15d6e8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15D6E8u;
    {
        const bool branch_taken_0x15d6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d6e8) {
            ctx->pc = 0x15D6D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15d6d4;
        }
    }
    ctx->pc = 0x15D6F0u;
    // 0x15d6f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x15d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15d6f4: 0x4293c  dsll32      $a1, $a0, 4
    ctx->pc = 0x15d6f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 4));
    // 0x15d6f8: 0xac62e010  sw          $v0, -0x1FF0($v1)
    ctx->pc = 0x15d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294959120), GPR_U32(ctx, 2));
    // 0x15d6fc: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x15d6fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x15d700: 0xac60a020  sw          $zero, -0x5FE0($v1)
    ctx->pc = 0x15d700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942752), GPR_U32(ctx, 0));
    // 0x15d704: 0xac65a030  sw          $a1, -0x5FD0($v1)
    ctx->pc = 0x15d704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942768), GPR_U32(ctx, 5));
    // 0x15d708: 0xf  sync
    ctx->pc = 0x15d708u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x15d70c: 0x24040185  addiu       $a0, $zero, 0x185
    ctx->pc = 0x15d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 389));
    // 0x15d710: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15d710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d714: 0xac64a000  sw          $a0, -0x6000($v1)
    ctx->pc = 0x15d714u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942720), GPR_U32(ctx, 4));
    // 0x15d718: 0x8f83844c  lw          $v1, -0x7BB4($gp)
    ctx->pc = 0x15d718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935628)));
    // 0x15d71c: 0xaf858448  sw          $a1, -0x7BB8($gp)
    ctx->pc = 0x15d71cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935624), GPR_U32(ctx, 5));
    // 0x15d720: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15d720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15d724: 0x3e00008  jr          $ra
    ctx->pc = 0x15D724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D724u;
            // 0x15d728: 0xaf83844c  sw          $v1, -0x7BB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D72Cu;
    // 0x15d72c: 0x0  nop
    ctx->pc = 0x15d72cu;
    // NOP
}
