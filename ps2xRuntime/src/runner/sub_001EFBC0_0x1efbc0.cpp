#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EFBC0
// Address: 0x1efbc0 - 0x1efc10
void sub_001EFBC0_0x1efbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFBC0_0x1efbc0");
#endif

    switch (ctx->pc) {
        case 0x1efbd4u: goto label_1efbd4;
        default: break;
    }

    ctx->pc = 0x1efbc0u;

    // 0x1efbc0: 0x90870032  lbu         $a3, 0x32($a0)
    ctx->pc = 0x1efbc0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x1efbc4: 0x18e0000e  blez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x1EFBC4u;
    {
        const bool branch_taken_0x1efbc4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1EFBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFBC4u;
            // 0x1efbc8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efbc4) {
            ctx->pc = 0x1EFC00u;
            goto label_1efc00;
        }
    }
    ctx->pc = 0x1EFBCCu;
    // 0x1efbcc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1efbccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efbd0: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x1efbd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1efbd4:
    // 0x1efbd4: 0x95030036  lhu         $v1, 0x36($t0)
    ctx->pc = 0x1efbd4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 54)));
    // 0x1efbd8: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFBD8u;
    {
        const bool branch_taken_0x1efbd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1efbd8) {
            ctx->pc = 0x1EFBDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFBD8u;
            // 0x1efbdc: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFBF0u;
            goto label_1efbf0;
        }
    }
    ctx->pc = 0x1EFBE0u;
    // 0x1efbe0: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x1efbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1efbe4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1efbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1efbe8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFBE8u;
    {
        const bool branch_taken_0x1efbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFBE8u;
            // 0x1efbec: 0xa4650036  sh          $a1, 0x36($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efbe8) {
            ctx->pc = 0x1EFC00u;
            goto label_1efc00;
        }
    }
    ctx->pc = 0x1EFBF0u;
label_1efbf0:
    // 0x1efbf0: 0x127182a  slt         $v1, $t1, $a3
    ctx->pc = 0x1efbf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1efbf4: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1EFBF4u;
    {
        const bool branch_taken_0x1efbf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFBF4u;
            // 0x1efbf8: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efbf4) {
            ctx->pc = 0x1EFBD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1efbd4;
        }
    }
    ctx->pc = 0x1EFBFCu;
    // 0x1efbfc: 0x0  nop
    ctx->pc = 0x1efbfcu;
    // NOP
label_1efc00:
    // 0x1efc00: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFC00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EFC08u;
    // 0x1efc08: 0x0  nop
    ctx->pc = 0x1efc08u;
    // NOP
    // 0x1efc0c: 0x0  nop
    ctx->pc = 0x1efc0cu;
    // NOP
}
