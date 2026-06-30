#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5028
// Address: 0x1c5028 - 0x1c5108
void sub_001C5028_0x1c5028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5028_0x1c5028");
#endif

    switch (ctx->pc) {
        case 0x1c5044u: goto label_1c5044;
        default: break;
    }

    ctx->pc = 0x1c5028u;

    // 0x1c5028: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c502c: 0x10a3001c  beq         $a1, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C502Cu;
    {
        const bool branch_taken_0x1c502c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c502c) {
            ctx->pc = 0x1C50A0u;
            goto label_1c50a0;
        }
    }
    ctx->pc = 0x1C5034u;
    // 0x1c5034: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5034u;
    {
        const bool branch_taken_0x1c5034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5034u;
            // 0x1c5038: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5034) {
            ctx->pc = 0x1C5050u;
            goto label_1c5050;
        }
    }
    ctx->pc = 0x1C503Cu;
    // 0x1c503c: 0x10a20022  beq         $a1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C503Cu;
    {
        const bool branch_taken_0x1c503c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C503Cu;
            // 0x1c5040: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c503c) {
            ctx->pc = 0x1C50C8u;
            goto label_1c50c8;
        }
    }
    ctx->pc = 0x1C5044u;
label_1c5044:
    // 0x1c5044: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C504Cu;
    // 0x1c504c: 0x0  nop
    ctx->pc = 0x1c504cu;
    // NOP
label_1c5050:
    // 0x1c5050: 0x14c0000b  bnez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5050u;
    {
        const bool branch_taken_0x1c5050 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5050u;
            // 0x1c5054: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5050) {
            ctx->pc = 0x1C5080u;
            goto label_1c5080;
        }
    }
    ctx->pc = 0x1C5058u;
    // 0x1c5058: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c5058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c505c: 0x8c65a4d8  lw          $a1, -0x5B28($v1)
    ctx->pc = 0x1c505cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943960)));
    // 0x1c5060: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x1c5060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1c5064: 0x30830400  andi        $v1, $a0, 0x400
    ctx->pc = 0x1c5064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
    // 0x1c5068: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C5068u;
    {
        const bool branch_taken_0x1c5068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C506Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5068u;
            // 0x1c506c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5068) {
            ctx->pc = 0x1C5044u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5044;
        }
    }
    ctx->pc = 0x1C5070u;
    // 0x1c5070: 0x2402fbff  addiu       $v0, $zero, -0x401
    ctx->pc = 0x1c5070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x1c5074: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c5074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c5078: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x1c5078u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x1c507c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c507cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5080:
    // 0x1c5080: 0x54c2fff0  bnel        $a2, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C5080u;
    {
        const bool branch_taken_0x1c5080 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c5080) {
            ctx->pc = 0x1C5084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5080u;
            // 0x1c5084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5044u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5044;
        }
    }
    ctx->pc = 0x1C5088u;
    // 0x1c5088: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c5088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c508c: 0x8c44a4d8  lw          $a0, -0x5B28($v0)
    ctx->pc = 0x1c508cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943960)));
    // 0x1c5090: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1c5090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c5094: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x1c5094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x1c5098: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1C5098u;
    {
        const bool branch_taken_0x1c5098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C509Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5098u;
            // 0x1c509c: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5098) {
            ctx->pc = 0x1C50FCu;
            goto label_1c50fc;
        }
    }
    ctx->pc = 0x1C50A0u;
label_1c50a0:
    // 0x1c50a0: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C50A0u;
    {
        const bool branch_taken_0x1c50a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C50A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C50A0u;
            // 0x1c50a4: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50a0) {
            ctx->pc = 0x1C50C0u;
            goto label_1c50c0;
        }
    }
    ctx->pc = 0x1C50A8u;
    // 0x1c50a8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c50ac: 0x8c44a4d8  lw          $a0, -0x5B28($v0)
    ctx->pc = 0x1c50acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943960)));
    // 0x1c50b0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1c50b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c50b4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1c50b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1c50b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C50B8u;
    {
        const bool branch_taken_0x1c50b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C50BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C50B8u;
            // 0x1c50bc: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50b8) {
            ctx->pc = 0x1C50FCu;
            goto label_1c50fc;
        }
    }
    ctx->pc = 0x1C50C0u;
label_1c50c0:
    // 0x1c50c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C50C0u;
    {
        const bool branch_taken_0x1c50c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C50C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C50C0u;
            // 0x1c50c4: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50c0) {
            ctx->pc = 0x1C50ECu;
            goto label_1c50ec;
        }
    }
    ctx->pc = 0x1C50C8u;
label_1c50c8:
    // 0x1c50c8: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C50C8u;
    {
        const bool branch_taken_0x1c50c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C50CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C50C8u;
            // 0x1c50cc: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50c8) {
            ctx->pc = 0x1C50E8u;
            goto label_1c50e8;
        }
    }
    ctx->pc = 0x1C50D0u;
    // 0x1c50d0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c50d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c50d4: 0x8c44a4d8  lw          $a0, -0x5B28($v0)
    ctx->pc = 0x1c50d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943960)));
    // 0x1c50d8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1c50d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c50dc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1c50dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1c50e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C50E0u;
    {
        const bool branch_taken_0x1c50e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C50E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C50E0u;
            // 0x1c50e4: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50e0) {
            ctx->pc = 0x1C50FCu;
            goto label_1c50fc;
        }
    }
    ctx->pc = 0x1C50E8u;
label_1c50e8:
    // 0x1c50e8: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x1c50e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1c50ec:
    // 0x1c50ec: 0x8c64a4d8  lw          $a0, -0x5B28($v1)
    ctx->pc = 0x1c50ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943960)));
    // 0x1c50f0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1c50f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c50f4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1c50f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1c50f8: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1c50f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_1c50fc:
    // 0x1c50fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C50FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C50FCu;
            // 0x1c5100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5104u;
    // 0x1c5104: 0x0  nop
    ctx->pc = 0x1c5104u;
    // NOP
}
