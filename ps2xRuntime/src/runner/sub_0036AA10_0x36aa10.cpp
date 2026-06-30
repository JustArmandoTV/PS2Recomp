#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036AA10
// Address: 0x36aa10 - 0x36aa70
void sub_0036AA10_0x36aa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AA10_0x36aa10");
#endif

    switch (ctx->pc) {
        case 0x36aa38u: goto label_36aa38;
        default: break;
    }

    ctx->pc = 0x36aa10u;

    // 0x36aa10: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x36aa10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x36aa14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36aa14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aa18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36aa18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36aa1c: 0xa34021  addu        $t0, $a1, $v1
    ctx->pc = 0x36aa1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x36aa20: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36aa20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36aa24: 0x8c655820  lw          $a1, 0x5820($v1)
    ctx->pc = 0x36aa24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22560)));
    // 0x36aa28: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36aa2c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x36aa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x36aa30: 0x24635830  addiu       $v1, $v1, 0x5830
    ctx->pc = 0x36aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22576));
    // 0x36aa34: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x36aa34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_36aa38:
    // 0x36aa38: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x36aa38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36aa3c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36aa3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36aa40: 0x127182b  sltu        $v1, $t1, $a3
    ctx->pc = 0x36aa40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x36aa44: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x36aa44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x36aa48: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x36aa48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x36aa4c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x36aa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x36aa50: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x36AA50u;
    {
        const bool branch_taken_0x36aa50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36AA50u;
            // 0x36aa54: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aa50) {
            ctx->pc = 0x36AA38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36aa38;
        }
    }
    ctx->pc = 0x36AA58u;
    // 0x36aa58: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x36aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x36aa5c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36aa60: 0x8c845820  lw          $a0, 0x5820($a0)
    ctx->pc = 0x36aa60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22560)));
    // 0x36aa64: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36aa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36aa68: 0x3e00008  jr          $ra
    ctx->pc = 0x36AA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36AA68u;
            // 0x36aa6c: 0xac645820  sw          $a0, 0x5820($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22560), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36AA70u;
}
