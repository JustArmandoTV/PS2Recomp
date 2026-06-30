#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D1020
// Address: 0x3d1020 - 0x3d1540
void sub_003D1020_0x3d1020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1020_0x3d1020");
#endif

    switch (ctx->pc) {
        case 0x3d1210u: goto label_3d1210;
        case 0x3d121cu: goto label_3d121c;
        case 0x3d1234u: goto label_3d1234;
        case 0x3d1240u: goto label_3d1240;
        case 0x3d127cu: goto label_3d127c;
        case 0x3d1290u: goto label_3d1290;
        case 0x3d12acu: goto label_3d12ac;
        case 0x3d12b8u: goto label_3d12b8;
        case 0x3d12c8u: goto label_3d12c8;
        case 0x3d12d8u: goto label_3d12d8;
        case 0x3d12e8u: goto label_3d12e8;
        case 0x3d1344u: goto label_3d1344;
        case 0x3d1360u: goto label_3d1360;
        case 0x3d137cu: goto label_3d137c;
        case 0x3d1394u: goto label_3d1394;
        case 0x3d13a0u: goto label_3d13a0;
        case 0x3d13c0u: goto label_3d13c0;
        case 0x3d13ccu: goto label_3d13cc;
        case 0x3d13f0u: goto label_3d13f0;
        case 0x3d1410u: goto label_3d1410;
        default: break;
    }

    ctx->pc = 0x3d1020u;

    // 0x3d1020: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3d1020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3d1024: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x3d1024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
    // 0x3d1028: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3d1028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3d102c: 0x3443f000  ori         $v1, $v0, 0xF000
    ctx->pc = 0x3d102cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x3d1030: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3d1030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3d1034: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d1034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d1038: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3d1038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3d103c: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x3d103cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x3d1040: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3d1040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3d1044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d1044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d1048: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3d1048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3d104c: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x3d104cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x3d1050: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3d1050u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3d1054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d1054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1058: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3d1058u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3d105c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3d105cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3d1060: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3d1060u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3d1064: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3d1064u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3d1068: 0x8c8507e4  lw          $a1, 0x7E4($a0)
    ctx->pc = 0x3d1068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2020)));
    // 0x3d106c: 0x4483c000  mtc1        $v1, $f24
    ctx->pc = 0x3d106cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x3d1070: 0x8c8207e8  lw          $v0, 0x7E8($a0)
    ctx->pc = 0x3d1070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2024)));
    // 0x3d1074: 0x3c0341cc  lui         $v1, 0x41CC
    ctx->pc = 0x3d1074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16844 << 16));
    // 0x3d1078: 0x4483b000  mtc1        $v1, $f22
    ctx->pc = 0x3d1078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3d107c: 0xc4a20de4  lwc1        $f2, 0xDE4($a1)
    ctx->pc = 0x3d107cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d1080: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x3d1080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x3d1084: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x3d1084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x3d1088: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d1088u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3d108c: 0x46000943  div.s       $f5, $f1, $f0
    ctx->pc = 0x3d108cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[5] = ctx->f[1] / ctx->f[0];
    // 0x3d1090: 0x0  nop
    ctx->pc = 0x3d1090u;
    // NOP
    // 0x3d1094: 0x0  nop
    ctx->pc = 0x3d1094u;
    // NOP
    // 0x3d1098: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D1098u;
    {
        const bool branch_taken_0x3d1098 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3d1098) {
            ctx->pc = 0x3D10ACu;
            goto label_3d10ac;
        }
    }
    ctx->pc = 0x3D10A0u;
    // 0x3d10a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d10a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d10a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D10A4u;
    {
        const bool branch_taken_0x3d10a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D10A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D10A4u;
            // 0x3d10a8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d10a4) {
            ctx->pc = 0x3D10C8u;
            goto label_3d10c8;
        }
    }
    ctx->pc = 0x3D10ACu;
label_3d10ac:
    // 0x3d10ac: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3d10acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3d10b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d10b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d10b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d10b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d10b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d10b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d10bc: 0x0  nop
    ctx->pc = 0x3d10bcu;
    // NOP
    // 0x3d10c0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3d10c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3d10c4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3d10c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3d10c8:
    // 0x3d10c8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x3d10c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x3d10cc: 0x8ca30d6c  lw          $v1, 0xD6C($a1)
    ctx->pc = 0x3d10ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3436)));
    // 0x3d10d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d10d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d10d4: 0x920407e1  lbu         $a0, 0x7E1($s0)
    ctx->pc = 0x3d10d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2017)));
    // 0x3d10d8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3d10d8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x3d10dc: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3d10dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x3d10e0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x3d10e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3d10e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d10e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d10e8: 0x46000547  neg.s       $f21, $f0
    ctx->pc = 0x3d10e8u;
    ctx->f[21] = FPU_NEG_S(ctx->f[0]);
    // 0x3d10ec: 0xc441c958  lwc1        $f1, -0x36A8($v0)
    ctx->pc = 0x3d10ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d10f0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3d10f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d10f4: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3D10F4u;
    {
        const bool branch_taken_0x3d10f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D10F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D10F4u;
            // 0x3d10f8: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d10f4) {
            ctx->pc = 0x3D1150u;
            goto label_3d1150;
        }
    }
    ctx->pc = 0x3D10FCu;
    // 0x3d10fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3d10fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3d1100: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x3d1100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x3d1104: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x3d1104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x3d1108: 0xc60207ec  lwc1        $f2, 0x7EC($s0)
    ctx->pc = 0x3d1108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d110c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3d110cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d1110: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x3d1110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x3d1114: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3d1114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3d1118: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x3d1118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x3d111c: 0xc4840018  lwc1        $f4, 0x18($a0)
    ctx->pc = 0x3d111cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3d1120: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3d1120u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3d1124: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d1124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d1128: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x3d1128u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x3d112c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3d112cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d1130: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3D1130u;
    {
        const bool branch_taken_0x3d1130 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D1134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1130u;
            // 0x3d1134: 0xe60107ec  swc1        $f1, 0x7EC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2028), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1130) {
            ctx->pc = 0x3D1154u;
            goto label_3d1154;
        }
    }
    ctx->pc = 0x3D1138u;
    // 0x3d1138: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d1138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3d113c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d113cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d1140: 0x0  nop
    ctx->pc = 0x3d1140u;
    // NOP
    // 0x3d1144: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3d1144u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3d1148: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D1148u;
    {
        const bool branch_taken_0x3d1148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D114Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1148u;
            // 0x3d114c: 0xe60007ec  swc1        $f0, 0x7EC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2028), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1148) {
            ctx->pc = 0x3D1154u;
            goto label_3d1154;
        }
    }
    ctx->pc = 0x3D1150u;
label_3d1150:
    // 0x3d1150: 0xae0007ec  sw          $zero, 0x7EC($s0)
    ctx->pc = 0x3d1150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 0));
label_3d1154:
    // 0x3d1154: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3d1154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3d1158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d1158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d115c: 0x0  nop
    ctx->pc = 0x3d115cu;
    // NOP
    // 0x3d1160: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x3d1160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d1164: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
    ctx->pc = 0x3D1164u;
    {
        const bool branch_taken_0x3d1164 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d1164) {
            ctx->pc = 0x3D1168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1164u;
            // 0x3d1168: 0x8e0207e4  lw          $v0, 0x7E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2020)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D11FCu;
            goto label_3d11fc;
        }
    }
    ctx->pc = 0x3D116Cu;
    // 0x3d116c: 0x3c024023  lui         $v0, 0x4023
    ctx->pc = 0x3d116cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16419 << 16));
    // 0x3d1170: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x3d1170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x3d1174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d1174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d1178: 0x0  nop
    ctx->pc = 0x3d1178u;
    // NOP
    // 0x3d117c: 0x46050602  mul.s       $f24, $f0, $f5
    ctx->pc = 0x3d117cu;
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x3d1180: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x3d1180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3d1184: 0x0  nop
    ctx->pc = 0x3d1184u;
    // NOP
    // 0x3d1188: 0x4618b032  c.eq.s      $f22, $f24
    ctx->pc = 0x3d1188u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d118c: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x3D118Cu;
    {
        const bool branch_taken_0x3d118c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d118c) {
            ctx->pc = 0x3D1190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D118Cu;
            // 0x3d1190: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D11F8u;
            goto label_3d11f8;
        }
    }
    ctx->pc = 0x3D1194u;
    // 0x3d1194: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3d1194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x3d1198: 0x8e0207e8  lw          $v0, 0x7E8($s0)
    ctx->pc = 0x3d1198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2024)));
    // 0x3d119c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d119cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d11a0: 0x0  nop
    ctx->pc = 0x3d11a0u;
    // NOP
    // 0x3d11a4: 0x4600c583  div.s       $f22, $f24, $f0
    ctx->pc = 0x3d11a4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[24] * 0.0f); } else ctx->f[22] = ctx->f[24] / ctx->f[0];
    // 0x3d11a8: 0x0  nop
    ctx->pc = 0x3d11a8u;
    // NOP
    // 0x3d11ac: 0x0  nop
    ctx->pc = 0x3d11acu;
    // NOP
    // 0x3d11b0: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x3d11b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x3d11b4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D11B4u;
    {
        const bool branch_taken_0x3d11b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3d11b4) {
            ctx->pc = 0x3D11B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D11B4u;
            // 0x3d11b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D11C8u;
            goto label_3d11c8;
        }
    }
    ctx->pc = 0x3D11BCu;
    // 0x3d11bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d11bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d11c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D11C0u;
    {
        const bool branch_taken_0x3d11c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D11C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D11C0u;
            // 0x3d11c4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d11c0) {
            ctx->pc = 0x3D11E0u;
            goto label_3d11e0;
        }
    }
    ctx->pc = 0x3D11C8u;
label_3d11c8:
    // 0x3d11c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d11c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d11cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d11ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d11d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d11d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d11d4: 0x0  nop
    ctx->pc = 0x3d11d4u;
    // NOP
    // 0x3d11d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d11d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d11dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d11dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d11e0:
    // 0x3d11e0: 0x0  nop
    ctx->pc = 0x3d11e0u;
    // NOP
    // 0x3d11e4: 0x0  nop
    ctx->pc = 0x3d11e4u;
    // NOP
    // 0x3d11e8: 0x4600c003  div.s       $f0, $f24, $f0
    ctx->pc = 0x3d11e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[24] * 0.0f); } else ctx->f[0] = ctx->f[24] / ctx->f[0];
    // 0x3d11ec: 0x0  nop
    ctx->pc = 0x3d11ecu;
    // NOP
    // 0x3d11f0: 0x0  nop
    ctx->pc = 0x3d11f0u;
    // NOP
    // 0x3d11f4: 0x46000547  neg.s       $f21, $f0
    ctx->pc = 0x3d11f4u;
    ctx->f[21] = FPU_NEG_S(ctx->f[0]);
label_3d11f8:
    // 0x3d11f8: 0x8e0207e4  lw          $v0, 0x7E4($s0)
    ctx->pc = 0x3d11f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2020)));
label_3d11fc:
    // 0x3d11fc: 0xc44c02e0  lwc1        $f12, 0x2E0($v0)
    ctx->pc = 0x3d11fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3d1200: 0xc44d02e4  lwc1        $f13, 0x2E4($v0)
    ctx->pc = 0x3d1200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3d1204: 0xc44e02e8  lwc1        $f14, 0x2E8($v0)
    ctx->pc = 0x3d1204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3d1208: 0xc04f3fc  jal         func_13CFF0
    ctx->pc = 0x3D1208u;
    SET_GPR_U32(ctx, 31, 0x3D1210u);
    ctx->pc = 0x3D120Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1208u;
            // 0x3d120c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1210u; }
        if (ctx->pc != 0x3D1210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1210u; }
        if (ctx->pc != 0x3D1210u) { return; }
    }
    ctx->pc = 0x3D1210u;
label_3d1210:
    // 0x3d1210: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3d1210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3d1214: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x3D1214u;
    SET_GPR_U32(ctx, 31, 0x3D121Cu);
    ctx->pc = 0x3D1218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1214u;
            // 0x3d1218: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D121Cu; }
        if (ctx->pc != 0x3D121Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D121Cu; }
        if (ctx->pc != 0x3D121Cu) { return; }
    }
    ctx->pc = 0x3D121Cu;
label_3d121c:
    // 0x3d121c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3d121cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3d1220: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d1220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3d1224: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d1224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1228: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3d1228u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3d122c: 0xc04ce64  jal         func_133990
    ctx->pc = 0x3D122Cu;
    SET_GPR_U32(ctx, 31, 0x3D1234u);
    ctx->pc = 0x3D1230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D122Cu;
            // 0x3d1230: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1234u; }
        if (ctx->pc != 0x3D1234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1234u; }
        if (ctx->pc != 0x3D1234u) { return; }
    }
    ctx->pc = 0x3D1234u;
label_3d1234:
    // 0x3d1234: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3d1234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3d1238: 0xc04cce4  jal         func_133390
    ctx->pc = 0x3D1238u;
    SET_GPR_U32(ctx, 31, 0x3D1240u);
    ctx->pc = 0x3D123Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1238u;
            // 0x3d123c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1240u; }
        if (ctx->pc != 0x3D1240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1240u; }
        if (ctx->pc != 0x3D1240u) { return; }
    }
    ctx->pc = 0x3D1240u;
label_3d1240:
    // 0x3d1240: 0x8e0207e4  lw          $v0, 0x7E4($s0)
    ctx->pc = 0x3d1240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2020)));
    // 0x3d1244: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x3d1244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d1248: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x3d1248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d124c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3d124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3d1250: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x3d1250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d1254: 0xc44302c0  lwc1        $f3, 0x2C0($v0)
    ctx->pc = 0x3d1254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3d1258: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x3d1258u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x3d125c: 0xe7ac0080  swc1        $f12, 0x80($sp)
    ctx->pc = 0x3d125cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3d1260: 0xc44202c4  lwc1        $f2, 0x2C4($v0)
    ctx->pc = 0x3d1260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d1264: 0x46020b40  add.s       $f13, $f1, $f2
    ctx->pc = 0x3d1264u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3d1268: 0xe7ad0084  swc1        $f13, 0x84($sp)
    ctx->pc = 0x3d1268u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x3d126c: 0xc44102c8  lwc1        $f1, 0x2C8($v0)
    ctx->pc = 0x3d126cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d1270: 0x46010380  add.s       $f14, $f0, $f1
    ctx->pc = 0x3d1270u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3d1274: 0xc04f3fc  jal         func_13CFF0
    ctx->pc = 0x3D1274u;
    SET_GPR_U32(ctx, 31, 0x3D127Cu);
    ctx->pc = 0x3D1278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1274u;
            // 0x3d1278: 0xe7ae0088  swc1        $f14, 0x88($sp) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D127Cu; }
        if (ctx->pc != 0x3D127Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D127Cu; }
        if (ctx->pc != 0x3D127Cu) { return; }
    }
    ctx->pc = 0x3D127Cu;
label_3d127c:
    // 0x3d127c: 0x8e0207e4  lw          $v0, 0x7E4($s0)
    ctx->pc = 0x3d127cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2020)));
    // 0x3d1280: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3d1280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3d1284: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d1284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1288: 0xc04cd80  jal         func_133600
    ctx->pc = 0x3D1288u;
    SET_GPR_U32(ctx, 31, 0x3D1290u);
    ctx->pc = 0x3D128Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1288u;
            // 0x3d128c: 0x244608e0  addiu       $a2, $v0, 0x8E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1290u; }
        if (ctx->pc != 0x3D1290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1290u; }
        if (ctx->pc != 0x3D1290u) { return; }
    }
    ctx->pc = 0x3D1290u;
label_3d1290:
    // 0x3d1290: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d1290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3d1294: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3d1294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3d1298: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3d1298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3d129c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d129cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d12a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d12a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3d12a4: 0xc04ce64  jal         func_133990
    ctx->pc = 0x3D12A4u;
    SET_GPR_U32(ctx, 31, 0x3D12ACu);
    ctx->pc = 0x3D12A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D12A4u;
            // 0x3d12a8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D12ACu; }
        if (ctx->pc != 0x3D12ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D12ACu; }
        if (ctx->pc != 0x3D12ACu) { return; }
    }
    ctx->pc = 0x3D12ACu;
label_3d12ac:
    // 0x3d12ac: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x3d12acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x3d12b0: 0xc04cce0  jal         func_133380
    ctx->pc = 0x3D12B0u;
    SET_GPR_U32(ctx, 31, 0x3D12B8u);
    ctx->pc = 0x3D12B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D12B0u;
            // 0x3d12b4: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133380u;
    if (runtime->hasFunction(0x133380u)) {
        auto targetFn = runtime->lookupFunction(0x133380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D12B8u; }
        if (ctx->pc != 0x3D12B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133380_0x133380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D12B8u; }
        if (ctx->pc != 0x3D12B8u) { return; }
    }
    ctx->pc = 0x3D12B8u;
label_3d12b8:
    // 0x3d12b8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3d12b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3d12bc: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x3d12bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x3d12c0: 0xc04cb8c  jal         func_132E30
    ctx->pc = 0x3D12C0u;
    SET_GPR_U32(ctx, 31, 0x3D12C8u);
    ctx->pc = 0x3D12C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D12C0u;
            // 0x3d12c4: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E30u;
    if (runtime->hasFunction(0x132E30u)) {
        auto targetFn = runtime->lookupFunction(0x132E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D12C8u; }
        if (ctx->pc != 0x3D12C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E30_0x132e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D12C8u; }
        if (ctx->pc != 0x3D12C8u) { return; }
    }
    ctx->pc = 0x3D12C8u;
label_3d12c8:
    // 0x3d12c8: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x3d12c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x3d12cc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3d12ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3d12d0: 0xc04cafc  jal         func_132BF0
    ctx->pc = 0x3D12D0u;
    SET_GPR_U32(ctx, 31, 0x3D12D8u);
    ctx->pc = 0x3D12D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D12D0u;
            // 0x3d12d4: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D12D8u; }
        if (ctx->pc != 0x3D12D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D12D8u; }
        if (ctx->pc != 0x3D12D8u) { return; }
    }
    ctx->pc = 0x3D12D8u;
label_3d12d8:
    // 0x3d12d8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3d12d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3d12dc: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x3d12dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3d12e0: 0xc04cb8c  jal         func_132E30
    ctx->pc = 0x3D12E0u;
    SET_GPR_U32(ctx, 31, 0x3D12E8u);
    ctx->pc = 0x3D12E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D12E0u;
            // 0x3d12e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E30u;
    if (runtime->hasFunction(0x132E30u)) {
        auto targetFn = runtime->lookupFunction(0x132E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D12E8u; }
        if (ctx->pc != 0x3D12E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E30_0x132e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D12E8u; }
        if (ctx->pc != 0x3D12E8u) { return; }
    }
    ctx->pc = 0x3D12E8u;
label_3d12e8:
    // 0x3d12e8: 0x8e0307d8  lw          $v1, 0x7D8($s0)
    ctx->pc = 0x3d12e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2008)));
    // 0x3d12ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d12ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d12f0: 0xae0307d8  sw          $v1, 0x7D8($s0)
    ctx->pc = 0x3d12f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2008), GPR_U32(ctx, 3));
    // 0x3d12f4: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x3d12f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d12f8: 0x5460002f  bnel        $v1, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x3D12F8u;
    {
        const bool branch_taken_0x3d12f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d12f8) {
            ctx->pc = 0x3D12FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D12F8u;
            // 0x3d12fc: 0x26040054  addiu       $a0, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D13B8u;
            goto label_3d13b8;
        }
    }
    ctx->pc = 0x3D1300u;
    // 0x3d1300: 0xae0007d8  sw          $zero, 0x7D8($s0)
    ctx->pc = 0x3d1300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2008), GPR_U32(ctx, 0));
    // 0x3d1304: 0x8e0307d4  lw          $v1, 0x7D4($s0)
    ctx->pc = 0x3d1304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2004)));
    // 0x3d1308: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d1308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d130c: 0xae0307d4  sw          $v1, 0x7D4($s0)
    ctx->pc = 0x3d130cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2004), GPR_U32(ctx, 3));
    // 0x3d1310: 0x8e0407e8  lw          $a0, 0x7E8($s0)
    ctx->pc = 0x3d1310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2024)));
    // 0x3d1314: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x3d1314u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3d1318: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D1318u;
    {
        const bool branch_taken_0x3d1318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d1318) {
            ctx->pc = 0x3D131Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1318u;
            // 0x3d131c: 0x8e0307d4  lw          $v1, 0x7D4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2004)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D1328u;
            goto label_3d1328;
        }
    }
    ctx->pc = 0x3D1320u;
    // 0x3d1320: 0xae0407d4  sw          $a0, 0x7D4($s0)
    ctx->pc = 0x3d1320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2004), GPR_U32(ctx, 4));
    // 0x3d1324: 0x8e0307d4  lw          $v1, 0x7D4($s0)
    ctx->pc = 0x3d1324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2004)));
label_3d1328:
    // 0x3d1328: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x3d1328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d132c: 0x6600027  bltz        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x3D132Cu;
    {
        const bool branch_taken_0x3d132c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x3D1330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D132Cu;
            // 0x3d1330: 0x131840  sll         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d132c) {
            ctx->pc = 0x3D13CCu;
            goto label_3d13cc;
        }
    }
    ctx->pc = 0x3D1334u;
    // 0x3d1334: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3d1334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3d1338: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d1338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d133c: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x3d133cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3d1340: 0x2128821  addu        $s1, $s0, $s2
    ctx->pc = 0x3d1340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_3d1344:
    // 0x3d1344: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D1344u;
    {
        const bool branch_taken_0x3d1344 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1344) {
            ctx->pc = 0x3D1388u;
            goto label_3d1388;
        }
    }
    ctx->pc = 0x3D134Cu;
    // 0x3d134c: 0x2642ffd0  addiu       $v0, $s2, -0x30
    ctx->pc = 0x3d134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967248));
    // 0x3d1350: 0x26240054  addiu       $a0, $s1, 0x54
    ctx->pc = 0x3d1350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    // 0x3d1354: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3d1354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3d1358: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x3D1358u;
    SET_GPR_U32(ctx, 31, 0x3D1360u);
    ctx->pc = 0x3D135Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1358u;
            // 0x3d135c: 0x24450054  addiu       $a1, $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1360u; }
        if (ctx->pc != 0x3D1360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1360u; }
        if (ctx->pc != 0x3D1360u) { return; }
    }
    ctx->pc = 0x3D1360u;
label_3d1360:
    // 0x3d1360: 0x26430018  addiu       $v1, $s2, 0x18
    ctx->pc = 0x3d1360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x3d1364: 0x2642ffe8  addiu       $v0, $s2, -0x18
    ctx->pc = 0x3d1364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967272));
    // 0x3d1368: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3d1368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3d136c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3d136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3d1370: 0x24640054  addiu       $a0, $v1, 0x54
    ctx->pc = 0x3d1370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x3d1374: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x3D1374u;
    SET_GPR_U32(ctx, 31, 0x3D137Cu);
    ctx->pc = 0x3D1378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1374u;
            // 0x3d1378: 0x24450054  addiu       $a1, $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D137Cu; }
        if (ctx->pc != 0x3D137Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D137Cu; }
        if (ctx->pc != 0x3D137Cu) { return; }
    }
    ctx->pc = 0x3D137Cu;
label_3d137c:
    // 0x3d137c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D137Cu;
    {
        const bool branch_taken_0x3d137c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d137c) {
            ctx->pc = 0x3D13A0u;
            goto label_3d13a0;
        }
    }
    ctx->pc = 0x3D1384u;
    // 0x3d1384: 0x0  nop
    ctx->pc = 0x3d1384u;
    // NOP
label_3d1388:
    // 0x3d1388: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x3d1388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x3d138c: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x3D138Cu;
    SET_GPR_U32(ctx, 31, 0x3D1394u);
    ctx->pc = 0x3D1390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D138Cu;
            // 0x3d1390: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1394u; }
        if (ctx->pc != 0x3D1394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1394u; }
        if (ctx->pc != 0x3D1394u) { return; }
    }
    ctx->pc = 0x3D1394u;
label_3d1394:
    // 0x3d1394: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3d1394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x3d1398: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x3D1398u;
    SET_GPR_U32(ctx, 31, 0x3D13A0u);
    ctx->pc = 0x3D139Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1398u;
            // 0x3d139c: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D13A0u; }
        if (ctx->pc != 0x3D13A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D13A0u; }
        if (ctx->pc != 0x3D13A0u) { return; }
    }
    ctx->pc = 0x3D13A0u;
label_3d13a0:
    // 0x3d13a0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3d13a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x3d13a4: 0x2652ffd0  addiu       $s2, $s2, -0x30
    ctx->pc = 0x3d13a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967248));
    // 0x3d13a8: 0x661ffe6  bgez        $s3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3D13A8u;
    {
        const bool branch_taken_0x3d13a8 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x3D13ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D13A8u;
            // 0x3d13ac: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d13a8) {
            ctx->pc = 0x3D1344u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d1344;
        }
    }
    ctx->pc = 0x3D13B0u;
    // 0x3d13b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D13B0u;
    {
        const bool branch_taken_0x3d13b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D13B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D13B0u;
            // 0x3d13b4: 0x8e0407d4  lw          $a0, 0x7D4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d13b0) {
            ctx->pc = 0x3D13D0u;
            goto label_3d13d0;
        }
    }
    ctx->pc = 0x3D13B8u;
label_3d13b8:
    // 0x3d13b8: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x3D13B8u;
    SET_GPR_U32(ctx, 31, 0x3D13C0u);
    ctx->pc = 0x3D13BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D13B8u;
            // 0x3d13bc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D13C0u; }
        if (ctx->pc != 0x3D13C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D13C0u; }
        if (ctx->pc != 0x3D13C0u) { return; }
    }
    ctx->pc = 0x3D13C0u;
label_3d13c0:
    // 0x3d13c0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3d13c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x3d13c4: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x3D13C4u;
    SET_GPR_U32(ctx, 31, 0x3D13CCu);
    ctx->pc = 0x3D13C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D13C4u;
            // 0x3d13c8: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D13CCu; }
        if (ctx->pc != 0x3D13CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D13CCu; }
        if (ctx->pc != 0x3D13CCu) { return; }
    }
    ctx->pc = 0x3D13CCu;
label_3d13cc:
    // 0x3d13cc: 0x8e0407d4  lw          $a0, 0x7D4($s0)
    ctx->pc = 0x3d13ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2004)));
label_3d13d0:
    // 0x3d13d0: 0x2c810002  sltiu       $at, $a0, 0x2
    ctx->pc = 0x3d13d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d13d4: 0x14200042  bnez        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x3D13D4u;
    {
        const bool branch_taken_0x3d13d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d13d4) {
            ctx->pc = 0x3D14E0u;
            goto label_3d14e0;
        }
    }
    ctx->pc = 0x3D13DCu;
    // 0x3d13dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3d13dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d13e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d13e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d13e4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3d13e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3d13e8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3d13e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d13ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3d13ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d13f0:
    // 0x3d13f0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3d13f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3d13f4: 0x12230006  beq         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D13F4u;
    {
        const bool branch_taken_0x3d13f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d13f4) {
            ctx->pc = 0x3D1410u;
            goto label_3d1410;
        }
    }
    ctx->pc = 0x3D13FCu;
    // 0x3d13fc: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x3d13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3d1400: 0x26650054  addiu       $a1, $s3, 0x54
    ctx->pc = 0x3d1400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
    // 0x3d1404: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3d1404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3d1408: 0xc04cb34  jal         func_132CD0
    ctx->pc = 0x3D1408u;
    SET_GPR_U32(ctx, 31, 0x3D1410u);
    ctx->pc = 0x3D140Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1408u;
            // 0x3d140c: 0x24440054  addiu       $a0, $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132CD0u;
    if (runtime->hasFunction(0x132CD0u)) {
        auto targetFn = runtime->lookupFunction(0x132CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1410u; }
        if (ctx->pc != 0x3D1410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132CD0_0x132cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1410u; }
        if (ctx->pc != 0x3D1410u) { return; }
    }
    ctx->pc = 0x3D1410u;
label_3d1410:
    // 0x3d1410: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3d1410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3d1414: 0xc60207ec  lwc1        $f2, 0x7EC($s0)
    ctx->pc = 0x3d1414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d1418: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d1418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d141c: 0x0  nop
    ctx->pc = 0x3d141cu;
    // NOP
    // 0x3d1420: 0x46170836  c.le.s      $f1, $f23
    ctx->pc = 0x3d1420u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d1424: 0x4602a080  add.s       $f2, $f20, $f2
    ctx->pc = 0x3d1424u;
    ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x3d1428: 0xe662007c  swc1        $f2, 0x7C($s3)
    ctx->pc = 0x3d1428u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 124), bits); }
    // 0x3d142c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3D142Cu;
    {
        const bool branch_taken_0x3d142c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D1430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D142Cu;
            // 0x3d1430: 0xe6620064  swc1        $f2, 0x64($s3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d142c) {
            ctx->pc = 0x3D1444u;
            goto label_3d1444;
        }
    }
    ctx->pc = 0x3D1434u;
    // 0x3d1434: 0x4600b864  .word       0x4600B864                   # cvt.w.s     $f1, $f23 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d1434u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[23]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d1438: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3d1438u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3d143c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D143Cu;
    {
        const bool branch_taken_0x3d143c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D143Cu;
            // 0x3d1440: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d143c) {
            ctx->pc = 0x3D1460u;
            goto label_3d1460;
        }
    }
    ctx->pc = 0x3D1444u;
label_3d1444:
    // 0x3d1444: 0x4601b841  sub.s       $f1, $f23, $f1
    ctx->pc = 0x3d1444u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
    // 0x3d1448: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d1448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d144c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d144cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d1450: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3d1450u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3d1454: 0x0  nop
    ctx->pc = 0x3d1454u;
    // NOP
    // 0x3d1458: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3d1458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3d145c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3d145cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3d1460:
    // 0x3d1460: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3d1460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3d1464: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x3d1464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3d1468: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3d1468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3d146c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x3d146cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x3d1470: 0xae640078  sw          $a0, 0x78($s3)
    ctx->pc = 0x3d1470u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 4));
    // 0x3d1474: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d1474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d1478: 0xae640060  sw          $a0, 0x60($s3)
    ctx->pc = 0x3d1478u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 4));
    // 0x3d147c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x3d147cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x3d1480: 0x0  nop
    ctx->pc = 0x3d1480u;
    // NOP
    // 0x3d1484: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x3d1484u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3d1488: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D1488u;
    {
        const bool branch_taken_0x3d1488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D148Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1488u;
            // 0x3d148c: 0x4601a500  add.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1488) {
            ctx->pc = 0x3D14B0u;
            goto label_3d14b0;
        }
    }
    ctx->pc = 0x3D1490u;
    // 0x3d1490: 0x4615bdc0  add.s       $f23, $f23, $f21
    ctx->pc = 0x3d1490u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
    // 0x3d1494: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3d1494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d1498: 0x0  nop
    ctx->pc = 0x3d1498u;
    // NOP
    // 0x3d149c: 0x4601b836  c.le.s      $f23, $f1
    ctx->pc = 0x3d149cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d14a0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x3D14A0u;
    {
        const bool branch_taken_0x3d14a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d14a0) {
            ctx->pc = 0x3D14C8u;
            goto label_3d14c8;
        }
    }
    ctx->pc = 0x3D14A8u;
    // 0x3d14a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D14A8u;
    {
        const bool branch_taken_0x3d14a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D14ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D14A8u;
            // 0x3d14ac: 0x46000dc6  mov.s       $f23, $f1 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d14a8) {
            ctx->pc = 0x3D14C8u;
            goto label_3d14c8;
        }
    }
    ctx->pc = 0x3D14B0u;
label_3d14b0:
    // 0x3d14b0: 0x4616bdc0  add.s       $f23, $f23, $f22
    ctx->pc = 0x3d14b0u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
    // 0x3d14b4: 0x4618b834  c.lt.s      $f23, $f24
    ctx->pc = 0x3d14b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d14b8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3D14B8u;
    {
        const bool branch_taken_0x3d14b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d14b8) {
            ctx->pc = 0x3D14C8u;
            goto label_3d14c8;
        }
    }
    ctx->pc = 0x3D14C0u;
    // 0x3d14c0: 0x4600c5c6  mov.s       $f23, $f24
    ctx->pc = 0x3d14c0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[24]);
    // 0x3d14c4: 0x0  nop
    ctx->pc = 0x3d14c4u;
    // NOP
label_3d14c8:
    // 0x3d14c8: 0x8e0407d4  lw          $a0, 0x7D4($s0)
    ctx->pc = 0x3d14c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2004)));
    // 0x3d14cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d14ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3d14d0: 0x26730030  addiu       $s3, $s3, 0x30
    ctx->pc = 0x3d14d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x3d14d4: 0x224182b  sltu        $v1, $s1, $a0
    ctx->pc = 0x3d14d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3d14d8: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x3D14D8u;
    {
        const bool branch_taken_0x3d14d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D14DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D14D8u;
            // 0x3d14dc: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d14d8) {
            ctx->pc = 0x3D13F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d13f0;
        }
    }
    ctx->pc = 0x3D14E0u;
label_3d14e0:
    // 0x3d14e0: 0x8e0307e8  lw          $v1, 0x7E8($s0)
    ctx->pc = 0x3d14e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2024)));
    // 0x3d14e4: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x3d14e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3d14e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d14e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d14ec: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x3d14ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3d14f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d14f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d14f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d14f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d14f8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3d14f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3d14fc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3d14fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3d1500: 0xac640078  sw          $a0, 0x78($v1)
    ctx->pc = 0x3d1500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 4));
    // 0x3d1504: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x3d1504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x3d1508: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3d1508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d150c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3d150cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3d1510: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3d1510u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d1514: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3d1514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3d1518: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3d1518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d151c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3d151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3d1520: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3d1520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d1524: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3d1524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3d1528: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3d1528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d152c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3d152cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3d1530: 0x3e00008  jr          $ra
    ctx->pc = 0x3D1530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1530u;
            // 0x3d1534: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D1538u;
    // 0x3d1538: 0x0  nop
    ctx->pc = 0x3d1538u;
    // NOP
    // 0x3d153c: 0x0  nop
    ctx->pc = 0x3d153cu;
    // NOP
}
