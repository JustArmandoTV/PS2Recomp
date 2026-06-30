#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CBA40
// Address: 0x4cba40 - 0x4cbaa0
void sub_004CBA40_0x4cba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CBA40_0x4cba40");
#endif

    switch (ctx->pc) {
        case 0x4cba4cu: goto label_4cba4c;
        default: break;
    }

    ctx->pc = 0x4cba40u;

    // 0x4cba40: 0x8ca90030  lw          $t1, 0x30($a1)
    ctx->pc = 0x4cba40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x4cba44: 0x8ca80028  lw          $t0, 0x28($a1)
    ctx->pc = 0x4cba44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x4cba48: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4cba48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4cba4c:
    // 0x4cba4c: 0x8c67c8a0  lw          $a3, -0x3760($v1)
    ctx->pc = 0x4cba4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953120)));
    // 0x4cba50: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4cba50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4cba54: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4cba54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cba58: 0xe03827  not         $a3, $a3
    ctx->pc = 0x4cba58u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 7) | GPR_U64(ctx, 0)));
    // 0x4cba5c: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4cba5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4cba60: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4cba60u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4cba64: 0x1500fff9  bnez        $t0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4CBA64u;
    {
        const bool branch_taken_0x4cba64 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CBA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBA64u;
            // 0x4cba68: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cba64) {
            ctx->pc = 0x4CBA4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4cba4c;
        }
    }
    ctx->pc = 0x4CBA6Cu;
    // 0x4cba6c: 0x80860068  lb          $a2, 0x68($a0)
    ctx->pc = 0x4cba6cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x4cba70: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4cba70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x4cba74: 0x8ca50030  lw          $a1, 0x30($a1)
    ctx->pc = 0x4cba74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x4cba78: 0x8c64c8a8  lw          $a0, -0x3758($v1)
    ctx->pc = 0x4cba78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953128)));
    // 0x4cba7c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x4cba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x4cba80: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4cba80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4cba84: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4cba84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4cba88: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4cba88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4cba8c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4cba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cba90: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4cba90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4cba94: 0x3e00008  jr          $ra
    ctx->pc = 0x4CBA94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CBA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBA94u;
            // 0x4cba98: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CBA9Cu;
    // 0x4cba9c: 0x0  nop
    ctx->pc = 0x4cba9cu;
    // NOP
}
