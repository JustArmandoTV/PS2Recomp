#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E8000
// Address: 0x2e8000 - 0x2e8050
void sub_002E8000_0x2e8000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8000_0x2e8000");
#endif

    switch (ctx->pc) {
        case 0x2e8018u: goto label_2e8018;
        default: break;
    }

    ctx->pc = 0x2e8000u;

    // 0x2e8000: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x2e8000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2e8004: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e8004u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8008: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e8008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e800c: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x2e800cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
    // 0x2e8010: 0xa34021  addu        $t0, $a1, $v1
    ctx->pc = 0x2e8010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2e8014: 0x24c61310  addiu       $a2, $a2, 0x1310
    ctx->pc = 0x2e8014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4880));
label_2e8018:
    // 0x2e8018: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x2e8018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e801c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2e801cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2e8020: 0x127182b  sltu        $v1, $t1, $a3
    ctx->pc = 0x2e8020u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e8024: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2e8024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e8028: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2e8028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2e802c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x2e802cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x2e8030: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E8030u;
    {
        const bool branch_taken_0x2e8030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8030u;
            // 0x2e8034: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8030) {
            ctx->pc = 0x2E8018u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8018;
        }
    }
    ctx->pc = 0x2E8038u;
    // 0x2e8038: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e8038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e803c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E803Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E803Cu;
            // 0x2e8040: 0xa4670f10  sh          $a3, 0xF10($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 3856), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8044u;
    // 0x2e8044: 0x0  nop
    ctx->pc = 0x2e8044u;
    // NOP
    // 0x2e8048: 0x0  nop
    ctx->pc = 0x2e8048u;
    // NOP
    // 0x2e804c: 0x0  nop
    ctx->pc = 0x2e804cu;
    // NOP
}
