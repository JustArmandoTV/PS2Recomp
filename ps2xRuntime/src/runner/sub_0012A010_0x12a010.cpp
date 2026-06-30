#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012A010
// Address: 0x12a010 - 0x12a090
void sub_0012A010_0x12a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A010_0x12a010");
#endif

    ctx->pc = 0x12a010u;

    // 0x12a010: 0x3c0fffff  lui         $t7, 0xFFFF
    ctx->pc = 0x12a010u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65535 << 16));
    // 0x12a014: 0x8f7824  and         $t7, $a0, $t7
    ctx->pc = 0x12a014u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) & GPR_U64(ctx, 15));
    // 0x12a018: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A018u;
    {
        const bool branch_taken_0x12a018 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A018u;
            // 0x12a01c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a018) {
            ctx->pc = 0x12A028u;
            goto label_12a028;
        }
    }
    ctx->pc = 0x12A020u;
    // 0x12a020: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x12a020u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12a024: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x12a024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_12a028:
    // 0x12a028: 0x3c0fff00  lui         $t7, 0xFF00
    ctx->pc = 0x12a028u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65280 << 16));
    // 0x12a02c: 0x8f7824  and         $t7, $a0, $t7
    ctx->pc = 0x12a02cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) & GPR_U64(ctx, 15));
    // 0x12a030: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A030u;
    {
        const bool branch_taken_0x12a030 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A030u;
            // 0x12a034: 0x3c0ff000  lui         $t7, 0xF000 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)61440 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a030) {
            ctx->pc = 0x12A040u;
            goto label_12a040;
        }
    }
    ctx->pc = 0x12A038u;
    // 0x12a038: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x12a038u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x12a03c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x12a03cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_12a040:
    // 0x12a040: 0x8f7824  and         $t7, $a0, $t7
    ctx->pc = 0x12a040u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) & GPR_U64(ctx, 15));
    // 0x12a044: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A044u;
    {
        const bool branch_taken_0x12a044 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A044u;
            // 0x12a048: 0x3c0fc000  lui         $t7, 0xC000 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)49152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a044) {
            ctx->pc = 0x12A054u;
            goto label_12a054;
        }
    }
    ctx->pc = 0x12A04Cu;
    // 0x12a04c: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x12a04cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x12a050: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x12a050u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_12a054:
    // 0x12a054: 0x8f7824  and         $t7, $a0, $t7
    ctx->pc = 0x12a054u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) & GPR_U64(ctx, 15));
    // 0x12a058: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A058u;
    {
        const bool branch_taken_0x12a058 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a058) {
            ctx->pc = 0x12A068u;
            goto label_12a068;
        }
    }
    ctx->pc = 0x12A060u;
    // 0x12a060: 0x25ce0002  addiu       $t6, $t6, 0x2
    ctx->pc = 0x12a060u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
    // 0x12a064: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x12a064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_12a068:
    // 0x12a068: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A068u;
    {
        const bool branch_taken_0x12a068 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x12A06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A068u;
            // 0x12a06c: 0x3c0f4000  lui         $t7, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a068) {
            ctx->pc = 0x12A080u;
            goto label_12a080;
        }
    }
    ctx->pc = 0x12A070u;
    // 0x12a070: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12a070u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12a074: 0x8f7824  and         $t7, $a0, $t7
    ctx->pc = 0x12a074u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) & GPR_U64(ctx, 15));
    // 0x12a078: 0x11e00002  beqz        $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x12A078u;
    {
        const bool branch_taken_0x12a078 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A078u;
            // 0x12a07c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a078) {
            ctx->pc = 0x12A084u;
            goto label_12a084;
        }
    }
    ctx->pc = 0x12A080u;
label_12a080:
    // 0x12a080: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x12a080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_12a084:
    // 0x12a084: 0x3e00008  jr          $ra
    ctx->pc = 0x12A084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A08Cu;
    // 0x12a08c: 0x0  nop
    ctx->pc = 0x12a08cu;
    // NOP
}
