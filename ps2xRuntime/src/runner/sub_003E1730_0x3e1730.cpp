#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E1730
// Address: 0x3e1730 - 0x3e17b0
void sub_003E1730_0x3e1730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1730_0x3e1730");
#endif

    switch (ctx->pc) {
        case 0x3e1754u: goto label_3e1754;
        case 0x3e1780u: goto label_3e1780;
        default: break;
    }

    ctx->pc = 0x3e1730u;

    // 0x3e1730: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e1730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3e1734: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e1734u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1738: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x3e1738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x3e173c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e173cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3e1740: 0x8ca8077c  lw          $t0, 0x77C($a1)
    ctx->pc = 0x3e1740u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1916)));
    // 0x3e1744: 0x8c663e58  lw          $a2, 0x3E58($v1)
    ctx->pc = 0x3e1744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15960)));
    // 0x3e1748: 0x8ca70780  lw          $a3, 0x780($a1)
    ctx->pc = 0x3e1748u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1920)));
    // 0x3e174c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e174cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e1750: 0xc91821  addu        $v1, $a2, $t1
    ctx->pc = 0x3e1750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_3e1754:
    // 0x3e1754: 0x906300c0  lbu         $v1, 0xC0($v1)
    ctx->pc = 0x3e1754u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x3e1758: 0x10650012  beq         $v1, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E1758u;
    {
        const bool branch_taken_0x3e1758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3e1758) {
            ctx->pc = 0x3E17A4u;
            goto label_3e17a4;
        }
    }
    ctx->pc = 0x3E1760u;
    // 0x3e1760: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3e1760u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3e1764: 0x127182a  slt         $v1, $t1, $a3
    ctx->pc = 0x3e1764u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3e1768: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E1768u;
    {
        const bool branch_taken_0x3e1768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1768) {
            ctx->pc = 0x3E176Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1768u;
            // 0x3e176c: 0xc91821  addu        $v1, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E1754u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e1754;
        }
    }
    ctx->pc = 0x3E1770u;
    // 0x3e1770: 0x3c0900af  lui         $t1, 0xAF
    ctx->pc = 0x3e1770u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)175 << 16));
    // 0x3e1774: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e1774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1778: 0x25290e80  addiu       $t1, $t1, 0xE80
    ctx->pc = 0x3e1778u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3712));
    // 0x3e177c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3e177cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e1780:
    // 0x3e1780: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x3e1780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3e1784: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e1784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3e1788: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x3e1788u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3e178c: 0xaca60a70  sw          $a2, 0xA70($a1)
    ctx->pc = 0x3e178cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2672), GPR_U32(ctx, 6));
    // 0x3e1790: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x3e1790u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x3e1794: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E1794u;
    {
        const bool branch_taken_0x3e1794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1794) {
            ctx->pc = 0x3E1780u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e1780;
        }
    }
    ctx->pc = 0x3E179Cu;
    // 0x3e179c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3e179cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3e17a0: 0xac830060  sw          $v1, 0x60($a0)
    ctx->pc = 0x3e17a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
label_3e17a4:
    // 0x3e17a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E17A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E17ACu;
    // 0x3e17ac: 0x0  nop
    ctx->pc = 0x3e17acu;
    // NOP
}
