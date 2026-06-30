#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1A10
// Address: 0x2f1a10 - 0x2f1bb0
void sub_002F1A10_0x2f1a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1A10_0x2f1a10");
#endif

    switch (ctx->pc) {
        case 0x2f1a40u: goto label_2f1a40;
        case 0x2f1abcu: goto label_2f1abc;
        case 0x2f1ae8u: goto label_2f1ae8;
        case 0x2f1afcu: goto label_2f1afc;
        case 0x2f1b48u: goto label_2f1b48;
        case 0x2f1b5cu: goto label_2f1b5c;
        case 0x2f1b8cu: goto label_2f1b8c;
        default: break;
    }

    ctx->pc = 0x2f1a10u;

    // 0x2f1a10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f1a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f1a14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f1a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f1a18: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f1a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2f1a1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f1a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f1a20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f1a20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f1a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f1a28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f1a28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a2c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f1a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f1a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a38: 0xc04cc08  jal         func_133020
    ctx->pc = 0x2F1A38u;
    SET_GPR_U32(ctx, 31, 0x2F1A40u);
    ctx->pc = 0x2F1A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1A38u;
            // 0x2f1a3c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1A40u; }
        if (ctx->pc != 0x2F1A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1A40u; }
        if (ctx->pc != 0x2F1A40u) { return; }
    }
    ctx->pc = 0x2F1A40u;
label_2f1a40:
    // 0x2f1a40: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2f1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2f1a44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1a48: 0x0  nop
    ctx->pc = 0x2f1a48u;
    // NOP
    // 0x2f1a4c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f1a4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1a50: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2F1A50u;
    {
        const bool branch_taken_0x2f1a50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F1A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1A50u;
            // 0x2f1a54: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a50) {
            ctx->pc = 0x2F1A5Cu;
            goto label_2f1a5c;
        }
    }
    ctx->pc = 0x2F1A58u;
    // 0x2f1a58: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f1a58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1a5c:
    // 0x2f1a5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f1a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f1a60: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2f1a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f1a64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1a68: 0x0  nop
    ctx->pc = 0x2f1a68u;
    // NOP
    // 0x2f1a6c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f1a6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1a70: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2F1A70u;
    {
        const bool branch_taken_0x2f1a70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F1A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1A70u;
            // 0x2f1a74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a70) {
            ctx->pc = 0x2F1A7Cu;
            goto label_2f1a7c;
        }
    }
    ctx->pc = 0x2F1A78u;
    // 0x2f1a78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1a7c:
    // 0x2f1a7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f1a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f1a80: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x2f1a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2f1a84: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2f1a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2f1a88: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f1a88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1a8c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f1a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2f1a90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f1a90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f1a94: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2f1a94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f1a98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f1a98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1a9c: 0x0  nop
    ctx->pc = 0x2f1a9cu;
    // NOP
    // 0x2f1aa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f1aa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f1aa4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2f1aa4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2f1aa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1aac: 0x0  nop
    ctx->pc = 0x2f1aacu;
    // NOP
    // 0x2f1ab0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f1ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f1ab4: 0xc0477fe  jal         func_11DFF8
    ctx->pc = 0x2F1AB4u;
    SET_GPR_U32(ctx, 31, 0x2F1ABCu);
    ctx->pc = 0x2F1AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1AB4u;
            // 0x2f1ab8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1ABCu; }
        if (ctx->pc != 0x2F1ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1ABCu; }
        if (ctx->pc != 0x2F1ABCu) { return; }
    }
    ctx->pc = 0x2F1ABCu;
label_2f1abc:
    // 0x2f1abc: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x2f1abcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2f1ac0: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x2f1ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x2f1ac4: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x2f1ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x2f1ac8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2f1ac8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2f1acc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1ad0: 0x0  nop
    ctx->pc = 0x2f1ad0u;
    // NOP
    // 0x2f1ad4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f1ad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1ad8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1AD8u;
    {
        const bool branch_taken_0x2f1ad8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f1ad8) {
            ctx->pc = 0x2F1ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1AD8u;
            // 0x2f1adc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1AF0u;
            goto label_2f1af0;
        }
    }
    ctx->pc = 0x2F1AE0u;
    // 0x2f1ae0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2F1AE0u;
    SET_GPR_U32(ctx, 31, 0x2F1AE8u);
    ctx->pc = 0x2F1AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1AE0u;
            // 0x2f1ae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1AE8u; }
        if (ctx->pc != 0x2F1AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1AE8u; }
        if (ctx->pc != 0x2F1AE8u) { return; }
    }
    ctx->pc = 0x2F1AE8u;
label_2f1ae8:
    // 0x2f1ae8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2F1AE8u;
    {
        const bool branch_taken_0x2f1ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1AE8u;
            // 0x2f1aec: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1ae8) {
            ctx->pc = 0x2F1B90u;
            goto label_2f1b90;
        }
    }
    ctx->pc = 0x2F1AF0u;
label_2f1af0:
    // 0x2f1af0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f1af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1af4: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x2F1AF4u;
    SET_GPR_U32(ctx, 31, 0x2F1AFCu);
    ctx->pc = 0x2F1AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1AF4u;
            // 0x2f1af8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1AFCu; }
        if (ctx->pc != 0x2F1AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1AFCu; }
        if (ctx->pc != 0x2F1AFCu) { return; }
    }
    ctx->pc = 0x2F1AFCu;
label_2f1afc:
    // 0x2f1afc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2f1afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1b00: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2f1b00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1b04: 0x0  nop
    ctx->pc = 0x2f1b04u;
    // NOP
    // 0x2f1b08: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f1b08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1b0c: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x2F1B0Cu;
    {
        const bool branch_taken_0x2f1b0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f1b0c) {
            ctx->pc = 0x2F1B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1B0Cu;
            // 0x2f1b10: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1B54u;
            goto label_2f1b54;
        }
    }
    ctx->pc = 0x2F1B14u;
    // 0x2f1b14: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2f1b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1b18: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f1b18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1b1c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2F1B1Cu;
    {
        const bool branch_taken_0x2f1b1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f1b1c) {
            ctx->pc = 0x2F1B50u;
            goto label_2f1b50;
        }
    }
    ctx->pc = 0x2F1B24u;
    // 0x2f1b24: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2f1b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1b28: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f1b28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1b2c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2F1B2Cu;
    {
        const bool branch_taken_0x2f1b2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f1b2c) {
            ctx->pc = 0x2F1B50u;
            goto label_2f1b50;
        }
    }
    ctx->pc = 0x2F1B34u;
    // 0x2f1b34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f1b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b40: 0xc04ca18  jal         func_132860
    ctx->pc = 0x2F1B40u;
    SET_GPR_U32(ctx, 31, 0x2F1B48u);
    ctx->pc = 0x2F1B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1B40u;
            // 0x2f1b44: 0x24077fff  addiu       $a3, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B48u; }
        if (ctx->pc != 0x2F1B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B48u; }
        if (ctx->pc != 0x2F1B48u) { return; }
    }
    ctx->pc = 0x2F1B48u;
label_2f1b48:
    // 0x2f1b48: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F1B48u;
    {
        const bool branch_taken_0x2f1b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1b48) {
            ctx->pc = 0x2F1B8Cu;
            goto label_2f1b8c;
        }
    }
    ctx->pc = 0x2F1B50u;
label_2f1b50:
    // 0x2f1b50: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f1b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2f1b54:
    // 0x2f1b54: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2F1B54u;
    SET_GPR_U32(ctx, 31, 0x2F1B5Cu);
    ctx->pc = 0x2F1B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1B54u;
            // 0x2f1b58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B5Cu; }
        if (ctx->pc != 0x2F1B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B5Cu; }
        if (ctx->pc != 0x2F1B5Cu) { return; }
    }
    ctx->pc = 0x2F1B5Cu;
label_2f1b5c:
    // 0x2f1b5c: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x2f1b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x2f1b60: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x2f1b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x2f1b64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1b68: 0x0  nop
    ctx->pc = 0x2f1b68u;
    // NOP
    // 0x2f1b6c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2f1b6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2f1b70: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f1b70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2f1b74: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x2f1b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f1b78: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x2f1b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2f1b7c: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x2f1b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2f1b80: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2f1b80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2f1b84: 0xc04c970  jal         func_1325C0
    ctx->pc = 0x2F1B84u;
    SET_GPR_U32(ctx, 31, 0x2F1B8Cu);
    ctx->pc = 0x2F1B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1B84u;
            // 0x2f1b88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B8Cu; }
        if (ctx->pc != 0x2F1B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B8Cu; }
        if (ctx->pc != 0x2F1B8Cu) { return; }
    }
    ctx->pc = 0x2F1B8Cu;
label_2f1b8c:
    // 0x2f1b8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f1b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f1b90:
    // 0x2f1b90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f1b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f1b94: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f1b94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1b98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f1b98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1b9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f1b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1BA0u;
            // 0x2f1ba4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1BA8u;
    // 0x2f1ba8: 0x0  nop
    ctx->pc = 0x2f1ba8u;
    // NOP
    // 0x2f1bac: 0x0  nop
    ctx->pc = 0x2f1bacu;
    // NOP
}
