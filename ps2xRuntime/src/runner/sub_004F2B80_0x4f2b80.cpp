#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F2B80
// Address: 0x4f2b80 - 0x4f2d20
void sub_004F2B80_0x4f2b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2B80_0x4f2b80");
#endif

    switch (ctx->pc) {
        case 0x4f2b9cu: goto label_4f2b9c;
        case 0x4f2bbcu: goto label_4f2bbc;
        case 0x4f2c04u: goto label_4f2c04;
        case 0x4f2c20u: goto label_4f2c20;
        case 0x4f2c50u: goto label_4f2c50;
        case 0x4f2cb0u: goto label_4f2cb0;
        case 0x4f2cbcu: goto label_4f2cbc;
        case 0x4f2cc8u: goto label_4f2cc8;
        case 0x4f2cd4u: goto label_4f2cd4;
        case 0x4f2ce0u: goto label_4f2ce0;
        case 0x4f2cecu: goto label_4f2cec;
        case 0x4f2d04u: goto label_4f2d04;
        default: break;
    }

    ctx->pc = 0x4f2b80u;

    // 0x4f2b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f2b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f2b84: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4f2b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4f2b88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f2b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f2b8c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4f2b8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x4f2b90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f2b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f2b94: 0xc13cb80  jal         func_4F2E00
    ctx->pc = 0x4F2B94u;
    SET_GPR_U32(ctx, 31, 0x4F2B9Cu);
    ctx->pc = 0x4F2B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2B94u;
            // 0x4f2b98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F2E00u;
    if (runtime->hasFunction(0x4F2E00u)) {
        auto targetFn = runtime->lookupFunction(0x4F2E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2B9Cu; }
        if (ctx->pc != 0x4F2B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F2E00_0x4f2e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2B9Cu; }
        if (ctx->pc != 0x4F2B9Cu) { return; }
    }
    ctx->pc = 0x4F2B9Cu;
label_4f2b9c:
    // 0x4f2b9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f2b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4f2ba0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f2ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f2ba4: 0x24634290  addiu       $v1, $v1, 0x4290
    ctx->pc = 0x4f2ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17040));
    // 0x4f2ba8: 0x244242c8  addiu       $v0, $v0, 0x42C8
    ctx->pc = 0x4f2ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17096));
    // 0x4f2bac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f2bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f2bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f2bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2bb4: 0xc13cb7c  jal         func_4F2DF0
    ctx->pc = 0x4F2BB4u;
    SET_GPR_U32(ctx, 31, 0x4F2BBCu);
    ctx->pc = 0x4F2BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2BB4u;
            // 0x4f2bb8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F2DF0u;
    if (runtime->hasFunction(0x4F2DF0u)) {
        auto targetFn = runtime->lookupFunction(0x4F2DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2BBCu; }
        if (ctx->pc != 0x4F2BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F2DF0_0x4f2df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2BBCu; }
        if (ctx->pc != 0x4F2BBCu) { return; }
    }
    ctx->pc = 0x4F2BBCu;
label_4f2bbc:
    // 0x4f2bbc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4f2bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4f2bc0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4f2bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x4f2bc4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f2bc8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4f2bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4f2bcc: 0x244241e0  addiu       $v0, $v0, 0x41E0
    ctx->pc = 0x4f2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16864));
    // 0x4f2bd0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4f2bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4f2bd4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f2bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4f2bd8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f2bdc: 0x24424218  addiu       $v0, $v0, 0x4218
    ctx->pc = 0x4f2bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16920));
    // 0x4f2be0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4f2be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4f2be4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4f2be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x4f2be8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x4f2be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x4f2bec: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x4f2becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x4f2bf0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4f2bf4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x4f2bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x4f2bf8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4f2bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4f2bfc: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4F2BFCu;
    SET_GPR_U32(ctx, 31, 0x4F2C04u);
    ctx->pc = 0x4F2C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2BFCu;
            // 0x4f2c00: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2C04u; }
        if (ctx->pc != 0x4F2C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2C04u; }
        if (ctx->pc != 0x4F2C04u) { return; }
    }
    ctx->pc = 0x4F2C04u;
label_4f2c04:
    // 0x4f2c04: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4f2c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4f2c08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f2c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2c0c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F2C0Cu;
    {
        const bool branch_taken_0x4f2c0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2C0Cu;
            // 0x4f2c10: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2c0c) {
            ctx->pc = 0x4F2C24u;
            goto label_4f2c24;
        }
    }
    ctx->pc = 0x4F2C14u;
    // 0x4f2c14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4f2c14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4f2c18: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x4F2C18u;
    SET_GPR_U32(ctx, 31, 0x4F2C20u);
    ctx->pc = 0x4F2C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2C18u;
            // 0x4f2c1c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2C20u; }
        if (ctx->pc != 0x4F2C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2C20u; }
        if (ctx->pc != 0x4F2C20u) { return; }
    }
    ctx->pc = 0x4F2C20u;
label_4f2c20:
    // 0x4f2c20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f2c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f2c24:
    // 0x4f2c24: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x4f2c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x4f2c28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f2c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2c2c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x4f2c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x4f2c30: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x4f2c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x4f2c34: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x4f2c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x4f2c38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f2c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f2c3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f2c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f2c40: 0x3e00008  jr          $ra
    ctx->pc = 0x4F2C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2C40u;
            // 0x4f2c44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F2C48u;
    // 0x4f2c48: 0x0  nop
    ctx->pc = 0x4f2c48u;
    // NOP
    // 0x4f2c4c: 0x0  nop
    ctx->pc = 0x4f2c4cu;
    // NOP
label_4f2c50:
    // 0x4f2c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f2c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f2c54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f2c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4f2c58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f2c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4f2c5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f2c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f2c60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f2c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2c64: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4F2C64u;
    {
        const bool branch_taken_0x4f2c64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2C64u;
            // 0x4f2c68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2c64) {
            ctx->pc = 0x4F2D04u;
            goto label_4f2d04;
        }
    }
    ctx->pc = 0x4F2C6Cu;
    // 0x4f2c6c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f2c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4f2c70: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f2c74: 0x24634290  addiu       $v1, $v1, 0x4290
    ctx->pc = 0x4f2c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17040));
    // 0x4f2c78: 0x244242c8  addiu       $v0, $v0, 0x42C8
    ctx->pc = 0x4f2c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17096));
    // 0x4f2c7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f2c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f2c80: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4F2C80u;
    {
        const bool branch_taken_0x4f2c80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2C80u;
            // 0x4f2c84: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2c80) {
            ctx->pc = 0x4F2CECu;
            goto label_4f2cec;
        }
    }
    ctx->pc = 0x4F2C88u;
    // 0x4f2c88: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f2c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4f2c8c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f2c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f2c90: 0x24634240  addiu       $v1, $v1, 0x4240
    ctx->pc = 0x4f2c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16960));
    // 0x4f2c94: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x4f2c94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x4f2c98: 0x24424278  addiu       $v0, $v0, 0x4278
    ctx->pc = 0x4f2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17016));
    // 0x4f2c9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f2c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f2ca0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4f2ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4f2ca4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4f2ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4f2ca8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4F2CA8u;
    SET_GPR_U32(ctx, 31, 0x4F2CB0u);
    ctx->pc = 0x4F2CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2CA8u;
            // 0x4f2cac: 0x24a537d0  addiu       $a1, $a1, 0x37D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2CB0u; }
        if (ctx->pc != 0x4F2CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2CB0u; }
        if (ctx->pc != 0x4F2CB0u) { return; }
    }
    ctx->pc = 0x4F2CB0u;
label_4f2cb0:
    // 0x4f2cb0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4f2cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4f2cb4: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x4F2CB4u;
    SET_GPR_U32(ctx, 31, 0x4F2CBCu);
    ctx->pc = 0x4F2CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2CB4u;
            // 0x4f2cb8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2CBCu; }
        if (ctx->pc != 0x4F2CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2CBCu; }
        if (ctx->pc != 0x4F2CBCu) { return; }
    }
    ctx->pc = 0x4F2CBCu;
label_4f2cbc:
    // 0x4f2cbc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4f2cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4f2cc0: 0xc13cb60  jal         func_4F2D80
    ctx->pc = 0x4F2CC0u;
    SET_GPR_U32(ctx, 31, 0x4F2CC8u);
    ctx->pc = 0x4F2CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2CC0u;
            // 0x4f2cc4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F2D80u;
    if (runtime->hasFunction(0x4F2D80u)) {
        auto targetFn = runtime->lookupFunction(0x4F2D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2CC8u; }
        if (ctx->pc != 0x4F2CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F2D80_0x4f2d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2CC8u; }
        if (ctx->pc != 0x4F2CC8u) { return; }
    }
    ctx->pc = 0x4F2CC8u;
label_4f2cc8:
    // 0x4f2cc8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4f2cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4f2ccc: 0xc13cb60  jal         func_4F2D80
    ctx->pc = 0x4F2CCCu;
    SET_GPR_U32(ctx, 31, 0x4F2CD4u);
    ctx->pc = 0x4F2CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2CCCu;
            // 0x4f2cd0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F2D80u;
    if (runtime->hasFunction(0x4F2D80u)) {
        auto targetFn = runtime->lookupFunction(0x4F2D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2CD4u; }
        if (ctx->pc != 0x4F2CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F2D80_0x4f2d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2CD4u; }
        if (ctx->pc != 0x4F2CD4u) { return; }
    }
    ctx->pc = 0x4F2CD4u;
label_4f2cd4:
    // 0x4f2cd4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4f2cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4f2cd8: 0xc13cb48  jal         func_4F2D20
    ctx->pc = 0x4F2CD8u;
    SET_GPR_U32(ctx, 31, 0x4F2CE0u);
    ctx->pc = 0x4F2CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2CD8u;
            // 0x4f2cdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F2D20u;
    if (runtime->hasFunction(0x4F2D20u)) {
        auto targetFn = runtime->lookupFunction(0x4F2D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2CE0u; }
        if (ctx->pc != 0x4F2CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F2D20_0x4f2d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2CE0u; }
        if (ctx->pc != 0x4F2CE0u) { return; }
    }
    ctx->pc = 0x4F2CE0u;
label_4f2ce0:
    // 0x4f2ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f2ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2ce4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4F2CE4u;
    SET_GPR_U32(ctx, 31, 0x4F2CECu);
    ctx->pc = 0x4F2CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2CE4u;
            // 0x4f2ce8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2CECu; }
        if (ctx->pc != 0x4F2CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2CECu; }
        if (ctx->pc != 0x4F2CECu) { return; }
    }
    ctx->pc = 0x4F2CECu;
label_4f2cec:
    // 0x4f2cec: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4f2cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4f2cf0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f2cf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4f2cf4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F2CF4u;
    {
        const bool branch_taken_0x4f2cf4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f2cf4) {
            ctx->pc = 0x4F2CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2CF4u;
            // 0x4f2cf8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F2D08u;
            goto label_4f2d08;
        }
    }
    ctx->pc = 0x4F2CFCu;
    // 0x4f2cfc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F2CFCu;
    SET_GPR_U32(ctx, 31, 0x4F2D04u);
    ctx->pc = 0x4F2D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2CFCu;
            // 0x4f2d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2D04u; }
        if (ctx->pc != 0x4F2D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2D04u; }
        if (ctx->pc != 0x4F2D04u) { return; }
    }
    ctx->pc = 0x4F2D04u;
label_4f2d04:
    // 0x4f2d04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f2d04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f2d08:
    // 0x4f2d08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f2d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f2d0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f2d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f2d10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f2d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f2d14: 0x3e00008  jr          $ra
    ctx->pc = 0x4F2D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2D14u;
            // 0x4f2d18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F2D1Cu;
    // 0x4f2d1c: 0x0  nop
    ctx->pc = 0x4f2d1cu;
    // NOP
}
