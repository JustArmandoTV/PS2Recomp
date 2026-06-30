#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125B28
// Address: 0x125b28 - 0x125c70
void sub_00125B28_0x125b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125B28_0x125b28");
#endif

    switch (ctx->pc) {
        case 0x125b54u: goto label_125b54;
        case 0x125b60u: goto label_125b60;
        case 0x125bb0u: goto label_125bb0;
        case 0x125bb8u: goto label_125bb8;
        case 0x125c40u: goto label_125c40;
        default: break;
    }

    ctx->pc = 0x125b28u;

    // 0x125b28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x125b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x125b2c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x125b2cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125b30: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x125b30u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125b34: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x125b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x125b38: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x125b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x125b3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125b40: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x125b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x125b44: 0xffaf0040  sd          $t7, 0x40($sp)
    ctx->pc = 0x125b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 15));
    // 0x125b48: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x125b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x125b4c: 0xc04955a  jal         func_125568
    ctx->pc = 0x125B4Cu;
    SET_GPR_U32(ctx, 31, 0x125B54u);
    ctx->pc = 0x125B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125B4Cu;
            // 0x125b50: 0xffae0048  sd          $t6, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125568u;
    if (runtime->hasFunction(0x125568u)) {
        auto targetFn = runtime->lookupFunction(0x125568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125B54u; }
        if (ctx->pc != 0x125B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125568_0x125568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125B54u; }
        if (ctx->pc != 0x125B54u) { return; }
    }
    ctx->pc = 0x125B54u;
label_125b54:
    // 0x125b54: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x125b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x125b58: 0xc04955a  jal         func_125568
    ctx->pc = 0x125B58u;
    SET_GPR_U32(ctx, 31, 0x125B60u);
    ctx->pc = 0x125B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125B58u;
            // 0x125b5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125568u;
    if (runtime->hasFunction(0x125568u)) {
        auto targetFn = runtime->lookupFunction(0x125568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125B60u; }
        if (ctx->pc != 0x125B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125568_0x125568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125B60u; }
        if (ctx->pc != 0x125B60u) { return; }
    }
    ctx->pc = 0x125B60u;
label_125b60:
    // 0x125b60: 0x8fac0000  lw          $t4, 0x0($sp)
    ctx->pc = 0x125b60u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125b64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x125b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125b68: 0x2d8f0002  sltiu       $t7, $t4, 0x2
    ctx->pc = 0x125b68u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x125b6c: 0x15e00010  bnez        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x125B6Cu;
    {
        const bool branch_taken_0x125b6c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125B6Cu;
            // 0x125b70: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b6c) {
            ctx->pc = 0x125BB0u;
            goto label_125bb0;
        }
    }
    ctx->pc = 0x125B74u;
    // 0x125b74: 0x8fab0020  lw          $t3, 0x20($sp)
    ctx->pc = 0x125b74u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125b78: 0x2d6f0002  sltiu       $t7, $t3, 0x2
    ctx->pc = 0x125b78u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x125b7c: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x125B7Cu;
    {
        const bool branch_taken_0x125b7c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125B7Cu;
            // 0x125b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b7c) {
            ctx->pc = 0x125BB0u;
            goto label_125bb0;
        }
    }
    ctx->pc = 0x125B84u;
    // 0x125b84: 0x8fae0004  lw          $t6, 0x4($sp)
    ctx->pc = 0x125b84u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x125b88: 0x398f0004  xori        $t7, $t4, 0x4
    ctx->pc = 0x125b88u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)4);
    // 0x125b8c: 0x8fad0024  lw          $t5, 0x24($sp)
    ctx->pc = 0x125b8cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x125b90: 0x1cd7026  xor         $t6, $t6, $t5
    ctx->pc = 0x125b90u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 13));
    // 0x125b94: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x125B94u;
    {
        const bool branch_taken_0x125b94 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125B94u;
            // 0x125b98: 0xafae0004  sw          $t6, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b94) {
            ctx->pc = 0x125BA8u;
            goto label_125ba8;
        }
    }
    ctx->pc = 0x125B9Cu;
    // 0x125b9c: 0x398f0002  xori        $t7, $t4, 0x2
    ctx->pc = 0x125b9cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)2);
    // 0x125ba0: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x125BA0u;
    {
        const bool branch_taken_0x125ba0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125BA0u;
            // 0x125ba4: 0x396f0004  xori        $t7, $t3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ba0) {
            ctx->pc = 0x125BD4u;
            goto label_125bd4;
        }
    }
    ctx->pc = 0x125BA8u;
label_125ba8:
    // 0x125ba8: 0x118b0007  beq         $t4, $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x125BA8u;
    {
        const bool branch_taken_0x125ba8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 11));
        ctx->pc = 0x125BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125BA8u;
            // 0x125bac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ba8) {
            ctx->pc = 0x125BC8u;
            goto label_125bc8;
        }
    }
    ctx->pc = 0x125BB0u;
label_125bb0:
    // 0x125bb0: 0xc049524  jal         func_125490
    ctx->pc = 0x125BB0u;
    SET_GPR_U32(ctx, 31, 0x125BB8u);
    ctx->pc = 0x125490u;
    if (runtime->hasFunction(0x125490u)) {
        auto targetFn = runtime->lookupFunction(0x125490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125BB8u; }
        if (ctx->pc != 0x125BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125490_0x125490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125BB8u; }
        if (ctx->pc != 0x125BB8u) { return; }
    }
    ctx->pc = 0x125BB8u;
label_125bb8:
    // 0x125bb8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x125bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x125bbc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x125bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x125BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125BC0u;
            // 0x125bc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125BC8u;
label_125bc8:
    // 0x125bc8: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x125bc8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x125bcc: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x125BCCu;
    {
        const bool branch_taken_0x125bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125BCCu;
            // 0x125bd0: 0x25e406d0  addiu       $a0, $t7, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 1744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125bcc) {
            ctx->pc = 0x125BB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125bb0;
        }
    }
    ctx->pc = 0x125BD4u;
label_125bd4:
    // 0x125bd4: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x125BD4u;
    {
        const bool branch_taken_0x125bd4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125BD4u;
            // 0x125bd8: 0x396f0002  xori        $t7, $t3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125bd4) {
            ctx->pc = 0x125BECu;
            goto label_125bec;
        }
    }
    ctx->pc = 0x125BDCu;
    // 0x125bdc: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x125bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x125be0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x125be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125be4: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x125BE4u;
    {
        const bool branch_taken_0x125be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125BE4u;
            // 0x125be8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125be4) {
            ctx->pc = 0x125BB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125bb0;
        }
    }
    ctx->pc = 0x125BECu;
label_125bec:
    // 0x125bec: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x125BECu;
    {
        const bool branch_taken_0x125bec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125BECu;
            // 0x125bf0: 0x8fae0008  lw          $t6, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125bec) {
            ctx->pc = 0x125C04u;
            goto label_125c04;
        }
    }
    ctx->pc = 0x125BF4u;
    // 0x125bf4: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x125bf4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x125bf8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x125bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125bfc: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x125BFCu;
    {
        const bool branch_taken_0x125bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125BFCu;
            // 0x125c00: 0xafaf0000  sw          $t7, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125bfc) {
            ctx->pc = 0x125BB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125bb0;
        }
    }
    ctx->pc = 0x125C04u;
label_125c04:
    // 0x125c04: 0xdfad0010  ld          $t5, 0x10($sp)
    ctx->pc = 0x125c04u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125c08: 0xdfab0030  ld          $t3, 0x30($sp)
    ctx->pc = 0x125c08u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125c0c: 0x8faf0028  lw          $t7, 0x28($sp)
    ctx->pc = 0x125c0cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125c10: 0x1ab602b  sltu        $t4, $t5, $t3
    ctx->pc = 0x125c10u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x125c14: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x125c14u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x125c18: 0x11800005  beqz        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x125C18u;
    {
        const bool branch_taken_0x125c18 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x125C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125C18u;
            // 0x125c1c: 0xafae0008  sw          $t6, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c18) {
            ctx->pc = 0x125C30u;
            goto label_125c30;
        }
    }
    ctx->pc = 0x125C20u;
    // 0x125c20: 0x25cfffff  addiu       $t7, $t6, -0x1
    ctx->pc = 0x125c20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x125c24: 0xd6878  dsll        $t5, $t5, 1
    ctx->pc = 0x125c24u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 1);
    // 0x125c28: 0xafaf0008  sw          $t7, 0x8($sp)
    ctx->pc = 0x125c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 15));
    // 0x125c2c: 0x1ab602b  sltu        $t4, $t5, $t3
    ctx->pc = 0x125c2cu;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_125c30:
    // 0x125c30: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x125c30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125c34: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x125c34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125c38: 0xe773c  dsll32      $t6, $t6, 28
    ctx->pc = 0x125c38u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 28));
    // 0x125c3c: 0x0  nop
    ctx->pc = 0x125c3cu;
    // NOP
label_125c40:
    // 0x125c40: 0x15800004  bnez        $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x125C40u;
    {
        const bool branch_taken_0x125c40 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x125C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125C40u;
            // 0x125c44: 0xd7878  dsll        $t7, $t5, 1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c40) {
            ctx->pc = 0x125C54u;
            goto label_125c54;
        }
    }
    ctx->pc = 0x125C48u;
    // 0x125c48: 0x1ab682f  dsubu       $t5, $t5, $t3
    ctx->pc = 0x125c48u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) - GPR_U64(ctx, 11));
    // 0x125c4c: 0x14e5025  or          $t2, $t2, $t6
    ctx->pc = 0x125c4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 14));
    // 0x125c50: 0xd7878  dsll        $t7, $t5, 1
    ctx->pc = 0x125c50u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) << 1);
label_125c54:
    // 0x125c54: 0xe707a  dsrl        $t6, $t6, 1
    ctx->pc = 0x125c54u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 1);
    // 0x125c58: 0x1e0682d  daddu       $t5, $t7, $zero
    ctx->pc = 0x125c58u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125c5c: 0x15c0fff8  bnez        $t6, . + 4 + (-0x8 << 2)
    ctx->pc = 0x125C5Cu;
    {
        const bool branch_taken_0x125c5c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x125C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125C5Cu;
            // 0x125c60: 0x1eb602b  sltu        $t4, $t7, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c5c) {
            ctx->pc = 0x125C40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125c40;
        }
    }
    ctx->pc = 0x125C64u;
    // 0x125c64: 0xfd2a0010  sd          $t2, 0x10($t1)
    ctx->pc = 0x125c64u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 16), GPR_U64(ctx, 10));
    // 0x125c68: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x125C68u;
    {
        const bool branch_taken_0x125c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125C68u;
            // 0x125c6c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c68) {
            ctx->pc = 0x125BB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125bb0;
        }
    }
    ctx->pc = 0x125C70u;
}
