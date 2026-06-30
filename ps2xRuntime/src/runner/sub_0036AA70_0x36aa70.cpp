#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036AA70
// Address: 0x36aa70 - 0x36aad0
void sub_0036AA70_0x36aa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AA70_0x36aa70");
#endif

    switch (ctx->pc) {
        case 0x36aa98u: goto label_36aa98;
        default: break;
    }

    ctx->pc = 0x36aa70u;

    // 0x36aa70: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x36aa70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x36aa74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36aa74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aa78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36aa7c: 0xa34021  addu        $t0, $a1, $v1
    ctx->pc = 0x36aa7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x36aa80: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36aa84: 0x8c655410  lw          $a1, 0x5410($v1)
    ctx->pc = 0x36aa84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21520)));
    // 0x36aa88: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36aa8c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x36aa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x36aa90: 0x24635420  addiu       $v1, $v1, 0x5420
    ctx->pc = 0x36aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21536));
    // 0x36aa94: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x36aa94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_36aa98:
    // 0x36aa98: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x36aa98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36aa9c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36aa9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36aaa0: 0x127182b  sltu        $v1, $t1, $a3
    ctx->pc = 0x36aaa0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x36aaa4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x36aaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x36aaa8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x36aaa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x36aaac: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x36aaacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x36aab0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x36AAB0u;
    {
        const bool branch_taken_0x36aab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36AAB0u;
            // 0x36aab4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aab0) {
            ctx->pc = 0x36AA98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36aa98;
        }
    }
    ctx->pc = 0x36AAB8u;
    // 0x36aab8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x36aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x36aabc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36aac0: 0x8c845410  lw          $a0, 0x5410($a0)
    ctx->pc = 0x36aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 21520)));
    // 0x36aac4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36aac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36aac8: 0x3e00008  jr          $ra
    ctx->pc = 0x36AAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36AAC8u;
            // 0x36aacc: 0xac645410  sw          $a0, 0x5410($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 21520), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36AAD0u;
}
