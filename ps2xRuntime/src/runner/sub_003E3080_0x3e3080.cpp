#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E3080
// Address: 0x3e3080 - 0x3e30f0
void sub_003E3080_0x3e3080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3080_0x3e3080");
#endif

    switch (ctx->pc) {
        case 0x3e30b8u: goto label_3e30b8;
        default: break;
    }

    ctx->pc = 0x3e3080u;

    // 0x3e3080: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e3080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3e3084: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3e3084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x3e3088: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x3e3088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x3e308c: 0x8ca60e80  lw          $a2, 0xE80($a1)
    ctx->pc = 0x3e308cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3712)));
    // 0x3e3090: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x3e3090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x3e3094: 0x8cc70788  lw          $a3, 0x788($a2)
    ctx->pc = 0x3e3094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1928)));
    // 0x3e3098: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3e3098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3e309c: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E309Cu;
    {
        const bool branch_taken_0x3e309c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x3E30A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E309Cu;
            // 0x3e30a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e309c) {
            ctx->pc = 0x3E30B0u;
            goto label_3e30b0;
        }
    }
    ctx->pc = 0x3E30A4u;
    // 0x3e30a4: 0x2ce10003  sltiu       $at, $a3, 0x3
    ctx->pc = 0x3e30a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e30a8: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x3E30A8u;
    {
        const bool branch_taken_0x3e30a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e30a8) {
            ctx->pc = 0x3E30DCu;
            goto label_3e30dc;
        }
    }
    ctx->pc = 0x3E30B0u;
label_3e30b0:
    // 0x3e30b0: 0x3c0800af  lui         $t0, 0xAF
    ctx->pc = 0x3e30b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)175 << 16));
    // 0x3e30b4: 0x25080e80  addiu       $t0, $t0, 0xE80
    ctx->pc = 0x3e30b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3712));
label_3e30b8:
    // 0x3e30b8: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x3e30b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3e30bc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3e30bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3e30c0: 0x8c8501e0  lw          $a1, 0x1E0($a0)
    ctx->pc = 0x3e30c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x3e30c4: 0x127182b  sltu        $v1, $t1, $a3
    ctx->pc = 0x3e30c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3e30c8: 0x8cc60d98  lw          $a2, 0xD98($a2)
    ctx->pc = 0x3e30c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3480)));
    // 0x3e30cc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3e30ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3e30d0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e30d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3e30d4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3E30D4u;
    {
        const bool branch_taken_0x3e30d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E30D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E30D4u;
            // 0x3e30d8: 0xa0a000b0  sb          $zero, 0xB0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e30d4) {
            ctx->pc = 0x3E30B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e30b8;
        }
    }
    ctx->pc = 0x3E30DCu;
label_3e30dc:
    // 0x3e30dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E30DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E30E4u;
    // 0x3e30e4: 0x0  nop
    ctx->pc = 0x3e30e4u;
    // NOP
    // 0x3e30e8: 0x0  nop
    ctx->pc = 0x3e30e8u;
    // NOP
    // 0x3e30ec: 0x0  nop
    ctx->pc = 0x3e30ecu;
    // NOP
}
