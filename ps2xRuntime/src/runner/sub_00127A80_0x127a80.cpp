#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00127A80
// Address: 0x127a80 - 0x127b90
void sub_00127A80_0x127a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127A80_0x127a80");
#endif

    switch (ctx->pc) {
        case 0x127ae8u: goto label_127ae8;
        case 0x127af8u: goto label_127af8;
        case 0x127b10u: goto label_127b10;
        case 0x127b38u: goto label_127b38;
        case 0x127b54u: goto label_127b54;
        default: break;
    }

    ctx->pc = 0x127a80u;

    // 0x127a80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x127a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x127a84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x127a84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x127a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x127a8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x127a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x127a90: 0xc59018  mult        $s2, $a2, $a1
    ctx->pc = 0x127a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x127a94: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x127a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x127a98: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x127a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x127a9c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x127a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127aa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127aa4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x127aa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127aa8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x127aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x127aac: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x127aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x127ab0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x127ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x127ab4: 0x12400027  beqz        $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x127AB4u;
    {
        const bool branch_taken_0x127ab4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x127AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127AB4u;
            // 0x127ab8: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ab4) {
            ctx->pc = 0x127B54u;
            goto label_127b54;
        }
    }
    ctx->pc = 0x127ABCu;
    // 0x127abc: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x127abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x127ac0: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x127AC0u;
    {
        const bool branch_taken_0x127ac0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x127AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127AC0u;
            // 0x127ac4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ac0) {
            ctx->pc = 0x127AD4u;
            goto label_127ad4;
        }
    }
    ctx->pc = 0x127AC8u;
    // 0x127ac8: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x127ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x127acc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x127accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ad0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x127ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_127ad4:
    // 0x127ad4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x127ad4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ad8: 0xd2782b  sltu        $t7, $a2, $s2
    ctx->pc = 0x127ad8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x127adc: 0x11e00012  beqz        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x127ADCu;
    {
        const bool branch_taken_0x127adc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x127AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127ADCu;
            // 0x127ae0: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127adc) {
            ctx->pc = 0x127B28u;
            goto label_127b28;
        }
    }
    ctx->pc = 0x127AE4u;
    // 0x127ae4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x127ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_127ae8:
    // 0x127ae8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x127ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127aec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x127aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127af0: 0xc04a508  jal         func_129420
    ctx->pc = 0x127AF0u;
    SET_GPR_U32(ctx, 31, 0x127AF8u);
    ctx->pc = 0x127AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127AF0u;
            // 0x127af4: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127AF8u; }
        if (ctx->pc != 0x127AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127AF8u; }
        if (ctx->pc != 0x127AF8u) { return; }
    }
    ctx->pc = 0x127AF8u;
label_127af8:
    // 0x127af8: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x127af8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x127afc: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x127afcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x127b00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x127b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b04: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x127b04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x127b08: 0xc04ad04  jal         func_12B410
    ctx->pc = 0x127B08u;
    SET_GPR_U32(ctx, 31, 0x127B10u);
    ctx->pc = 0x127B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127B08u;
            // 0x127b0c: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B410u;
    if (runtime->hasFunction(0x12B410u)) {
        auto targetFn = runtime->lookupFunction(0x12B410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B10u; }
        if (ctx->pc != 0x127B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B410_0x12b410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B10u; }
        if (ctx->pc != 0x127B10u) { return; }
    }
    ctx->pc = 0x127B10u;
label_127b10:
    // 0x127b10: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x127B10u;
    {
        const bool branch_taken_0x127b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127B10u;
            // 0x127b14: 0x2d27823  subu        $t7, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b10) {
            ctx->pc = 0x127B7Cu;
            goto label_127b7c;
        }
    }
    ctx->pc = 0x127B18u;
    // 0x127b18: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x127b18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x127b1c: 0x212782b  sltu        $t7, $s0, $s2
    ctx->pc = 0x127b1cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x127b20: 0x55e0fff1  bnel        $t7, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x127B20u;
    {
        const bool branch_taken_0x127b20 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x127b20) {
            ctx->pc = 0x127B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127B20u;
            // 0x127b24: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127AE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127ae8;
        }
    }
    ctx->pc = 0x127B28u;
label_127b28:
    // 0x127b28: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x127b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x127b2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x127b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b30: 0xc04a508  jal         func_129420
    ctx->pc = 0x127B30u;
    SET_GPR_U32(ctx, 31, 0x127B38u);
    ctx->pc = 0x127B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127B30u;
            // 0x127b34: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B38u; }
        if (ctx->pc != 0x127B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B38u; }
        if (ctx->pc != 0x127B38u) { return; }
    }
    ctx->pc = 0x127B38u;
label_127b38:
    // 0x127b38: 0x8e2e0004  lw          $t6, 0x4($s1)
    ctx->pc = 0x127b38u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x127b3c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x127b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b40: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x127b40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x127b44: 0x1d27023  subu        $t6, $t6, $s2
    ctx->pc = 0x127b44u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
    // 0x127b48: 0x1f27821  addu        $t7, $t7, $s2
    ctx->pc = 0x127b48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x127b4c: 0xae2e0004  sw          $t6, 0x4($s1)
    ctx->pc = 0x127b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
    // 0x127b50: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x127b50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_127b54:
    // 0x127b54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127b58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x127b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127b5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x127b5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127b60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x127b60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127b64: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x127b64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127b68: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x127b68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x127b6c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x127b6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127b70: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x127b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x127b74: 0x3e00008  jr          $ra
    ctx->pc = 0x127B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127B74u;
            // 0x127b78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x127B7Cu;
label_127b7c:
    // 0x127b7c: 0x1f4001b  divu        $zero, $t7, $s4
    ctx->pc = 0x127b7cu;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x127b80: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x127B80u;
    {
        const bool branch_taken_0x127b80 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x127b80) {
            ctx->pc = 0x127B84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127B80u;
            // 0x127b84: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x127B88u;
            goto label_127b88;
        }
    }
    ctx->pc = 0x127B88u;
label_127b88:
    // 0x127b88: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x127B88u;
    {
        const bool branch_taken_0x127b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127B88u;
            // 0x127b8c: 0x1012  mflo        $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ctx->lo);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b88) {
            ctx->pc = 0x127B54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127b54;
        }
    }
    ctx->pc = 0x127B90u;
}
