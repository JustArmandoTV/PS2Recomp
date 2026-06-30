#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00559F00
// Address: 0x559f00 - 0x55a0a0
void sub_00559F00_0x559f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00559F00_0x559f00");
#endif

    switch (ctx->pc) {
        case 0x559f00u: goto label_559f00;
        case 0x559f04u: goto label_559f04;
        case 0x559f08u: goto label_559f08;
        case 0x559f0cu: goto label_559f0c;
        case 0x559f10u: goto label_559f10;
        case 0x559f14u: goto label_559f14;
        case 0x559f18u: goto label_559f18;
        case 0x559f1cu: goto label_559f1c;
        case 0x559f20u: goto label_559f20;
        case 0x559f24u: goto label_559f24;
        case 0x559f28u: goto label_559f28;
        case 0x559f2cu: goto label_559f2c;
        case 0x559f30u: goto label_559f30;
        case 0x559f34u: goto label_559f34;
        case 0x559f38u: goto label_559f38;
        case 0x559f3cu: goto label_559f3c;
        case 0x559f40u: goto label_559f40;
        case 0x559f44u: goto label_559f44;
        case 0x559f48u: goto label_559f48;
        case 0x559f4cu: goto label_559f4c;
        case 0x559f50u: goto label_559f50;
        case 0x559f54u: goto label_559f54;
        case 0x559f58u: goto label_559f58;
        case 0x559f5cu: goto label_559f5c;
        case 0x559f60u: goto label_559f60;
        case 0x559f64u: goto label_559f64;
        case 0x559f68u: goto label_559f68;
        case 0x559f6cu: goto label_559f6c;
        case 0x559f70u: goto label_559f70;
        case 0x559f74u: goto label_559f74;
        case 0x559f78u: goto label_559f78;
        case 0x559f7cu: goto label_559f7c;
        case 0x559f80u: goto label_559f80;
        case 0x559f84u: goto label_559f84;
        case 0x559f88u: goto label_559f88;
        case 0x559f8cu: goto label_559f8c;
        case 0x559f90u: goto label_559f90;
        case 0x559f94u: goto label_559f94;
        case 0x559f98u: goto label_559f98;
        case 0x559f9cu: goto label_559f9c;
        case 0x559fa0u: goto label_559fa0;
        case 0x559fa4u: goto label_559fa4;
        case 0x559fa8u: goto label_559fa8;
        case 0x559facu: goto label_559fac;
        case 0x559fb0u: goto label_559fb0;
        case 0x559fb4u: goto label_559fb4;
        case 0x559fb8u: goto label_559fb8;
        case 0x559fbcu: goto label_559fbc;
        case 0x559fc0u: goto label_559fc0;
        case 0x559fc4u: goto label_559fc4;
        case 0x559fc8u: goto label_559fc8;
        case 0x559fccu: goto label_559fcc;
        case 0x559fd0u: goto label_559fd0;
        case 0x559fd4u: goto label_559fd4;
        case 0x559fd8u: goto label_559fd8;
        case 0x559fdcu: goto label_559fdc;
        case 0x559fe0u: goto label_559fe0;
        case 0x559fe4u: goto label_559fe4;
        case 0x559fe8u: goto label_559fe8;
        case 0x559fecu: goto label_559fec;
        case 0x559ff0u: goto label_559ff0;
        case 0x559ff4u: goto label_559ff4;
        case 0x559ff8u: goto label_559ff8;
        case 0x559ffcu: goto label_559ffc;
        case 0x55a000u: goto label_55a000;
        case 0x55a004u: goto label_55a004;
        case 0x55a008u: goto label_55a008;
        case 0x55a00cu: goto label_55a00c;
        case 0x55a010u: goto label_55a010;
        case 0x55a014u: goto label_55a014;
        case 0x55a018u: goto label_55a018;
        case 0x55a01cu: goto label_55a01c;
        case 0x55a020u: goto label_55a020;
        case 0x55a024u: goto label_55a024;
        case 0x55a028u: goto label_55a028;
        case 0x55a02cu: goto label_55a02c;
        case 0x55a030u: goto label_55a030;
        case 0x55a034u: goto label_55a034;
        case 0x55a038u: goto label_55a038;
        case 0x55a03cu: goto label_55a03c;
        case 0x55a040u: goto label_55a040;
        case 0x55a044u: goto label_55a044;
        case 0x55a048u: goto label_55a048;
        case 0x55a04cu: goto label_55a04c;
        case 0x55a050u: goto label_55a050;
        case 0x55a054u: goto label_55a054;
        case 0x55a058u: goto label_55a058;
        case 0x55a05cu: goto label_55a05c;
        case 0x55a060u: goto label_55a060;
        case 0x55a064u: goto label_55a064;
        case 0x55a068u: goto label_55a068;
        case 0x55a06cu: goto label_55a06c;
        case 0x55a070u: goto label_55a070;
        case 0x55a074u: goto label_55a074;
        case 0x55a078u: goto label_55a078;
        case 0x55a07cu: goto label_55a07c;
        case 0x55a080u: goto label_55a080;
        case 0x55a084u: goto label_55a084;
        case 0x55a088u: goto label_55a088;
        case 0x55a08cu: goto label_55a08c;
        case 0x55a090u: goto label_55a090;
        case 0x55a094u: goto label_55a094;
        case 0x55a098u: goto label_55a098;
        case 0x55a09cu: goto label_55a09c;
        default: break;
    }

    ctx->pc = 0x559f00u;

label_559f00:
    // 0x559f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x559f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_559f04:
    // 0x559f04: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x559f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_559f08:
    // 0x559f08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x559f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_559f0c:
    // 0x559f0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x559f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_559f10:
    // 0x559f10: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x559f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_559f14:
    // 0x559f14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x559f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_559f18:
    // 0x559f18: 0x8c840098  lw          $a0, 0x98($a0)
    ctx->pc = 0x559f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_559f1c:
    // 0x559f1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x559f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_559f20:
    // 0x559f20: 0x10830036  beq         $a0, $v1, . + 4 + (0x36 << 2)
label_559f24:
    if (ctx->pc == 0x559F24u) {
        ctx->pc = 0x559F24u;
            // 0x559f24: 0xc4a40018  lwc1        $f4, 0x18($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->pc = 0x559F28u;
        goto label_559f28;
    }
    ctx->pc = 0x559F20u;
    {
        const bool branch_taken_0x559f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x559F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559F20u;
            // 0x559f24: 0xc4a40018  lwc1        $f4, 0x18($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x559f20) {
            ctx->pc = 0x559FFCu;
            goto label_559ffc;
        }
    }
    ctx->pc = 0x559F28u;
label_559f28:
    // 0x559f28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x559f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_559f2c:
    // 0x559f2c: 0x50830025  beql        $a0, $v1, . + 4 + (0x25 << 2)
label_559f30:
    if (ctx->pc == 0x559F30u) {
        ctx->pc = 0x559F30u;
            // 0x559f30: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->pc = 0x559F34u;
        goto label_559f34;
    }
    ctx->pc = 0x559F2Cu;
    {
        const bool branch_taken_0x559f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x559f2c) {
            ctx->pc = 0x559F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x559F2Cu;
            // 0x559f30: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x559FC4u;
            goto label_559fc4;
        }
    }
    ctx->pc = 0x559F34u;
label_559f34:
    // 0x559f34: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_559f38:
    if (ctx->pc == 0x559F38u) {
        ctx->pc = 0x559F38u;
            // 0x559f38: 0xc60100c0  lwc1        $f1, 0xC0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x559F3Cu;
        goto label_559f3c;
    }
    ctx->pc = 0x559F34u;
    {
        const bool branch_taken_0x559f34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x559f34) {
            ctx->pc = 0x559F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x559F34u;
            // 0x559f38: 0xc60100c0  lwc1        $f1, 0xC0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x559F44u;
            goto label_559f44;
        }
    }
    ctx->pc = 0x559F3Cu;
label_559f3c:
    // 0x559f3c: 0x10000052  b           . + 4 + (0x52 << 2)
label_559f40:
    if (ctx->pc == 0x559F40u) {
        ctx->pc = 0x559F40u;
            // 0x559f40: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x559F44u;
        goto label_559f44;
    }
    ctx->pc = 0x559F3Cu;
    {
        const bool branch_taken_0x559f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x559F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559F3Cu;
            // 0x559f40: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x559f3c) {
            ctx->pc = 0x55A088u;
            goto label_55a088;
        }
    }
    ctx->pc = 0x559F44u;
label_559f44:
    // 0x559f44: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x559f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_559f48:
    // 0x559f48: 0xc60200b4  lwc1        $f2, 0xB4($s0)
    ctx->pc = 0x559f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_559f4c:
    // 0x559f4c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x559f4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_559f50:
    // 0x559f50: 0x0  nop
    ctx->pc = 0x559f50u;
    // NOP
label_559f54:
    // 0x559f54: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x559f54u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_559f58:
    // 0x559f58: 0x4604105d  msub.s      $f1, $f2, $f4
    ctx->pc = 0x559f58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
label_559f5c:
    // 0x559f5c: 0xe60100c0  swc1        $f1, 0xC0($s0)
    ctx->pc = 0x559f5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_559f60:
    // 0x559f60: 0xc60100ac  lwc1        $f1, 0xAC($s0)
    ctx->pc = 0x559f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_559f64:
    // 0x559f64: 0xc60200b0  lwc1        $f2, 0xB0($s0)
    ctx->pc = 0x559f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_559f68:
    // 0x559f68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x559f68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_559f6c:
    // 0x559f6c: 0x0  nop
    ctx->pc = 0x559f6cu;
    // NOP
label_559f70:
    // 0x559f70: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x559f70u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_559f74:
    // 0x559f74: 0x4604105c  madd.s      $f1, $f2, $f4
    ctx->pc = 0x559f74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
label_559f78:
    // 0x559f78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x559f78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_559f7c:
    // 0x559f7c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_559f80:
    if (ctx->pc == 0x559F80u) {
        ctx->pc = 0x559F80u;
            // 0x559f80: 0xe60100ac  swc1        $f1, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->pc = 0x559F84u;
        goto label_559f84;
    }
    ctx->pc = 0x559F7Cu;
    {
        const bool branch_taken_0x559f7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x559F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559F7Cu;
            // 0x559f80: 0xe60100ac  swc1        $f1, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x559f7c) {
            ctx->pc = 0x559F88u;
            goto label_559f88;
        }
    }
    ctx->pc = 0x559F84u;
label_559f84:
    // 0x559f84: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x559f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
label_559f88:
    // 0x559f88: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x559f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_559f8c:
    // 0x559f8c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x559f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_559f90:
    // 0x559f90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x559f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_559f94:
    // 0x559f94: 0x0  nop
    ctx->pc = 0x559f94u;
    // NOP
label_559f98:
    // 0x559f98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x559f98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_559f9c:
    // 0x559f9c: 0x45000039  bc1f        . + 4 + (0x39 << 2)
label_559fa0:
    if (ctx->pc == 0x559FA0u) {
        ctx->pc = 0x559FA4u;
        goto label_559fa4;
    }
    ctx->pc = 0x559F9Cu;
    {
        const bool branch_taken_0x559f9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x559f9c) {
            ctx->pc = 0x55A084u;
            goto label_55a084;
        }
    }
    ctx->pc = 0x559FA4u;
label_559fa4:
    // 0x559fa4: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x559fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_559fa8:
    // 0x559fa8: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x559fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_559fac:
    // 0x559fac: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x559facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
label_559fb0:
    // 0x559fb0: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x559fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_559fb4:
    // 0x559fb4: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x559fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_559fb8:
    // 0x559fb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x559fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_559fbc:
    // 0x559fbc: 0x10000031  b           . + 4 + (0x31 << 2)
label_559fc0:
    if (ctx->pc == 0x559FC0u) {
        ctx->pc = 0x559FC0u;
            // 0x559fc0: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
        ctx->pc = 0x559FC4u;
        goto label_559fc4;
    }
    ctx->pc = 0x559FBCu;
    {
        const bool branch_taken_0x559fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x559FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559FBCu;
            // 0x559fc0: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x559fbc) {
            ctx->pc = 0x55A084u;
            goto label_55a084;
        }
    }
    ctx->pc = 0x559FC4u;
label_559fc4:
    // 0x559fc4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x559fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_559fc8:
    // 0x559fc8: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x559fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_559fcc:
    // 0x559fcc: 0x8c63f2f0  lw          $v1, -0xD10($v1)
    ctx->pc = 0x559fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963952)));
label_559fd0:
    // 0x559fd0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x559fd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_559fd4:
    // 0x559fd4: 0x0  nop
    ctx->pc = 0x559fd4u;
    // NOP
label_559fd8:
    // 0x559fd8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x559fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_559fdc:
    // 0x559fdc: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x559fdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_559fe0:
    // 0x559fe0: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
label_559fe4:
    if (ctx->pc == 0x559FE4u) {
        ctx->pc = 0x559FE4u;
            // 0x559fe4: 0xae0400c4  sw          $a0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
        ctx->pc = 0x559FE8u;
        goto label_559fe8;
    }
    ctx->pc = 0x559FE0u;
    {
        const bool branch_taken_0x559fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x559FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559FE0u;
            // 0x559fe4: 0xae0400c4  sw          $a0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x559fe0) {
            ctx->pc = 0x55A084u;
            goto label_55a084;
        }
    }
    ctx->pc = 0x559FE8u;
label_559fe8:
    // 0x559fe8: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x559fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_559fec:
    // 0x559fec: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x559fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_559ff0:
    // 0x559ff0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x559ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_559ff4:
    // 0x559ff4: 0x10000023  b           . + 4 + (0x23 << 2)
label_559ff8:
    if (ctx->pc == 0x559FF8u) {
        ctx->pc = 0x559FF8u;
            // 0x559ff8: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
        ctx->pc = 0x559FFCu;
        goto label_559ffc;
    }
    ctx->pc = 0x559FF4u;
    {
        const bool branch_taken_0x559ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x559FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559FF4u;
            // 0x559ff8: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x559ff4) {
            ctx->pc = 0x55A084u;
            goto label_55a084;
        }
    }
    ctx->pc = 0x559FFCu;
label_559ffc:
    // 0x559ffc: 0xc60000c0  lwc1        $f0, 0xC0($s0)
    ctx->pc = 0x559ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55a000:
    // 0x55a000: 0xc60100b4  lwc1        $f1, 0xB4($s0)
    ctx->pc = 0x55a000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55a004:
    // 0x55a004: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x55a004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55a008:
    // 0x55a008: 0x0  nop
    ctx->pc = 0x55a008u;
    // NOP
label_55a00c:
    // 0x55a00c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x55a00cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_55a010:
    // 0x55a010: 0x4604081c  madd.s      $f0, $f1, $f4
    ctx->pc = 0x55a010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
label_55a014:
    // 0x55a014: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x55a014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_55a018:
    // 0x55a018: 0xc60000ac  lwc1        $f0, 0xAC($s0)
    ctx->pc = 0x55a018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55a01c:
    // 0x55a01c: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x55a01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55a020:
    // 0x55a020: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x55a020u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_55a024:
    // 0x55a024: 0x4604081d  msub.s      $f0, $f1, $f4
    ctx->pc = 0x55a024u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
label_55a028:
    // 0x55a028: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x55a028u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55a02c:
    // 0x55a02c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_55a030:
    if (ctx->pc == 0x55A030u) {
        ctx->pc = 0x55A030u;
            // 0x55a030: 0xe60000ac  swc1        $f0, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->pc = 0x55A034u;
        goto label_55a034;
    }
    ctx->pc = 0x55A02Cu;
    {
        const bool branch_taken_0x55a02c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x55A030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A02Cu;
            // 0x55a030: 0xe60000ac  swc1        $f0, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a02c) {
            ctx->pc = 0x55A038u;
            goto label_55a038;
        }
    }
    ctx->pc = 0x55A034u;
label_55a034:
    // 0x55a034: 0xe60200ac  swc1        $f2, 0xAC($s0)
    ctx->pc = 0x55a034u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
label_55a038:
    // 0x55a038: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x55a038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55a03c:
    // 0x55a03c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x55a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_55a040:
    // 0x55a040: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55a040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55a044:
    // 0x55a044: 0x0  nop
    ctx->pc = 0x55a044u;
    // NOP
label_55a048:
    // 0x55a048: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x55a048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55a04c:
    // 0x55a04c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_55a050:
    if (ctx->pc == 0x55A050u) {
        ctx->pc = 0x55A054u;
        goto label_55a054;
    }
    ctx->pc = 0x55A04Cu;
    {
        const bool branch_taken_0x55a04c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x55a04c) {
            ctx->pc = 0x55A084u;
            goto label_55a084;
        }
    }
    ctx->pc = 0x55A054u;
label_55a054:
    // 0x55a054: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x55a054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_55a058:
    // 0x55a058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55a058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55a05c:
    // 0x55a05c: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x55a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_55a060:
    // 0x55a060: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x55a060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_55a064:
    // 0x55a064: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x55a064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_55a068:
    // 0x55a068: 0x320f809  jalr        $t9
label_55a06c:
    if (ctx->pc == 0x55A06Cu) {
        ctx->pc = 0x55A06Cu;
            // 0x55a06c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55A070u;
        goto label_55a070;
    }
    ctx->pc = 0x55A068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55A070u);
        ctx->pc = 0x55A06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A068u;
            // 0x55a06c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55A070u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55A070u; }
            if (ctx->pc != 0x55A070u) { return; }
        }
        }
    }
    ctx->pc = 0x55A070u;
label_55a070:
    // 0x55a070: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x55a070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_55a074:
    // 0x55a074: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_55a078:
    if (ctx->pc == 0x55A078u) {
        ctx->pc = 0x55A07Cu;
        goto label_55a07c;
    }
    ctx->pc = 0x55A074u;
    {
        const bool branch_taken_0x55a074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a074) {
            ctx->pc = 0x55A084u;
            goto label_55a084;
        }
    }
    ctx->pc = 0x55A07Cu;
label_55a07c:
    // 0x55a07c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x55a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55a080:
    // 0x55a080: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x55a080u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_55a084:
    // 0x55a084: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x55a084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_55a088:
    // 0x55a088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55a088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_55a08c:
    // 0x55a08c: 0x3e00008  jr          $ra
label_55a090:
    if (ctx->pc == 0x55A090u) {
        ctx->pc = 0x55A090u;
            // 0x55a090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x55A094u;
        goto label_55a094;
    }
    ctx->pc = 0x55A08Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55A090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A08Cu;
            // 0x55a090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55A094u;
label_55a094:
    // 0x55a094: 0x0  nop
    ctx->pc = 0x55a094u;
    // NOP
label_55a098:
    // 0x55a098: 0x0  nop
    ctx->pc = 0x55a098u;
    // NOP
label_55a09c:
    // 0x55a09c: 0x0  nop
    ctx->pc = 0x55a09cu;
    // NOP
}
