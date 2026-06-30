#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016AE18
// Address: 0x16ae18 - 0x16aec0
void sub_0016AE18_0x16ae18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AE18_0x16ae18");
#endif

    switch (ctx->pc) {
        case 0x16ae38u: goto label_16ae38;
        case 0x16ae40u: goto label_16ae40;
        case 0x16ae48u: goto label_16ae48;
        case 0x16ae58u: goto label_16ae58;
        case 0x16ae94u: goto label_16ae94;
        case 0x16aea0u: goto label_16aea0;
        case 0x16aea8u: goto label_16aea8;
        default: break;
    }

    ctx->pc = 0x16ae18u;

    // 0x16ae18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ae18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ae1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ae1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ae20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16ae20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16ae24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16ae28: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x16ae28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ae2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16AE2Cu;
    {
        const bool branch_taken_0x16ae2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE2Cu;
            // 0x16ae30: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae2c) {
            ctx->pc = 0x16AE40u;
            goto label_16ae40;
        }
    }
    ctx->pc = 0x16AE34u;
    // 0x16ae34: 0x0  nop
    ctx->pc = 0x16ae34u;
    // NOP
label_16ae38:
    // 0x16ae38: 0xc05adda  jal         func_16B768
    ctx->pc = 0x16AE38u;
    SET_GPR_U32(ctx, 31, 0x16AE40u);
    ctx->pc = 0x16B768u;
    if (runtime->hasFunction(0x16B768u)) {
        auto targetFn = runtime->lookupFunction(0x16B768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE40u; }
        if (ctx->pc != 0x16AE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B768_0x16b768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE40u; }
        if (ctx->pc != 0x16AE40u) { return; }
    }
    ctx->pc = 0x16AE40u;
label_16ae40:
    // 0x16ae40: 0xc05a6b2  jal         func_169AC8
    ctx->pc = 0x16AE40u;
    SET_GPR_U32(ctx, 31, 0x16AE48u);
    ctx->pc = 0x16AE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE40u;
            // 0x16ae44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169AC8u;
    if (runtime->hasFunction(0x169AC8u)) {
        auto targetFn = runtime->lookupFunction(0x169AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE48u; }
        if (ctx->pc != 0x16AE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169AC8_0x169ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE48u; }
        if (ctx->pc != 0x16AE48u) { return; }
    }
    ctx->pc = 0x16AE48u;
label_16ae48:
    // 0x16ae48: 0x50510006  beql        $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16AE48u;
    {
        const bool branch_taken_0x16ae48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x16ae48) {
            ctx->pc = 0x16AE4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE48u;
            // 0x16ae4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16AE64u;
            goto label_16ae64;
        }
    }
    ctx->pc = 0x16AE50u;
    // 0x16ae50: 0xc05c2da  jal         func_170B68
    ctx->pc = 0x16AE50u;
    SET_GPR_U32(ctx, 31, 0x16AE58u);
    ctx->pc = 0x16AE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE50u;
            // 0x16ae54: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B68u;
    if (runtime->hasFunction(0x170B68u)) {
        auto targetFn = runtime->lookupFunction(0x170B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE58u; }
        if (ctx->pc != 0x16AE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B68_0x170b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE58u; }
        if (ctx->pc != 0x16AE58u) { return; }
    }
    ctx->pc = 0x16AE58u;
label_16ae58:
    // 0x16ae58: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16AE58u;
    {
        const bool branch_taken_0x16ae58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ae58) {
            ctx->pc = 0x16AE38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16ae38;
        }
    }
    ctx->pc = 0x16AE60u;
    // 0x16ae60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ae60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16ae64:
    // 0x16ae64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16ae64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ae68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16ae68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ae6c: 0x3e00008  jr          $ra
    ctx->pc = 0x16AE6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE6Cu;
            // 0x16ae70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AE74u;
    // 0x16ae74: 0x0  nop
    ctx->pc = 0x16ae74u;
    // NOP
    // 0x16ae78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ae78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ae7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ae7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ae80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16ae80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16ae84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16ae88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16ae88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16ae8c: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16AE8Cu;
    SET_GPR_U32(ctx, 31, 0x16AE94u);
    ctx->pc = 0x16AE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE8Cu;
            // 0x16ae90: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE94u; }
        if (ctx->pc != 0x16AE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE94u; }
        if (ctx->pc != 0x16AE94u) { return; }
    }
    ctx->pc = 0x16AE94u;
label_16ae94:
    // 0x16ae94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ae94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae98: 0xc05abb0  jal         func_16AEC0
    ctx->pc = 0x16AE98u;
    SET_GPR_U32(ctx, 31, 0x16AEA0u);
    ctx->pc = 0x16AE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE98u;
            // 0x16ae9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AEC0u;
    if (runtime->hasFunction(0x16AEC0u)) {
        auto targetFn = runtime->lookupFunction(0x16AEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AEA0u; }
        if (ctx->pc != 0x16AEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AEC0_0x16aec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AEA0u; }
        if (ctx->pc != 0x16AEA0u) { return; }
    }
    ctx->pc = 0x16AEA0u;
label_16aea0:
    // 0x16aea0: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16AEA0u;
    SET_GPR_U32(ctx, 31, 0x16AEA8u);
    ctx->pc = 0x16AEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AEA0u;
            // 0x16aea4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AEA8u; }
        if (ctx->pc != 0x16AEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AEA8u; }
        if (ctx->pc != 0x16AEA8u) { return; }
    }
    ctx->pc = 0x16AEA8u;
label_16aea8:
    // 0x16aea8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16aea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16aeac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16aeacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aeb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16aeb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16aeb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16aeb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16aeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x16AEB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AEB8u;
            // 0x16aebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AEC0u;
}
