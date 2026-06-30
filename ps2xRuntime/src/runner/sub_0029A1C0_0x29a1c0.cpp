#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029A1C0
// Address: 0x29a1c0 - 0x29a830
void sub_0029A1C0_0x29a1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A1C0_0x29a1c0");
#endif

    switch (ctx->pc) {
        case 0x29a240u: goto label_29a240;
        case 0x29a51cu: goto label_29a51c;
        default: break;
    }

    ctx->pc = 0x29a1c0u;

    // 0x29a1c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x29a1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29a1c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29a1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29a1c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29a1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29a1cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29a1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29a1d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29a1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29a1d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29a1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29a1d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29a1dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29a1dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a1e0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29a1e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a1e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29a1e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a1e8: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x29a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x29a1ec: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x29a1ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29a1f0: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x29a1f0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x29a1f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29a1f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a1f8: 0x0  nop
    ctx->pc = 0x29a1f8u;
    // NOP
    // 0x29a1fc: 0xe6800088  swc1        $f0, 0x88($s4)
    ctx->pc = 0x29a1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 136), bits); }
    // 0x29a200: 0xe6800084  swc1        $f0, 0x84($s4)
    ctx->pc = 0x29a200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
    // 0x29a204: 0xe6800080  swc1        $f0, 0x80($s4)
    ctx->pc = 0x29a204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 128), bits); }
    // 0x29a208: 0xe680007c  swc1        $f0, 0x7C($s4)
    ctx->pc = 0x29a208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 124), bits); }
    // 0x29a20c: 0xe6800078  swc1        $f0, 0x78($s4)
    ctx->pc = 0x29a20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 120), bits); }
    // 0x29a210: 0xe6800074  swc1        $f0, 0x74($s4)
    ctx->pc = 0x29a210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 116), bits); }
    // 0x29a214: 0xe6800070  swc1        $f0, 0x70($s4)
    ctx->pc = 0x29a214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 112), bits); }
    // 0x29a218: 0xe680006c  swc1        $f0, 0x6C($s4)
    ctx->pc = 0x29a218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 108), bits); }
    // 0x29a21c: 0xe6800068  swc1        $f0, 0x68($s4)
    ctx->pc = 0x29a21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 104), bits); }
    // 0x29a220: 0xe6800064  swc1        $f0, 0x64($s4)
    ctx->pc = 0x29a220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 100), bits); }
    // 0x29a224: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29a224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a228: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x29a228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x29a22c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29a22cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29a230: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x29a230u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x29a234: 0x10200146  beqz        $at, . + 4 + (0x146 << 2)
    ctx->pc = 0x29A234u;
    {
        const bool branch_taken_0x29a234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a234) {
            ctx->pc = 0x29A750u;
            goto label_29a750;
        }
    }
    ctx->pc = 0x29A23Cu;
    // 0x29a23c: 0x0  nop
    ctx->pc = 0x29a23cu;
    // NOP
label_29a240:
    // 0x29a240: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x29a240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x29a244: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x29a244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x29a248: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x29a248u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a24c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x29a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x29a250: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x29a250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29a254: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29a254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29a258: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x29a258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29a25c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x29a25cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29a260: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x29a260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29a264: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x29a264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29a268: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29a268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29a26c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x29a26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a270: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x29a270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a274: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29a274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29a278: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x29a278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x29a27c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x29a27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a280: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x29a280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a284: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29a284u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29a288: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x29a288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x29a28c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x29a28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a290: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x29a290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a294: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29a294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29a298: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x29a298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x29a29c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x29a29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a2a0: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x29a2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a2a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29a2a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29a2a8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x29a2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x29a2ac: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x29a2acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29a2b0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x29a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29a2b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29a2b8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x29a2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a2bc: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x29a2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a2c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29a2c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29a2c4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x29a2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x29a2c8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x29a2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a2cc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x29a2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a2d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29a2d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29a2d4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x29a2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x29a2d8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x29a2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a2dc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x29a2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a2e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29a2e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29a2e4: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x29a2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x29a2e8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x29a2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a2ec: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x29a2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a2f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29a2f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29a2f4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x29a2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x29a2f8: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x29a2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x29a2fc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x29a2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29a300: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29a300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29a304: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x29a304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a308: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x29a308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a30c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29a30cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29a310: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x29a310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x29a314: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x29a314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a318: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x29a318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a31c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29a31cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29a320: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x29a320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x29a324: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x29a324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a328: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x29a328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a32c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29a32cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29a330: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x29a330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x29a334: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x29a334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a338: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x29a338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a33c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29a33cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29a340: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x29a340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x29a344: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x29a344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a348: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x29a348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a34c: 0x460009c1  sub.s       $f7, $f1, $f0
    ctx->pc = 0x29a34cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29a350: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x29a350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a354: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x29a354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a358: 0x46000981  sub.s       $f6, $f1, $f0
    ctx->pc = 0x29a358u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29a35c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x29a35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a360: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x29a360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a364: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x29a364u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29a368: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x29a368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a36c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x29a36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a370: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29a370u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29a374: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x29a374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a378: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x29a378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a37c: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x29a37cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29a380: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x29a380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a384: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x29a384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a388: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x29a388u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29a38c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x29a38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a390: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x29a390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a394: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x29a394u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29a398: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x29a398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a39c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x29a39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a3a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29a3a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29a3a4: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x29a3a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x29a3a8: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x29a3a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x29a3ac: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x29a3acu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29a3b0: 0x46042842  mul.s       $f1, $f5, $f4
    ctx->pc = 0x29a3b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x29a3b4: 0x46023802  mul.s       $f0, $f7, $f2
    ctx->pc = 0x29a3b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x29a3b8: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x29a3b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29a3bc: 0x46033842  mul.s       $f1, $f7, $f3
    ctx->pc = 0x29a3bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x29a3c0: 0x46043002  mul.s       $f0, $f6, $f4
    ctx->pc = 0x29a3c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x29a3c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29a3c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29a3c8: 0xe7a80090  swc1        $f8, 0x90($sp)
    ctx->pc = 0x29a3c8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x29a3cc: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x29a3ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x29a3d0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x29a3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x29a3d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29a3d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a3d8: 0x0  nop
    ctx->pc = 0x29a3d8u;
    // NOP
    // 0x29a3dc: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x29a3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x29a3e0: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x29a3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a3e4: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x29a3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a3e8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x29a3e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29a3ec: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x29a3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a3f0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x29a3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a3f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29a3f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29a3f8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x29a3f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29a3fc: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x29a3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a400: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x29a400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a404: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29a404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29a408: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x29a408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x29a40c: 0x46000044  c1          0x44
    ctx->pc = 0x29a40cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x29a410: 0x0  nop
    ctx->pc = 0x29a410u;
    // NOP
    // 0x29a414: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29a414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a418: 0x0  nop
    ctx->pc = 0x29a418u;
    // NOP
    // 0x29a41c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29a41cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a420: 0x450100c5  bc1t        . + 4 + (0xC5 << 2)
    ctx->pc = 0x29A420u;
    {
        const bool branch_taken_0x29a420 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a420) {
            ctx->pc = 0x29A738u;
            goto label_29a738;
        }
    }
    ctx->pc = 0x29A428u;
    // 0x29a428: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29a428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29a42c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a430: 0x0  nop
    ctx->pc = 0x29a430u;
    // NOP
    // 0x29a434: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x29a434u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x29a438: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x29a438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a43c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29a43cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29a440: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x29a440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x29a444: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x29a444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a448: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29a448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29a44c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x29a44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x29a450: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x29a450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a454: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29a454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29a458: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x29a458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x29a45c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x29a45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a460: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29a460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29a464: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x29a464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x29a468: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x29a468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a46c: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x29a46cu;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
    // 0x29a470: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x29a470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a474: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x29a474u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x29a478: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x29a478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a47c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x29a47cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x29a480: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x29a480u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a484: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x29A484u;
    {
        const bool branch_taken_0x29a484 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a484) {
            ctx->pc = 0x29A4A8u;
            goto label_29a4a8;
        }
    }
    ctx->pc = 0x29A48Cu;
    // 0x29a48c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x29a48cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a490: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x29A490u;
    {
        const bool branch_taken_0x29a490 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a490) {
            ctx->pc = 0x29A4A8u;
            goto label_29a4a8;
        }
    }
    ctx->pc = 0x29A498u;
    // 0x29a498: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x29a498u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x29a49c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29A49Cu;
    {
        const bool branch_taken_0x29a49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a49c) {
            ctx->pc = 0x29A4C8u;
            goto label_29a4c8;
        }
    }
    ctx->pc = 0x29A4A4u;
    // 0x29a4a4: 0x0  nop
    ctx->pc = 0x29a4a4u;
    // NOP
label_29a4a8:
    // 0x29a4a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29a4a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a4ac: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x29A4ACu;
    {
        const bool branch_taken_0x29a4ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a4ac) {
            ctx->pc = 0x29A4C0u;
            goto label_29a4c0;
        }
    }
    ctx->pc = 0x29A4B4u;
    // 0x29a4b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a4b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29A4B8u;
    {
        const bool branch_taken_0x29a4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a4b8) {
            ctx->pc = 0x29A4C4u;
            goto label_29a4c4;
        }
    }
    ctx->pc = 0x29A4C0u;
label_29a4c0:
    // 0x29a4c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29a4c4:
    // 0x29a4c4: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x29a4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_29a4c8:
    // 0x29a4c8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x29a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x29a4cc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x29a4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29a4d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29a4d4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x29a4d4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29a4d8: 0x0  nop
    ctx->pc = 0x29a4d8u;
    // NOP
    // 0x29a4dc: 0x0  nop
    ctx->pc = 0x29a4dcu;
    // NOP
    // 0x29a4e0: 0x1010  mfhi        $v0
    ctx->pc = 0x29a4e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x29a4e4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x29a4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x29a4e8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x29a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29a4ec: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x29a4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29a4f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29a4f4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x29a4f4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29a4f8: 0x0  nop
    ctx->pc = 0x29a4f8u;
    // NOP
    // 0x29a4fc: 0x0  nop
    ctx->pc = 0x29a4fcu;
    // NOP
    // 0x29a500: 0x1010  mfhi        $v0
    ctx->pc = 0x29a500u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x29a504: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x29a504u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x29a508: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a50c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x29a50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29a510: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x29a510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x29a514: 0xc0a6798  jal         func_299E60
    ctx->pc = 0x29A514u;
    SET_GPR_U32(ctx, 31, 0x29A51Cu);
    ctx->pc = 0x299E60u;
    if (runtime->hasFunction(0x299E60u)) {
        auto targetFn = runtime->lookupFunction(0x299E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A51Cu; }
        if (ctx->pc != 0x29A51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00299E60_0x299e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A51Cu; }
        if (ctx->pc != 0x29A51Cu) { return; }
    }
    ctx->pc = 0x29A51Cu;
label_29a51c:
    // 0x29a51c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x29a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29a520: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A520u;
    {
        const bool branch_taken_0x29a520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a520) {
            ctx->pc = 0x29A534u;
            goto label_29a534;
        }
    }
    ctx->pc = 0x29A528u;
    // 0x29a528: 0xc6810034  lwc1        $f1, 0x34($s4)
    ctx->pc = 0x29a528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a52c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29A52Cu;
    {
        const bool branch_taken_0x29a52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a52c) {
            ctx->pc = 0x29A550u;
            goto label_29a550;
        }
    }
    ctx->pc = 0x29A534u;
label_29a534:
    // 0x29a534: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x29a534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29a538: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A538u;
    {
        const bool branch_taken_0x29a538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a538) {
            ctx->pc = 0x29A54Cu;
            goto label_29a54c;
        }
    }
    ctx->pc = 0x29A540u;
    // 0x29a540: 0xc6810038  lwc1        $f1, 0x38($s4)
    ctx->pc = 0x29a540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a544: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29A544u;
    {
        const bool branch_taken_0x29a544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a544) {
            ctx->pc = 0x29A550u;
            goto label_29a550;
        }
    }
    ctx->pc = 0x29A54Cu;
label_29a54c:
    // 0x29a54c: 0xc681003c  lwc1        $f1, 0x3C($s4)
    ctx->pc = 0x29a54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29a550:
    // 0x29a550: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x29a550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a554: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x29a554u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29a558: 0xc6800064  lwc1        $f0, 0x64($s4)
    ctx->pc = 0x29a558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a55c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29a55cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a560: 0xe6800064  swc1        $f0, 0x64($s4)
    ctx->pc = 0x29a560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 100), bits); }
    // 0x29a564: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x29a564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29a568: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a56c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x29a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x29a570: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x29a570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x29a574: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x29a574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a578: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29a578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a57c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29a57cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29a580: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x29a580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29a584: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a588: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x29a588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29a58c: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x29a58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a590: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29a590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a594: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x29a594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x29a598: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x29a598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29a59c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a5a0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x29a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x29a5a4: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x29a5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x29a5a8: 0xc6810044  lwc1        $f1, 0x44($s4)
    ctx->pc = 0x29a5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a5ac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29a5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a5b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29a5b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29a5b4: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x29a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29a5b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a5bc: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x29a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29a5c0: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x29a5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a5c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29a5c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a5c8: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x29a5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x29a5cc: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x29a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x29a5d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a5d4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x29a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x29a5d8: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x29a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x29a5dc: 0xc6810048  lwc1        $f1, 0x48($s4)
    ctx->pc = 0x29a5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a5e0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29a5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a5e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29a5e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29a5e8: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x29a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x29a5ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a5f0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x29a5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29a5f4: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x29a5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a5f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29a5f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a5fc: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x29a5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x29a600: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x29a600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29a604: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a608: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x29a608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x29a60c: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x29a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x29a610: 0xc681004c  lwc1        $f1, 0x4C($s4)
    ctx->pc = 0x29a610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a614: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29a614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a618: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29a618u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29a61c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x29a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29a620: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a624: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x29a624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29a628: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x29a628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a62c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29a62cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a630: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x29a630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x29a634: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x29a634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29a638: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a63c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x29a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x29a640: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x29a640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x29a644: 0xc6810050  lwc1        $f1, 0x50($s4)
    ctx->pc = 0x29a644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a648: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29a648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a64c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29a64cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29a650: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x29a650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29a654: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a658: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x29a658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29a65c: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x29a65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a660: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29a660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a664: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x29a664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x29a668: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x29a668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x29a66c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a670: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x29a670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x29a674: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x29a674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x29a678: 0xc6810054  lwc1        $f1, 0x54($s4)
    ctx->pc = 0x29a678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a67c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29a67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a680: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29a680u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29a684: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x29a684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x29a688: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a68c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x29a68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29a690: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x29a690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a694: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29a694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a698: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x29a698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x29a69c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x29a69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29a6a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a6a4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x29a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x29a6a8: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x29a6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x29a6ac: 0xc6810058  lwc1        $f1, 0x58($s4)
    ctx->pc = 0x29a6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a6b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29a6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a6b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29a6b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29a6b8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x29a6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29a6bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a6c0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x29a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29a6c4: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x29a6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a6c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29a6c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a6cc: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x29a6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x29a6d0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x29a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29a6d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a6d8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x29a6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x29a6dc: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x29a6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x29a6e0: 0xc681005c  lwc1        $f1, 0x5C($s4)
    ctx->pc = 0x29a6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a6e4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29a6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a6e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29a6e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29a6ec: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x29a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29a6f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a6f4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x29a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29a6f8: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x29a6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a6fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29a6fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a700: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x29a700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x29a704: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x29a704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x29a708: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a70c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x29a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x29a710: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x29a710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x29a714: 0xc6810060  lwc1        $f1, 0x60($s4)
    ctx->pc = 0x29a714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a718: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29a718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a71c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29a71cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29a720: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x29a720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x29a724: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a728: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x29a728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29a72c: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x29a72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a730: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29a730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a734: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x29a734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
label_29a738:
    // 0x29a738: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29a738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29a73c: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x29a73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x29a740: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29a740u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29a744: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x29a744u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x29a748: 0x1460febd  bnez        $v1, . + 4 + (-0x143 << 2)
    ctx->pc = 0x29A748u;
    {
        const bool branch_taken_0x29a748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a748) {
            ctx->pc = 0x29A240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29a240;
        }
    }
    ctx->pc = 0x29A750u;
label_29a750:
    // 0x29a750: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x29a750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x29a754: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29a754u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29a758: 0xc6800068  lwc1        $f0, 0x68($s4)
    ctx->pc = 0x29a758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a75c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x29a75cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x29a760: 0xe6800068  swc1        $f0, 0x68($s4)
    ctx->pc = 0x29a760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 104), bits); }
    // 0x29a764: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x29a764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x29a768: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29a768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29a76c: 0xc680006c  lwc1        $f0, 0x6C($s4)
    ctx->pc = 0x29a76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a770: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x29a770u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x29a774: 0xe680006c  swc1        $f0, 0x6C($s4)
    ctx->pc = 0x29a774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 108), bits); }
    // 0x29a778: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x29a778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x29a77c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29a77cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29a780: 0xc6800070  lwc1        $f0, 0x70($s4)
    ctx->pc = 0x29a780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a784: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x29a784u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x29a788: 0xe6800070  swc1        $f0, 0x70($s4)
    ctx->pc = 0x29a788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 112), bits); }
    // 0x29a78c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x29a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x29a790: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29a790u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29a794: 0xc6800074  lwc1        $f0, 0x74($s4)
    ctx->pc = 0x29a794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a798: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x29a798u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x29a79c: 0xe6800074  swc1        $f0, 0x74($s4)
    ctx->pc = 0x29a79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 116), bits); }
    // 0x29a7a0: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x29a7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x29a7a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29a7a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29a7a8: 0xc6800078  lwc1        $f0, 0x78($s4)
    ctx->pc = 0x29a7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a7ac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x29a7acu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x29a7b0: 0xe6800078  swc1        $f0, 0x78($s4)
    ctx->pc = 0x29a7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 120), bits); }
    // 0x29a7b4: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x29a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x29a7b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29a7b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29a7bc: 0xc680007c  lwc1        $f0, 0x7C($s4)
    ctx->pc = 0x29a7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a7c0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x29a7c0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x29a7c4: 0xe680007c  swc1        $f0, 0x7C($s4)
    ctx->pc = 0x29a7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 124), bits); }
    // 0x29a7c8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x29a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x29a7cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29a7ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29a7d0: 0xc6800080  lwc1        $f0, 0x80($s4)
    ctx->pc = 0x29a7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a7d4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x29a7d4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x29a7d8: 0xe6800080  swc1        $f0, 0x80($s4)
    ctx->pc = 0x29a7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 128), bits); }
    // 0x29a7dc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x29a7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x29a7e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29a7e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29a7e4: 0xc6800084  lwc1        $f0, 0x84($s4)
    ctx->pc = 0x29a7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a7e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x29a7e8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x29a7ec: 0xe6800084  swc1        $f0, 0x84($s4)
    ctx->pc = 0x29a7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
    // 0x29a7f0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x29a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x29a7f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29a7f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29a7f8: 0xc6800088  lwc1        $f0, 0x88($s4)
    ctx->pc = 0x29a7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a7fc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x29a7fcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x29a800: 0xe6800088  swc1        $f0, 0x88($s4)
    ctx->pc = 0x29a800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 136), bits); }
    // 0x29a804: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29a804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a808: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29a808u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a80c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29a80cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a810: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29a810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29a814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a81c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x29a81cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x29a820: 0x3e00008  jr          $ra
    ctx->pc = 0x29A820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A828u;
    // 0x29a828: 0x0  nop
    ctx->pc = 0x29a828u;
    // NOP
    // 0x29a82c: 0x0  nop
    ctx->pc = 0x29a82cu;
    // NOP
}
