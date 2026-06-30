#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034CF70
// Address: 0x34cf70 - 0x34cfd0
void sub_0034CF70_0x34cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034CF70_0x34cf70");
#endif

    switch (ctx->pc) {
        case 0x34cf98u: goto label_34cf98;
        default: break;
    }

    ctx->pc = 0x34cf70u;

    // 0x34cf70: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x34cf70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x34cf74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34cf74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cf78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34cf78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34cf7c: 0xa34021  addu        $t0, $a1, $v1
    ctx->pc = 0x34cf7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x34cf80: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x34cf80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x34cf84: 0x8c653ec0  lw          $a1, 0x3EC0($v1)
    ctx->pc = 0x34cf84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16064)));
    // 0x34cf88: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x34cf88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x34cf8c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x34cf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x34cf90: 0x24633ed0  addiu       $v1, $v1, 0x3ED0
    ctx->pc = 0x34cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16080));
    // 0x34cf94: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x34cf94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_34cf98:
    // 0x34cf98: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x34cf98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34cf9c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x34cf9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x34cfa0: 0x127182b  sltu        $v1, $t1, $a3
    ctx->pc = 0x34cfa0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x34cfa4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x34cfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x34cfa8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x34cfa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x34cfac: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x34cfacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x34cfb0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x34CFB0u;
    {
        const bool branch_taken_0x34cfb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34CFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34CFB0u;
            // 0x34cfb4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cfb0) {
            ctx->pc = 0x34CF98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34cf98;
        }
    }
    ctx->pc = 0x34CFB8u;
    // 0x34cfb8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x34cfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x34cfbc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x34cfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x34cfc0: 0x8c843ec0  lw          $a0, 0x3EC0($a0)
    ctx->pc = 0x34cfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16064)));
    // 0x34cfc4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x34cfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x34cfc8: 0x3e00008  jr          $ra
    ctx->pc = 0x34CFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34CFC8u;
            // 0x34cfcc: 0xac643ec0  sw          $a0, 0x3EC0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34CFD0u;
}
