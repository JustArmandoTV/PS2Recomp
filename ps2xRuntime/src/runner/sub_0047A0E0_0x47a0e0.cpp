#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047A0E0
// Address: 0x47a0e0 - 0x47a2e0
void sub_0047A0E0_0x47a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047A0E0_0x47a0e0");
#endif

    switch (ctx->pc) {
        case 0x47a0e0u: goto label_47a0e0;
        case 0x47a0e4u: goto label_47a0e4;
        case 0x47a0e8u: goto label_47a0e8;
        case 0x47a0ecu: goto label_47a0ec;
        case 0x47a0f0u: goto label_47a0f0;
        case 0x47a0f4u: goto label_47a0f4;
        case 0x47a0f8u: goto label_47a0f8;
        case 0x47a0fcu: goto label_47a0fc;
        case 0x47a100u: goto label_47a100;
        case 0x47a104u: goto label_47a104;
        case 0x47a108u: goto label_47a108;
        case 0x47a10cu: goto label_47a10c;
        case 0x47a110u: goto label_47a110;
        case 0x47a114u: goto label_47a114;
        case 0x47a118u: goto label_47a118;
        case 0x47a11cu: goto label_47a11c;
        case 0x47a120u: goto label_47a120;
        case 0x47a124u: goto label_47a124;
        case 0x47a128u: goto label_47a128;
        case 0x47a12cu: goto label_47a12c;
        case 0x47a130u: goto label_47a130;
        case 0x47a134u: goto label_47a134;
        case 0x47a138u: goto label_47a138;
        case 0x47a13cu: goto label_47a13c;
        case 0x47a140u: goto label_47a140;
        case 0x47a144u: goto label_47a144;
        case 0x47a148u: goto label_47a148;
        case 0x47a14cu: goto label_47a14c;
        case 0x47a150u: goto label_47a150;
        case 0x47a154u: goto label_47a154;
        case 0x47a158u: goto label_47a158;
        case 0x47a15cu: goto label_47a15c;
        case 0x47a160u: goto label_47a160;
        case 0x47a164u: goto label_47a164;
        case 0x47a168u: goto label_47a168;
        case 0x47a16cu: goto label_47a16c;
        case 0x47a170u: goto label_47a170;
        case 0x47a174u: goto label_47a174;
        case 0x47a178u: goto label_47a178;
        case 0x47a17cu: goto label_47a17c;
        case 0x47a180u: goto label_47a180;
        case 0x47a184u: goto label_47a184;
        case 0x47a188u: goto label_47a188;
        case 0x47a18cu: goto label_47a18c;
        case 0x47a190u: goto label_47a190;
        case 0x47a194u: goto label_47a194;
        case 0x47a198u: goto label_47a198;
        case 0x47a19cu: goto label_47a19c;
        case 0x47a1a0u: goto label_47a1a0;
        case 0x47a1a4u: goto label_47a1a4;
        case 0x47a1a8u: goto label_47a1a8;
        case 0x47a1acu: goto label_47a1ac;
        case 0x47a1b0u: goto label_47a1b0;
        case 0x47a1b4u: goto label_47a1b4;
        case 0x47a1b8u: goto label_47a1b8;
        case 0x47a1bcu: goto label_47a1bc;
        case 0x47a1c0u: goto label_47a1c0;
        case 0x47a1c4u: goto label_47a1c4;
        case 0x47a1c8u: goto label_47a1c8;
        case 0x47a1ccu: goto label_47a1cc;
        case 0x47a1d0u: goto label_47a1d0;
        case 0x47a1d4u: goto label_47a1d4;
        case 0x47a1d8u: goto label_47a1d8;
        case 0x47a1dcu: goto label_47a1dc;
        case 0x47a1e0u: goto label_47a1e0;
        case 0x47a1e4u: goto label_47a1e4;
        case 0x47a1e8u: goto label_47a1e8;
        case 0x47a1ecu: goto label_47a1ec;
        case 0x47a1f0u: goto label_47a1f0;
        case 0x47a1f4u: goto label_47a1f4;
        case 0x47a1f8u: goto label_47a1f8;
        case 0x47a1fcu: goto label_47a1fc;
        case 0x47a200u: goto label_47a200;
        case 0x47a204u: goto label_47a204;
        case 0x47a208u: goto label_47a208;
        case 0x47a20cu: goto label_47a20c;
        case 0x47a210u: goto label_47a210;
        case 0x47a214u: goto label_47a214;
        case 0x47a218u: goto label_47a218;
        case 0x47a21cu: goto label_47a21c;
        case 0x47a220u: goto label_47a220;
        case 0x47a224u: goto label_47a224;
        case 0x47a228u: goto label_47a228;
        case 0x47a22cu: goto label_47a22c;
        case 0x47a230u: goto label_47a230;
        case 0x47a234u: goto label_47a234;
        case 0x47a238u: goto label_47a238;
        case 0x47a23cu: goto label_47a23c;
        case 0x47a240u: goto label_47a240;
        case 0x47a244u: goto label_47a244;
        case 0x47a248u: goto label_47a248;
        case 0x47a24cu: goto label_47a24c;
        case 0x47a250u: goto label_47a250;
        case 0x47a254u: goto label_47a254;
        case 0x47a258u: goto label_47a258;
        case 0x47a25cu: goto label_47a25c;
        case 0x47a260u: goto label_47a260;
        case 0x47a264u: goto label_47a264;
        case 0x47a268u: goto label_47a268;
        case 0x47a26cu: goto label_47a26c;
        case 0x47a270u: goto label_47a270;
        case 0x47a274u: goto label_47a274;
        case 0x47a278u: goto label_47a278;
        case 0x47a27cu: goto label_47a27c;
        case 0x47a280u: goto label_47a280;
        case 0x47a284u: goto label_47a284;
        case 0x47a288u: goto label_47a288;
        case 0x47a28cu: goto label_47a28c;
        case 0x47a290u: goto label_47a290;
        case 0x47a294u: goto label_47a294;
        case 0x47a298u: goto label_47a298;
        case 0x47a29cu: goto label_47a29c;
        case 0x47a2a0u: goto label_47a2a0;
        case 0x47a2a4u: goto label_47a2a4;
        case 0x47a2a8u: goto label_47a2a8;
        case 0x47a2acu: goto label_47a2ac;
        case 0x47a2b0u: goto label_47a2b0;
        case 0x47a2b4u: goto label_47a2b4;
        case 0x47a2b8u: goto label_47a2b8;
        case 0x47a2bcu: goto label_47a2bc;
        case 0x47a2c0u: goto label_47a2c0;
        case 0x47a2c4u: goto label_47a2c4;
        case 0x47a2c8u: goto label_47a2c8;
        case 0x47a2ccu: goto label_47a2cc;
        case 0x47a2d0u: goto label_47a2d0;
        case 0x47a2d4u: goto label_47a2d4;
        case 0x47a2d8u: goto label_47a2d8;
        case 0x47a2dcu: goto label_47a2dc;
        default: break;
    }

    ctx->pc = 0x47a0e0u;

label_47a0e0:
    // 0x47a0e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x47a0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_47a0e4:
    // 0x47a0e4: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x47a0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_47a0e8:
    // 0x47a0e8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x47a0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_47a0ec:
    // 0x47a0ec: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x47a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_47a0f0:
    // 0x47a0f0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x47a0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_47a0f4:
    // 0x47a0f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47a0f8:
    // 0x47a0f8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x47a0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_47a0fc:
    // 0x47a0fc: 0x24a57620  addiu       $a1, $a1, 0x7620
    ctx->pc = 0x47a0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30240));
label_47a100:
    // 0x47a100: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x47a100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_47a104:
    // 0x47a104: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x47a104u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47a108:
    // 0x47a108: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x47a108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_47a10c:
    // 0x47a10c: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x47a10cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
label_47a110:
    // 0x47a110: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x47a110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_47a114:
    // 0x47a114: 0x26949fc0  addiu       $s4, $s4, -0x6040
    ctx->pc = 0x47a114u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294942656));
label_47a118:
    // 0x47a118: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x47a118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_47a11c:
    // 0x47a11c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47a11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_47a120:
    // 0x47a120: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x47a120u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_47a124:
    // 0x47a124: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x47a124u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_47a128:
    // 0x47a128: 0x8c7389e0  lw          $s3, -0x7620($v1)
    ctx->pc = 0x47a128u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_47a12c:
    // 0x47a12c: 0xc4850078  lwc1        $f5, 0x78($a0)
    ctx->pc = 0x47a12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_47a130:
    // 0x47a130: 0x8c880058  lw          $t0, 0x58($a0)
    ctx->pc = 0x47a130u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_47a134:
    // 0x47a134: 0x8c430eac  lw          $v1, 0xEAC($v0)
    ctx->pc = 0x47a134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_47a138:
    // 0x47a138: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x47a138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_47a13c:
    // 0x47a13c: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x47a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_47a140:
    // 0x47a140: 0x90760116  lbu         $s6, 0x116($v1)
    ctx->pc = 0x47a140u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 278)));
label_47a144:
    // 0x47a144: 0x483021  addu        $a2, $v0, $t0
    ctx->pc = 0x47a144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_47a148:
    // 0x47a148: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x47a148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_47a14c:
    // 0x47a14c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47a150:
    // 0x47a150: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x47a150u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_47a154:
    // 0x47a154: 0x8c467610  lw          $a2, 0x7610($v0)
    ctx->pc = 0x47a154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30224)));
label_47a158:
    // 0x47a158: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x47a158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_47a15c:
    // 0x47a15c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a160:
    // 0x47a160: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x47a160u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_47a164:
    // 0x47a164: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x47a164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_47a168:
    // 0x47a168: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x47a168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_47a16c:
    // 0x47a16c: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x47a16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_47a170:
    // 0x47a170: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x47a170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_47a174:
    // 0x47a174: 0xc4c30018  lwc1        $f3, 0x18($a2)
    ctx->pc = 0x47a174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_47a178:
    // 0x47a178: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x47a178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47a17c:
    // 0x47a17c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x47a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_47a180:
    // 0x47a180: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x47a180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_47a184:
    // 0x47a184: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x47a184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47a188:
    // 0x47a188: 0x873023  subu        $a2, $a0, $a3
    ctx->pc = 0x47a188u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_47a18c:
    // 0x47a18c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x47a18cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a190:
    // 0x47a190: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x47a190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47a194:
    // 0x47a194: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x47a194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_47a198:
    // 0x47a198: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x47a198u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a19c:
    // 0x47a19c: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x47a19cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_47a1a0:
    // 0x47a1a0: 0x46040083  div.s       $f2, $f0, $f4
    ctx->pc = 0x47a1a0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[4];
label_47a1a4:
    // 0x47a1a4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x47a1a4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a1a8:
    // 0x47a1a8: 0x0  nop
    ctx->pc = 0x47a1a8u;
    // NOP
label_47a1ac:
    // 0x47a1ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x47a1acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_47a1b0:
    // 0x47a1b0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x47a1b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_47a1b4:
    // 0x47a1b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47a1b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47a1b8:
    // 0x47a1b8: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x47a1b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_47a1bc:
    // 0x47a1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47a1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a1c0:
    // 0x47a1c0: 0x0  nop
    ctx->pc = 0x47a1c0u;
    // NOP
label_47a1c4:
    // 0x47a1c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x47a1c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_47a1c8:
    // 0x47a1c8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x47a1c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_47a1cc:
    // 0x47a1cc: 0x46040083  div.s       $f2, $f0, $f4
    ctx->pc = 0x47a1ccu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[4];
label_47a1d0:
    // 0x47a1d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x47a1d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a1d4:
    // 0x47a1d4: 0x0  nop
    ctx->pc = 0x47a1d4u;
    // NOP
label_47a1d8:
    // 0x47a1d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x47a1d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_47a1dc:
    // 0x47a1dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x47a1dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_47a1e0:
    // 0x47a1e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47a1e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47a1e4:
    // 0x47a1e4: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x47a1e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_47a1e8:
    // 0x47a1e8: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x47a1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47a1ec:
    // 0x47a1ec: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x47a1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a1f0:
    // 0x47a1f0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x47a1f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_47a1f4:
    // 0x47a1f4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x47a1f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_47a1f8:
    // 0x47a1f8: 0x46020d42  mul.s       $f21, $f1, $f2
    ctx->pc = 0x47a1f8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_47a1fc:
    // 0x47a1fc: 0x320f809  jalr        $t9
label_47a200:
    if (ctx->pc == 0x47A200u) {
        ctx->pc = 0x47A200u;
            // 0x47a200: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x47A204u;
        goto label_47a204;
    }
    ctx->pc = 0x47A1FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47A204u);
        ctx->pc = 0x47A200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47A1FCu;
            // 0x47a200: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47A204u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47A204u; }
            if (ctx->pc != 0x47A204u) { return; }
        }
        }
    }
    ctx->pc = 0x47A204u;
label_47a204:
    // 0x47a204: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x47a204u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a208:
    // 0x47a208: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x47a208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_47a20c:
    // 0x47a20c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x47a20cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_47a210:
    // 0x47a210: 0x84482100  lh          $t0, 0x2100($v0)
    ctx->pc = 0x47a210u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8448)));
label_47a214:
    // 0x47a214: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x47a214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_47a218:
    // 0x47a218: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x47a218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_47a21c:
    // 0x47a21c: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x47a21cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_47a220:
    // 0x47a220: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x47a220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_47a224:
    // 0x47a224: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x47a224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_47a228:
    // 0x47a228: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x47a228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47a22c:
    // 0x47a22c: 0x84432102  lh          $v1, 0x2102($v0)
    ctx->pc = 0x47a22cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
label_47a230:
    // 0x47a230: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47a230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47a234:
    // 0x47a234: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x47a234u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a238:
    // 0x47a238: 0x0  nop
    ctx->pc = 0x47a238u;
    // NOP
label_47a23c:
    // 0x47a23c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x47a23cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_47a240:
    // 0x47a240: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x47a240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_47a244:
    // 0x47a244: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x47a244u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a248:
    // 0x47a248: 0x0  nop
    ctx->pc = 0x47a248u;
    // NOP
label_47a24c:
    // 0x47a24c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x47a24cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_47a250:
    // 0x47a250: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x47a250u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a254:
    // 0x47a254: 0x0  nop
    ctx->pc = 0x47a254u;
    // NOP
label_47a258:
    // 0x47a258: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x47a258u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_47a25c:
    // 0x47a25c: 0x46150b01  sub.s       $f12, $f1, $f21
    ctx->pc = 0x47a25cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_47a260:
    // 0x47a260: 0x46150b80  add.s       $f14, $f1, $f21
    ctx->pc = 0x47a260u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_47a264:
    // 0x47a264: 0x46140341  sub.s       $f13, $f0, $f20
    ctx->pc = 0x47a264u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_47a268:
    // 0x47a268: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x47a268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_47a26c:
    // 0x47a26c: 0xc0bc284  jal         func_2F0A10
label_47a270:
    if (ctx->pc == 0x47A270u) {
        ctx->pc = 0x47A270u;
            // 0x47a270: 0x461403c0  add.s       $f15, $f0, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x47A274u;
        goto label_47a274;
    }
    ctx->pc = 0x47A26Cu;
    SET_GPR_U32(ctx, 31, 0x47A274u);
    ctx->pc = 0x47A270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47A26Cu;
            // 0x47a270: 0x461403c0  add.s       $f15, $f0, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A274u; }
        if (ctx->pc != 0x47A274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A274u; }
        if (ctx->pc != 0x47A274u) { return; }
    }
    ctx->pc = 0x47A274u;
label_47a274:
    // 0x47a274: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x47a274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_47a278:
    // 0x47a278: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x47a278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_47a27c:
    // 0x47a27c: 0x320f809  jalr        $t9
label_47a280:
    if (ctx->pc == 0x47A280u) {
        ctx->pc = 0x47A280u;
            // 0x47a280: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47A284u;
        goto label_47a284;
    }
    ctx->pc = 0x47A27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47A284u);
        ctx->pc = 0x47A280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47A27Cu;
            // 0x47a280: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47A284u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47A284u; }
            if (ctx->pc != 0x47A284u) { return; }
        }
        }
    }
    ctx->pc = 0x47A284u;
label_47a284:
    // 0x47a284: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x47a284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_47a288:
    // 0x47a288: 0x56230008  bnel        $s1, $v1, . + 4 + (0x8 << 2)
label_47a28c:
    if (ctx->pc == 0x47A28Cu) {
        ctx->pc = 0x47A28Cu;
            // 0x47a28c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x47A290u;
        goto label_47a290;
    }
    ctx->pc = 0x47A288u;
    {
        const bool branch_taken_0x47a288 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x47a288) {
            ctx->pc = 0x47A28Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47A288u;
            // 0x47a28c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47A2ACu;
            goto label_47a2ac;
        }
    }
    ctx->pc = 0x47A290u;
label_47a290:
    // 0x47a290: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x47a290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_47a294:
    // 0x47a294: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
label_47a298:
    if (ctx->pc == 0x47A298u) {
        ctx->pc = 0x47A29Cu;
        goto label_47a29c;
    }
    ctx->pc = 0x47A294u;
    {
        const bool branch_taken_0x47a294 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x47a294) {
            ctx->pc = 0x47A2A8u;
            goto label_47a2a8;
        }
    }
    ctx->pc = 0x47A29Cu;
label_47a29c:
    // 0x47a29c: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x47a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
label_47a2a0:
    // 0x47a2a0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x47a2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_47a2a4:
    // 0x47a2a4: 0xaea30064  sw          $v1, 0x64($s5)
    ctx->pc = 0x47a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 3));
label_47a2a8:
    // 0x47a2a8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x47a2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_47a2ac:
    // 0x47a2ac: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x47a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_47a2b0:
    // 0x47a2b0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x47a2b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_47a2b4:
    // 0x47a2b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x47a2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_47a2b8:
    // 0x47a2b8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x47a2b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_47a2bc:
    // 0x47a2bc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x47a2bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47a2c0:
    // 0x47a2c0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x47a2c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47a2c4:
    // 0x47a2c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x47a2c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47a2c8:
    // 0x47a2c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x47a2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47a2cc:
    // 0x47a2cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47a2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47a2d0:
    // 0x47a2d0: 0x3e00008  jr          $ra
label_47a2d4:
    if (ctx->pc == 0x47A2D4u) {
        ctx->pc = 0x47A2D4u;
            // 0x47a2d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x47A2D8u;
        goto label_47a2d8;
    }
    ctx->pc = 0x47A2D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47A2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47A2D0u;
            // 0x47a2d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47A2D8u;
label_47a2d8:
    // 0x47a2d8: 0x0  nop
    ctx->pc = 0x47a2d8u;
    // NOP
label_47a2dc:
    // 0x47a2dc: 0x0  nop
    ctx->pc = 0x47a2dcu;
    // NOP
}
