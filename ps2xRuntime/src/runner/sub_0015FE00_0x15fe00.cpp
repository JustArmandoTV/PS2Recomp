#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015FE00
// Address: 0x15fe00 - 0x15fe90
void sub_0015FE00_0x15fe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015FE00_0x15fe00");
#endif

    switch (ctx->pc) {
        case 0x15fe1cu: goto label_15fe1c;
        case 0x15fe58u: goto label_15fe58;
        default: break;
    }

    ctx->pc = 0x15fe00u;

    // 0x15fe00: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x15fe00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15fe04: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x15fe04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15fe08: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x15FE08u;
    {
        const bool branch_taken_0x15fe08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fe08) {
            ctx->pc = 0x15FE0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FE08u;
            // 0x15fe0c: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FE40u;
            goto label_15fe40;
        }
    }
    ctx->pc = 0x15FE10u;
    // 0x15fe10: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x15fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x15fe14: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x15FE14u;
    {
        const bool branch_taken_0x15fe14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fe14) {
            ctx->pc = 0x15FE38u;
            goto label_15fe38;
        }
    }
    ctx->pc = 0x15FE1Cu;
label_15fe1c:
    // 0x15fe1c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x15fe1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fe20: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x15fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15fe24: 0x0  nop
    ctx->pc = 0x15fe24u;
    // NOP
    // 0x15fe28: 0x0  nop
    ctx->pc = 0x15fe28u;
    // NOP
    // 0x15fe2c: 0x0  nop
    ctx->pc = 0x15fe2cu;
    // NOP
    // 0x15fe30: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15FE30u;
    {
        const bool branch_taken_0x15fe30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fe30) {
            ctx->pc = 0x15FE1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15fe1c;
        }
    }
    ctx->pc = 0x15FE38u;
label_15fe38:
    // 0x15fe38: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x15FE38u;
    {
        const bool branch_taken_0x15fe38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FE38u;
            // 0x15fe3c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fe38) {
            ctx->pc = 0x15FE88u;
            goto label_15fe88;
        }
    }
    ctx->pc = 0x15FE40u;
label_15fe40:
    // 0x15fe40: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x15fe40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15fe44: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x15fe44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x15fe48: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15fe4c: 0x14c3000a  bne         $a2, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15FE4Cu;
    {
        const bool branch_taken_0x15fe4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x15fe4c) {
            ctx->pc = 0x15FE78u;
            goto label_15fe78;
        }
    }
    ctx->pc = 0x15FE54u;
    // 0x15fe54: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x15fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_15fe58:
    // 0x15fe58: 0x653024  and         $a2, $v1, $a1
    ctx->pc = 0x15fe58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x15fe5c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x15fe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x15fe60: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x15fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15fe64: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x15fe64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x15fe68: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15fe6c: 0x50c3fffa  beql        $a2, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15FE6Cu;
    {
        const bool branch_taken_0x15fe6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x15fe6c) {
            ctx->pc = 0x15FE70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FE6Cu;
            // 0x15fe70: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FE58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15fe58;
        }
    }
    ctx->pc = 0x15FE74u;
    // 0x15fe74: 0x0  nop
    ctx->pc = 0x15fe74u;
    // NOP
label_15fe78:
    // 0x15fe78: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x15fe78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15fe7c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x15fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15fe80: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x15fe80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x15fe84: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x15fe84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_15fe88:
    // 0x15fe88: 0x3e00008  jr          $ra
    ctx->pc = 0x15FE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15FE90u;
}
