#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018B0F8
// Address: 0x18b0f8 - 0x18b148
void sub_0018B0F8_0x18b0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B0F8_0x18b0f8");
#endif

    ctx->pc = 0x18b0f8u;

    // 0x18b0f8: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x18b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x18b0fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b100: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18B100u;
    {
        const bool branch_taken_0x18b100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18B104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B100u;
            // 0x18b104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b100) {
            ctx->pc = 0x18B124u;
            goto label_18b124;
        }
    }
    ctx->pc = 0x18B108u;
    // 0x18b108: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x18b108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x18b10c: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B10Cu;
    {
        const bool branch_taken_0x18b10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18b10c) {
            ctx->pc = 0x18B110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B10Cu;
            // 0x18b110: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B124u;
            goto label_18b124;
        }
    }
    ctx->pc = 0x18B114u;
    // 0x18b114: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18b114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18b118: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B118u;
    {
        const bool branch_taken_0x18b118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18b118) {
            ctx->pc = 0x18B11Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B118u;
            // 0x18b11c: 0x8c820134  lw          $v0, 0x134($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B130u;
            goto label_18b130;
        }
    }
    ctx->pc = 0x18B120u;
    // 0x18b120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b124:
    // 0x18b124: 0x3e00008  jr          $ra
    ctx->pc = 0x18B124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B124u;
            // 0x18b128: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B12Cu;
    // 0x18b12c: 0x0  nop
    ctx->pc = 0x18b12cu;
    // NOP
label_18b130:
    // 0x18b130: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B130u;
    {
        const bool branch_taken_0x18b130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18B134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B130u;
            // 0x18b134: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b130) {
            ctx->pc = 0x18B140u;
            goto label_18b140;
        }
    }
    ctx->pc = 0x18B138u;
    // 0x18b138: 0x3e00008  jr          $ra
    ctx->pc = 0x18B138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B138u;
            // 0x18b13c: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B140u;
label_18b140:
    // 0x18b140: 0x3e00008  jr          $ra
    ctx->pc = 0x18B140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B140u;
            // 0x18b144: 0xac850038  sw          $a1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B148u;
}
