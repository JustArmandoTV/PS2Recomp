#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DFCD0
// Address: 0x2dfcd0 - 0x2e0090
void sub_002DFCD0_0x2dfcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFCD0_0x2dfcd0");
#endif

    switch (ctx->pc) {
        case 0x2dfd30u: goto label_2dfd30;
        case 0x2dfd44u: goto label_2dfd44;
        case 0x2dfe28u: goto label_2dfe28;
        case 0x2dfe3cu: goto label_2dfe3c;
        case 0x2dfe98u: goto label_2dfe98;
        case 0x2dfea0u: goto label_2dfea0;
        case 0x2dfee0u: goto label_2dfee0;
        case 0x2dfeecu: goto label_2dfeec;
        case 0x2dff1cu: goto label_2dff1c;
        case 0x2dff2cu: goto label_2dff2c;
        case 0x2dff68u: goto label_2dff68;
        case 0x2dff88u: goto label_2dff88;
        case 0x2dff94u: goto label_2dff94;
        case 0x2dffa0u: goto label_2dffa0;
        case 0x2dffd0u: goto label_2dffd0;
        case 0x2dffd8u: goto label_2dffd8;
        case 0x2dfff4u: goto label_2dfff4;
        default: break;
    }

    ctx->pc = 0x2dfcd0u;

    // 0x2dfcd0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2dfcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2dfcd4: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x2dfcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x2dfcd8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2dfcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2dfcdc: 0x344323f0  ori         $v1, $v0, 0x23F0
    ctx->pc = 0x2dfcdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9200);
    // 0x2dfce0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2dfce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2dfce4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2dfce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2dfce8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2dfce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2dfcec: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2dfcecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dfcf0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2dfcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2dfcf4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2dfcf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dfcf8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2dfcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2dfcfc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2dfcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2dfd00: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2dfd00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd04: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2dfd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2dfd08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2dfd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2dfd0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2dfd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2dfd10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dfd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dfd14: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2dfd14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2dfd18: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x2dfd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x2dfd1c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2dfd1cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2dfd20: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2dfd20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2dfd24: 0x8c9e0040  lw          $fp, 0x40($a0)
    ctx->pc = 0x2dfd24u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2dfd28: 0xc04781c  jal         func_11E070
    ctx->pc = 0x2DFD28u;
    SET_GPR_U32(ctx, 31, 0x2DFD30u);
    ctx->pc = 0x2DFD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD28u;
            // 0x2dfd2c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E070u;
    if (runtime->hasFunction(0x11E070u)) {
        auto targetFn = runtime->lookupFunction(0x11E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD30u; }
        if (ctx->pc != 0x2DFD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E070_0x11e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD30u; }
        if (ctx->pc != 0x2DFD30u) { return; }
    }
    ctx->pc = 0x2DFD30u;
label_2dfd30:
    // 0x2dfd30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dfd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd34: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x2dfd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2dfd38: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2dfd38u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2dfd3c: 0xc04cc08  jal         func_133020
    ctx->pc = 0x2DFD3Cu;
    SET_GPR_U32(ctx, 31, 0x2DFD44u);
    ctx->pc = 0x2DFD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD3Cu;
            // 0x2dfd40: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD44u; }
        if (ctx->pc != 0x2DFD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD44u; }
        if (ctx->pc != 0x2DFD44u) { return; }
    }
    ctx->pc = 0x2DFD44u;
label_2dfd44:
    // 0x2dfd44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2dfd44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dfd48: 0x0  nop
    ctx->pc = 0x2dfd48u;
    // NOP
    // 0x2dfd4c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dfd4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dfd50: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x2DFD50u;
    {
        const bool branch_taken_0x2dfd50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dfd50) {
            ctx->pc = 0x2DFD54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD50u;
            // 0x2dfd54: 0x96a40050  lhu         $a0, 0x50($s5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DFD98u;
            goto label_2dfd98;
        }
    }
    ctx->pc = 0x2DFD58u;
    // 0x2dfd58: 0x96a50050  lhu         $a1, 0x50($s5)
    ctx->pc = 0x2dfd58u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x2dfd5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dfd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dfd60: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x2dfd60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x2dfd64: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x2dfd64u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2dfd68: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2dfd68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2dfd6c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2dfd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2dfd70: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2dfd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2dfd74: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2dfd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2dfd78: 0xa6a30050  sh          $v1, 0x50($s5)
    ctx->pc = 0x2dfd78u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dfd7c: 0x96a40050  lhu         $a0, 0x50($s5)
    ctx->pc = 0x2dfd7cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x2dfd80: 0x96a30052  lhu         $v1, 0x52($s5)
    ctx->pc = 0x2dfd80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 82)));
    // 0x2dfd84: 0x38840002  xori        $a0, $a0, 0x2
    ctx->pc = 0x2dfd84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x2dfd88: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x2dfd88u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2dfd8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2dfd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2dfd90: 0xa6a30052  sh          $v1, 0x52($s5)
    ctx->pc = 0x2dfd90u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dfd94: 0x96a40050  lhu         $a0, 0x50($s5)
    ctx->pc = 0x2dfd94u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 80)));
label_2dfd98:
    // 0x2dfd98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2dfd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dfd9c: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DFD9Cu;
    {
        const bool branch_taken_0x2dfd9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dfd9c) {
            ctx->pc = 0x2DFDA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD9Cu;
            // 0x2dfda0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DFDB4u;
            goto label_2dfdb4;
        }
    }
    ctx->pc = 0x2DFDA4u;
    // 0x2dfda4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2dfda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dfda8: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x2dfda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x2dfdac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DFDACu;
    {
        const bool branch_taken_0x2dfdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFDACu;
            // 0x2dfdb0: 0xafa300f0  sw          $v1, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfdac) {
            ctx->pc = 0x2DFDC4u;
            goto label_2dfdc4;
        }
    }
    ctx->pc = 0x2DFDB4u;
label_2dfdb4:
    // 0x2dfdb4: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x2dfdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x2dfdb8: 0x97c3001c  lhu         $v1, 0x1C($fp)
    ctx->pc = 0x2dfdb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x2dfdbc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2dfdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2dfdc0: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x2dfdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_2dfdc4:
    // 0x2dfdc4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2dfdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2dfdc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dfdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dfdcc: 0x5464000b  bnel        $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DFDCCu;
    {
        const bool branch_taken_0x2dfdcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2dfdcc) {
            ctx->pc = 0x2DFDD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFDCCu;
            // 0x2dfdd0: 0xc6a10044  lwc1        $f1, 0x44($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DFDFCu;
            goto label_2dfdfc;
        }
    }
    ctx->pc = 0x2DFDD4u;
    // 0x2dfdd4: 0xc6a10044  lwc1        $f1, 0x44($s5)
    ctx->pc = 0x2dfdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfdd8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2dfdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2dfddc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dfddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dfde0: 0x0  nop
    ctx->pc = 0x2dfde0u;
    // NOP
    // 0x2dfde4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dfde4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dfde8: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x2DFDE8u;
    {
        const bool branch_taken_0x2dfde8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dfde8) {
            ctx->pc = 0x2DFDECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFDE8u;
            // 0x2dfdec: 0x8fa50100  lw          $a1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DFE20u;
            goto label_2dfe20;
        }
    }
    ctx->pc = 0x2DFDF0u;
    // 0x2dfdf0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2dfdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dfdf4: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x2DFDF4u;
    {
        const bool branch_taken_0x2dfdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFDF4u;
            // 0x2dfdf8: 0xa6a30050  sh          $v1, 0x50($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 80), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfdf4) {
            ctx->pc = 0x2E004Cu;
            goto label_2e004c;
        }
    }
    ctx->pc = 0x2DFDFCu;
label_2dfdfc:
    // 0x2dfdfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dfdfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dfe00: 0x0  nop
    ctx->pc = 0x2dfe00u;
    // NOP
    // 0x2dfe04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dfe04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dfe08: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2DFE08u;
    {
        const bool branch_taken_0x2dfe08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dfe08) {
            ctx->pc = 0x2DFE1Cu;
            goto label_2dfe1c;
        }
    }
    ctx->pc = 0x2DFE10u;
    // 0x2dfe10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2dfe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dfe14: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x2DFE14u;
    {
        const bool branch_taken_0x2dfe14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFE14u;
            // 0x2dfe18: 0xa6a30050  sh          $v1, 0x50($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 80), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfe14) {
            ctx->pc = 0x2E004Cu;
            goto label_2e004c;
        }
    }
    ctx->pc = 0x2DFE1Cu;
label_2dfe1c:
    // 0x2dfe1c: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2dfe1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2dfe20:
    // 0x2dfe20: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x2DFE20u;
    SET_GPR_U32(ctx, 31, 0x2DFE28u);
    ctx->pc = 0x2DFE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFE20u;
            // 0x2dfe24: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFE28u; }
        if (ctx->pc != 0x2DFE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFE28u; }
        if (ctx->pc != 0x2DFE28u) { return; }
    }
    ctx->pc = 0x2DFE28u;
label_2dfe28:
    // 0x2dfe28: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2dfe28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2dfe2c: 0x27c4000c  addiu       $a0, $fp, 0xC
    ctx->pc = 0x2dfe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
    // 0x2dfe30: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x2dfe30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x2dfe34: 0xc0527c0  jal         func_149F00
    ctx->pc = 0x2DFE34u;
    SET_GPR_U32(ctx, 31, 0x2DFE3Cu);
    ctx->pc = 0x2DFE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFE34u;
            // 0x2dfe38: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149F00u;
    if (runtime->hasFunction(0x149F00u)) {
        auto targetFn = runtime->lookupFunction(0x149F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFE3Cu; }
        if (ctx->pc != 0x2DFE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149F00_0x149f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFE3Cu; }
        if (ctx->pc != 0x2DFE3Cu) { return; }
    }
    ctx->pc = 0x2DFE3Cu;
label_2dfe3c:
    // 0x2dfe3c: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x2DFE3Cu;
    {
        const bool branch_taken_0x2dfe3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfe3c) {
            ctx->pc = 0x2E0048u;
            goto label_2e0048;
        }
    }
    ctx->pc = 0x2DFE44u;
    // 0x2dfe44: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2dfe44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2dfe48: 0x96b40052  lhu         $s4, 0x52($s5)
    ctx->pc = 0x2dfe48u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 82)));
    // 0x2dfe4c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x2dfe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2dfe50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2dfe50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2dfe54: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2dfe54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2dfe58: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x2dfe58u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2dfe5c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2dfe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2dfe60: 0x70421018  mult1       $v0, $v0, $v0
    ctx->pc = 0x2dfe60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2dfe64: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2dfe64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2dfe68: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2dfe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2dfe6c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2dfe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2dfe70: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2dfe70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dfe74: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x2dfe74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2dfe78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2dfe78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2dfe7c: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x2dfe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2dfe80: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2dfe80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2dfe84: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2dfe84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2dfe88: 0x82b021  addu        $s6, $a0, $v0
    ctx->pc = 0x2dfe88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2dfe8c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2dfe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2dfe90: 0x282b818  mult        $s7, $s4, $v0
    ctx->pc = 0x2dfe90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
    // 0x2dfe94: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2dfe94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2dfe98:
    // 0x2dfe98: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x2DFE98u;
    SET_GPR_U32(ctx, 31, 0x2DFEA0u);
    ctx->pc = 0x2DFE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFE98u;
            // 0x2dfe9c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (runtime->hasFunction(0x149DF0u)) {
        auto targetFn = runtime->lookupFunction(0x149DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFEA0u; }
        if (ctx->pc != 0x2DFEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149DF0_0x149df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFEA0u; }
        if (ctx->pc != 0x2DFEA0u) { return; }
    }
    ctx->pc = 0x2DFEA0u;
label_2dfea0:
    // 0x2dfea0: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2DFEA0u;
    {
        const bool branch_taken_0x2dfea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfea0) {
            ctx->pc = 0x2E0018u;
            goto label_2e0018;
        }
    }
    ctx->pc = 0x2DFEA8u;
    // 0x2dfea8: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x2dfea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2dfeac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2dfeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dfeb0: 0x96a50050  lhu         $a1, 0x50($s5)
    ctx->pc = 0x2dfeb0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x2dfeb4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2dfeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2dfeb8: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x2dfeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2dfebc: 0x709021  addu        $s2, $v1, $s0
    ctx->pc = 0x2dfebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2dfec0: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x2dfec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2dfec4: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x2dfec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2dfec8: 0xd08821  addu        $s1, $a2, $s0
    ctx->pc = 0x2dfec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2dfecc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2dfeccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2dfed0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2dfed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2dfed4: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x2dfed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2dfed8: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2DFED8u;
    SET_GPR_U32(ctx, 31, 0x2DFEE0u);
    ctx->pc = 0x2DFEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFED8u;
            // 0x2dfedc: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFEE0u; }
        if (ctx->pc != 0x2DFEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFEE0u; }
        if (ctx->pc != 0x2DFEE0u) { return; }
    }
    ctx->pc = 0x2DFEE0u;
label_2dfee0:
    // 0x2dfee0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2dfee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2dfee4: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2DFEE4u;
    SET_GPR_U32(ctx, 31, 0x2DFEECu);
    ctx->pc = 0x2DFEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFEE4u;
            // 0x2dfee8: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFEECu; }
        if (ctx->pc != 0x2DFEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFEECu; }
        if (ctx->pc != 0x2DFEECu) { return; }
    }
    ctx->pc = 0x2DFEECu;
label_2dfeec:
    // 0x2dfeec: 0x96b30050  lhu         $s3, 0x50($s5)
    ctx->pc = 0x2dfeecu;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x2dfef0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2dfef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2dfef4: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x2dfef4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2dfef8: 0x3a630002  xori        $v1, $s3, 0x2
    ctx->pc = 0x2dfef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)2);
    // 0x2dfefc: 0x3a620001  xori        $v0, $s3, 0x1
    ctx->pc = 0x2dfefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x2dff00: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2dff00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2dff04: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2dff04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2dff08: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2dff08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2dff0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2dff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2dff10: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x2dff10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2dff14: 0xc0bc5b0  jal         func_2F16C0
    ctx->pc = 0x2DFF14u;
    SET_GPR_U32(ctx, 31, 0x2DFF1Cu);
    ctx->pc = 0x2DFF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFF14u;
            // 0x2dff18: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F16C0u;
    if (runtime->hasFunction(0x2F16C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F16C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFF1Cu; }
        if (ctx->pc != 0x2DFF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F16C0_0x2f16c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFF1Cu; }
        if (ctx->pc != 0x2DFF1Cu) { return; }
    }
    ctx->pc = 0x2DFF1Cu;
label_2dff1c:
    // 0x2dff1c: 0x46000542  mul.s       $f21, $f0, $f0
    ctx->pc = 0x2dff1cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2dff20: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2dff20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2dff24: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x2DFF24u;
    SET_GPR_U32(ctx, 31, 0x2DFF2Cu);
    ctx->pc = 0x2DFF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFF24u;
            // 0x2dff28: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFF2Cu; }
        if (ctx->pc != 0x2DFF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFF2Cu; }
        if (ctx->pc != 0x2DFF2Cu) { return; }
    }
    ctx->pc = 0x2DFF2Cu;
label_2dff2c:
    // 0x2dff2c: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x2dff2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dff30: 0x45010039  bc1t        . + 4 + (0x39 << 2)
    ctx->pc = 0x2DFF30u;
    {
        const bool branch_taken_0x2dff30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DFF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFF30u;
            // 0x2dff34: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff30) {
            ctx->pc = 0x2E0018u;
            goto label_2e0018;
        }
    }
    ctx->pc = 0x2DFF38u;
    // 0x2dff38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dff38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dff3c: 0x0  nop
    ctx->pc = 0x2dff3cu;
    // NOP
    // 0x2dff40: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x2dff40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dff44: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2DFF44u;
    {
        const bool branch_taken_0x2dff44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dff44) {
            ctx->pc = 0x2DFF78u;
            goto label_2dff78;
        }
    }
    ctx->pc = 0x2DFF4Cu;
    // 0x2dff4c: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2dff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2dff50: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2dff50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2dff54: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2dff54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2dff58: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2dff58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dff5c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2dff5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dff60: 0xc04781c  jal         func_11E070
    ctx->pc = 0x2DFF60u;
    SET_GPR_U32(ctx, 31, 0x2DFF68u);
    ctx->pc = 0x11E070u;
    if (runtime->hasFunction(0x11E070u)) {
        auto targetFn = runtime->lookupFunction(0x11E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFF68u; }
        if (ctx->pc != 0x2DFF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E070_0x11e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFF68u; }
        if (ctx->pc != 0x2DFF68u) { return; }
    }
    ctx->pc = 0x2DFF68u;
label_2dff68:
    // 0x2dff68: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2dff68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dff6c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x2DFF6Cu;
    {
        const bool branch_taken_0x2dff6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dff6c) {
            ctx->pc = 0x2E0018u;
            goto label_2e0018;
        }
    }
    ctx->pc = 0x2DFF74u;
    // 0x2dff74: 0x0  nop
    ctx->pc = 0x2dff74u;
    // NOP
label_2dff78:
    // 0x2dff78: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x2dff78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2dff7c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2dff7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2dff80: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2DFF80u;
    SET_GPR_U32(ctx, 31, 0x2DFF88u);
    ctx->pc = 0x2DFF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFF80u;
            // 0x2dff84: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFF88u; }
        if (ctx->pc != 0x2DFF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFF88u; }
        if (ctx->pc != 0x2DFF88u) { return; }
    }
    ctx->pc = 0x2DFF88u;
label_2dff88:
    // 0x2dff88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dff88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dff8c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2DFF8Cu;
    SET_GPR_U32(ctx, 31, 0x2DFF94u);
    ctx->pc = 0x2DFF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFF8Cu;
            // 0x2dff90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFF94u; }
        if (ctx->pc != 0x2DFF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFF94u; }
        if (ctx->pc != 0x2DFF94u) { return; }
    }
    ctx->pc = 0x2DFF94u;
label_2dff94:
    // 0x2dff94: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x2dff94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x2dff98: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2DFF98u;
    SET_GPR_U32(ctx, 31, 0x2DFFA0u);
    ctx->pc = 0x2DFF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFF98u;
            // 0x2dff9c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFFA0u; }
        if (ctx->pc != 0x2DFFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFFA0u; }
        if (ctx->pc != 0x2DFFA0u) { return; }
    }
    ctx->pc = 0x2DFFA0u;
label_2dffa0:
    // 0x2dffa0: 0x3a620002  xori        $v0, $s3, 0x2
    ctx->pc = 0x2dffa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)2);
    // 0x2dffa4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2dffa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2dffa8: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x2dffa8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2dffac: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x2dffacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2dffb0: 0xa6a20052  sh          $v0, 0x52($s5)
    ctx->pc = 0x2dffb0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 82), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dffb4: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x2dffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x2dffb8: 0x96a30052  lhu         $v1, 0x52($s5)
    ctx->pc = 0x2dffb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 82)));
    // 0x2dffbc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2dffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dffc0: 0x649023  subu        $s2, $v1, $a0
    ctx->pc = 0x2dffc0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2dffc4: 0x128900  sll         $s1, $s2, 4
    ctx->pc = 0x2dffc4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2dffc8: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2DFFC8u;
    SET_GPR_U32(ctx, 31, 0x2DFFD0u);
    ctx->pc = 0x2DFFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFFC8u;
            // 0x2dffcc: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFFD0u; }
        if (ctx->pc != 0x2DFFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFFD0u; }
        if (ctx->pc != 0x2DFFD0u) { return; }
    }
    ctx->pc = 0x2DFFD0u;
label_2dffd0:
    // 0x2dffd0: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x2DFFD0u;
    {
        const bool branch_taken_0x2dffd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFFD0u;
            // 0x2dffd4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dffd0) {
            ctx->pc = 0x2E0008u;
            goto label_2e0008;
        }
    }
    ctx->pc = 0x2DFFD8u;
label_2dffd8:
    // 0x2dffd8: 0x8ea30040  lw          $v1, 0x40($s5)
    ctx->pc = 0x2dffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x2dffdc: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x2dffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2dffe0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2dffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2dffe4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2dffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2dffe8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2dffe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dffec: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2DFFECu;
    SET_GPR_U32(ctx, 31, 0x2DFFF4u);
    ctx->pc = 0x2DFFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFFECu;
            // 0x2dfff0: 0x712021  addu        $a0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFFF4u; }
        if (ctx->pc != 0x2DFFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFFF4u; }
        if (ctx->pc != 0x2DFFF4u) { return; }
    }
    ctx->pc = 0x2DFFF4u;
label_2dfff4:
    // 0x2dfff4: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2dfff4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2dfff8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2dfff8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2dfffc: 0x1640fff6  bnez        $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x2DFFFCu;
    {
        const bool branch_taken_0x2dfffc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFFFCu;
            // 0x2e0000: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfffc) {
            ctx->pc = 0x2DFFD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dffd8;
        }
    }
    ctx->pc = 0x2E0004u;
    // 0x2e0004: 0x0  nop
    ctx->pc = 0x2e0004u;
    // NOP
label_2e0008:
    // 0x2e0008: 0xc6a00048  lwc1        $f0, 0x48($s5)
    ctx->pc = 0x2e0008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e000c: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x2e000cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x2e0010: 0xe6a00044  swc1        $f0, 0x44($s5)
    ctx->pc = 0x2e0010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 68), bits); }
    // 0x2e0014: 0x0  nop
    ctx->pc = 0x2e0014u;
    // NOP
label_2e0018:
    // 0x2e0018: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x2e0018u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e001c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2e001cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e0020: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x2e0020u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e0024: 0x2e3b821  addu        $s7, $s7, $v1
    ctx->pc = 0x2e0024u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2e0028: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2e0028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2e002c: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x2e002cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2e0030: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2e0030u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e0034: 0x2c3b021  addu        $s6, $s6, $v1
    ctx->pc = 0x2e0034u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2e0038: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2e0038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e003c: 0x2e3182a  slt         $v1, $s7, $v1
    ctx->pc = 0x2e003cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e0040: 0x5460ff95  bnel        $v1, $zero, . + 4 + (-0x6B << 2)
    ctx->pc = 0x2E0040u;
    {
        const bool branch_taken_0x2e0040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0040) {
            ctx->pc = 0x2E0044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0040u;
            // 0x2e0044: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DFE98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dfe98;
        }
    }
    ctx->pc = 0x2E0048u;
label_2e0048:
    // 0x2e0048: 0xa6b30050  sh          $s3, 0x50($s5)
    ctx->pc = 0x2e0048u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 80), (uint16_t)GPR_U32(ctx, 19));
label_2e004c:
    // 0x2e004c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2e004cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e0050: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2e0050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e0054: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2e0054u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e0058: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e0058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e005c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2e005cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e0060: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e0060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e0064: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2e0064u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e0068: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e0068u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e006c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e006cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0070: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e0070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0074: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e0074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0078: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e0078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e007c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e007cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0080: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0080u;
            // 0x2e0084: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E0088u;
    // 0x2e0088: 0x0  nop
    ctx->pc = 0x2e0088u;
    // NOP
    // 0x2e008c: 0x0  nop
    ctx->pc = 0x2e008cu;
    // NOP
}
