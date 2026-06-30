#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00164EF0
// Address: 0x164ef0 - 0x164f40
void sub_00164EF0_0x164ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164EF0_0x164ef0");
#endif

    switch (ctx->pc) {
        case 0x164ef8u: goto label_164ef8;
        case 0x164f00u: goto label_164f00;
        case 0x164f08u: goto label_164f08;
        case 0x164f10u: goto label_164f10;
        case 0x164f18u: goto label_164f18;
        case 0x164f30u: goto label_164f30;
        case 0x164f38u: goto label_164f38;
        default: break;
    }

    ctx->pc = 0x164ef0u;

    // 0x164ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x164EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164EF0u;
            // 0x164ef4: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164EF8u;
label_164ef8:
    // 0x164ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x164EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164EF8u;
            // 0x164efc: 0x8482001c  lh          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164F00u;
label_164f00:
    // 0x164f00: 0x3e00008  jr          $ra
    ctx->pc = 0x164F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164F00u;
            // 0x164f04: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164F08u;
label_164f08:
    // 0x164f08: 0x3e00008  jr          $ra
    ctx->pc = 0x164F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164F08u;
            // 0x164f0c: 0x84820024  lh          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164F10u;
label_164f10:
    // 0x164f10: 0x3e00008  jr          $ra
    ctx->pc = 0x164F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164F10u;
            // 0x164f14: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164F18u;
label_164f18:
    // 0x164f18: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x164F18u;
    {
        const bool branch_taken_0x164f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x164F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164F18u;
            // 0x164f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f18) {
            ctx->pc = 0x164F24u;
            goto label_164f24;
        }
    }
    ctx->pc = 0x164F20u;
    // 0x164f20: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x164f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_164f24:
    // 0x164f24: 0x3e00008  jr          $ra
    ctx->pc = 0x164F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164F2Cu;
    // 0x164f2c: 0x0  nop
    ctx->pc = 0x164f2cu;
    // NOP
label_164f30:
    // 0x164f30: 0x3e00008  jr          $ra
    ctx->pc = 0x164F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164F30u;
            // 0x164f34: 0x8c820030  lw          $v0, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164F38u;
label_164f38:
    // 0x164f38: 0x3e00008  jr          $ra
    ctx->pc = 0x164F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164F38u;
            // 0x164f3c: 0x8c820034  lw          $v0, 0x34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164F40u;
}
