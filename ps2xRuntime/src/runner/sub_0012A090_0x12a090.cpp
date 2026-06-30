#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012A090
// Address: 0x12a090 - 0x12a150
void sub_0012A090_0x12a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A090_0x12a090");
#endif

    switch (ctx->pc) {
        case 0x12a0bcu: goto label_12a0bc;
        case 0x12a0ccu: goto label_12a0cc;
        default: break;
    }

    ctx->pc = 0x12a090u;

    // 0x12a090: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x12a090u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12a094: 0x31cf0007  andi        $t7, $t6, 0x7
    ctx->pc = 0x12a094u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)7);
    // 0x12a098: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x12A098u;
    {
        const bool branch_taken_0x12a098 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A098u;
            // 0x12a09c: 0x31cf0001  andi        $t7, $t6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a098) {
            ctx->pc = 0x12A0D4u;
            goto label_12a0d4;
        }
    }
    ctx->pc = 0x12A0A0u;
    // 0x12a0a0: 0x15e0000a  bnez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x12A0A0u;
    {
        const bool branch_taken_0x12a0a0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A0A0u;
            // 0x12a0a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a0a0) {
            ctx->pc = 0x12A0CCu;
            goto label_12a0cc;
        }
    }
    ctx->pc = 0x12A0A8u;
    // 0x12a0a8: 0x31cf0002  andi        $t7, $t6, 0x2
    ctx->pc = 0x12a0a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2);
    // 0x12a0ac: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A0ACu;
    {
        const bool branch_taken_0x12a0ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A0ACu;
            // 0x12a0b0: 0xe7882  srl         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a0ac) {
            ctx->pc = 0x12A0C4u;
            goto label_12a0c4;
        }
    }
    ctx->pc = 0x12A0B4u;
    // 0x12a0b4: 0xe7842  srl         $t7, $t6, 1
    ctx->pc = 0x12a0b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
    // 0x12a0b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12a0bc:
    // 0x12a0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x12A0BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A0BCu;
            // 0x12a0c0: 0xac8f0000  sw          $t7, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A0C4u;
label_12a0c4:
    // 0x12a0c4: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x12A0C4u;
    {
        const bool branch_taken_0x12a0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A0C4u;
            // 0x12a0c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a0c4) {
            ctx->pc = 0x12A0BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a0bc;
        }
    }
    ctx->pc = 0x12A0CCu;
label_12a0cc:
    // 0x12a0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x12A0CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A0D4u;
label_12a0d4:
    // 0x12a0d4: 0x31cfffff  andi        $t7, $t6, 0xFFFF
    ctx->pc = 0x12a0d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
    // 0x12a0d8: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A0D8u;
    {
        const bool branch_taken_0x12a0d8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A0D8u;
            // 0x12a0dc: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a0d8) {
            ctx->pc = 0x12A0E8u;
            goto label_12a0e8;
        }
    }
    ctx->pc = 0x12A0E0u;
    // 0x12a0e0: 0x240d0010  addiu       $t5, $zero, 0x10
    ctx->pc = 0x12a0e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12a0e4: 0xe7402  srl         $t6, $t6, 16
    ctx->pc = 0x12a0e4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 16));
label_12a0e8:
    // 0x12a0e8: 0x31cf00ff  andi        $t7, $t6, 0xFF
    ctx->pc = 0x12a0e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x12a0ec: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A0ECu;
    {
        const bool branch_taken_0x12a0ec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A0ECu;
            // 0x12a0f0: 0x31cf000f  andi        $t7, $t6, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a0ec) {
            ctx->pc = 0x12A100u;
            goto label_12a100;
        }
    }
    ctx->pc = 0x12A0F4u;
    // 0x12a0f4: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x12a0f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x12a0f8: 0xe7202  srl         $t6, $t6, 8
    ctx->pc = 0x12a0f8u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 8));
    // 0x12a0fc: 0x31cf000f  andi        $t7, $t6, 0xF
    ctx->pc = 0x12a0fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
label_12a100:
    // 0x12a100: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A100u;
    {
        const bool branch_taken_0x12a100 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A100u;
            // 0x12a104: 0x31cf0003  andi        $t7, $t6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a100) {
            ctx->pc = 0x12A114u;
            goto label_12a114;
        }
    }
    ctx->pc = 0x12A108u;
    // 0x12a108: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x12a108u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x12a10c: 0xe7102  srl         $t6, $t6, 4
    ctx->pc = 0x12a10cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 4));
    // 0x12a110: 0x31cf0003  andi        $t7, $t6, 0x3
    ctx->pc = 0x12a110u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)3);
label_12a114:
    // 0x12a114: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A114u;
    {
        const bool branch_taken_0x12a114 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A114u;
            // 0x12a118: 0x31cf0001  andi        $t7, $t6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a114) {
            ctx->pc = 0x12A128u;
            goto label_12a128;
        }
    }
    ctx->pc = 0x12A11Cu;
    // 0x12a11c: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x12a11cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x12a120: 0xe7082  srl         $t6, $t6, 2
    ctx->pc = 0x12a120u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 2));
    // 0x12a124: 0x31cf0001  andi        $t7, $t6, 0x1
    ctx->pc = 0x12a124u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
label_12a128:
    // 0x12a128: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A128u;
    {
        const bool branch_taken_0x12a128 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a128) {
            ctx->pc = 0x12A12Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A128u;
            // 0x12a12c: 0xac8e0000  sw          $t6, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A144u;
            goto label_12a144;
        }
    }
    ctx->pc = 0x12A130u;
    // 0x12a130: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x12a130u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x12a134: 0xe7042  srl         $t6, $t6, 1
    ctx->pc = 0x12a134u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
    // 0x12a138: 0x11c0ffe4  beqz        $t6, . + 4 + (-0x1C << 2)
    ctx->pc = 0x12A138u;
    {
        const bool branch_taken_0x12a138 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A138u;
            // 0x12a13c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a138) {
            ctx->pc = 0x12A0CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a0cc;
        }
    }
    ctx->pc = 0x12A140u;
    // 0x12a140: 0xac8e0000  sw          $t6, 0x0($a0)
    ctx->pc = 0x12a140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 14));
label_12a144:
    // 0x12a144: 0x3e00008  jr          $ra
    ctx->pc = 0x12A144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A144u;
            // 0x12a148: 0x1a0102d  daddu       $v0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A14Cu;
    // 0x12a14c: 0x0  nop
    ctx->pc = 0x12a14cu;
    // NOP
}
