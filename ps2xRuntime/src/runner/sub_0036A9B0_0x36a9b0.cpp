#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036A9B0
// Address: 0x36a9b0 - 0x36aa10
void sub_0036A9B0_0x36a9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A9B0_0x36a9b0");
#endif

    switch (ctx->pc) {
        case 0x36a9d8u: goto label_36a9d8;
        default: break;
    }

    ctx->pc = 0x36a9b0u;

    // 0x36a9b0: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x36a9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x36a9b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36a9b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a9b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36a9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36a9bc: 0xa34021  addu        $t0, $a1, $v1
    ctx->pc = 0x36a9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x36a9c0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36a9c4: 0x8c655c30  lw          $a1, 0x5C30($v1)
    ctx->pc = 0x36a9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23600)));
    // 0x36a9c8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36a9cc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x36a9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x36a9d0: 0x24635c40  addiu       $v1, $v1, 0x5C40
    ctx->pc = 0x36a9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23616));
    // 0x36a9d4: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x36a9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_36a9d8:
    // 0x36a9d8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x36a9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36a9dc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36a9dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36a9e0: 0x127182b  sltu        $v1, $t1, $a3
    ctx->pc = 0x36a9e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x36a9e4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x36a9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x36a9e8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x36a9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x36a9ec: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x36a9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x36a9f0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x36A9F0u;
    {
        const bool branch_taken_0x36a9f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36A9F0u;
            // 0x36a9f4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a9f0) {
            ctx->pc = 0x36A9D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36a9d8;
        }
    }
    ctx->pc = 0x36A9F8u;
    // 0x36a9f8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x36a9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x36a9fc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36aa00: 0x8c845c30  lw          $a0, 0x5C30($a0)
    ctx->pc = 0x36aa00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 23600)));
    // 0x36aa04: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36aa08: 0x3e00008  jr          $ra
    ctx->pc = 0x36AA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36AA08u;
            // 0x36aa0c: 0xac645c30  sw          $a0, 0x5C30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 23600), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36AA10u;
}
