#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00397A30
// Address: 0x397a30 - 0x397d90
void sub_00397A30_0x397a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397A30_0x397a30");
#endif

    switch (ctx->pc) {
        case 0x397a7cu: goto label_397a7c;
        case 0x397ab8u: goto label_397ab8;
        case 0x397af0u: goto label_397af0;
        case 0x397b00u: goto label_397b00;
        case 0x397b10u: goto label_397b10;
        case 0x397b28u: goto label_397b28;
        case 0x397b40u: goto label_397b40;
        case 0x397b5cu: goto label_397b5c;
        case 0x397b88u: goto label_397b88;
        case 0x397bf4u: goto label_397bf4;
        case 0x397c00u: goto label_397c00;
        case 0x397c4cu: goto label_397c4c;
        case 0x397c84u: goto label_397c84;
        case 0x397c9cu: goto label_397c9c;
        case 0x397ca4u: goto label_397ca4;
        case 0x397cb8u: goto label_397cb8;
        case 0x397cc0u: goto label_397cc0;
        case 0x397cccu: goto label_397ccc;
        case 0x397cd4u: goto label_397cd4;
        case 0x397cf0u: goto label_397cf0;
        case 0x397cfcu: goto label_397cfc;
        case 0x397d10u: goto label_397d10;
        case 0x397d20u: goto label_397d20;
        case 0x397d28u: goto label_397d28;
        case 0x397d44u: goto label_397d44;
        default: break;
    }

    ctx->pc = 0x397a30u;

    // 0x397a30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x397a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x397a34: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x397a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x397a38: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x397a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x397a3c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x397a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x397a40: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x397a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x397a44: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x397a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x397a48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x397a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x397a4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x397a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x397a50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x397a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x397a54: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x397a54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x397a58: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x397a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x397a5c: 0x106000be  beqz        $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x397A5Cu;
    {
        const bool branch_taken_0x397a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x397A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397A5Cu;
            // 0x397a60: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397a5c) {
            ctx->pc = 0x397D58u;
            goto label_397d58;
        }
    }
    ctx->pc = 0x397A64u;
    // 0x397a64: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x397a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x397a68: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x397a68u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
    // 0x397a6c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x397a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x397a70: 0x26730e84  addiu       $s3, $s3, 0xE84
    ctx->pc = 0x397a70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3716));
    // 0x397a74: 0x26920090  addiu       $s2, $s4, 0x90
    ctx->pc = 0x397a74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x397a78: 0x8c71077c  lw          $s1, 0x77C($v1)
    ctx->pc = 0x397a78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
label_397a7c:
    // 0x397a7c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x397a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x397a80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x397a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x397a84: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x397A84u;
    {
        const bool branch_taken_0x397a84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x397a84) {
            ctx->pc = 0x397B70u;
            goto label_397b70;
        }
    }
    ctx->pc = 0x397A8Cu;
    // 0x397a8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x397a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397a90: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x397A90u;
    {
        const bool branch_taken_0x397a90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x397a90) {
            ctx->pc = 0x397AA8u;
            goto label_397aa8;
        }
    }
    ctx->pc = 0x397A98u;
    // 0x397a98: 0x108000ab  beqz        $a0, . + 4 + (0xAB << 2)
    ctx->pc = 0x397A98u;
    {
        const bool branch_taken_0x397a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x397a98) {
            ctx->pc = 0x397D48u;
            goto label_397d48;
        }
    }
    ctx->pc = 0x397AA0u;
    // 0x397aa0: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x397AA0u;
    {
        const bool branch_taken_0x397aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x397aa0) {
            ctx->pc = 0x397D48u;
            goto label_397d48;
        }
    }
    ctx->pc = 0x397AA8u;
label_397aa8:
    // 0x397aa8: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x397aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x397aac: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x397aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x397ab0: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x397AB0u;
    SET_GPR_U32(ctx, 31, 0x397AB8u);
    ctx->pc = 0x397AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397AB0u;
            // 0x397ab4: 0x260402c0  addiu       $a0, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397AB8u; }
        if (ctx->pc != 0x397AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397AB8u; }
        if (ctx->pc != 0x397AB8u) { return; }
    }
    ctx->pc = 0x397AB8u;
label_397ab8:
    // 0x397ab8: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x397ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x397abc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x397abcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x397ac0: 0x0  nop
    ctx->pc = 0x397ac0u;
    // NOP
    // 0x397ac4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x397ac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x397ac8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x397AC8u;
    {
        const bool branch_taken_0x397ac8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x397ac8) {
            ctx->pc = 0x397AE0u;
            goto label_397ae0;
        }
    }
    ctx->pc = 0x397AD0u;
    // 0x397ad0: 0xae000de4  sw          $zero, 0xDE4($s0)
    ctx->pc = 0x397ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 0));
    // 0x397ad4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x397ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x397ad8: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x397AD8u;
    {
        const bool branch_taken_0x397ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397AD8u;
            // 0x397adc: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397ad8) {
            ctx->pc = 0x397D48u;
            goto label_397d48;
        }
    }
    ctx->pc = 0x397AE0u;
label_397ae0:
    // 0x397ae0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x397ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x397ae4: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x397ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x397ae8: 0xc04cc90  jal         func_133240
    ctx->pc = 0x397AE8u;
    SET_GPR_U32(ctx, 31, 0x397AF0u);
    ctx->pc = 0x397AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397AE8u;
            // 0x397aec: 0x260602c0  addiu       $a2, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397AF0u; }
        if (ctx->pc != 0x397AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397AF0u; }
        if (ctx->pc != 0x397AF0u) { return; }
    }
    ctx->pc = 0x397AF0u;
label_397af0:
    // 0x397af0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x397af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x397af4: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x397af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x397af8: 0xc04cc44  jal         func_133110
    ctx->pc = 0x397AF8u;
    SET_GPR_U32(ctx, 31, 0x397B00u);
    ctx->pc = 0x397AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397AF8u;
            // 0x397afc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397B00u; }
        if (ctx->pc != 0x397B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397B00u; }
        if (ctx->pc != 0x397B00u) { return; }
    }
    ctx->pc = 0x397B00u;
label_397b00:
    // 0x397b00: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x397b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x397b04: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x397b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x397b08: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x397B08u;
    SET_GPR_U32(ctx, 31, 0x397B10u);
    ctx->pc = 0x397B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397B08u;
            // 0x397b0c: 0x26060830  addiu       $a2, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397B10u; }
        if (ctx->pc != 0x397B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397B10u; }
        if (ctx->pc != 0x397B10u) { return; }
    }
    ctx->pc = 0x397B10u;
label_397b10:
    // 0x397b10: 0xc6010880  lwc1        $f1, 0x880($s0)
    ctx->pc = 0x397b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x397b14: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x397b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
    // 0x397b18: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x397b18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x397b1c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x397b1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x397b20: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x397B20u;
    SET_GPR_U32(ctx, 31, 0x397B28u);
    ctx->pc = 0x397B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397B20u;
            // 0x397b24: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397B28u; }
        if (ctx->pc != 0x397B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397B28u; }
        if (ctx->pc != 0x397B28u) { return; }
    }
    ctx->pc = 0x397B28u;
label_397b28:
    // 0x397b28: 0xc60c0930  lwc1        $f12, 0x930($s0)
    ctx->pc = 0x397b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x397b2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x397b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x397b30: 0xc60d0880  lwc1        $f13, 0x880($s0)
    ctx->pc = 0x397b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x397b34: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x397b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x397b38: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x397B38u;
    SET_GPR_U32(ctx, 31, 0x397B40u);
    ctx->pc = 0x397B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397B38u;
            // 0x397b3c: 0x2604092c  addiu       $a0, $s0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397B40u; }
        if (ctx->pc != 0x397B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397B40u; }
        if (ctx->pc != 0x397B40u) { return; }
    }
    ctx->pc = 0x397B40u;
label_397b40:
    // 0x397b40: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x397b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x397b44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x397b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x397b48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x397b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x397b4c: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x397b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x397b50: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x397b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x397b54: 0xc0c6250  jal         func_318940
    ctx->pc = 0x397B54u;
    SET_GPR_U32(ctx, 31, 0x397B5Cu);
    ctx->pc = 0x397B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397B54u;
            // 0x397b58: 0x26060560  addiu       $a2, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397B5Cu; }
        if (ctx->pc != 0x397B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397B5Cu; }
        if (ctx->pc != 0x397B5Cu) { return; }
    }
    ctx->pc = 0x397B5Cu;
label_397b5c:
    // 0x397b5c: 0x3c033eed  lui         $v1, 0x3EED
    ctx->pc = 0x397b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
    // 0x397b60: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x397b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
    // 0x397b64: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x397B64u;
    {
        const bool branch_taken_0x397b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397B64u;
            // 0x397b68: 0xae030de4  sw          $v1, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397b64) {
            ctx->pc = 0x397D48u;
            goto label_397d48;
        }
    }
    ctx->pc = 0x397B6Cu;
    // 0x397b6c: 0x0  nop
    ctx->pc = 0x397b6cu;
    // NOP
label_397b70:
    // 0x397b70: 0x8e860074  lw          $a2, 0x74($s4)
    ctx->pc = 0x397b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x397b74: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x397B74u;
    {
        const bool branch_taken_0x397b74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x397b74) {
            ctx->pc = 0x397BB8u;
            goto label_397bb8;
        }
    }
    ctx->pc = 0x397B7Cu;
    // 0x397b7c: 0x8e850084  lw          $a1, 0x84($s4)
    ctx->pc = 0x397b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x397b80: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x397b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x397b84: 0x0  nop
    ctx->pc = 0x397b84u;
    // NOP
label_397b88:
    // 0x397b88: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x397b88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x397b8c: 0x8ce401c4  lw          $a0, 0x1C4($a3)
    ctx->pc = 0x397b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 452)));
    // 0x397b90: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x397B90u;
    {
        const bool branch_taken_0x397b90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x397b90) {
            ctx->pc = 0x397BA0u;
            goto label_397ba0;
        }
    }
    ctx->pc = 0x397B98u;
    // 0x397b98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x397B98u;
    {
        const bool branch_taken_0x397b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x397b98) {
            ctx->pc = 0x397BC0u;
            goto label_397bc0;
        }
    }
    ctx->pc = 0x397BA0u;
label_397ba0:
    // 0x397ba0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x397ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x397ba4: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x397BA4u;
    {
        const bool branch_taken_0x397ba4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x397BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397BA4u;
            // 0x397ba8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397ba4) {
            ctx->pc = 0x397B88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_397b88;
        }
    }
    ctx->pc = 0x397BACu;
    // 0x397bac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x397BACu;
    {
        const bool branch_taken_0x397bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397BACu;
            // 0x397bb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397bac) {
            ctx->pc = 0x397BC0u;
            goto label_397bc0;
        }
    }
    ctx->pc = 0x397BB4u;
    // 0x397bb4: 0x0  nop
    ctx->pc = 0x397bb4u;
    // NOP
label_397bb8:
    // 0x397bb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x397bb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397bbc: 0x0  nop
    ctx->pc = 0x397bbcu;
    // NOP
label_397bc0:
    // 0x397bc0: 0x10e00061  beqz        $a3, . + 4 + (0x61 << 2)
    ctx->pc = 0x397BC0u;
    {
        const bool branch_taken_0x397bc0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x397bc0) {
            ctx->pc = 0x397D48u;
            goto label_397d48;
        }
    }
    ctx->pc = 0x397BC8u;
    // 0x397bc8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x397bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x397bcc: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x397bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
    // 0x397bd0: 0x3443097b  ori         $v1, $v0, 0x97B
    ctx->pc = 0x397bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
    // 0x397bd4: 0x26960070  addiu       $s6, $s4, 0x70
    ctx->pc = 0x397bd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x397bd8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x397bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x397bdc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x397bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397be0: 0xaca30de4  sw          $v1, 0xDE4($a1)
    ctx->pc = 0x397be0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3556), GPR_U32(ctx, 3));
    // 0x397be4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x397be4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x397be8: 0xace201c4  sw          $v0, 0x1C4($a3)
    ctx->pc = 0x397be8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 452), GPR_U32(ctx, 2));
    // 0x397bec: 0xc0e62ec  jal         func_398BB0
    ctx->pc = 0x397BECu;
    SET_GPR_U32(ctx, 31, 0x397BF4u);
    ctx->pc = 0x397BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397BECu;
            // 0x397bf0: 0xace50008  sw          $a1, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x398BB0u;
    if (runtime->hasFunction(0x398BB0u)) {
        auto targetFn = runtime->lookupFunction(0x398BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397BF4u; }
        if (ctx->pc != 0x397BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00398BB0_0x398bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397BF4u; }
        if (ctx->pc != 0x397BF4u) { return; }
    }
    ctx->pc = 0x397BF4u;
label_397bf4:
    // 0x397bf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x397bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397bf8: 0xc0d1dc8  jal         func_347720
    ctx->pc = 0x397BF8u;
    SET_GPR_U32(ctx, 31, 0x397C00u);
    ctx->pc = 0x397BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397BF8u;
            // 0x397bfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397C00u; }
        if (ctx->pc != 0x397C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397C00u; }
        if (ctx->pc != 0x397C00u) { return; }
    }
    ctx->pc = 0x397C00u;
label_397c00:
    // 0x397c00: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x397c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x397c04: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x397c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x397c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x397c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x397c0c: 0x0  nop
    ctx->pc = 0x397c0cu;
    // NOP
    // 0x397c10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x397c10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x397c14: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x397C14u;
    {
        const bool branch_taken_0x397c14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x397c14) {
            ctx->pc = 0x397C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x397C14u;
            // 0x397c18: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x397C2Cu;
            goto label_397c2c;
        }
    }
    ctx->pc = 0x397C1Cu;
    // 0x397c1c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x397c1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x397c20: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x397c20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x397c24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x397C24u;
    {
        const bool branch_taken_0x397c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397C24u;
            // 0x397c28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397c24) {
            ctx->pc = 0x397C44u;
            goto label_397c44;
        }
    }
    ctx->pc = 0x397C2Cu;
label_397c2c:
    // 0x397c2c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x397c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x397c30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x397c30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x397c34: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x397c34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x397c38: 0x0  nop
    ctx->pc = 0x397c38u;
    // NOP
    // 0x397c3c: 0x2a2a825  or          $s5, $s5, $v0
    ctx->pc = 0x397c3cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x397c40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x397c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_397c44:
    // 0x397c44: 0xc0d1dc8  jal         func_347720
    ctx->pc = 0x397C44u;
    SET_GPR_U32(ctx, 31, 0x397C4Cu);
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397C4Cu; }
        if (ctx->pc != 0x397C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397C4Cu; }
        if (ctx->pc != 0x397C4Cu) { return; }
    }
    ctx->pc = 0x397C4Cu;
label_397c4c:
    // 0x397c4c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x397c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x397c50: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x397c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
    // 0x397c54: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x397c54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x397c58: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x397c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
    // 0x397c5c: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x397c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x397c60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x397c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397c64: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x397c64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x397c68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x397c68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x397c6c: 0x0  nop
    ctx->pc = 0x397c6cu;
    // NOP
    // 0x397c70: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x397c70u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x397c74: 0x0  nop
    ctx->pc = 0x397c74u;
    // NOP
    // 0x397c78: 0x0  nop
    ctx->pc = 0x397c78u;
    // NOP
    // 0x397c7c: 0xc0d1dc8  jal         func_347720
    ctx->pc = 0x397C7Cu;
    SET_GPR_U32(ctx, 31, 0x397C84u);
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397C84u; }
        if (ctx->pc != 0x397C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397C84u; }
        if (ctx->pc != 0x397C84u) { return; }
    }
    ctx->pc = 0x397C84u;
label_397c84:
    // 0x397c84: 0xc44d0008  lwc1        $f13, 0x8($v0)
    ctx->pc = 0x397c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x397c88: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x397c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397c8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x397c8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x397c90: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x397c90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x397c94: 0xc122b58  jal         func_48AD60
    ctx->pc = 0x397C94u;
    SET_GPR_U32(ctx, 31, 0x397C9Cu);
    ctx->pc = 0x397C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397C94u;
            // 0x397c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397C9Cu; }
        if (ctx->pc != 0x397C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397C9Cu; }
        if (ctx->pc != 0x397C9Cu) { return; }
    }
    ctx->pc = 0x397C9Cu;
label_397c9c:
    // 0x397c9c: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x397C9Cu;
    SET_GPR_U32(ctx, 31, 0x397CA4u);
    ctx->pc = 0x397CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397C9Cu;
            // 0x397ca0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397CA4u; }
        if (ctx->pc != 0x397CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397CA4u; }
        if (ctx->pc != 0x397CA4u) { return; }
    }
    ctx->pc = 0x397CA4u;
label_397ca4:
    // 0x397ca4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x397ca4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397ca8: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x397ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x397cac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x397cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x397cb0: 0xc0b8160  jal         func_2E0580
    ctx->pc = 0x397CB0u;
    SET_GPR_U32(ctx, 31, 0x397CB8u);
    ctx->pc = 0x397CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397CB0u;
            // 0x397cb4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397CB8u; }
        if (ctx->pc != 0x397CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397CB8u; }
        if (ctx->pc != 0x397CB8u) { return; }
    }
    ctx->pc = 0x397CB8u;
label_397cb8:
    // 0x397cb8: 0xc0e5f64  jal         func_397D90
    ctx->pc = 0x397CB8u;
    SET_GPR_U32(ctx, 31, 0x397CC0u);
    ctx->pc = 0x397CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397CB8u;
            // 0x397cbc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397D90u;
    if (runtime->hasFunction(0x397D90u)) {
        auto targetFn = runtime->lookupFunction(0x397D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397CC0u; }
        if (ctx->pc != 0x397CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397D90_0x397d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397CC0u; }
        if (ctx->pc != 0x397CC0u) { return; }
    }
    ctx->pc = 0x397CC0u;
label_397cc0:
    // 0x397cc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x397cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397cc4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x397CC4u;
    SET_GPR_U32(ctx, 31, 0x397CCCu);
    ctx->pc = 0x397CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397CC4u;
            // 0x397cc8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397CCCu; }
        if (ctx->pc != 0x397CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397CCCu; }
        if (ctx->pc != 0x397CCCu) { return; }
    }
    ctx->pc = 0x397CCCu;
label_397ccc:
    // 0x397ccc: 0xc040180  jal         func_100600
    ctx->pc = 0x397CCCu;
    SET_GPR_U32(ctx, 31, 0x397CD4u);
    ctx->pc = 0x397CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397CCCu;
            // 0x397cd0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397CD4u; }
        if (ctx->pc != 0x397CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397CD4u; }
        if (ctx->pc != 0x397CD4u) { return; }
    }
    ctx->pc = 0x397CD4u;
label_397cd4:
    // 0x397cd4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x397CD4u;
    {
        const bool branch_taken_0x397cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397cd4) {
            ctx->pc = 0x397CF0u;
            goto label_397cf0;
        }
    }
    ctx->pc = 0x397CDCu;
    // 0x397cdc: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x397cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x397ce0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x397ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397ce4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x397ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x397ce8: 0xc0e1468  jal         func_3851A0
    ctx->pc = 0x397CE8u;
    SET_GPR_U32(ctx, 31, 0x397CF0u);
    ctx->pc = 0x397CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397CE8u;
            // 0x397cec: 0x24c66e30  addiu       $a2, $a2, 0x6E30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3851A0u;
    if (runtime->hasFunction(0x3851A0u)) {
        auto targetFn = runtime->lookupFunction(0x3851A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397CF0u; }
        if (ctx->pc != 0x397CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003851A0_0x3851a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397CF0u; }
        if (ctx->pc != 0x397CF0u) { return; }
    }
    ctx->pc = 0x397CF0u;
label_397cf0:
    // 0x397cf0: 0xae0201d4  sw          $v0, 0x1D4($s0)
    ctx->pc = 0x397cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
    // 0x397cf4: 0xc0e1154  jal         func_384550
    ctx->pc = 0x397CF4u;
    SET_GPR_U32(ctx, 31, 0x397CFCu);
    ctx->pc = 0x397CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397CF4u;
            // 0x397cf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384550u;
    if (runtime->hasFunction(0x384550u)) {
        auto targetFn = runtime->lookupFunction(0x384550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397CFCu; }
        if (ctx->pc != 0x397CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384550_0x384550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397CFCu; }
        if (ctx->pc != 0x397CFCu) { return; }
    }
    ctx->pc = 0x397CFCu;
label_397cfc:
    // 0x397cfc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x397cfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397d00: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x397d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x397d04: 0x24a56df0  addiu       $a1, $a1, 0x6DF0
    ctx->pc = 0x397d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28144));
    // 0x397d08: 0xc0f6518  jal         func_3D9460
    ctx->pc = 0x397D08u;
    SET_GPR_U32(ctx, 31, 0x397D10u);
    ctx->pc = 0x397D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397D08u;
            // 0x397d0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D9460u;
    if (runtime->hasFunction(0x3D9460u)) {
        auto targetFn = runtime->lookupFunction(0x3D9460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397D10u; }
        if (ctx->pc != 0x397D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D9460_0x3d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397D10u; }
        if (ctx->pc != 0x397D10u) { return; }
    }
    ctx->pc = 0x397D10u;
label_397d10:
    // 0x397d10: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x397d10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x397d14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x397d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397d18: 0xc0f6518  jal         func_3D9460
    ctx->pc = 0x397D18u;
    SET_GPR_U32(ctx, 31, 0x397D20u);
    ctx->pc = 0x397D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397D18u;
            // 0x397d1c: 0x24a56e10  addiu       $a1, $a1, 0x6E10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D9460u;
    if (runtime->hasFunction(0x3D9460u)) {
        auto targetFn = runtime->lookupFunction(0x3D9460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397D20u; }
        if (ctx->pc != 0x397D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D9460_0x3d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397D20u; }
        if (ctx->pc != 0x397D20u) { return; }
    }
    ctx->pc = 0x397D20u;
label_397d20:
    // 0x397d20: 0xc0f64e8  jal         func_3D93A0
    ctx->pc = 0x397D20u;
    SET_GPR_U32(ctx, 31, 0x397D28u);
    ctx->pc = 0x397D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397D20u;
            // 0x397d24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D93A0u;
    if (runtime->hasFunction(0x3D93A0u)) {
        auto targetFn = runtime->lookupFunction(0x3D93A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397D28u; }
        if (ctx->pc != 0x397D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D93A0_0x3d93a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397D28u; }
        if (ctx->pc != 0x397D28u) { return; }
    }
    ctx->pc = 0x397D28u;
label_397d28:
    // 0x397d28: 0xae1401c8  sw          $s4, 0x1C8($s0)
    ctx->pc = 0x397d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 20));
    // 0x397d2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x397d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397d30: 0xae0201c0  sw          $v0, 0x1C0($s0)
    ctx->pc = 0x397d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 2));
    // 0x397d34: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x397d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397d38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x397d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397d3c: 0xc0e62f8  jal         func_398BE0
    ctx->pc = 0x397D3Cu;
    SET_GPR_U32(ctx, 31, 0x397D44u);
    ctx->pc = 0x397D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397D3Cu;
            // 0x397d40: 0xae0001c4  sw          $zero, 0x1C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x398BE0u;
    if (runtime->hasFunction(0x398BE0u)) {
        auto targetFn = runtime->lookupFunction(0x398BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397D44u; }
        if (ctx->pc != 0x397D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00398BE0_0x398be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397D44u; }
        if (ctx->pc != 0x397D44u) { return; }
    }
    ctx->pc = 0x397D44u;
label_397d44:
    // 0x397d44: 0x0  nop
    ctx->pc = 0x397d44u;
    // NOP
label_397d48:
    // 0x397d48: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x397d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x397d4c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x397d4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x397d50: 0x1620ff4a  bnez        $s1, . + 4 + (-0xB6 << 2)
    ctx->pc = 0x397D50u;
    {
        const bool branch_taken_0x397d50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x397D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397D50u;
            // 0x397d54: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397d50) {
            ctx->pc = 0x397A7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_397a7c;
        }
    }
    ctx->pc = 0x397D58u;
label_397d58:
    // 0x397d58: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x397d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x397d5c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x397d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x397d60: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x397d60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x397d64: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x397d64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x397d68: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x397d68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x397d6c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x397d6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x397d70: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x397d70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x397d74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x397d74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x397d78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x397d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x397D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397D7Cu;
            // 0x397d80: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x397D84u;
    // 0x397d84: 0x0  nop
    ctx->pc = 0x397d84u;
    // NOP
    // 0x397d88: 0x0  nop
    ctx->pc = 0x397d88u;
    // NOP
    // 0x397d8c: 0x0  nop
    ctx->pc = 0x397d8cu;
    // NOP
}
