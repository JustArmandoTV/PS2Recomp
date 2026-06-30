#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00569AE0
// Address: 0x569ae0 - 0x569d20
void sub_00569AE0_0x569ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00569AE0_0x569ae0");
#endif

    switch (ctx->pc) {
        case 0x569be0u: goto label_569be0;
        case 0x569c8cu: goto label_569c8c;
        case 0x569c9cu: goto label_569c9c;
        case 0x569cb0u: goto label_569cb0;
        case 0x569cbcu: goto label_569cbc;
        case 0x569cd4u: goto label_569cd4;
        case 0x569cdcu: goto label_569cdc;
        case 0x569cf0u: goto label_569cf0;
        case 0x569cf8u: goto label_569cf8;
        default: break;
    }

    ctx->pc = 0x569ae0u;

    // 0x569ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x569ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x569ae4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x569ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x569ae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x569ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x569aec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x569aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x569af0: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x569af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x569af4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x569af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x569af8: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x569af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x569afc: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x569afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x569b00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x569b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x569b04: 0x0  nop
    ctx->pc = 0x569b04u;
    // NOP
    // 0x569b08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x569b08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x569b0c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x569B0Cu;
    {
        const bool branch_taken_0x569b0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x569b0c) {
            ctx->pc = 0x569B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x569B0Cu;
            // 0x569b10: 0x86030008  lh          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x569B24u;
            goto label_569b24;
        }
    }
    ctx->pc = 0x569B14u;
    // 0x569b14: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x569b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x569b18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x569b18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x569b1c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x569B1Cu;
    {
        const bool branch_taken_0x569b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x569B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569B1Cu;
            // 0x569b20: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x569b1c) {
            ctx->pc = 0x569B80u;
            goto label_569b80;
        }
    }
    ctx->pc = 0x569B24u;
label_569b24:
    // 0x569b24: 0x3c024035  lui         $v0, 0x4035
    ctx->pc = 0x569b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16437 << 16));
    // 0x569b28: 0x34425555  ori         $v0, $v0, 0x5555
    ctx->pc = 0x569b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21845);
    // 0x569b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x569b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x569b30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x569b30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x569b34: 0x0  nop
    ctx->pc = 0x569b34u;
    // NOP
    // 0x569b38: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x569b38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x569b3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x569b3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x569b40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x569b40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x569b44: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x569b44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x569b48: 0x0  nop
    ctx->pc = 0x569b48u;
    // NOP
    // 0x569b4c: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x569b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x569b50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x569b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x569b54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x569b54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x569b58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x569b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x569b5c: 0x0  nop
    ctx->pc = 0x569b5cu;
    // NOP
    // 0x569b60: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x569b60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x569b64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x569b64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x569b68: 0x0  nop
    ctx->pc = 0x569b68u;
    // NOP
    // 0x569b6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x569b6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x569b70: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x569B70u;
    {
        const bool branch_taken_0x569b70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x569b70) {
            ctx->pc = 0x569B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x569B70u;
            // 0x569b74: 0xc603003c  lwc1        $f3, 0x3C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x569B84u;
            goto label_569b84;
        }
    }
    ctx->pc = 0x569B78u;
    // 0x569b78: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x569B78u;
    {
        const bool branch_taken_0x569b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x569B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569B78u;
            // 0x569b7c: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x569b78) {
            ctx->pc = 0x569C00u;
            goto label_569c00;
        }
    }
    ctx->pc = 0x569B80u;
label_569b80:
    // 0x569b80: 0xc603003c  lwc1        $f3, 0x3C($s0)
    ctx->pc = 0x569b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_569b84:
    // 0x569b84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x569b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x569b88: 0xc4840018  lwc1        $f4, 0x18($a0)
    ctx->pc = 0x569b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x569b8c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x569b8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x569b90: 0xc605000c  lwc1        $f5, 0xC($s0)
    ctx->pc = 0x569b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x569b94: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x569b94u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x569b98: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x569b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x569b9c: 0x4604285d  msub.s      $f1, $f5, $f4
    ctx->pc = 0x569b9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x569ba0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x569ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x569ba4: 0xe601003c  swc1        $f1, 0x3C($s0)
    ctx->pc = 0x569ba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x569ba8: 0xe6010064  swc1        $f1, 0x64($s0)
    ctx->pc = 0x569ba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x569bac: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x569bacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x569bb0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x569bb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x569bb4: 0xe601008c  swc1        $f1, 0x8C($s0)
    ctx->pc = 0x569bb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x569bb8: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x569bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x569bbc: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x569bbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x569bc0: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x569bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x569bc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x569bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x569bc8: 0x0  nop
    ctx->pc = 0x569bc8u;
    // NOP
    // 0x569bcc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x569bccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x569bd0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x569BD0u;
    {
        const bool branch_taken_0x569bd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x569bd0) {
            ctx->pc = 0x569C00u;
            goto label_569c00;
        }
    }
    ctx->pc = 0x569BD8u;
    // 0x569bd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x569bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x569bdc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x569bdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_569be0:
    // 0x569be0: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x569be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x569be4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x569be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x569be8: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x569be8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x569bec: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x569becu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x569bf0: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x569bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x569bf4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x569BF4u;
    {
        const bool branch_taken_0x569bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x569BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569BF4u;
            // 0x569bf8: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x569bf4) {
            ctx->pc = 0x569BE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_569be0;
        }
    }
    ctx->pc = 0x569BFCu;
    // 0x569bfc: 0x0  nop
    ctx->pc = 0x569bfcu;
    // NOP
label_569c00:
    // 0x569c00: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x569c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x569c04: 0x8c4389e0  lw          $v1, -0x7620($v0)
    ctx->pc = 0x569c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
    // 0x569c08: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x569c08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x569c0c: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x569c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x569c10: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x569c10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x569c14: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x569c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x569c18: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x569c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x569c1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x569c1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x569c20: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x569C20u;
    {
        const bool branch_taken_0x569c20 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x569c20) {
            ctx->pc = 0x569C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x569C20u;
            // 0x569c24: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x569C30u;
            goto label_569c30;
        }
    }
    ctx->pc = 0x569C28u;
    // 0x569c28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x569c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x569c2c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x569c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_569c30:
    // 0x569c30: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x569c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x569c34: 0x34437f00  ori         $v1, $v0, 0x7F00
    ctx->pc = 0x569c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32512);
    // 0x569c38: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x569c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x569c3c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x569c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x569c40: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x569c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x569c44: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x569c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x569c48: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x569c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x569c4c: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x569c4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x569c50: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x569c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x569c54: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x569c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x569c58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x569c58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x569c5c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x569C5Cu;
    {
        const bool branch_taken_0x569c5c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x569c5c) {
            ctx->pc = 0x569C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x569C5Cu;
            // 0x569c60: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x569C6Cu;
            goto label_569c6c;
        }
    }
    ctx->pc = 0x569C64u;
    // 0x569c64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x569c64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x569c68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x569c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_569c6c:
    // 0x569c6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x569c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x569c70: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x569c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x569c74: 0x34427f00  ori         $v0, $v0, 0x7F00
    ctx->pc = 0x569c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32512);
    // 0x569c78: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x569c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x569c7c: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x569c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x569c80: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x569c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x569c84: 0xc05068c  jal         func_141A30
    ctx->pc = 0x569C84u;
    SET_GPR_U32(ctx, 31, 0x569C8Cu);
    ctx->pc = 0x569C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569C84u;
            // 0x569c88: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569C8Cu; }
        if (ctx->pc != 0x569C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569C8Cu; }
        if (ctx->pc != 0x569C8Cu) { return; }
    }
    ctx->pc = 0x569C8Cu;
label_569c8c:
    // 0x569c8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x569c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x569c90: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x569c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
    // 0x569c94: 0xc0506ac  jal         func_141AB0
    ctx->pc = 0x569C94u;
    SET_GPR_U32(ctx, 31, 0x569C9Cu);
    ctx->pc = 0x569C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569C94u;
            // 0x569c98: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569C9Cu; }
        if (ctx->pc != 0x569C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569C9Cu; }
        if (ctx->pc != 0x569C9Cu) { return; }
    }
    ctx->pc = 0x569C9Cu;
label_569c9c:
    // 0x569c9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x569c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x569ca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x569ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x569ca4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x569ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x569ca8: 0xc0506b8  jal         func_141AE0
    ctx->pc = 0x569CA8u;
    SET_GPR_U32(ctx, 31, 0x569CB0u);
    ctx->pc = 0x569CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569CA8u;
            // 0x569cac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AE0u;
    if (runtime->hasFunction(0x141AE0u)) {
        auto targetFn = runtime->lookupFunction(0x141AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569CB0u; }
        if (ctx->pc != 0x569CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AE0_0x141ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569CB0u; }
        if (ctx->pc != 0x569CB0u) { return; }
    }
    ctx->pc = 0x569CB0u;
label_569cb0:
    // 0x569cb0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x569cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x569cb4: 0xc0506cc  jal         func_141B30
    ctx->pc = 0x569CB4u;
    SET_GPR_U32(ctx, 31, 0x569CBCu);
    ctx->pc = 0x569CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569CB4u;
            // 0x569cb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141B30u;
    if (runtime->hasFunction(0x141B30u)) {
        auto targetFn = runtime->lookupFunction(0x141B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569CBCu; }
        if (ctx->pc != 0x569CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141B30_0x141b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569CBCu; }
        if (ctx->pc != 0x569CBCu) { return; }
    }
    ctx->pc = 0x569CBCu;
label_569cbc:
    // 0x569cbc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x569cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x569cc0: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x569cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x569cc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x569cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x569cc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x569cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x569ccc: 0xc050780  jal         func_141E00
    ctx->pc = 0x569CCCu;
    SET_GPR_U32(ctx, 31, 0x569CD4u);
    ctx->pc = 0x569CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569CCCu;
            // 0x569cd0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E00u;
    if (runtime->hasFunction(0x141E00u)) {
        auto targetFn = runtime->lookupFunction(0x141E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569CD4u; }
        if (ctx->pc != 0x569CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141E00_0x141e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569CD4u; }
        if (ctx->pc != 0x569CD4u) { return; }
    }
    ctx->pc = 0x569CD4u;
label_569cd4:
    // 0x569cd4: 0xc0508a4  jal         func_142290
    ctx->pc = 0x569CD4u;
    SET_GPR_U32(ctx, 31, 0x569CDCu);
    ctx->pc = 0x142290u;
    if (runtime->hasFunction(0x142290u)) {
        auto targetFn = runtime->lookupFunction(0x142290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569CDCu; }
        if (ctx->pc != 0x569CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142290_0x142290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569CDCu; }
        if (ctx->pc != 0x569CDCu) { return; }
    }
    ctx->pc = 0x569CDCu;
label_569cdc:
    // 0x569cdc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x569cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x569ce0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x569ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x569ce4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x569ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x569ce8: 0xc0506b8  jal         func_141AE0
    ctx->pc = 0x569CE8u;
    SET_GPR_U32(ctx, 31, 0x569CF0u);
    ctx->pc = 0x569CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569CE8u;
            // 0x569cec: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AE0u;
    if (runtime->hasFunction(0x141AE0u)) {
        auto targetFn = runtime->lookupFunction(0x141AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569CF0u; }
        if (ctx->pc != 0x569CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AE0_0x141ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569CF0u; }
        if (ctx->pc != 0x569CF0u) { return; }
    }
    ctx->pc = 0x569CF0u;
label_569cf0:
    // 0x569cf0: 0xc05068c  jal         func_141A30
    ctx->pc = 0x569CF0u;
    SET_GPR_U32(ctx, 31, 0x569CF8u);
    ctx->pc = 0x569CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569CF0u;
            // 0x569cf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569CF8u; }
        if (ctx->pc != 0x569CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569CF8u; }
        if (ctx->pc != 0x569CF8u) { return; }
    }
    ctx->pc = 0x569CF8u;
label_569cf8:
    // 0x569cf8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x569cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x569cfc: 0x8c6389e0  lw          $v1, -0x7620($v1)
    ctx->pc = 0x569cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
    // 0x569d00: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x569d00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x569d04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x569d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x569d08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x569d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x569d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x569D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x569D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569D0Cu;
            // 0x569d10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x569D14u;
    // 0x569d14: 0x0  nop
    ctx->pc = 0x569d14u;
    // NOP
    // 0x569d18: 0x0  nop
    ctx->pc = 0x569d18u;
    // NOP
    // 0x569d1c: 0x0  nop
    ctx->pc = 0x569d1cu;
    // NOP
}
