#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C7EE0
// Address: 0x2c7ee0 - 0x2c8020
void sub_002C7EE0_0x2c7ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7EE0_0x2c7ee0");
#endif

    switch (ctx->pc) {
        case 0x2c7efcu: goto label_2c7efc;
        case 0x2c7f04u: goto label_2c7f04;
        case 0x2c7f50u: goto label_2c7f50;
        case 0x2c7fb0u: goto label_2c7fb0;
        case 0x2c7fbcu: goto label_2c7fbc;
        case 0x2c7fc8u: goto label_2c7fc8;
        case 0x2c7fd4u: goto label_2c7fd4;
        case 0x2c7fe0u: goto label_2c7fe0;
        case 0x2c7fecu: goto label_2c7fec;
        case 0x2c8004u: goto label_2c8004;
        default: break;
    }

    ctx->pc = 0x2c7ee0u;

    // 0x2c7ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c7ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c7ee4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2c7ee8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c7ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c7eec: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x2c7eecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x2c7ef0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c7ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c7ef4: 0xc0b20dc  jal         func_2C8370
    ctx->pc = 0x2C7EF4u;
    SET_GPR_U32(ctx, 31, 0x2C7EFCu);
    ctx->pc = 0x2C7EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7EF4u;
            // 0x2c7ef8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8370u;
    if (runtime->hasFunction(0x2C8370u)) {
        auto targetFn = runtime->lookupFunction(0x2C8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7EFCu; }
        if (ctx->pc != 0x2C7EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8370_0x2c8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7EFCu; }
        if (ctx->pc != 0x2C7EFCu) { return; }
    }
    ctx->pc = 0x2C7EFCu;
label_2c7efc:
    // 0x2c7efc: 0xc0aed9c  jal         func_2BB670
    ctx->pc = 0x2C7EFCu;
    SET_GPR_U32(ctx, 31, 0x2C7F04u);
    ctx->pc = 0x2C7F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7EFCu;
            // 0x2c7f00: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (runtime->hasFunction(0x2BB670u)) {
        auto targetFn = runtime->lookupFunction(0x2BB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7F04u; }
        if (ctx->pc != 0x2C7F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB670_0x2bb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7F04u; }
        if (ctx->pc != 0x2C7F04u) { return; }
    }
    ctx->pc = 0x2C7F04u;
label_2c7f04:
    // 0x2c7f04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c7f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c7f08: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c7f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c7f0c: 0x244207f0  addiu       $v0, $v0, 0x7F0
    ctx->pc = 0x2c7f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
    // 0x2c7f10: 0x24630828  addiu       $v1, $v1, 0x828
    ctx->pc = 0x2c7f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2088));
    // 0x2c7f14: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c7f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c7f18: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2c7f1c: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2c7f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2c7f20: 0x24428b40  addiu       $v0, $v0, -0x74C0
    ctx->pc = 0x2c7f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937408));
    // 0x2c7f24: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2c7f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2c7f28: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c7f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c7f2c: 0x24638b78  addiu       $v1, $v1, -0x7488
    ctx->pc = 0x2c7f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937464));
    // 0x2c7f30: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2c7f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2c7f34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c7f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7f38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c7f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7f3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c7f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7f40: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7F40u;
            // 0x2c7f44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7F48u;
    // 0x2c7f48: 0x0  nop
    ctx->pc = 0x2c7f48u;
    // NOP
    // 0x2c7f4c: 0x0  nop
    ctx->pc = 0x2c7f4cu;
    // NOP
label_2c7f50:
    // 0x2c7f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c7f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c7f54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c7f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c7f58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c7f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c7f5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c7f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c7f60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c7f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7f64: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C7F64u;
    {
        const bool branch_taken_0x2c7f64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7F64u;
            // 0x2c7f68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f64) {
            ctx->pc = 0x2C8004u;
            goto label_2c8004;
        }
    }
    ctx->pc = 0x2C7F6Cu;
    // 0x2c7f6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c7f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c7f70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c7f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c7f74: 0x246307f0  addiu       $v1, $v1, 0x7F0
    ctx->pc = 0x2c7f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2032));
    // 0x2c7f78: 0x24420828  addiu       $v0, $v0, 0x828
    ctx->pc = 0x2c7f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2088));
    // 0x2c7f7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c7f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c7f80: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C7F80u;
    {
        const bool branch_taken_0x2c7f80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7F80u;
            // 0x2c7f84: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f80) {
            ctx->pc = 0x2C7FECu;
            goto label_2c7fec;
        }
    }
    ctx->pc = 0x2C7F88u;
    // 0x2c7f88: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c7f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c7f8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c7f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c7f90: 0x246307a0  addiu       $v1, $v1, 0x7A0
    ctx->pc = 0x2c7f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1952));
    // 0x2c7f94: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2c7f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2c7f98: 0x244207d8  addiu       $v0, $v0, 0x7D8
    ctx->pc = 0x2c7f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2008));
    // 0x2c7f9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c7f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c7fa0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c7fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c7fa4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2c7fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c7fa8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2C7FA8u;
    SET_GPR_U32(ctx, 31, 0x2C7FB0u);
    ctx->pc = 0x2C7FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7FA8u;
            // 0x2c7fac: 0x24a58160  addiu       $a1, $a1, -0x7EA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7FB0u; }
        if (ctx->pc != 0x2C7FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7FB0u; }
        if (ctx->pc != 0x2C7FB0u) { return; }
    }
    ctx->pc = 0x2C7FB0u;
label_2c7fb0:
    // 0x2c7fb0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2c7fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2c7fb4: 0xc0b203c  jal         func_2C80F0
    ctx->pc = 0x2C7FB4u;
    SET_GPR_U32(ctx, 31, 0x2C7FBCu);
    ctx->pc = 0x2C7FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7FB4u;
            // 0x2c7fb8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C80F0u;
    if (runtime->hasFunction(0x2C80F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C80F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7FBCu; }
        if (ctx->pc != 0x2C7FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C80F0_0x2c80f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7FBCu; }
        if (ctx->pc != 0x2C7FBCu) { return; }
    }
    ctx->pc = 0x2C7FBCu;
label_2c7fbc:
    // 0x2c7fbc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2c7fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2c7fc0: 0xc0b2020  jal         func_2C8080
    ctx->pc = 0x2C7FC0u;
    SET_GPR_U32(ctx, 31, 0x2C7FC8u);
    ctx->pc = 0x2C7FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7FC0u;
            // 0x2c7fc4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8080u;
    if (runtime->hasFunction(0x2C8080u)) {
        auto targetFn = runtime->lookupFunction(0x2C8080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7FC8u; }
        if (ctx->pc != 0x2C7FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8080_0x2c8080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7FC8u; }
        if (ctx->pc != 0x2C7FC8u) { return; }
    }
    ctx->pc = 0x2C7FC8u;
label_2c7fc8:
    // 0x2c7fc8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c7fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2c7fcc: 0xc0b2020  jal         func_2C8080
    ctx->pc = 0x2C7FCCu;
    SET_GPR_U32(ctx, 31, 0x2C7FD4u);
    ctx->pc = 0x2C7FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7FCCu;
            // 0x2c7fd0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8080u;
    if (runtime->hasFunction(0x2C8080u)) {
        auto targetFn = runtime->lookupFunction(0x2C8080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7FD4u; }
        if (ctx->pc != 0x2C7FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8080_0x2c8080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7FD4u; }
        if (ctx->pc != 0x2C7FD4u) { return; }
    }
    ctx->pc = 0x2C7FD4u;
label_2c7fd4:
    // 0x2c7fd4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2c7fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2c7fd8: 0xc0b2008  jal         func_2C8020
    ctx->pc = 0x2C7FD8u;
    SET_GPR_U32(ctx, 31, 0x2C7FE0u);
    ctx->pc = 0x2C7FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7FD8u;
            // 0x2c7fdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8020u;
    if (runtime->hasFunction(0x2C8020u)) {
        auto targetFn = runtime->lookupFunction(0x2C8020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7FE0u; }
        if (ctx->pc != 0x2C7FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8020_0x2c8020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7FE0u; }
        if (ctx->pc != 0x2C7FE0u) { return; }
    }
    ctx->pc = 0x2C7FE0u;
label_2c7fe0:
    // 0x2c7fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7fe4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2C7FE4u;
    SET_GPR_U32(ctx, 31, 0x2C7FECu);
    ctx->pc = 0x2C7FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7FE4u;
            // 0x2c7fe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7FECu; }
        if (ctx->pc != 0x2C7FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7FECu; }
        if (ctx->pc != 0x2C7FECu) { return; }
    }
    ctx->pc = 0x2C7FECu;
label_2c7fec:
    // 0x2c7fec: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c7fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2c7ff0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c7ff0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c7ff4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7FF4u;
    {
        const bool branch_taken_0x2c7ff4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c7ff4) {
            ctx->pc = 0x2C7FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7FF4u;
            // 0x2c7ff8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8008u;
            goto label_2c8008;
        }
    }
    ctx->pc = 0x2C7FFCu;
    // 0x2c7ffc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C7FFCu;
    SET_GPR_U32(ctx, 31, 0x2C8004u);
    ctx->pc = 0x2C8000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7FFCu;
            // 0x2c8000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8004u; }
        if (ctx->pc != 0x2C8004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8004u; }
        if (ctx->pc != 0x2C8004u) { return; }
    }
    ctx->pc = 0x2C8004u;
label_2c8004:
    // 0x2c8004: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c8004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8008:
    // 0x2c8008: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c8008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c800c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c800cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8014: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8014u;
            // 0x2c8018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C801Cu;
    // 0x2c801c: 0x0  nop
    ctx->pc = 0x2c801cu;
    // NOP
}
