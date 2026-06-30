#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177E20
// Address: 0x177e20 - 0x177e70
void sub_00177E20_0x177e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177E20_0x177e20");
#endif

    switch (ctx->pc) {
        case 0x177e50u: goto label_177e50;
        default: break;
    }

    ctx->pc = 0x177e20u;

    // 0x177e20: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x177e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x177e24: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x177E24u;
    {
        const bool branch_taken_0x177e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177E24u;
            // 0x177e28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e24) {
            ctx->pc = 0x177E48u;
            goto label_177e48;
        }
    }
    ctx->pc = 0x177E2Cu;
    // 0x177e2c: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x177e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x177e30: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x177e30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x177e34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177e38: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x177e38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x177e3c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x177e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x177e40: 0x3e00008  jr          $ra
    ctx->pc = 0x177E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177E40u;
            // 0x177e44: 0xac870020  sw          $a3, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177E48u;
label_177e48:
    // 0x177e48: 0x3e00008  jr          $ra
    ctx->pc = 0x177E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177E48u;
            // 0x177e4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177E50u;
label_177e50:
    // 0x177e50: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x177e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x177e54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x177E54u;
    {
        const bool branch_taken_0x177e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177E54u;
            // 0x177e58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e54) {
            ctx->pc = 0x177E64u;
            goto label_177e64;
        }
    }
    ctx->pc = 0x177E5Cu;
    // 0x177e5c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x177e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x177e60: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x177e60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_177e64:
    // 0x177e64: 0x3e00008  jr          $ra
    ctx->pc = 0x177E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177E6Cu;
    // 0x177e6c: 0x0  nop
    ctx->pc = 0x177e6cu;
    // NOP
}
