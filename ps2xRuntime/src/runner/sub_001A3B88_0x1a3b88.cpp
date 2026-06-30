#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A3B88
// Address: 0x1a3b88 - 0x1a3d28
void sub_001A3B88_0x1a3b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3B88_0x1a3b88");
#endif

    switch (ctx->pc) {
        case 0x1a3bc8u: goto label_1a3bc8;
        case 0x1a3bd4u: goto label_1a3bd4;
        case 0x1a3bf0u: goto label_1a3bf0;
        case 0x1a3c34u: goto label_1a3c34;
        case 0x1a3c4cu: goto label_1a3c4c;
        case 0x1a3c68u: goto label_1a3c68;
        case 0x1a3c84u: goto label_1a3c84;
        case 0x1a3ca0u: goto label_1a3ca0;
        case 0x1a3ca8u: goto label_1a3ca8;
        case 0x1a3cc4u: goto label_1a3cc4;
        default: break;
    }

    ctx->pc = 0x1a3b88u;

    // 0x1a3b88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a3b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a3b8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a3b90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a3b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a3b94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a3b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3b98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a3b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a3b9c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a3b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a3ba0: 0x26351080  addiu       $s5, $s1, 0x1080
    ctx->pc = 0x1a3ba0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 4224));
    // 0x1a3ba4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1a3ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1a3ba8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1a3ba8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3bac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a3bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a3bb0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a3bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a3bb4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1a3bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1a3bb8: 0x8e342074  lw          $s4, 0x2074($s1)
    ctx->pc = 0x1a3bb8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8308)));
    // 0x1a3bbc: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x1a3bbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a3bc0: 0xc05ccc0  jal         func_173300
    ctx->pc = 0x1A3BC0u;
    SET_GPR_U32(ctx, 31, 0x1A3BC8u);
    ctx->pc = 0x1A3BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3BC0u;
            // 0x1a3bc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173300u;
    if (runtime->hasFunction(0x173300u)) {
        auto targetFn = runtime->lookupFunction(0x173300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3BC8u; }
        if (ctx->pc != 0x1A3BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173300_0x173300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3BC8u; }
        if (ctx->pc != 0x1A3BC8u) { return; }
    }
    ctx->pc = 0x1A3BC8u;
label_1a3bc8:
    // 0x1a3bc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a3bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3bcc: 0xc05d31a  jal         func_174C68
    ctx->pc = 0x1A3BCCu;
    SET_GPR_U32(ctx, 31, 0x1A3BD4u);
    ctx->pc = 0x1A3BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3BCCu;
            // 0x1a3bd0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174C68u;
    if (runtime->hasFunction(0x174C68u)) {
        auto targetFn = runtime->lookupFunction(0x174C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3BD4u; }
        if (ctx->pc != 0x1A3BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174C68_0x174c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3BD4u; }
        if (ctx->pc != 0x1A3BD4u) { return; }
    }
    ctx->pc = 0x1A3BD4u;
label_1a3bd4:
    // 0x1a3bd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a3bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3bd8: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3BD8u;
    {
        const bool branch_taken_0x1a3bd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3BD8u;
            // 0x1a3bdc: 0x3c02006e  lui         $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3bd8) {
            ctx->pc = 0x1A3BE4u;
            goto label_1a3be4;
        }
    }
    ctx->pc = 0x1A3BE0u;
    // 0x1a3be0: 0xac50beac  sw          $s0, -0x4154($v0)
    ctx->pc = 0x1a3be0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950572), GPR_U32(ctx, 16));
label_1a3be4:
    // 0x1a3be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3be8: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1A3BE8u;
    SET_GPR_U32(ctx, 31, 0x1A3BF0u);
    ctx->pc = 0x1A3BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3BE8u;
            // 0x1a3bec: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3BF0u; }
        if (ctx->pc != 0x1A3BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3BF0u; }
        if (ctx->pc != 0x1A3BF0u) { return; }
    }
    ctx->pc = 0x1A3BF0u;
label_1a3bf0:
    // 0x1a3bf0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a3bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a3bf4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x1a3bf4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x1a3bf8: 0x1203000b  beq         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A3BF8u;
    {
        const bool branch_taken_0x1a3bf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A3BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3BF8u;
            // 0x1a3bfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3bf8) {
            ctx->pc = 0x1A3C28u;
            goto label_1a3c28;
        }
    }
    ctx->pc = 0x1A3C00u;
    // 0x1a3c00: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3C00u;
    {
        const bool branch_taken_0x1a3c00 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1A3C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3C00u;
            // 0x1a3c04: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c00) {
            ctx->pc = 0x1A3C18u;
            goto label_1a3c18;
        }
    }
    ctx->pc = 0x1A3C08u;
    // 0x1a3c08: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A3C08u;
    {
        const bool branch_taken_0x1a3c08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a3c08) {
            ctx->pc = 0x1A3C40u;
            goto label_1a3c40;
        }
    }
    ctx->pc = 0x1A3C10u;
    // 0x1a3c10: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A3C10u;
    {
        const bool branch_taken_0x1a3c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3c10) {
            ctx->pc = 0x1A3C58u;
            goto label_1a3c58;
        }
    }
    ctx->pc = 0x1A3C18u;
label_1a3c18:
    // 0x1a3c18: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A3C18u;
    {
        const bool branch_taken_0x1a3c18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3C18u;
            // 0x1a3c1c: 0x2662fffc  addiu       $v0, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c18) {
            ctx->pc = 0x1A3C6Cu;
            goto label_1a3c6c;
        }
    }
    ctx->pc = 0x1A3C20u;
    // 0x1a3c20: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A3C20u;
    {
        const bool branch_taken_0x1a3c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3c20) {
            ctx->pc = 0x1A3C58u;
            goto label_1a3c58;
        }
    }
    ctx->pc = 0x1A3C28u;
label_1a3c28:
    // 0x1a3c28: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a3c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a3c2c: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1A3C2Cu;
    SET_GPR_U32(ctx, 31, 0x1A3C34u);
    ctx->pc = 0x1A3C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3C2Cu;
            // 0x1a3c30: 0x34a50c08  ori         $a1, $a1, 0xC08 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3080);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3C34u; }
        if (ctx->pc != 0x1A3C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3C34u; }
        if (ctx->pc != 0x1A3C34u) { return; }
    }
    ctx->pc = 0x1A3C34u;
label_1a3c34:
    // 0x1a3c34: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A3C34u;
    {
        const bool branch_taken_0x1a3c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3C34u;
            // 0x1a3c38: 0x2662fffc  addiu       $v0, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c34) {
            ctx->pc = 0x1A3C6Cu;
            goto label_1a3c6c;
        }
    }
    ctx->pc = 0x1A3C3Cu;
    // 0x1a3c3c: 0x0  nop
    ctx->pc = 0x1a3c3cu;
    // NOP
label_1a3c40:
    // 0x1a3c40: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a3c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a3c44: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1A3C44u;
    SET_GPR_U32(ctx, 31, 0x1A3C4Cu);
    ctx->pc = 0x1A3C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3C44u;
            // 0x1a3c48: 0x34a50c09  ori         $a1, $a1, 0xC09 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3081);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3C4Cu; }
        if (ctx->pc != 0x1A3C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3C4Cu; }
        if (ctx->pc != 0x1A3C4Cu) { return; }
    }
    ctx->pc = 0x1A3C4Cu;
label_1a3c4c:
    // 0x1a3c4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A3C4Cu;
    {
        const bool branch_taken_0x1a3c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3C4Cu;
            // 0x1a3c50: 0x2662fffc  addiu       $v0, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c4c) {
            ctx->pc = 0x1A3C6Cu;
            goto label_1a3c6c;
        }
    }
    ctx->pc = 0x1A3C54u;
    // 0x1a3c54: 0x0  nop
    ctx->pc = 0x1a3c54u;
    // NOP
label_1a3c58:
    // 0x1a3c58: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a3c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a3c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3c60: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1A3C60u;
    SET_GPR_U32(ctx, 31, 0x1A3C68u);
    ctx->pc = 0x1A3C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3C60u;
            // 0x1a3c64: 0x34a50c07  ori         $a1, $a1, 0xC07 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3079);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3C68u; }
        if (ctx->pc != 0x1A3C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3C68u; }
        if (ctx->pc != 0x1A3C68u) { return; }
    }
    ctx->pc = 0x1A3C68u;
label_1a3c68:
    // 0x1a3c68: 0x2662fffc  addiu       $v0, $s3, -0x4
    ctx->pc = 0x1a3c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_1a3c6c:
    // 0x1a3c6c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a3c6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a3c70: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3C70u;
    {
        const bool branch_taken_0x1a3c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3c70) {
            ctx->pc = 0x1A3C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3C70u;
            // 0x1a3c74: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A3C88u;
            goto label_1a3c88;
        }
    }
    ctx->pc = 0x1A3C78u;
    // 0x1a3c78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a3c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3c7c: 0xc06e3f8  jal         func_1B8FE0
    ctx->pc = 0x1A3C7Cu;
    SET_GPR_U32(ctx, 31, 0x1A3C84u);
    ctx->pc = 0x1A3C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3C7Cu;
            // 0x1a3c80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8FE0u;
    if (runtime->hasFunction(0x1B8FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3C84u; }
        if (ctx->pc != 0x1A3C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8FE0_0x1b8fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3C84u; }
        if (ctx->pc != 0x1A3C84u) { return; }
    }
    ctx->pc = 0x1A3C84u;
label_1a3c84:
    // 0x1a3c84: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1a3c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a3c88:
    // 0x1a3c88: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3C88u;
    {
        const bool branch_taken_0x1a3c88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3C88u;
            // 0x1a3c8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c88) {
            ctx->pc = 0x1A3C98u;
            goto label_1a3c98;
        }
    }
    ctx->pc = 0x1A3C90u;
    // 0x1a3c90: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3C90u;
    {
        const bool branch_taken_0x1a3c90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3c90) {
            ctx->pc = 0x1A3CA0u;
            goto label_1a3ca0;
        }
    }
    ctx->pc = 0x1A3C98u;
label_1a3c98:
    // 0x1a3c98: 0xc068f9a  jal         func_1A3E68
    ctx->pc = 0x1A3C98u;
    SET_GPR_U32(ctx, 31, 0x1A3CA0u);
    ctx->pc = 0x1A3C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3C98u;
            // 0x1a3c9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3E68u;
    if (runtime->hasFunction(0x1A3E68u)) {
        auto targetFn = runtime->lookupFunction(0x1A3E68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3CA0u; }
        if (ctx->pc != 0x1A3CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3E68_0x1a3e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3CA0u; }
        if (ctx->pc != 0x1A3CA0u) { return; }
    }
    ctx->pc = 0x1A3CA0u;
label_1a3ca0:
    // 0x1a3ca0: 0xc068f8e  jal         func_1A3E38
    ctx->pc = 0x1A3CA0u;
    SET_GPR_U32(ctx, 31, 0x1A3CA8u);
    ctx->pc = 0x1A3CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3CA0u;
            // 0x1a3ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3E38u;
    if (runtime->hasFunction(0x1A3E38u)) {
        auto targetFn = runtime->lookupFunction(0x1A3E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3CA8u; }
        if (ctx->pc != 0x1A3CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3E38_0x1a3e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3CA8u; }
        if (ctx->pc != 0x1A3CA8u) { return; }
    }
    ctx->pc = 0x1A3CA8u;
label_1a3ca8:
    // 0x1a3ca8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3cac: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A3CACu;
    {
        const bool branch_taken_0x1a3cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A3CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3CACu;
            // 0x1a3cb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3cac) {
            ctx->pc = 0x1A3D00u;
            goto label_1a3d00;
        }
    }
    ctx->pc = 0x1A3CB4u;
    // 0x1a3cb4: 0x56c00013  bnel        $s6, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A3CB4u;
    {
        const bool branch_taken_0x1a3cb4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3cb4) {
            ctx->pc = 0x1A3CB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3CB4u;
            // 0x1a3cb8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A3D04u;
            goto label_1a3d04;
        }
    }
    ctx->pc = 0x1A3CBCu;
    // 0x1a3cbc: 0xc05d516  jal         func_175458
    ctx->pc = 0x1A3CBCu;
    SET_GPR_U32(ctx, 31, 0x1A3CC4u);
    ctx->pc = 0x1A3CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3CBCu;
            // 0x1a3cc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175458u;
    if (runtime->hasFunction(0x175458u)) {
        auto targetFn = runtime->lookupFunction(0x175458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3CC4u; }
        if (ctx->pc != 0x1A3CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175458_0x175458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3CC4u; }
        if (ctx->pc != 0x1A3CC4u) { return; }
    }
    ctx->pc = 0x1A3CC4u;
label_1a3cc4:
    // 0x1a3cc4: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x1a3cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1a3cc8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A3CC8u;
    {
        const bool branch_taken_0x1a3cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3CC8u;
            // 0x1a3ccc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3cc8) {
            ctx->pc = 0x1A3D00u;
            goto label_1a3d00;
        }
    }
    ctx->pc = 0x1A3CD0u;
    // 0x1a3cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3cd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a3cd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a3cd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a3cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3cdc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a3cdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3ce0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a3ce0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a3ce4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a3ce4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3ce8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a3ce8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3cec: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1a3cecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3cf0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a3cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a3cf4: 0x8068f9a  j           func_1A3E68
    ctx->pc = 0x1A3CF4u;
    ctx->pc = 0x1A3CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3CF4u;
            // 0x1a3cf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3E68u;
    if (runtime->hasFunction(0x1A3E68u)) {
        auto targetFn = runtime->lookupFunction(0x1A3E68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A3E68_0x1a3e68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A3CFCu;
    // 0x1a3cfc: 0x0  nop
    ctx->pc = 0x1a3cfcu;
    // NOP
label_1a3d00:
    // 0x1a3d00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a3d00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a3d04:
    // 0x1a3d04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a3d04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3d08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a3d08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a3d0c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a3d0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3d10: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a3d10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d14: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1a3d14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3d18: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a3d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a3d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3D1Cu;
            // 0x1a3d20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3D24u;
    // 0x1a3d24: 0x0  nop
    ctx->pc = 0x1a3d24u;
    // NOP
}
