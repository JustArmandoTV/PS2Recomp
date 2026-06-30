#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C8C10
// Address: 0x2c8c10 - 0x2c8d50
void sub_002C8C10_0x2c8c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8C10_0x2c8c10");
#endif

    switch (ctx->pc) {
        case 0x2c8c2cu: goto label_2c8c2c;
        case 0x2c8c34u: goto label_2c8c34;
        case 0x2c8c80u: goto label_2c8c80;
        case 0x2c8ce0u: goto label_2c8ce0;
        case 0x2c8cecu: goto label_2c8cec;
        case 0x2c8cf8u: goto label_2c8cf8;
        case 0x2c8d04u: goto label_2c8d04;
        case 0x2c8d10u: goto label_2c8d10;
        case 0x2c8d1cu: goto label_2c8d1c;
        case 0x2c8d34u: goto label_2c8d34;
        default: break;
    }

    ctx->pc = 0x2c8c10u;

    // 0x2c8c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c8c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c8c14: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c8c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2c8c18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c8c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c8c1c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2c8c1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2c8c20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c8c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c8c24: 0xc0b2428  jal         func_2C90A0
    ctx->pc = 0x2C8C24u;
    SET_GPR_U32(ctx, 31, 0x2C8C2Cu);
    ctx->pc = 0x2C8C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8C24u;
            // 0x2c8c28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C90A0u;
    if (runtime->hasFunction(0x2C90A0u)) {
        auto targetFn = runtime->lookupFunction(0x2C90A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8C2Cu; }
        if (ctx->pc != 0x2C8C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C90A0_0x2c90a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8C2Cu; }
        if (ctx->pc != 0x2C8C2Cu) { return; }
    }
    ctx->pc = 0x2C8C2Cu;
label_2c8c2c:
    // 0x2c8c2c: 0xc0aed9c  jal         func_2BB670
    ctx->pc = 0x2C8C2Cu;
    SET_GPR_U32(ctx, 31, 0x2C8C34u);
    ctx->pc = 0x2C8C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8C2Cu;
            // 0x2c8c30: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (runtime->hasFunction(0x2BB670u)) {
        auto targetFn = runtime->lookupFunction(0x2BB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8C34u; }
        if (ctx->pc != 0x2C8C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB670_0x2bb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8C34u; }
        if (ctx->pc != 0x2C8C34u) { return; }
    }
    ctx->pc = 0x2C8C34u;
label_2c8c34:
    // 0x2c8c34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c8c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c8c38: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c8c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c8c3c: 0x24420610  addiu       $v0, $v0, 0x610
    ctx->pc = 0x2c8c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
    // 0x2c8c40: 0x24630648  addiu       $v1, $v1, 0x648
    ctx->pc = 0x2c8c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1608));
    // 0x2c8c44: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c8c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c8c48: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2c8c4c: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2c8c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2c8c50: 0x2442abb0  addiu       $v0, $v0, -0x5450
    ctx->pc = 0x2c8c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945712));
    // 0x2c8c54: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2c8c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2c8c58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c8c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c8c5c: 0x2463abe8  addiu       $v1, $v1, -0x5418
    ctx->pc = 0x2c8c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945768));
    // 0x2c8c60: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2c8c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2c8c64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c8c64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8c68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c8c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8c6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8c70: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8C70u;
            // 0x2c8c74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8C78u;
    // 0x2c8c78: 0x0  nop
    ctx->pc = 0x2c8c78u;
    // NOP
    // 0x2c8c7c: 0x0  nop
    ctx->pc = 0x2c8c7cu;
    // NOP
label_2c8c80:
    // 0x2c8c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c8c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c8c84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c8c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c8c88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c8c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c8c8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c8c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c8c90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c8c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8c94: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C8C94u;
    {
        const bool branch_taken_0x2c8c94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8C94u;
            // 0x2c8c98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c94) {
            ctx->pc = 0x2C8D34u;
            goto label_2c8d34;
        }
    }
    ctx->pc = 0x2C8C9Cu;
    // 0x2c8c9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c8c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c8ca0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c8ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c8ca4: 0x24630610  addiu       $v1, $v1, 0x610
    ctx->pc = 0x2c8ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1552));
    // 0x2c8ca8: 0x24420648  addiu       $v0, $v0, 0x648
    ctx->pc = 0x2c8ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1608));
    // 0x2c8cac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c8cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c8cb0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C8CB0u;
    {
        const bool branch_taken_0x2c8cb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8CB0u;
            // 0x2c8cb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8cb0) {
            ctx->pc = 0x2C8D1Cu;
            goto label_2c8d1c;
        }
    }
    ctx->pc = 0x2C8CB8u;
    // 0x2c8cb8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c8cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c8cbc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c8cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c8cc0: 0x246305c0  addiu       $v1, $v1, 0x5C0
    ctx->pc = 0x2c8cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1472));
    // 0x2c8cc4: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2c8cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2c8cc8: 0x244205f8  addiu       $v0, $v0, 0x5F8
    ctx->pc = 0x2c8cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1528));
    // 0x2c8ccc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c8cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c8cd0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c8cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c8cd4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2c8cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c8cd8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2C8CD8u;
    SET_GPR_U32(ctx, 31, 0x2C8CE0u);
    ctx->pc = 0x2C8CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8CD8u;
            // 0x2c8cdc: 0x24a58e20  addiu       $a1, $a1, -0x71E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8CE0u; }
        if (ctx->pc != 0x2C8CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8CE0u; }
        if (ctx->pc != 0x2C8CE0u) { return; }
    }
    ctx->pc = 0x2C8CE0u;
label_2c8ce0:
    // 0x2c8ce0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2c8ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2c8ce4: 0xc0b1208  jal         func_2C4820
    ctx->pc = 0x2C8CE4u;
    SET_GPR_U32(ctx, 31, 0x2C8CECu);
    ctx->pc = 0x2C8CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8CE4u;
            // 0x2c8ce8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4820u;
    if (runtime->hasFunction(0x2C4820u)) {
        auto targetFn = runtime->lookupFunction(0x2C4820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8CECu; }
        if (ctx->pc != 0x2C8CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4820_0x2c4820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8CECu; }
        if (ctx->pc != 0x2C8CECu) { return; }
    }
    ctx->pc = 0x2C8CECu;
label_2c8cec:
    // 0x2c8cec: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2c8cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2c8cf0: 0xc0b236c  jal         func_2C8DB0
    ctx->pc = 0x2C8CF0u;
    SET_GPR_U32(ctx, 31, 0x2C8CF8u);
    ctx->pc = 0x2C8CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8CF0u;
            // 0x2c8cf4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8DB0u;
    if (runtime->hasFunction(0x2C8DB0u)) {
        auto targetFn = runtime->lookupFunction(0x2C8DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8CF8u; }
        if (ctx->pc != 0x2C8CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8DB0_0x2c8db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8CF8u; }
        if (ctx->pc != 0x2C8CF8u) { return; }
    }
    ctx->pc = 0x2C8CF8u;
label_2c8cf8:
    // 0x2c8cf8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c8cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2c8cfc: 0xc0b236c  jal         func_2C8DB0
    ctx->pc = 0x2C8CFCu;
    SET_GPR_U32(ctx, 31, 0x2C8D04u);
    ctx->pc = 0x2C8D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8CFCu;
            // 0x2c8d00: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8DB0u;
    if (runtime->hasFunction(0x2C8DB0u)) {
        auto targetFn = runtime->lookupFunction(0x2C8DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8D04u; }
        if (ctx->pc != 0x2C8D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8DB0_0x2c8db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8D04u; }
        if (ctx->pc != 0x2C8D04u) { return; }
    }
    ctx->pc = 0x2C8D04u;
label_2c8d04:
    // 0x2c8d04: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2c8d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2c8d08: 0xc0b2354  jal         func_2C8D50
    ctx->pc = 0x2C8D08u;
    SET_GPR_U32(ctx, 31, 0x2C8D10u);
    ctx->pc = 0x2C8D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8D08u;
            // 0x2c8d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8D50u;
    if (runtime->hasFunction(0x2C8D50u)) {
        auto targetFn = runtime->lookupFunction(0x2C8D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8D10u; }
        if (ctx->pc != 0x2C8D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8D50_0x2c8d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8D10u; }
        if (ctx->pc != 0x2C8D10u) { return; }
    }
    ctx->pc = 0x2C8D10u;
label_2c8d10:
    // 0x2c8d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8d14: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2C8D14u;
    SET_GPR_U32(ctx, 31, 0x2C8D1Cu);
    ctx->pc = 0x2C8D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8D14u;
            // 0x2c8d18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8D1Cu; }
        if (ctx->pc != 0x2C8D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8D1Cu; }
        if (ctx->pc != 0x2C8D1Cu) { return; }
    }
    ctx->pc = 0x2C8D1Cu;
label_2c8d1c:
    // 0x2c8d1c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c8d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2c8d20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c8d20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c8d24: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8D24u;
    {
        const bool branch_taken_0x2c8d24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c8d24) {
            ctx->pc = 0x2C8D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8D24u;
            // 0x2c8d28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8D38u;
            goto label_2c8d38;
        }
    }
    ctx->pc = 0x2C8D2Cu;
    // 0x2c8d2c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C8D2Cu;
    SET_GPR_U32(ctx, 31, 0x2C8D34u);
    ctx->pc = 0x2C8D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8D2Cu;
            // 0x2c8d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8D34u; }
        if (ctx->pc != 0x2C8D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8D34u; }
        if (ctx->pc != 0x2C8D34u) { return; }
    }
    ctx->pc = 0x2C8D34u;
label_2c8d34:
    // 0x2c8d34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c8d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d38:
    // 0x2c8d38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c8d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8d3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c8d3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8d40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8d44: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8D44u;
            // 0x2c8d48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8D4Cu;
    // 0x2c8d4c: 0x0  nop
    ctx->pc = 0x2c8d4cu;
    // NOP
}
