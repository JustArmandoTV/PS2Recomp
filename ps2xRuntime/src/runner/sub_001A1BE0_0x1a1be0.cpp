#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1BE0
// Address: 0x1a1be0 - 0x1a1cc0
void sub_001A1BE0_0x1a1be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1BE0_0x1a1be0");
#endif

    switch (ctx->pc) {
        case 0x1a1c08u: goto label_1a1c08;
        case 0x1a1c20u: goto label_1a1c20;
        case 0x1a1c70u: goto label_1a1c70;
        case 0x1a1c84u: goto label_1a1c84;
        case 0x1a1c8cu: goto label_1a1c8c;
        case 0x1a1c98u: goto label_1a1c98;
        default: break;
    }

    ctx->pc = 0x1a1be0u;

    // 0x1a1be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1be8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1bec: 0x8061fea  j           func_187FA8
    ctx->pc = 0x1A1BECu;
    ctx->pc = 0x1A1BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1BECu;
            // 0x1a1bf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187FA8u;
    if (runtime->hasFunction(0x187FA8u)) {
        auto targetFn = runtime->lookupFunction(0x187FA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187FA8_0x187fa8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A1BF4u;
    // 0x1a1bf4: 0x0  nop
    ctx->pc = 0x1a1bf4u;
    // NOP
    // 0x1a1bf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1bfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1c00: 0xc06d744  jal         func_1B5D10
    ctx->pc = 0x1A1C00u;
    SET_GPR_U32(ctx, 31, 0x1A1C08u);
    ctx->pc = 0x1B5D10u;
    if (runtime->hasFunction(0x1B5D10u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C08u; }
        if (ctx->pc != 0x1A1C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D10_0x1b5d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C08u; }
        if (ctx->pc != 0x1A1C08u) { return; }
    }
    ctx->pc = 0x1A1C08u;
label_1a1c08:
    // 0x1a1c08: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a1c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a1c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1c10: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a1c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a1c14: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C14u;
            // 0x1a1c18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1C1Cu;
    // 0x1a1c1c: 0x0  nop
    ctx->pc = 0x1a1c1cu;
    // NOP
label_1a1c20:
    // 0x1a1c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1c2c: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x1a1c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x1a1c30: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1C30u;
    {
        const bool branch_taken_0x1a1c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A1C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C30u;
            // 0x1a1c34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c30) {
            ctx->pc = 0x1A1C40u;
            goto label_1a1c40;
        }
    }
    ctx->pc = 0x1A1C38u;
    // 0x1a1c38: 0x8068712  j           func_1A1C48
    ctx->pc = 0x1A1C38u;
    ctx->pc = 0x1A1C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C38u;
            // 0x1a1c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C48u;
    goto label_1a1c48;
    ctx->pc = 0x1A1C40u;
label_1a1c40:
    // 0x1a1c40: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C40u;
            // 0x1a1c44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1C48u;
label_1a1c48:
    // 0x1a1c48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a1c4c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a1c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a1c50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a1c54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a1c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a1c5c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a1c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a1c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a1c64: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a1c64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1c68: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x1a1c68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a1c6c: 0x0  nop
    ctx->pc = 0x1a1c6cu;
    // NOP
label_1a1c70:
    // 0x1a1c70: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A1C70u;
    {
        const bool branch_taken_0x1a1c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C70u;
            // 0x1a1c74: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c70) {
            ctx->pc = 0x1A1CA4u;
            goto label_1a1ca4;
        }
    }
    ctx->pc = 0x1A1C78u;
    // 0x1a1c78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a1c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1c7c: 0xc068a24  jal         func_1A2890
    ctx->pc = 0x1A1C7Cu;
    SET_GPR_U32(ctx, 31, 0x1A1C84u);
    ctx->pc = 0x1A1C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C7Cu;
            // 0x1a1c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2890u;
    if (runtime->hasFunction(0x1A2890u)) {
        auto targetFn = runtime->lookupFunction(0x1A2890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C84u; }
        if (ctx->pc != 0x1A1C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2890_0x1a2890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C84u; }
        if (ctx->pc != 0x1A1C84u) { return; }
    }
    ctx->pc = 0x1A1C84u;
label_1a1c84:
    // 0x1a1c84: 0xc05b7c6  jal         func_16DF18
    ctx->pc = 0x1A1C84u;
    SET_GPR_U32(ctx, 31, 0x1A1C8Cu);
    ctx->pc = 0x16DF18u;
    if (runtime->hasFunction(0x16DF18u)) {
        auto targetFn = runtime->lookupFunction(0x16DF18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C8Cu; }
        if (ctx->pc != 0x1A1C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DF18_0x16df18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C8Cu; }
        if (ctx->pc != 0x1A1C8Cu) { return; }
    }
    ctx->pc = 0x1A1C8Cu;
label_1a1c8c:
    // 0x1a1c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c90: 0xc068a24  jal         func_1A2890
    ctx->pc = 0x1A1C90u;
    SET_GPR_U32(ctx, 31, 0x1A1C98u);
    ctx->pc = 0x1A1C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C90u;
            // 0x1a1c94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2890u;
    if (runtime->hasFunction(0x1A2890u)) {
        auto targetFn = runtime->lookupFunction(0x1A2890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C98u; }
        if (ctx->pc != 0x1A1C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2890_0x1a2890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C98u; }
        if (ctx->pc != 0x1A1C98u) { return; }
    }
    ctx->pc = 0x1A1C98u;
label_1a1c98:
    // 0x1a1c98: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1a1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1a1c9c: 0x1052fff4  beq         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x1A1C9Cu;
    {
        const bool branch_taken_0x1a1c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A1CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C9Cu;
            // 0x1a1ca0: 0x2a22000a  slti        $v0, $s1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c9c) {
            ctx->pc = 0x1A1C70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a1c70;
        }
    }
    ctx->pc = 0x1A1CA4u;
label_1a1ca4:
    // 0x1a1ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1ca8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a1ca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1cac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a1cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1cb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a1cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a1cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1CB4u;
            // 0x1a1cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1CBCu;
    // 0x1a1cbc: 0x0  nop
    ctx->pc = 0x1a1cbcu;
    // NOP
}
