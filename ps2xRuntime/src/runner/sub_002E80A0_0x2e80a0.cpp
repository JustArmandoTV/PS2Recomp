#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E80A0
// Address: 0x2e80a0 - 0x2e80f0
void sub_002E80A0_0x2e80a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E80A0_0x2e80a0");
#endif

    switch (ctx->pc) {
        case 0x2e80b8u: goto label_2e80b8;
        default: break;
    }

    ctx->pc = 0x2e80a0u;

    // 0x2e80a0: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x2e80a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2e80a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e80a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e80a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e80a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e80ac: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x2e80acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
    // 0x2e80b0: 0xa34021  addu        $t0, $a1, $v1
    ctx->pc = 0x2e80b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2e80b4: 0x24c610b0  addiu       $a2, $a2, 0x10B0
    ctx->pc = 0x2e80b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4272));
label_2e80b8:
    // 0x2e80b8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x2e80b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e80bc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2e80bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2e80c0: 0x127182b  sltu        $v1, $t1, $a3
    ctx->pc = 0x2e80c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e80c4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2e80c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e80c8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2e80c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2e80cc: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x2e80ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x2e80d0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E80D0u;
    {
        const bool branch_taken_0x2e80d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E80D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E80D0u;
            // 0x2e80d4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80d0) {
            ctx->pc = 0x2E80B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e80b8;
        }
    }
    ctx->pc = 0x2E80D8u;
    // 0x2e80d8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e80d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e80dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E80DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E80E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E80DCu;
            // 0x2e80e0: 0xa4670f00  sh          $a3, 0xF00($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 3840), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E80E4u;
    // 0x2e80e4: 0x0  nop
    ctx->pc = 0x2e80e4u;
    // NOP
    // 0x2e80e8: 0x0  nop
    ctx->pc = 0x2e80e8u;
    // NOP
    // 0x2e80ec: 0x0  nop
    ctx->pc = 0x2e80ecu;
    // NOP
}
