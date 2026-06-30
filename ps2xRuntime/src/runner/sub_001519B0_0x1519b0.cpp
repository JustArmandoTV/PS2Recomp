#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001519B0
// Address: 0x1519b0 - 0x151cd0
void sub_001519B0_0x1519b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001519B0_0x1519b0");
#endif

    switch (ctx->pc) {
        case 0x151a68u: goto label_151a68;
        case 0x151a78u: goto label_151a78;
        case 0x151c40u: goto label_151c40;
        case 0x151c50u: goto label_151c50;
        case 0x151c60u: goto label_151c60;
        case 0x151c70u: goto label_151c70;
        default: break;
    }

    ctx->pc = 0x1519b0u;

    // 0x1519b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1519b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1519b4: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x1519b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x1519b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1519b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1519bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1519bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1519c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1519c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1519c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1519c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1519c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1519c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1519cc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1519ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1519d0: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x1519d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1519d4: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x1519d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1519d8: 0x8e270040  lw          $a3, 0x40($s1)
    ctx->pc = 0x1519d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1519dc: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1519dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1519e0: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1519e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1519e4: 0xae260040  sw          $a2, 0x40($s1)
    ctx->pc = 0x1519e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 6));
    // 0x1519e8: 0x8e260044  lw          $a2, 0x44($s1)
    ctx->pc = 0x1519e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1519ec: 0x30c60010  andi        $a2, $a2, 0x10
    ctx->pc = 0x1519ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x1519f0: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1519F0u;
    {
        const bool branch_taken_0x1519f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1519f0) {
            ctx->pc = 0x1519F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1519F0u;
            // 0x1519f4: 0x3c06437f  lui         $a2, 0x437F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17279 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151A08u;
            goto label_151a08;
        }
    }
    ctx->pc = 0x1519F8u;
    // 0x1519f8: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x1519f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
    // 0x1519fc: 0x4486a000  mtc1        $a2, $f20
    ctx->pc = 0x1519fcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x151a00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151A00u;
    {
        const bool branch_taken_0x151a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151A00u;
            // 0x151a04: 0x8ca70000  lw          $a3, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151a00) {
            ctx->pc = 0x151A10u;
            goto label_151a10;
        }
    }
    ctx->pc = 0x151A08u;
label_151a08:
    // 0x151a08: 0x4486a000  mtc1        $a2, $f20
    ctx->pc = 0x151a08u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x151a0c: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x151a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_151a10:
    // 0x151a10: 0x24060e00  addiu       $a2, $zero, 0xE00
    ctx->pc = 0x151a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x151a14: 0x30e70e00  andi        $a3, $a3, 0xE00
    ctx->pc = 0x151a14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3584);
    // 0x151a18: 0x54e6005b  bnel        $a3, $a2, . + 4 + (0x5B << 2)
    ctx->pc = 0x151A18u;
    {
        const bool branch_taken_0x151a18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x151a18) {
            ctx->pc = 0x151A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151A18u;
            // 0x151a1c: 0x8e260040  lw          $a2, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151B88u;
            goto label_151b88;
        }
    }
    ctx->pc = 0x151A20u;
    // 0x151a20: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x151a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x151a24: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x151a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x151a28: 0x30c60e77  andi        $a2, $a2, 0xE77
    ctx->pc = 0x151a28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3703);
    // 0x151a2c: 0x50c50013  beql        $a2, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x151A2Cu;
    {
        const bool branch_taken_0x151a2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x151a2c) {
            ctx->pc = 0x151A30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151A2Cu;
            // 0x151a30: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x151A7Cu;
            goto label_151a7c;
        }
    }
    ctx->pc = 0x151A34u;
    // 0x151a34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x151a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151a38: 0x10c5000f  beq         $a2, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x151A38u;
    {
        const bool branch_taken_0x151a38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x151a38) {
            ctx->pc = 0x151A78u;
            goto label_151a78;
        }
    }
    ctx->pc = 0x151A40u;
    // 0x151a40: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x151a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x151a44: 0x50c5000a  beql        $a2, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x151A44u;
    {
        const bool branch_taken_0x151a44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x151a44) {
            ctx->pc = 0x151A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151A44u;
            // 0x151a48: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151A70u;
            goto label_151a70;
        }
    }
    ctx->pc = 0x151A4Cu;
    // 0x151a4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x151a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x151a50: 0x50c50003  beql        $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x151A50u;
    {
        const bool branch_taken_0x151a50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x151a50) {
            ctx->pc = 0x151A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151A50u;
            // 0x151a54: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151A60u;
            goto label_151a60;
        }
    }
    ctx->pc = 0x151A58u;
    // 0x151a58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x151A58u;
    {
        const bool branch_taken_0x151a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151a58) {
            ctx->pc = 0x151A78u;
            goto label_151a78;
        }
    }
    ctx->pc = 0x151A60u;
label_151a60:
    // 0x151a60: 0xc04d894  jal         func_136250
    ctx->pc = 0x151A60u;
    SET_GPR_U32(ctx, 31, 0x151A68u);
    ctx->pc = 0x151A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151A60u;
            // 0x151a64: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136250u;
    if (runtime->hasFunction(0x136250u)) {
        auto targetFn = runtime->lookupFunction(0x136250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A68u; }
        if (ctx->pc != 0x151A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136250_0x136250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A68u; }
        if (ctx->pc != 0x151A68u) { return; }
    }
    ctx->pc = 0x151A68u;
label_151a68:
    // 0x151a68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151A68u;
    {
        const bool branch_taken_0x151a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151a68) {
            ctx->pc = 0x151A78u;
            goto label_151a78;
        }
    }
    ctx->pc = 0x151A70u;
label_151a70:
    // 0x151a70: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x151A70u;
    SET_GPR_U32(ctx, 31, 0x151A78u);
    ctx->pc = 0x151A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151A70u;
            // 0x151a74: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (runtime->hasFunction(0x135F20u)) {
        auto targetFn = runtime->lookupFunction(0x135F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A78u; }
        if (ctx->pc != 0x151A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135F20_0x135f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A78u; }
        if (ctx->pc != 0x151A78u) { return; }
    }
    ctx->pc = 0x151A78u;
label_151a78:
    // 0x151a78: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x151a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151a7c:
    // 0x151a7c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x151a7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x151a80: 0x0  nop
    ctx->pc = 0x151a80u;
    // NOP
    // 0x151a84: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x151a84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151a88: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x151A88u;
    {
        const bool branch_taken_0x151a88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x151a88) {
            ctx->pc = 0x151A8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151A88u;
            // 0x151a8c: 0x4600a086  mov.s       $f2, $f20 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x151A90u;
            goto label_151a90;
        }
    }
    ctx->pc = 0x151A90u;
label_151a90:
    // 0x151a90: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x151a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151a94: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x151a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151a98: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x151a98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x151a9c: 0x0  nop
    ctx->pc = 0x151a9cu;
    // NOP
    // 0x151aa0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x151aa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x151aa4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x151aa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151aa8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x151AA8u;
    {
        const bool branch_taken_0x151aa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x151AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151AA8u;
            // 0x151aac: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151aa8) {
            ctx->pc = 0x151AB8u;
            goto label_151ab8;
        }
    }
    ctx->pc = 0x151AB0u;
    // 0x151ab0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151AB0u;
    {
        const bool branch_taken_0x151ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151AB0u;
            // 0x151ab4: 0xc7a10054  lwc1        $f1, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ab0) {
            ctx->pc = 0x151AC0u;
            goto label_151ac0;
        }
    }
    ctx->pc = 0x151AB8u;
label_151ab8:
    // 0x151ab8: 0x4600a0c6  mov.s       $f3, $f20
    ctx->pc = 0x151ab8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[20]);
    // 0x151abc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x151abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_151ac0:
    // 0x151ac0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x151ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151ac4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x151ac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x151ac8: 0x0  nop
    ctx->pc = 0x151ac8u;
    // NOP
    // 0x151acc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x151accu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x151ad0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x151ad0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151ad4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x151AD4u;
    {
        const bool branch_taken_0x151ad4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x151AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151AD4u;
            // 0x151ad8: 0xe7a10054  swc1        $f1, 0x54($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ad4) {
            ctx->pc = 0x151AE4u;
            goto label_151ae4;
        }
    }
    ctx->pc = 0x151ADCu;
    // 0x151adc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151ADCu;
    {
        const bool branch_taken_0x151adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151ADCu;
            // 0x151ae0: 0xc7a00058  lwc1        $f0, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151adc) {
            ctx->pc = 0x151AECu;
            goto label_151aec;
        }
    }
    ctx->pc = 0x151AE4u;
label_151ae4:
    // 0x151ae4: 0x4600a086  mov.s       $f2, $f20
    ctx->pc = 0x151ae4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[20]);
    // 0x151ae8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x151ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151aec:
    // 0x151aec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x151aecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x151af0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x151af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x151af4: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x151af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x151af8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x151af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x151afc: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x151AFCu;
    {
        const bool branch_taken_0x151afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151afc) {
            ctx->pc = 0x151B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151AFCu;
            // 0x151b00: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x151B20u;
            goto label_151b20;
        }
    }
    ctx->pc = 0x151B04u;
    // 0x151b04: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x151b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151b08: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x151b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x151b0c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x151b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151b10: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x151b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x151b14: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x151b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151b18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x151B18u;
    {
        const bool branch_taken_0x151b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151B18u;
            // 0x151b1c: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b18) {
            ctx->pc = 0x151B34u;
            goto label_151b34;
        }
    }
    ctx->pc = 0x151B20u;
label_151b20:
    // 0x151b20: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x151b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x151b24: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x151b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151b28: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x151b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x151b2c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x151b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151b30: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x151b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_151b34:
    // 0x151b34: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x151b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x151b38: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x151b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x151b3c: 0x5483005c  bnel        $a0, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x151B3Cu;
    {
        const bool branch_taken_0x151b3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x151b3c) {
            ctx->pc = 0x151B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151B3Cu;
            // 0x151b40: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151CB0u;
            goto label_151cb0;
        }
    }
    ctx->pc = 0x151B44u;
    // 0x151b44: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x151b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x151b48: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x151b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x151b4c: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x151B4Cu;
    {
        const bool branch_taken_0x151b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151b4c) {
            ctx->pc = 0x151B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151B4Cu;
            // 0x151b50: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x151B70u;
            goto label_151b70;
        }
    }
    ctx->pc = 0x151B54u;
    // 0x151b54: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x151b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151b58: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x151b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x151b5c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x151b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151b60: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x151b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x151b64: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x151b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151b68: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x151B68u;
    {
        const bool branch_taken_0x151b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151B68u;
            // 0x151b6c: 0xe6200088  swc1        $f0, 0x88($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b68) {
            ctx->pc = 0x151CACu;
            goto label_151cac;
        }
    }
    ctx->pc = 0x151B70u;
label_151b70:
    // 0x151b70: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x151b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x151b74: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x151b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151b78: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x151b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x151b7c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x151b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151b80: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x151B80u;
    {
        const bool branch_taken_0x151b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151B80u;
            // 0x151b84: 0xe6200078  swc1        $f0, 0x78($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b80) {
            ctx->pc = 0x151CACu;
            goto label_151cac;
        }
    }
    ctx->pc = 0x151B88u;
label_151b88:
    // 0x151b88: 0x30c60008  andi        $a2, $a2, 0x8
    ctx->pc = 0x151b88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x151b8c: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x151B8Cu;
    {
        const bool branch_taken_0x151b8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x151B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151B8Cu;
            // 0x151b90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b8c) {
            ctx->pc = 0x151BC0u;
            goto label_151bc0;
        }
    }
    ctx->pc = 0x151B94u;
    // 0x151b94: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x151b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x151b98: 0x50e60012  beql        $a3, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x151B98u;
    {
        const bool branch_taken_0x151b98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x151b98) {
            ctx->pc = 0x151B9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151B98u;
            // 0x151b9c: 0x26300018  addiu       $s0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151BE4u;
            goto label_151be4;
        }
    }
    ctx->pc = 0x151BA0u;
    // 0x151ba0: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x151ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x151ba4: 0x50e6000f  beql        $a3, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x151BA4u;
    {
        const bool branch_taken_0x151ba4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x151ba4) {
            ctx->pc = 0x151BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151BA4u;
            // 0x151ba8: 0x26300014  addiu       $s0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151BE4u;
            goto label_151be4;
        }
    }
    ctx->pc = 0x151BACu;
    // 0x151bac: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x151bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x151bb0: 0x50e6000c  beql        $a3, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x151BB0u;
    {
        const bool branch_taken_0x151bb0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x151bb0) {
            ctx->pc = 0x151BB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151BB0u;
            // 0x151bb4: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151BE4u;
            goto label_151be4;
        }
    }
    ctx->pc = 0x151BB8u;
    // 0x151bb8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x151BB8u;
    {
        const bool branch_taken_0x151bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151bb8) {
            ctx->pc = 0x151BE4u;
            goto label_151be4;
        }
    }
    ctx->pc = 0x151BC0u;
label_151bc0:
    // 0x151bc0: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x151bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x151bc4: 0x50e60007  beql        $a3, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x151BC4u;
    {
        const bool branch_taken_0x151bc4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x151bc4) {
            ctx->pc = 0x151BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151BC4u;
            // 0x151bc8: 0x26300008  addiu       $s0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151BE4u;
            goto label_151be4;
        }
    }
    ctx->pc = 0x151BCCu;
    // 0x151bcc: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x151bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x151bd0: 0x50e60004  beql        $a3, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x151BD0u;
    {
        const bool branch_taken_0x151bd0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x151bd0) {
            ctx->pc = 0x151BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151BD0u;
            // 0x151bd4: 0x26300004  addiu       $s0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151BE4u;
            goto label_151be4;
        }
    }
    ctx->pc = 0x151BD8u;
    // 0x151bd8: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x151bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x151bdc: 0x50e60001  beql        $a3, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x151BDCu;
    {
        const bool branch_taken_0x151bdc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x151bdc) {
            ctx->pc = 0x151BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151BDCu;
            // 0x151be0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151BE4u;
            goto label_151be4;
        }
    }
    ctx->pc = 0x151BE4u;
label_151be4:
    // 0x151be4: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x151BE4u;
    {
        const bool branch_taken_0x151be4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x151be4) {
            ctx->pc = 0x151CACu;
            goto label_151cac;
        }
    }
    ctx->pc = 0x151BECu;
    // 0x151bec: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x151becu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x151bf0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x151bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x151bf4: 0x30c60e77  andi        $a2, $a2, 0xE77
    ctx->pc = 0x151bf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3703);
    // 0x151bf8: 0x50c5001b  beql        $a2, $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x151BF8u;
    {
        const bool branch_taken_0x151bf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x151bf8) {
            ctx->pc = 0x151BFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151BF8u;
            // 0x151bfc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151C68u;
            goto label_151c68;
        }
    }
    ctx->pc = 0x151C00u;
    // 0x151c00: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x151c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x151c04: 0x50c50014  beql        $a2, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x151C04u;
    {
        const bool branch_taken_0x151c04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x151c04) {
            ctx->pc = 0x151C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151C04u;
            // 0x151c08: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151C58u;
            goto label_151c58;
        }
    }
    ctx->pc = 0x151C0Cu;
    // 0x151c0c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x151c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x151c10: 0x50c5000d  beql        $a2, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x151C10u;
    {
        const bool branch_taken_0x151c10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x151c10) {
            ctx->pc = 0x151C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151C10u;
            // 0x151c14: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151C48u;
            goto label_151c48;
        }
    }
    ctx->pc = 0x151C18u;
    // 0x151c18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x151c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x151c1c: 0x50c50006  beql        $a2, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x151C1Cu;
    {
        const bool branch_taken_0x151c1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x151c1c) {
            ctx->pc = 0x151C20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151C1Cu;
            // 0x151c20: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151C38u;
            goto label_151c38;
        }
    }
    ctx->pc = 0x151C24u;
    // 0x151c24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x151c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151c28: 0x50c30012  beql        $a2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x151C28u;
    {
        const bool branch_taken_0x151c28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x151c28) {
            ctx->pc = 0x151C2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151C28u;
            // 0x151c2c: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x151C74u;
            goto label_151c74;
        }
    }
    ctx->pc = 0x151C30u;
    // 0x151c30: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x151C30u;
    {
        const bool branch_taken_0x151c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151c30) {
            ctx->pc = 0x151C70u;
            goto label_151c70;
        }
    }
    ctx->pc = 0x151C38u;
label_151c38:
    // 0x151c38: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x151C38u;
    SET_GPR_U32(ctx, 31, 0x151C40u);
    ctx->pc = 0x151C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151C38u;
            // 0x151c3c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C40u; }
        if (ctx->pc != 0x151C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C40u; }
        if (ctx->pc != 0x151C40u) { return; }
    }
    ctx->pc = 0x151C40u;
label_151c40:
    // 0x151c40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x151C40u;
    {
        const bool branch_taken_0x151c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151c40) {
            ctx->pc = 0x151C70u;
            goto label_151c70;
        }
    }
    ctx->pc = 0x151C48u;
label_151c48:
    // 0x151c48: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x151C48u;
    SET_GPR_U32(ctx, 31, 0x151C50u);
    ctx->pc = 0x151C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151C48u;
            // 0x151c4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C50u; }
        if (ctx->pc != 0x151C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C50u; }
        if (ctx->pc != 0x151C50u) { return; }
    }
    ctx->pc = 0x151C50u;
label_151c50:
    // 0x151c50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x151C50u;
    {
        const bool branch_taken_0x151c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151c50) {
            ctx->pc = 0x151C70u;
            goto label_151c70;
        }
    }
    ctx->pc = 0x151C58u;
label_151c58:
    // 0x151c58: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x151C58u;
    SET_GPR_U32(ctx, 31, 0x151C60u);
    ctx->pc = 0x151C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151C58u;
            // 0x151c5c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C60u; }
        if (ctx->pc != 0x151C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C60u; }
        if (ctx->pc != 0x151C60u) { return; }
    }
    ctx->pc = 0x151C60u;
label_151c60:
    // 0x151c60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151C60u;
    {
        const bool branch_taken_0x151c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151c60) {
            ctx->pc = 0x151C70u;
            goto label_151c70;
        }
    }
    ctx->pc = 0x151C68u;
label_151c68:
    // 0x151c68: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x151C68u;
    SET_GPR_U32(ctx, 31, 0x151C70u);
    ctx->pc = 0x151C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151C68u;
            // 0x151c6c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C70u; }
        if (ctx->pc != 0x151C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C70u; }
        if (ctx->pc != 0x151C70u) { return; }
    }
    ctx->pc = 0x151C70u;
label_151c70:
    // 0x151c70: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x151c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151c74:
    // 0x151c74: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x151c74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151c78: 0x0  nop
    ctx->pc = 0x151c78u;
    // NOP
    // 0x151c7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x151c7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151c80: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x151C80u;
    {
        const bool branch_taken_0x151c80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x151c80) {
            ctx->pc = 0x151C84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151C80u;
            // 0x151c84: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x151C88u;
            goto label_151c88;
        }
    }
    ctx->pc = 0x151C88u;
label_151c88:
    // 0x151c88: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x151c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151c8c: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x151c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x151c90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x151c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x151c94: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x151c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x151c98: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x151c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x151c9c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x151C9Cu;
    {
        const bool branch_taken_0x151c9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x151c9c) {
            ctx->pc = 0x151CACu;
            goto label_151cac;
        }
    }
    ctx->pc = 0x151CA4u;
    // 0x151ca4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x151ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151ca8: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x151ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_151cac:
    // 0x151cac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x151cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_151cb0:
    // 0x151cb0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x151cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x151cb4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x151cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151cb8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x151cb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151cbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x151cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x151CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151CC0u;
            // 0x151cc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x151CC8u;
    // 0x151cc8: 0x0  nop
    ctx->pc = 0x151cc8u;
    // NOP
    // 0x151ccc: 0x0  nop
    ctx->pc = 0x151cccu;
    // NOP
}
