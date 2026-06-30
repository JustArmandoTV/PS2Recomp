#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E80F0
// Address: 0x2e80f0 - 0x2e8140
void sub_002E80F0_0x2e80f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E80F0_0x2e80f0");
#endif

    switch (ctx->pc) {
        case 0x2e8108u: goto label_2e8108;
        default: break;
    }

    ctx->pc = 0x2e80f0u;

    // 0x2e80f0: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x2e80f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2e80f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e80f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e80f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e80f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e80fc: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x2e80fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
    // 0x2e8100: 0xa34021  addu        $t0, $a1, $v1
    ctx->pc = 0x2e8100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2e8104: 0x24c60f20  addiu       $a2, $a2, 0xF20
    ctx->pc = 0x2e8104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3872));
label_2e8108:
    // 0x2e8108: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x2e8108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e810c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2e810cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2e8110: 0x127182b  sltu        $v1, $t1, $a3
    ctx->pc = 0x2e8110u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e8114: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2e8114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e8118: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2e8118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2e811c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x2e811cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x2e8120: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E8120u;
    {
        const bool branch_taken_0x2e8120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8120u;
            // 0x2e8124: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8120) {
            ctx->pc = 0x2E8108u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8108;
        }
    }
    ctx->pc = 0x2E8128u;
    // 0x2e8128: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e8128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e812c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E812Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E812Cu;
            // 0x2e8130: 0xa4670ef8  sh          $a3, 0xEF8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 3832), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8134u;
    // 0x2e8134: 0x0  nop
    ctx->pc = 0x2e8134u;
    // NOP
    // 0x2e8138: 0x0  nop
    ctx->pc = 0x2e8138u;
    // NOP
    // 0x2e813c: 0x0  nop
    ctx->pc = 0x2e813cu;
    // NOP
}
