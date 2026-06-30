#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BFC70
// Address: 0x3bfc70 - 0x3bfee0
void sub_003BFC70_0x3bfc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFC70_0x3bfc70");
#endif

    switch (ctx->pc) {
        case 0x3bfc70u: goto label_3bfc70;
        case 0x3bfc74u: goto label_3bfc74;
        case 0x3bfc78u: goto label_3bfc78;
        case 0x3bfc7cu: goto label_3bfc7c;
        case 0x3bfc80u: goto label_3bfc80;
        case 0x3bfc84u: goto label_3bfc84;
        case 0x3bfc88u: goto label_3bfc88;
        case 0x3bfc8cu: goto label_3bfc8c;
        case 0x3bfc90u: goto label_3bfc90;
        case 0x3bfc94u: goto label_3bfc94;
        case 0x3bfc98u: goto label_3bfc98;
        case 0x3bfc9cu: goto label_3bfc9c;
        case 0x3bfca0u: goto label_3bfca0;
        case 0x3bfca4u: goto label_3bfca4;
        case 0x3bfca8u: goto label_3bfca8;
        case 0x3bfcacu: goto label_3bfcac;
        case 0x3bfcb0u: goto label_3bfcb0;
        case 0x3bfcb4u: goto label_3bfcb4;
        case 0x3bfcb8u: goto label_3bfcb8;
        case 0x3bfcbcu: goto label_3bfcbc;
        case 0x3bfcc0u: goto label_3bfcc0;
        case 0x3bfcc4u: goto label_3bfcc4;
        case 0x3bfcc8u: goto label_3bfcc8;
        case 0x3bfcccu: goto label_3bfccc;
        case 0x3bfcd0u: goto label_3bfcd0;
        case 0x3bfcd4u: goto label_3bfcd4;
        case 0x3bfcd8u: goto label_3bfcd8;
        case 0x3bfcdcu: goto label_3bfcdc;
        case 0x3bfce0u: goto label_3bfce0;
        case 0x3bfce4u: goto label_3bfce4;
        case 0x3bfce8u: goto label_3bfce8;
        case 0x3bfcecu: goto label_3bfcec;
        case 0x3bfcf0u: goto label_3bfcf0;
        case 0x3bfcf4u: goto label_3bfcf4;
        case 0x3bfcf8u: goto label_3bfcf8;
        case 0x3bfcfcu: goto label_3bfcfc;
        case 0x3bfd00u: goto label_3bfd00;
        case 0x3bfd04u: goto label_3bfd04;
        case 0x3bfd08u: goto label_3bfd08;
        case 0x3bfd0cu: goto label_3bfd0c;
        case 0x3bfd10u: goto label_3bfd10;
        case 0x3bfd14u: goto label_3bfd14;
        case 0x3bfd18u: goto label_3bfd18;
        case 0x3bfd1cu: goto label_3bfd1c;
        case 0x3bfd20u: goto label_3bfd20;
        case 0x3bfd24u: goto label_3bfd24;
        case 0x3bfd28u: goto label_3bfd28;
        case 0x3bfd2cu: goto label_3bfd2c;
        case 0x3bfd30u: goto label_3bfd30;
        case 0x3bfd34u: goto label_3bfd34;
        case 0x3bfd38u: goto label_3bfd38;
        case 0x3bfd3cu: goto label_3bfd3c;
        case 0x3bfd40u: goto label_3bfd40;
        case 0x3bfd44u: goto label_3bfd44;
        case 0x3bfd48u: goto label_3bfd48;
        case 0x3bfd4cu: goto label_3bfd4c;
        case 0x3bfd50u: goto label_3bfd50;
        case 0x3bfd54u: goto label_3bfd54;
        case 0x3bfd58u: goto label_3bfd58;
        case 0x3bfd5cu: goto label_3bfd5c;
        case 0x3bfd60u: goto label_3bfd60;
        case 0x3bfd64u: goto label_3bfd64;
        case 0x3bfd68u: goto label_3bfd68;
        case 0x3bfd6cu: goto label_3bfd6c;
        case 0x3bfd70u: goto label_3bfd70;
        case 0x3bfd74u: goto label_3bfd74;
        case 0x3bfd78u: goto label_3bfd78;
        case 0x3bfd7cu: goto label_3bfd7c;
        case 0x3bfd80u: goto label_3bfd80;
        case 0x3bfd84u: goto label_3bfd84;
        case 0x3bfd88u: goto label_3bfd88;
        case 0x3bfd8cu: goto label_3bfd8c;
        case 0x3bfd90u: goto label_3bfd90;
        case 0x3bfd94u: goto label_3bfd94;
        case 0x3bfd98u: goto label_3bfd98;
        case 0x3bfd9cu: goto label_3bfd9c;
        case 0x3bfda0u: goto label_3bfda0;
        case 0x3bfda4u: goto label_3bfda4;
        case 0x3bfda8u: goto label_3bfda8;
        case 0x3bfdacu: goto label_3bfdac;
        case 0x3bfdb0u: goto label_3bfdb0;
        case 0x3bfdb4u: goto label_3bfdb4;
        case 0x3bfdb8u: goto label_3bfdb8;
        case 0x3bfdbcu: goto label_3bfdbc;
        case 0x3bfdc0u: goto label_3bfdc0;
        case 0x3bfdc4u: goto label_3bfdc4;
        case 0x3bfdc8u: goto label_3bfdc8;
        case 0x3bfdccu: goto label_3bfdcc;
        case 0x3bfdd0u: goto label_3bfdd0;
        case 0x3bfdd4u: goto label_3bfdd4;
        case 0x3bfdd8u: goto label_3bfdd8;
        case 0x3bfddcu: goto label_3bfddc;
        case 0x3bfde0u: goto label_3bfde0;
        case 0x3bfde4u: goto label_3bfde4;
        case 0x3bfde8u: goto label_3bfde8;
        case 0x3bfdecu: goto label_3bfdec;
        case 0x3bfdf0u: goto label_3bfdf0;
        case 0x3bfdf4u: goto label_3bfdf4;
        case 0x3bfdf8u: goto label_3bfdf8;
        case 0x3bfdfcu: goto label_3bfdfc;
        case 0x3bfe00u: goto label_3bfe00;
        case 0x3bfe04u: goto label_3bfe04;
        case 0x3bfe08u: goto label_3bfe08;
        case 0x3bfe0cu: goto label_3bfe0c;
        case 0x3bfe10u: goto label_3bfe10;
        case 0x3bfe14u: goto label_3bfe14;
        case 0x3bfe18u: goto label_3bfe18;
        case 0x3bfe1cu: goto label_3bfe1c;
        case 0x3bfe20u: goto label_3bfe20;
        case 0x3bfe24u: goto label_3bfe24;
        case 0x3bfe28u: goto label_3bfe28;
        case 0x3bfe2cu: goto label_3bfe2c;
        case 0x3bfe30u: goto label_3bfe30;
        case 0x3bfe34u: goto label_3bfe34;
        case 0x3bfe38u: goto label_3bfe38;
        case 0x3bfe3cu: goto label_3bfe3c;
        case 0x3bfe40u: goto label_3bfe40;
        case 0x3bfe44u: goto label_3bfe44;
        case 0x3bfe48u: goto label_3bfe48;
        case 0x3bfe4cu: goto label_3bfe4c;
        case 0x3bfe50u: goto label_3bfe50;
        case 0x3bfe54u: goto label_3bfe54;
        case 0x3bfe58u: goto label_3bfe58;
        case 0x3bfe5cu: goto label_3bfe5c;
        case 0x3bfe60u: goto label_3bfe60;
        case 0x3bfe64u: goto label_3bfe64;
        case 0x3bfe68u: goto label_3bfe68;
        case 0x3bfe6cu: goto label_3bfe6c;
        case 0x3bfe70u: goto label_3bfe70;
        case 0x3bfe74u: goto label_3bfe74;
        case 0x3bfe78u: goto label_3bfe78;
        case 0x3bfe7cu: goto label_3bfe7c;
        case 0x3bfe80u: goto label_3bfe80;
        case 0x3bfe84u: goto label_3bfe84;
        case 0x3bfe88u: goto label_3bfe88;
        case 0x3bfe8cu: goto label_3bfe8c;
        case 0x3bfe90u: goto label_3bfe90;
        case 0x3bfe94u: goto label_3bfe94;
        case 0x3bfe98u: goto label_3bfe98;
        case 0x3bfe9cu: goto label_3bfe9c;
        case 0x3bfea0u: goto label_3bfea0;
        case 0x3bfea4u: goto label_3bfea4;
        case 0x3bfea8u: goto label_3bfea8;
        case 0x3bfeacu: goto label_3bfeac;
        case 0x3bfeb0u: goto label_3bfeb0;
        case 0x3bfeb4u: goto label_3bfeb4;
        case 0x3bfeb8u: goto label_3bfeb8;
        case 0x3bfebcu: goto label_3bfebc;
        case 0x3bfec0u: goto label_3bfec0;
        case 0x3bfec4u: goto label_3bfec4;
        case 0x3bfec8u: goto label_3bfec8;
        case 0x3bfeccu: goto label_3bfecc;
        case 0x3bfed0u: goto label_3bfed0;
        case 0x3bfed4u: goto label_3bfed4;
        case 0x3bfed8u: goto label_3bfed8;
        case 0x3bfedcu: goto label_3bfedc;
        default: break;
    }

    ctx->pc = 0x3bfc70u;

label_3bfc70:
    // 0x3bfc70: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3bfc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bfc74:
    // 0x3bfc74: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3bfc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3bfc78:
    // 0x3bfc78: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3bfc78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bfc7c:
    // 0x3bfc7c: 0x8ca40d9c  lw          $a0, 0xD9C($a1)
    ctx->pc = 0x3bfc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3484)));
label_3bfc80:
    // 0x3bfc80: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3bfc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3bfc84:
    // 0x3bfc84: 0x3e00008  jr          $ra
label_3bfc88:
    if (ctx->pc == 0x3BFC88u) {
        ctx->pc = 0x3BFC88u;
            // 0x3bfc88: 0xaca30d9c  sw          $v1, 0xD9C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 3484), GPR_U32(ctx, 3));
        ctx->pc = 0x3BFC8Cu;
        goto label_3bfc8c;
    }
    ctx->pc = 0x3BFC84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFC84u;
            // 0x3bfc88: 0xaca30d9c  sw          $v1, 0xD9C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 3484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BFC8Cu;
label_3bfc8c:
    // 0x3bfc8c: 0x0  nop
    ctx->pc = 0x3bfc8cu;
    // NOP
label_3bfc90:
    // 0x3bfc90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3bfc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3bfc94:
    // 0x3bfc94: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3bfc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3bfc98:
    // 0x3bfc98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3bfc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3bfc9c:
    // 0x3bfc9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bfc9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3bfca0:
    // 0x3bfca0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3bfca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3bfca4:
    // 0x3bfca4: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x3bfca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3bfca8:
    // 0x3bfca8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3bfca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3bfcac:
    // 0x3bfcac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3bfcacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bfcb0:
    // 0x3bfcb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bfcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3bfcb4:
    // 0x3bfcb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bfcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bfcb8:
    // 0x3bfcb8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3bfcb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3bfcbc:
    // 0x3bfcbc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3bfcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bfcc0:
    // 0x3bfcc0: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x3bfcc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bfcc4:
    // 0x3bfcc4: 0x8e220d9c  lw          $v0, 0xD9C($s1)
    ctx->pc = 0x3bfcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3484)));
label_3bfcc8:
    // 0x3bfcc8: 0x26240140  addiu       $a0, $s1, 0x140
    ctx->pc = 0x3bfcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
label_3bfccc:
    // 0x3bfccc: 0x26300580  addiu       $s0, $s1, 0x580
    ctx->pc = 0x3bfcccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
label_3bfcd0:
    // 0x3bfcd0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3bfcd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_3bfcd4:
    // 0x3bfcd4: 0xae220d9c  sw          $v0, 0xD9C($s1)
    ctx->pc = 0x3bfcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3484), GPR_U32(ctx, 2));
label_3bfcd8:
    // 0x3bfcd8: 0xc6210b00  lwc1        $f1, 0xB00($s1)
    ctx->pc = 0x3bfcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3bfcdc:
    // 0x3bfcdc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3bfcdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3bfce0:
    // 0x3bfce0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3bfce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3bfce4:
    // 0x3bfce4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bfce4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3bfce8:
    // 0x3bfce8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3bfce8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3bfcec:
    // 0x3bfcec: 0x0  nop
    ctx->pc = 0x3bfcecu;
    // NOP
label_3bfcf0:
    // 0x3bfcf0: 0xae220b00  sw          $v0, 0xB00($s1)
    ctx->pc = 0x3bfcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2816), GPR_U32(ctx, 2));
label_3bfcf4:
    // 0x3bfcf4: 0x8e220d74  lw          $v0, 0xD74($s1)
    ctx->pc = 0x3bfcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_3bfcf8:
    // 0x3bfcf8: 0xc04f26c  jal         func_13C9B0
label_3bfcfc:
    if (ctx->pc == 0x3BFCFCu) {
        ctx->pc = 0x3BFCFCu;
            // 0x3bfcfc: 0xac4302b0  sw          $v1, 0x2B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 3));
        ctx->pc = 0x3BFD00u;
        goto label_3bfd00;
    }
    ctx->pc = 0x3BFCF8u;
    SET_GPR_U32(ctx, 31, 0x3BFD00u);
    ctx->pc = 0x3BFCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFCF8u;
            // 0x3bfcfc: 0xac4302b0  sw          $v1, 0x2B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFD00u; }
        if (ctx->pc != 0x3BFD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFD00u; }
        if (ctx->pc != 0x3BFD00u) { return; }
    }
    ctx->pc = 0x3BFD00u;
label_3bfd00:
    // 0x3bfd00: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3bfd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3bfd04:
    // 0x3bfd04: 0xc4401360  lwc1        $f0, 0x1360($v0)
    ctx->pc = 0x3bfd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bfd08:
    // 0x3bfd08: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x3bfd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_3bfd0c:
    // 0x3bfd0c: 0xc0eeb1c  jal         func_3BAC70
label_3bfd10:
    if (ctx->pc == 0x3BFD10u) {
        ctx->pc = 0x3BFD10u;
            // 0x3bfd10: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3BFD14u;
        goto label_3bfd14;
    }
    ctx->pc = 0x3BFD0Cu;
    SET_GPR_U32(ctx, 31, 0x3BFD14u);
    ctx->pc = 0x3BFD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFD0Cu;
            // 0x3bfd10: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BAC70u;
    if (runtime->hasFunction(0x3BAC70u)) {
        auto targetFn = runtime->lookupFunction(0x3BAC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFD14u; }
        if (ctx->pc != 0x3BFD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BAC70_0x3bac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFD14u; }
        if (ctx->pc != 0x3BFD14u) { return; }
    }
    ctx->pc = 0x3BFD14u;
label_3bfd14:
    // 0x3bfd14: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3bfd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3bfd18:
    // 0x3bfd18: 0xc0eec24  jal         func_3BB090
label_3bfd1c:
    if (ctx->pc == 0x3BFD1Cu) {
        ctx->pc = 0x3BFD1Cu;
            // 0x3bfd1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BFD20u;
        goto label_3bfd20;
    }
    ctx->pc = 0x3BFD18u;
    SET_GPR_U32(ctx, 31, 0x3BFD20u);
    ctx->pc = 0x3BFD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFD18u;
            // 0x3bfd1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BB090u;
    if (runtime->hasFunction(0x3BB090u)) {
        auto targetFn = runtime->lookupFunction(0x3BB090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFD20u; }
        if (ctx->pc != 0x3BFD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BB090_0x3bb090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFD20u; }
        if (ctx->pc != 0x3BFD20u) { return; }
    }
    ctx->pc = 0x3BFD20u;
label_3bfd20:
    // 0x3bfd20: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3bfd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3bfd24:
    // 0x3bfd24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3bfd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bfd28:
    // 0x3bfd28: 0x262402e0  addiu       $a0, $s1, 0x2E0
    ctx->pc = 0x3bfd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
label_3bfd2c:
    // 0x3bfd2c: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x3bfd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_3bfd30:
    // 0x3bfd30: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x3bfd30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_3bfd34:
    // 0x3bfd34: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3bfd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3bfd38:
    // 0x3bfd38: 0xc04cc04  jal         func_133010
label_3bfd3c:
    if (ctx->pc == 0x3BFD3Cu) {
        ctx->pc = 0x3BFD3Cu;
            // 0x3bfd3c: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->pc = 0x3BFD40u;
        goto label_3bfd40;
    }
    ctx->pc = 0x3BFD38u;
    SET_GPR_U32(ctx, 31, 0x3BFD40u);
    ctx->pc = 0x3BFD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFD38u;
            // 0x3bfd3c: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFD40u; }
        if (ctx->pc != 0x3BFD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFD40u; }
        if (ctx->pc != 0x3BFD40u) { return; }
    }
    ctx->pc = 0x3BFD40u;
label_3bfd40:
    // 0x3bfd40: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3bfd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_3bfd44:
    // 0x3bfd44: 0xc075318  jal         func_1D4C60
label_3bfd48:
    if (ctx->pc == 0x3BFD48u) {
        ctx->pc = 0x3BFD48u;
            // 0x3bfd48: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->pc = 0x3BFD4Cu;
        goto label_3bfd4c;
    }
    ctx->pc = 0x3BFD44u;
    SET_GPR_U32(ctx, 31, 0x3BFD4Cu);
    ctx->pc = 0x3BFD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFD44u;
            // 0x3bfd48: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFD4Cu; }
        if (ctx->pc != 0x3BFD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFD4Cu; }
        if (ctx->pc != 0x3BFD4Cu) { return; }
    }
    ctx->pc = 0x3BFD4Cu;
label_3bfd4c:
    // 0x3bfd4c: 0x26250560  addiu       $a1, $s1, 0x560
    ctx->pc = 0x3bfd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_3bfd50:
    // 0x3bfd50: 0x26240840  addiu       $a0, $s1, 0x840
    ctx->pc = 0x3bfd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
label_3bfd54:
    // 0x3bfd54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3bfd54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3bfd58:
    // 0x3bfd58: 0xc0c6250  jal         func_318940
label_3bfd5c:
    if (ctx->pc == 0x3BFD5Cu) {
        ctx->pc = 0x3BFD5Cu;
            // 0x3bfd5c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BFD60u;
        goto label_3bfd60;
    }
    ctx->pc = 0x3BFD58u;
    SET_GPR_U32(ctx, 31, 0x3BFD60u);
    ctx->pc = 0x3BFD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFD58u;
            // 0x3bfd5c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFD60u; }
        if (ctx->pc != 0x3BFD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFD60u; }
        if (ctx->pc != 0x3BFD60u) { return; }
    }
    ctx->pc = 0x3BFD60u;
label_3bfd60:
    // 0x3bfd60: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x3bfd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_3bfd64:
    // 0x3bfd64: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3bfd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_3bfd68:
    // 0x3bfd68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3bfd68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3bfd6c:
    // 0x3bfd6c: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x3bfd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_3bfd70:
    // 0x3bfd70: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x3bfd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_3bfd74:
    // 0x3bfd74: 0xc0c6250  jal         func_318940
label_3bfd78:
    if (ctx->pc == 0x3BFD78u) {
        ctx->pc = 0x3BFD78u;
            // 0x3bfd78: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->pc = 0x3BFD7Cu;
        goto label_3bfd7c;
    }
    ctx->pc = 0x3BFD74u;
    SET_GPR_U32(ctx, 31, 0x3BFD7Cu);
    ctx->pc = 0x3BFD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFD74u;
            // 0x3bfd78: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFD7Cu; }
        if (ctx->pc != 0x3BFD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFD7Cu; }
        if (ctx->pc != 0x3BFD7Cu) { return; }
    }
    ctx->pc = 0x3BFD7Cu;
label_3bfd7c:
    // 0x3bfd7c: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3bfd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_3bfd80:
    // 0x3bfd80: 0x26250820  addiu       $a1, $s1, 0x820
    ctx->pc = 0x3bfd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
label_3bfd84:
    // 0x3bfd84: 0xc075378  jal         func_1D4DE0
label_3bfd88:
    if (ctx->pc == 0x3BFD88u) {
        ctx->pc = 0x3BFD88u;
            // 0x3bfd88: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BFD8Cu;
        goto label_3bfd8c;
    }
    ctx->pc = 0x3BFD84u;
    SET_GPR_U32(ctx, 31, 0x3BFD8Cu);
    ctx->pc = 0x3BFD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFD84u;
            // 0x3bfd88: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFD8Cu; }
        if (ctx->pc != 0x3BFD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFD8Cu; }
        if (ctx->pc != 0x3BFD8Cu) { return; }
    }
    ctx->pc = 0x3BFD8Cu;
label_3bfd8c:
    // 0x3bfd8c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3bfd8cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3bfd90:
    // 0x3bfd90: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x3bfd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
label_3bfd94:
    // 0x3bfd94: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3bfd94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3bfd98:
    // 0x3bfd98: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3bfd98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3bfd9c:
    // 0x3bfd9c: 0xc0c753c  jal         func_31D4F0
label_3bfda0:
    if (ctx->pc == 0x3BFDA0u) {
        ctx->pc = 0x3BFDA0u;
            // 0x3bfda0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3BFDA4u;
        goto label_3bfda4;
    }
    ctx->pc = 0x3BFD9Cu;
    SET_GPR_U32(ctx, 31, 0x3BFDA4u);
    ctx->pc = 0x3BFDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFD9Cu;
            // 0x3bfda0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFDA4u; }
        if (ctx->pc != 0x3BFDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFDA4u; }
        if (ctx->pc != 0x3BFDA4u) { return; }
    }
    ctx->pc = 0x3BFDA4u;
label_3bfda4:
    // 0x3bfda4: 0x26220890  addiu       $v0, $s1, 0x890
    ctx->pc = 0x3bfda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_3bfda8:
    // 0x3bfda8: 0x2444009c  addiu       $a0, $v0, 0x9C
    ctx->pc = 0x3bfda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
label_3bfdac:
    // 0x3bfdac: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3bfdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3bfdb0:
    // 0x3bfdb0: 0xc62c0930  lwc1        $f12, 0x930($s1)
    ctx->pc = 0x3bfdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3bfdb4:
    // 0x3bfdb4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3bfdb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3bfdb8:
    // 0x3bfdb8: 0xc0c753c  jal         func_31D4F0
label_3bfdbc:
    if (ctx->pc == 0x3BFDBCu) {
        ctx->pc = 0x3BFDBCu;
            // 0x3bfdbc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3BFDC0u;
        goto label_3bfdc0;
    }
    ctx->pc = 0x3BFDB8u;
    SET_GPR_U32(ctx, 31, 0x3BFDC0u);
    ctx->pc = 0x3BFDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFDB8u;
            // 0x3bfdbc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFDC0u; }
        if (ctx->pc != 0x3BFDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFDC0u; }
        if (ctx->pc != 0x3BFDC0u) { return; }
    }
    ctx->pc = 0x3BFDC0u;
label_3bfdc0:
    // 0x3bfdc0: 0xc0bdf08  jal         func_2F7C20
label_3bfdc4:
    if (ctx->pc == 0x3BFDC4u) {
        ctx->pc = 0x3BFDC4u;
            // 0x3bfdc4: 0x8e240d70  lw          $a0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->pc = 0x3BFDC8u;
        goto label_3bfdc8;
    }
    ctx->pc = 0x3BFDC0u;
    SET_GPR_U32(ctx, 31, 0x3BFDC8u);
    ctx->pc = 0x3BFDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFDC0u;
            // 0x3bfdc4: 0x8e240d70  lw          $a0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7C20u;
    if (runtime->hasFunction(0x2F7C20u)) {
        auto targetFn = runtime->lookupFunction(0x2F7C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFDC8u; }
        if (ctx->pc != 0x3BFDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7C20_0x2f7c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFDC8u; }
        if (ctx->pc != 0x3BFDC8u) { return; }
    }
    ctx->pc = 0x3BFDC8u;
label_3bfdc8:
    // 0x3bfdc8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3bfdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3bfdcc:
    // 0x3bfdcc: 0xae230dbc  sw          $v1, 0xDBC($s1)
    ctx->pc = 0x3bfdccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3516), GPR_U32(ctx, 3));
label_3bfdd0:
    // 0x3bfdd0: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x3bfdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
label_3bfdd4:
    // 0x3bfdd4: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x3bfdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_3bfdd8:
    // 0x3bfdd8: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_3bfddc:
    if (ctx->pc == 0x3BFDDCu) {
        ctx->pc = 0x3BFDDCu;
            // 0x3bfddc: 0x8e450044  lw          $a1, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->pc = 0x3BFDE0u;
        goto label_3bfde0;
    }
    ctx->pc = 0x3BFDD8u;
    {
        const bool branch_taken_0x3bfdd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bfdd8) {
            ctx->pc = 0x3BFDDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFDD8u;
            // 0x3bfddc: 0x8e450044  lw          $a1, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BFDF8u;
            goto label_3bfdf8;
        }
    }
    ctx->pc = 0x3BFDE0u;
label_3bfde0:
    // 0x3bfde0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3bfde0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bfde4:
    // 0x3bfde4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3bfde4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3bfde8:
    // 0x3bfde8: 0x320f809  jalr        $t9
label_3bfdec:
    if (ctx->pc == 0x3BFDECu) {
        ctx->pc = 0x3BFDECu;
            // 0x3bfdec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BFDF0u;
        goto label_3bfdf0;
    }
    ctx->pc = 0x3BFDE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BFDF0u);
        ctx->pc = 0x3BFDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFDE8u;
            // 0x3bfdec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BFDF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BFDF0u; }
            if (ctx->pc != 0x3BFDF0u) { return; }
        }
        }
    }
    ctx->pc = 0x3BFDF0u;
label_3bfdf0:
    // 0x3bfdf0: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x3bfdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
label_3bfdf4:
    // 0x3bfdf4: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x3bfdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_3bfdf8:
    // 0x3bfdf8: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_3bfdfc:
    if (ctx->pc == 0x3BFDFCu) {
        ctx->pc = 0x3BFDFCu;
            // 0x3bfdfc: 0x8e440048  lw          $a0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->pc = 0x3BFE00u;
        goto label_3bfe00;
    }
    ctx->pc = 0x3BFDF8u;
    {
        const bool branch_taken_0x3bfdf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bfdf8) {
            ctx->pc = 0x3BFDFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFDF8u;
            // 0x3bfdfc: 0x8e440048  lw          $a0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BFE18u;
            goto label_3bfe18;
        }
    }
    ctx->pc = 0x3BFE00u;
label_3bfe00:
    // 0x3bfe00: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3bfe00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3bfe04:
    // 0x3bfe04: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3bfe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3bfe08:
    // 0x3bfe08: 0xc057b7c  jal         func_15EDF0
label_3bfe0c:
    if (ctx->pc == 0x3BFE0Cu) {
        ctx->pc = 0x3BFE0Cu;
            // 0x3bfe0c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3BFE10u;
        goto label_3bfe10;
    }
    ctx->pc = 0x3BFE08u;
    SET_GPR_U32(ctx, 31, 0x3BFE10u);
    ctx->pc = 0x3BFE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFE08u;
            // 0x3bfe0c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFE10u; }
        if (ctx->pc != 0x3BFE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFE10u; }
        if (ctx->pc != 0x3BFE10u) { return; }
    }
    ctx->pc = 0x3BFE10u;
label_3bfe10:
    // 0x3bfe10: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x3bfe10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
label_3bfe14:
    // 0x3bfe14: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x3bfe14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_3bfe18:
    // 0x3bfe18: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_3bfe1c:
    if (ctx->pc == 0x3BFE1Cu) {
        ctx->pc = 0x3BFE1Cu;
            // 0x3bfe1c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3BFE20u;
        goto label_3bfe20;
    }
    ctx->pc = 0x3BFE18u;
    {
        const bool branch_taken_0x3bfe18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bfe18) {
            ctx->pc = 0x3BFE1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFE18u;
            // 0x3bfe1c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BFE48u;
            goto label_3bfe48;
        }
    }
    ctx->pc = 0x3BFE20u;
label_3bfe20:
    // 0x3bfe20: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x3bfe20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_3bfe24:
    // 0x3bfe24: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3bfe24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3bfe28:
    // 0x3bfe28: 0x34630180  ori         $v1, $v1, 0x180
    ctx->pc = 0x3bfe28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)384);
label_3bfe2c:
    // 0x3bfe2c: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x3bfe2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_3bfe30:
    // 0x3bfe30: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3bfe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3bfe34:
    // 0x3bfe34: 0x8e450048  lw          $a1, 0x48($s2)
    ctx->pc = 0x3bfe34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_3bfe38:
    // 0x3bfe38: 0xc057b7c  jal         func_15EDF0
label_3bfe3c:
    if (ctx->pc == 0x3BFE3Cu) {
        ctx->pc = 0x3BFE3Cu;
            // 0x3bfe3c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3BFE40u;
        goto label_3bfe40;
    }
    ctx->pc = 0x3BFE38u;
    SET_GPR_U32(ctx, 31, 0x3BFE40u);
    ctx->pc = 0x3BFE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFE38u;
            // 0x3bfe3c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFE40u; }
        if (ctx->pc != 0x3BFE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFE40u; }
        if (ctx->pc != 0x3BFE40u) { return; }
    }
    ctx->pc = 0x3BFE40u;
label_3bfe40:
    // 0x3bfe40: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x3bfe40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_3bfe44:
    // 0x3bfe44: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3bfe44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3bfe48:
    // 0x3bfe48: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3bfe48u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3bfe4c:
    // 0x3bfe4c: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x3bfe4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3bfe50:
    // 0x3bfe50: 0x8e430e38  lw          $v1, 0xE38($s2)
    ctx->pc = 0x3bfe50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3640)));
label_3bfe54:
    // 0x3bfe54: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3bfe58:
    if (ctx->pc == 0x3BFE58u) {
        ctx->pc = 0x3BFE58u;
            // 0x3bfe58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BFE5Cu;
        goto label_3bfe5c;
    }
    ctx->pc = 0x3BFE54u;
    {
        const bool branch_taken_0x3bfe54 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3BFE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFE54u;
            // 0x3bfe58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfe54) {
            ctx->pc = 0x3BFE6Cu;
            goto label_3bfe6c;
        }
    }
    ctx->pc = 0x3BFE5Cu;
label_3bfe5c:
    // 0x3bfe5c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3bfe5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3bfe60:
    // 0x3bfe60: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3bfe64:
    if (ctx->pc == 0x3BFE64u) {
        ctx->pc = 0x3BFE68u;
        goto label_3bfe68;
    }
    ctx->pc = 0x3BFE60u;
    {
        const bool branch_taken_0x3bfe60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bfe60) {
            ctx->pc = 0x3BFE6Cu;
            goto label_3bfe6c;
        }
    }
    ctx->pc = 0x3BFE68u;
label_3bfe68:
    // 0x3bfe68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bfe68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bfe6c:
    // 0x3bfe6c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3bfe70:
    if (ctx->pc == 0x3BFE70u) {
        ctx->pc = 0x3BFE74u;
        goto label_3bfe74;
    }
    ctx->pc = 0x3BFE6Cu;
    {
        const bool branch_taken_0x3bfe6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bfe6c) {
            ctx->pc = 0x3BFE88u;
            goto label_3bfe88;
        }
    }
    ctx->pc = 0x3BFE74u;
label_3bfe74:
    // 0x3bfe74: 0xc075eb4  jal         func_1D7AD0
label_3bfe78:
    if (ctx->pc == 0x3BFE78u) {
        ctx->pc = 0x3BFE78u;
            // 0x3bfe78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BFE7Cu;
        goto label_3bfe7c;
    }
    ctx->pc = 0x3BFE74u;
    SET_GPR_U32(ctx, 31, 0x3BFE7Cu);
    ctx->pc = 0x3BFE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFE74u;
            // 0x3bfe78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFE7Cu; }
        if (ctx->pc != 0x3BFE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFE7Cu; }
        if (ctx->pc != 0x3BFE7Cu) { return; }
    }
    ctx->pc = 0x3BFE7Cu;
label_3bfe7c:
    // 0x3bfe7c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3bfe80:
    if (ctx->pc == 0x3BFE80u) {
        ctx->pc = 0x3BFE84u;
        goto label_3bfe84;
    }
    ctx->pc = 0x3BFE7Cu;
    {
        const bool branch_taken_0x3bfe7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bfe7c) {
            ctx->pc = 0x3BFE88u;
            goto label_3bfe88;
        }
    }
    ctx->pc = 0x3BFE84u;
label_3bfe84:
    // 0x3bfe84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3bfe84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bfe88:
    // 0x3bfe88: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_3bfe8c:
    if (ctx->pc == 0x3BFE8Cu) {
        ctx->pc = 0x3BFE8Cu;
            // 0x3bfe8c: 0x8e240e34  lw          $a0, 0xE34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
        ctx->pc = 0x3BFE90u;
        goto label_3bfe90;
    }
    ctx->pc = 0x3BFE88u;
    {
        const bool branch_taken_0x3bfe88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bfe88) {
            ctx->pc = 0x3BFE8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFE88u;
            // 0x3bfe8c: 0x8e240e34  lw          $a0, 0xE34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BFEA8u;
            goto label_3bfea8;
        }
    }
    ctx->pc = 0x3BFE90u;
label_3bfe90:
    // 0x3bfe90: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3bfe90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3bfe94:
    // 0x3bfe94: 0x8e440d98  lw          $a0, 0xD98($s2)
    ctx->pc = 0x3bfe94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_3bfe98:
    // 0x3bfe98: 0x8c633e58  lw          $v1, 0x3E58($v1)
    ctx->pc = 0x3bfe98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15960)));
label_3bfe9c:
    // 0x3bfe9c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3bfe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3bfea0:
    // 0x3bfea0: 0xa06000c0  sb          $zero, 0xC0($v1)
    ctx->pc = 0x3bfea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 192), (uint8_t)GPR_U32(ctx, 0));
label_3bfea4:
    // 0x3bfea4: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x3bfea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_3bfea8:
    // 0x3bfea8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3bfea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3bfeac:
    // 0x3bfeac: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
label_3bfeb0:
    if (ctx->pc == 0x3BFEB0u) {
        ctx->pc = 0x3BFEB0u;
            // 0x3bfeb0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3BFEB4u;
        goto label_3bfeb4;
    }
    ctx->pc = 0x3BFEACu;
    {
        const bool branch_taken_0x3bfeac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3bfeac) {
            ctx->pc = 0x3BFEB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFEACu;
            // 0x3bfeb0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BFEC4u;
            goto label_3bfec4;
        }
    }
    ctx->pc = 0x3BFEB4u;
label_3bfeb4:
    // 0x3bfeb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bfeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bfeb8:
    // 0x3bfeb8: 0xc07649c  jal         func_1D9270
label_3bfebc:
    if (ctx->pc == 0x3BFEBCu) {
        ctx->pc = 0x3BFEBCu;
            // 0x3bfebc: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x3BFEC0u;
        goto label_3bfec0;
    }
    ctx->pc = 0x3BFEB8u;
    SET_GPR_U32(ctx, 31, 0x3BFEC0u);
    ctx->pc = 0x3BFEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFEB8u;
            // 0x3bfebc: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFEC0u; }
        if (ctx->pc != 0x3BFEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFEC0u; }
        if (ctx->pc != 0x3BFEC0u) { return; }
    }
    ctx->pc = 0x3BFEC0u;
label_3bfec0:
    // 0x3bfec0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3bfec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3bfec4:
    // 0x3bfec4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3bfec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3bfec8:
    // 0x3bfec8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3bfec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bfecc:
    // 0x3bfecc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3bfeccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bfed0:
    // 0x3bfed0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3bfed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bfed4:
    // 0x3bfed4: 0x3e00008  jr          $ra
label_3bfed8:
    if (ctx->pc == 0x3BFED8u) {
        ctx->pc = 0x3BFED8u;
            // 0x3bfed8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3BFEDCu;
        goto label_3bfedc;
    }
    ctx->pc = 0x3BFED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFED4u;
            // 0x3bfed8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BFEDCu;
label_3bfedc:
    // 0x3bfedc: 0x0  nop
    ctx->pc = 0x3bfedcu;
    // NOP
}
