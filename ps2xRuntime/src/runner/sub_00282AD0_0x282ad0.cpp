#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00282AD0
// Address: 0x282ad0 - 0x282cf0
void sub_00282AD0_0x282ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282AD0_0x282ad0");
#endif

    switch (ctx->pc) {
        case 0x282b30u: goto label_282b30;
        case 0x282b38u: goto label_282b38;
        case 0x282bb0u: goto label_282bb0;
        case 0x282be8u: goto label_282be8;
        case 0x282bf8u: goto label_282bf8;
        case 0x282cb0u: goto label_282cb0;
        default: break;
    }

    ctx->pc = 0x282ad0u;

    // 0x282ad0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x282ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x282ad4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x282ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x282ad8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x282ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x282adc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x282adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x282ae0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x282ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x282ae4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x282ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x282ae8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x282ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x282aec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x282aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x282af0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x282af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x282af4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x282af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x282af8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x282af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x282afc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x282afcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x282b00: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x282b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
    // 0x282b04: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x282b04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x282b08: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x282b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x282b0c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x282b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282b10: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x282b10u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x282b14: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x282b14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x282b18: 0x660004d  bltz        $s3, . + 4 + (0x4D << 2)
    ctx->pc = 0x282B18u;
    {
        const bool branch_taken_0x282b18 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x282B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B18u;
            // 0x282b1c: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b18) {
            ctx->pc = 0x282C50u;
            goto label_282c50;
        }
    }
    ctx->pc = 0x282B20u;
    // 0x282b20: 0x27b000d4  addiu       $s0, $sp, 0xD4
    ctx->pc = 0x282b20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x282b24: 0x27b600d8  addiu       $s6, $sp, 0xD8
    ctx->pc = 0x282b24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x282b28: 0x27b700c4  addiu       $s7, $sp, 0xC4
    ctx->pc = 0x282b28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x282b2c: 0x27be00c8  addiu       $fp, $sp, 0xC8
    ctx->pc = 0x282b2cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_282b30:
    // 0x282b30: 0x2692fff0  addiu       $s2, $s4, -0x10
    ctx->pc = 0x282b30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
    // 0x282b34: 0x0  nop
    ctx->pc = 0x282b34u;
    // NOP
label_282b38:
    // 0x282b38: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x282b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x282b3c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x282b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282b40: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x282b40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x282b44: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x282B44u;
    {
        const bool branch_taken_0x282b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x282b44) {
            ctx->pc = 0x282B70u;
            goto label_282b70;
        }
    }
    ctx->pc = 0x282B4Cu;
    // 0x282b4c: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x282b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282b50: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x282b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x282b54: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x282b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x282b58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x282b58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282b5c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x282b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282b60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x282b60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x282b64: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x282b64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282b68: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x282B68u;
    {
        const bool branch_taken_0x282b68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x282b68) {
            ctx->pc = 0x282BA0u;
            goto label_282ba0;
        }
    }
    ctx->pc = 0x282B70u;
label_282b70:
    // 0x282b70: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x282b70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b74: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x282b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282b78: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x282b78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x282b7c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x282b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x282b80: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x282b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282b84: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x282b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x282b88: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x282b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282b8c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x282b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x282b90: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x282b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282b94: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x282B94u;
    {
        const bool branch_taken_0x282b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B94u;
            // 0x282b98: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b94) {
            ctx->pc = 0x282C40u;
            goto label_282c40;
        }
    }
    ctx->pc = 0x282B9Cu;
    // 0x282b9c: 0x0  nop
    ctx->pc = 0x282b9cu;
    // NOP
label_282ba0:
    // 0x282ba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x282ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ba4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x282ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ba8: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x282BA8u;
    SET_GPR_U32(ctx, 31, 0x282BB0u);
    ctx->pc = 0x282BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282BA8u;
            // 0x282bac: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282BB0u; }
        if (ctx->pc != 0x282BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282BB0u; }
        if (ctx->pc != 0x282BB0u) { return; }
    }
    ctx->pc = 0x282BB0u;
label_282bb0:
    // 0x282bb0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x282bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282bb4: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x282bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282bb8: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x282bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282bbc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x282bbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x282bc0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x282bc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x282bc4: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x282bc4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x282bc8: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x282bc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x282bcc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x282bccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282bd0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x282BD0u;
    {
        const bool branch_taken_0x282bd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x282bd0) {
            ctx->pc = 0x282C38u;
            goto label_282c38;
        }
    }
    ctx->pc = 0x282BD8u;
    // 0x282bd8: 0x2671ffff  addiu       $s1, $s3, -0x1
    ctx->pc = 0x282bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x282bdc: 0x6200018  bltz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x282BDCu;
    {
        const bool branch_taken_0x282bdc = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x282bdc) {
            ctx->pc = 0x282C40u;
            goto label_282c40;
        }
    }
    ctx->pc = 0x282BE4u;
    // 0x282be4: 0x0  nop
    ctx->pc = 0x282be4u;
    // NOP
label_282be8:
    // 0x282be8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x282be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282bec: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x282becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x282bf0: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x282BF0u;
    SET_GPR_U32(ctx, 31, 0x282BF8u);
    ctx->pc = 0x282BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282BF0u;
            // 0x282bf4: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282BF8u; }
        if (ctx->pc != 0x282BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282BF8u; }
        if (ctx->pc != 0x282BF8u) { return; }
    }
    ctx->pc = 0x282BF8u;
label_282bf8:
    // 0x282bf8: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x282bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282bfc: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x282bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282c00: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x282c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282c04: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x282c04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x282c08: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x282c08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x282c0c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x282c0cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x282c10: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x282c10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x282c14: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x282c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282c18: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x282C18u;
    {
        const bool branch_taken_0x282c18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x282c18) {
            ctx->pc = 0x282C40u;
            goto label_282c40;
        }
    }
    ctx->pc = 0x282C20u;
    // 0x282c20: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x282c20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x282c24: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x282c24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x282c28: 0x621ffef  bgez        $s1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x282C28u;
    {
        const bool branch_taken_0x282c28 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x282C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282C28u;
            // 0x282c2c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c28) {
            ctx->pc = 0x282BE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282be8;
        }
    }
    ctx->pc = 0x282C30u;
    // 0x282c30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x282C30u;
    {
        const bool branch_taken_0x282c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282c30) {
            ctx->pc = 0x282C40u;
            goto label_282c40;
        }
    }
    ctx->pc = 0x282C38u;
label_282c38:
    // 0x282c38: 0x1000ffbf  b           . + 4 + (-0x41 << 2)
    ctx->pc = 0x282C38u;
    {
        const bool branch_taken_0x282c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282C38u;
            // 0x282c3c: 0x2652fff0  addiu       $s2, $s2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c38) {
            ctx->pc = 0x282B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282b38;
        }
    }
    ctx->pc = 0x282C40u;
label_282c40:
    // 0x282c40: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x282c40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x282c44: 0x661ffba  bgez        $s3, . + 4 + (-0x46 << 2)
    ctx->pc = 0x282C44u;
    {
        const bool branch_taken_0x282c44 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x282C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282C44u;
            // 0x282c48: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c44) {
            ctx->pc = 0x282B30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282b30;
        }
    }
    ctx->pc = 0x282C4Cu;
    // 0x282c4c: 0x0  nop
    ctx->pc = 0x282c4cu;
    // NOP
label_282c50:
    // 0x282c50: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x282c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x282c54: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x282c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282c58: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x282c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x282c5c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282C5Cu;
    {
        const bool branch_taken_0x282c5c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x282C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282C5Cu;
            // 0x282c60: 0x32103  sra         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c5c) {
            ctx->pc = 0x282C6Cu;
            goto label_282c6c;
        }
    }
    ctx->pc = 0x282C64u;
    // 0x282c64: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x282c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x282c68: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x282c68u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
label_282c6c:
    // 0x282c6c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x282c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x282c70: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x282c70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x282c74: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x282c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x282c78: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x282c78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282c7c: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x282c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x282c80: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x282c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x282c84: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x282c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x282c88: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x282c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x282c8c: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x282c8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x282c90: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x282C90u;
    {
        const bool branch_taken_0x282c90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x282c90) {
            ctx->pc = 0x282CB0u;
            goto label_282cb0;
        }
    }
    ctx->pc = 0x282C98u;
    // 0x282c98: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x282c98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x282c9c: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x282c9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x282ca0: 0x201280a  movz        $a1, $s0, $at
    ctx->pc = 0x282ca0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    // 0x282ca4: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x282ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x282ca8: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x282CA8u;
    SET_GPR_U32(ctx, 31, 0x282CB0u);
    ctx->pc = 0x282CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282CA8u;
            // 0x282cac: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282CB0u; }
        if (ctx->pc != 0x282CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282CB0u; }
        if (ctx->pc != 0x282CB0u) { return; }
    }
    ctx->pc = 0x282CB0u;
label_282cb0:
    // 0x282cb0: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x282cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x282cb4: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x282cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x282cb8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x282cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x282cbc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x282cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x282cc0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x282cc0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x282cc4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x282cc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x282cc8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x282cc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x282ccc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x282cccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x282cd0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x282cd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x282cd4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x282cd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282cd8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x282cd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282cdc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x282cdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282ce0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x282ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x282CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282CE4u;
            // 0x282ce8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282CECu;
    // 0x282cec: 0x0  nop
    ctx->pc = 0x282cecu;
    // NOP
}
