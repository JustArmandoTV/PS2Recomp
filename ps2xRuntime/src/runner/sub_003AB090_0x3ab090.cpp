#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AB090
// Address: 0x3ab090 - 0x3ab800
void sub_003AB090_0x3ab090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB090_0x3ab090");
#endif

    switch (ctx->pc) {
        case 0x3ab268u: goto label_3ab268;
        case 0x3ab43cu: goto label_3ab43c;
        case 0x3ab498u: goto label_3ab498;
        case 0x3ab4f0u: goto label_3ab4f0;
        case 0x3ab7a8u: goto label_3ab7a8;
        default: break;
    }

    ctx->pc = 0x3ab090u;

    // 0x3ab090: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x3ab090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x3ab094: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3ab094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3ab098: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3ab098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3ab09c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3ab09cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab0a0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3ab0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x3ab0a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3ab0a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ab0a8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3ab0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3ab0ac: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3ab0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3ab0b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3ab0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3ab0b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ab0b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab0b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3ab0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3ab0bc: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x3ab0bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
    // 0x3ab0c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3ab0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3ab0c4: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x3ab0c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
    // 0x3ab0c8: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3ab0c8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3ab0cc: 0x26529bc0  addiu       $s2, $s2, -0x6440
    ctx->pc = 0x3ab0ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941632));
    // 0x3ab0d0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3ab0d0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3ab0d4: 0x26312100  addiu       $s1, $s1, 0x2100
    ctx->pc = 0x3ab0d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8448));
    // 0x3ab0d8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3ab0d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3ab0dc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3ab0dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3ab0e0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3ab0e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3ab0e4: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x3ab0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3ab0e8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3ab0e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ab0ec: 0x90840028  lbu         $a0, 0x28($a0)
    ctx->pc = 0x3ab0ecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3ab0f0: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x3ab0f0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ab0f4: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x3ab0f4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x3ab0f8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3ab0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3ab0fc: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x3ab0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x3ab100: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x3ab100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ab104: 0xc82023  subu        $a0, $a2, $t0
    ctx->pc = 0x3ab104u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3ab108: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3ab108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3ab10c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ab10cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab110: 0x0  nop
    ctx->pc = 0x3ab110u;
    // NOP
    // 0x3ab114: 0x468005e0  cvt.s.w     $f23, $f0
    ctx->pc = 0x3ab114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x3ab118: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3ab118u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab11c: 0x0  nop
    ctx->pc = 0x3ab11cu;
    // NOP
    // 0x3ab120: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3ab120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3ab124: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ab124u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab128: 0x0  nop
    ctx->pc = 0x3ab128u;
    // NOP
    // 0x3ab12c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3ab12cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3ab130: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB130u;
    {
        const bool branch_taken_0x3ab130 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x3AB134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB130u;
            // 0x3ab134: 0x4603261c  madd.s      $f24, $f4, $f3 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab130) {
            ctx->pc = 0x3AB144u;
            goto label_3ab144;
        }
    }
    ctx->pc = 0x3AB138u;
    // 0x3ab138: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3ab138u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab13c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AB13Cu;
    {
        const bool branch_taken_0x3ab13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB13Cu;
            // 0x3ab140: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab13c) {
            ctx->pc = 0x3AB160u;
            goto label_3ab160;
        }
    }
    ctx->pc = 0x3AB144u;
label_3ab144:
    // 0x3ab144: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x3ab144u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x3ab148: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3ab148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3ab14c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ab14cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ab150: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ab150u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab154: 0x0  nop
    ctx->pc = 0x3ab154u;
    // NOP
    // 0x3ab158: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3ab158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ab15c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3ab15cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3ab160:
    // 0x3ab160: 0x5020004  bltzl       $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB160u;
    {
        const bool branch_taken_0x3ab160 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x3ab160) {
            ctx->pc = 0x3AB164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB160u;
            // 0x3ab164: 0x82042  srl         $a0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AB174u;
            goto label_3ab174;
        }
    }
    ctx->pc = 0x3AB168u;
    // 0x3ab168: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3ab168u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab16c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3AB16Cu;
    {
        const bool branch_taken_0x3ab16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB16Cu;
            // 0x3ab170: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab16c) {
            ctx->pc = 0x3AB18Cu;
            goto label_3ab18c;
        }
    }
    ctx->pc = 0x3AB174u;
label_3ab174:
    // 0x3ab174: 0x31030001  andi        $v1, $t0, 0x1
    ctx->pc = 0x3ab174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x3ab178: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ab178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ab17c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ab17cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab180: 0x0  nop
    ctx->pc = 0x3ab180u;
    // NOP
    // 0x3ab184: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ab184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3ab188: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3ab188u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3ab18c:
    // 0x3ab18c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3ab18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x3ab190: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3ab190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3ab194: 0xc463f404  lwc1        $f3, -0xBFC($v1)
    ctx->pc = 0x3ab194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ab198: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3ab198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x3ab19c: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x3ab19cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3ab1a0: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x3ab1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x3ab1a4: 0x46002818  adda.s      $f5, $f0
    ctx->pc = 0x3ab1a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x3ab1a8: 0x90a80116  lbu         $t0, 0x116($a1)
    ctx->pc = 0x3ab1a8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 278)));
    // 0x3ab1ac: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x3ab1acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x3ab1b0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3ab1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x3ab1b4: 0xc480f400  lwc1        $f0, -0xC00($a0)
    ctx->pc = 0x3ab1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ab1b8: 0xc462f408  lwc1        $f2, -0xBF8($v1)
    ctx->pc = 0x3ab1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ab1bc: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x3ab1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3ab1c0: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x3ab1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x3ab1c4: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3ab1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x3ab1c8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3ab1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x3ab1cc: 0xc460f40c  lwc1        $f0, -0xBF4($v1)
    ctx->pc = 0x3ab1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ab1d0: 0xe7a30124  swc1        $f3, 0x124($sp)
    ctx->pc = 0x3ab1d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x3ab1d4: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x3ab1d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x3ab1d8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3ab1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x3ab1dc: 0xc462f410  lwc1        $f2, -0xBF0($v1)
    ctx->pc = 0x3ab1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ab1e0: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x3ab1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x3ab1e4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3ab1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x3ab1e8: 0xc460f414  lwc1        $f0, -0xBEC($v1)
    ctx->pc = 0x3ab1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ab1ec: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x3ab1ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x3ab1f0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3ab1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x3ab1f4: 0xc462f418  lwc1        $f2, -0xBE8($v1)
    ctx->pc = 0x3ab1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ab1f8: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x3ab1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x3ab1fc: 0xc480f41c  lwc1        $f0, -0xBE4($a0)
    ctx->pc = 0x3ab1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ab200: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x3ab200u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x3ab204: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3ab204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x3ab208: 0xc462f420  lwc1        $f2, -0xBE0($v1)
    ctx->pc = 0x3ab208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ab20c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x3ab20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x3ab210: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3ab210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x3ab214: 0xc480f424  lwc1        $f0, -0xBDC($a0)
    ctx->pc = 0x3ab214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ab218: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3ab218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3ab21c: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x3ab21cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x3ab220: 0xc4644890  lwc1        $f4, 0x4890($v1)
    ctx->pc = 0x3ab220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ab224: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x3ab224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x3ab228: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x3ab228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x3ab22c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ab22cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab230: 0x0  nop
    ctx->pc = 0x3ab230u;
    // NOP
    // 0x3ab234: 0x46040080  add.s       $f2, $f0, $f4
    ctx->pc = 0x3ab234u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3ab238: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3ab238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3ab23c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x3ab23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3ab240: 0x46002818  adda.s      $f5, $f0
    ctx->pc = 0x3ab240u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x3ab244: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3ab244u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab248: 0xc46348f0  lwc1        $f3, 0x48F0($v1)
    ctx->pc = 0x3ab248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ab24c: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x3ab24cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x3ab250: 0x4604001c  madd.s      $f0, $f0, $f4
    ctx->pc = 0x3ab250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
    // 0x3ab254: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3ab254u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x3ab258: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3ab258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3ab25c: 0xe7a2010c  swc1        $f2, 0x10C($sp)
    ctx->pc = 0x3ab25cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x3ab260: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AB260u;
    {
        const bool branch_taken_0x3ab260 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB260u;
            // 0x3ab264: 0xe7a00110  swc1        $f0, 0x110($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab260) {
            ctx->pc = 0x3AB284u;
            goto label_3ab284;
        }
    }
    ctx->pc = 0x3AB268u;
label_3ab268:
    // 0x3ab268: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3ab268u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ab26c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ab26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ab270: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3ab270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3ab274: 0x0  nop
    ctx->pc = 0x3ab274u;
    // NOP
    // 0x3ab278: 0x0  nop
    ctx->pc = 0x3ab278u;
    // NOP
    // 0x3ab27c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3AB27Cu;
    {
        const bool branch_taken_0x3ab27c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab27c) {
            ctx->pc = 0x3AB268u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ab268;
        }
    }
    ctx->pc = 0x3AB284u;
label_3ab284:
    // 0x3ab284: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x3ab284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ab288: 0xc7a60104  lwc1        $f6, 0x104($sp)
    ctx->pc = 0x3ab288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3ab28c: 0xc7a50108  lwc1        $f5, 0x108($sp)
    ctx->pc = 0x3ab28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3ab290: 0x460c11c2  mul.s       $f7, $f2, $f12
    ctx->pc = 0x3ab290u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x3ab294: 0xc7a4010c  lwc1        $f4, 0x10C($sp)
    ctx->pc = 0x3ab294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ab298: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x3ab298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ab29c: 0x460c3182  mul.s       $f6, $f6, $f12
    ctx->pc = 0x3ab29cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x3ab2a0: 0x460c2942  mul.s       $f5, $f5, $f12
    ctx->pc = 0x3ab2a0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x3ab2a4: 0x460c2102  mul.s       $f4, $f4, $f12
    ctx->pc = 0x3ab2a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x3ab2a8: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x3ab2a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x3ab2ac: 0xc7a20114  lwc1        $f2, 0x114($sp)
    ctx->pc = 0x3ab2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ab2b0: 0x460f39c3  div.s       $f7, $f7, $f15
    ctx->pc = 0x3ab2b0u;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[7] = ctx->f[7] / ctx->f[15];
    // 0x3ab2b4: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x3ab2b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x3ab2b8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3ab2b8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab2bc: 0x0  nop
    ctx->pc = 0x3ab2bcu;
    // NOP
    // 0x3ab2c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ab2c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3ab2c4: 0x460f3183  div.s       $f6, $f6, $f15
    ctx->pc = 0x3ab2c4u;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[6] = ctx->f[6] / ctx->f[15];
    // 0x3ab2c8: 0x460f2943  div.s       $f5, $f5, $f15
    ctx->pc = 0x3ab2c8u;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[5] = ctx->f[5] / ctx->f[15];
    // 0x3ab2cc: 0x460f2103  div.s       $f4, $f4, $f15
    ctx->pc = 0x3ab2ccu;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[15];
    // 0x3ab2d0: 0x460f18c3  div.s       $f3, $f3, $f15
    ctx->pc = 0x3ab2d0u;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[15];
    // 0x3ab2d4: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x3ab2d4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3ab2d8: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x3ab2d8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x3ab2dc: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x3ab2dcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x3ab2e0: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x3ab2e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3ab2e4: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x3ab2e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3ab2e8: 0x460f1083  div.s       $f2, $f2, $f15
    ctx->pc = 0x3ab2e8u;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[15];
    // 0x3ab2ec: 0x460e6836  c.le.s      $f13, $f14
    ctx->pc = 0x3ab2ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ab2f0: 0xe7a700e0  swc1        $f7, 0xE0($sp)
    ctx->pc = 0x3ab2f0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x3ab2f4: 0xe7a600e4  swc1        $f6, 0xE4($sp)
    ctx->pc = 0x3ab2f4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x3ab2f8: 0xe7a500e8  swc1        $f5, 0xE8($sp)
    ctx->pc = 0x3ab2f8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x3ab2fc: 0xe7a400ec  swc1        $f4, 0xEC($sp)
    ctx->pc = 0x3ab2fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x3ab300: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x3ab300u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x3ab304: 0x0  nop
    ctx->pc = 0x3ab304u;
    // NOP
    // 0x3ab308: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x3ab308u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3ab30c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x3AB30Cu;
    {
        const bool branch_taken_0x3ab30c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AB310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB30Cu;
            // 0x3ab310: 0xe7a200f4  swc1        $f2, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab30c) {
            ctx->pc = 0x3AB330u;
            goto label_3ab330;
        }
    }
    ctx->pc = 0x3AB314u;
    // 0x3ab314: 0x460c6882  mul.s       $f2, $f13, $f12
    ctx->pc = 0x3ab314u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[12]);
    // 0x3ab318: 0x460f1083  div.s       $f2, $f2, $f15
    ctx->pc = 0x3ab318u;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[15];
    // 0x3ab31c: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x3ab31cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x3ab320: 0x0  nop
    ctx->pc = 0x3ab320u;
    // NOP
    // 0x3ab324: 0x0  nop
    ctx->pc = 0x3ab324u;
    // NOP
    // 0x3ab328: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3AB328u;
    {
        const bool branch_taken_0x3ab328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB328u;
            // 0x3ab32c: 0x46020542  mul.s       $f21, $f0, $f2 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab328) {
            ctx->pc = 0x3AB340u;
            goto label_3ab340;
        }
    }
    ctx->pc = 0x3AB330u;
label_3ab330:
    // 0x3ab330: 0x460c7082  mul.s       $f2, $f14, $f12
    ctx->pc = 0x3ab330u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
    // 0x3ab334: 0x460f1083  div.s       $f2, $f2, $f15
    ctx->pc = 0x3ab334u;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[15];
    // 0x3ab338: 0x46020542  mul.s       $f21, $f0, $f2
    ctx->pc = 0x3ab338u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3ab33c: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x3ab33cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_3ab340:
    // 0x3ab340: 0x460ca836  c.le.s      $f21, $f12
    ctx->pc = 0x3ab340u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ab344: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3AB344u;
    {
        const bool branch_taken_0x3ab344 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ab344) {
            ctx->pc = 0x3AB348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB344u;
            // 0x3ab348: 0x9264002d  lbu         $a0, 0x2D($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 45)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AB354u;
            goto label_3ab354;
        }
    }
    ctx->pc = 0x3AB34Cu;
    // 0x3ab34c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x3ab34cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x3ab350: 0x9264002d  lbu         $a0, 0x2D($s3)
    ctx->pc = 0x3ab350u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 45)));
label_3ab354:
    // 0x3ab354: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x3ab354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x3ab358: 0x286100ff  slti        $at, $v1, 0xFF
    ctx->pc = 0x3ab358u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x3ab35c: 0x640600ff  daddiu      $a2, $zero, 0xFF
    ctx->pc = 0x3ab35cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
    // 0x3ab360: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3ab360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3ab364: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AB364u;
    {
        const bool branch_taken_0x3ab364 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB364u;
            // 0x3ab368: 0x2442821  addu        $a1, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab364) {
            ctx->pc = 0x3AB370u;
            goto label_3ab370;
        }
    }
    ctx->pc = 0x3AB36Cu;
    // 0x3ab36c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3ab36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3ab370:
    // 0x3ab370: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x3ab370u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x3ab374: 0x4601bd00  add.s       $f20, $f23, $f1
    ctx->pc = 0x3ab374u;
    ctx->f[20] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
    // 0x3ab378: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB378u;
    {
        const bool branch_taken_0x3ab378 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3AB37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB378u;
            // 0x3ab37c: 0x30d000ff  andi        $s0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab378) {
            ctx->pc = 0x3AB38Cu;
            goto label_3ab38c;
        }
    }
    ctx->pc = 0x3AB380u;
    // 0x3ab380: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ab380u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab384: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AB384u;
    {
        const bool branch_taken_0x3ab384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB384u;
            // 0x3ab388: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab384) {
            ctx->pc = 0x3AB3A8u;
            goto label_3ab3a8;
        }
    }
    ctx->pc = 0x3AB38Cu;
label_3ab38c:
    // 0x3ab38c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3ab38cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3ab390: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3ab390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3ab394: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ab394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ab398: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ab398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab39c: 0x0  nop
    ctx->pc = 0x3ab39cu;
    // NOP
    // 0x3ab3a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ab3a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3ab3a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3ab3a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3ab3a8:
    // 0x3ab3a8: 0x4600bb41  sub.s       $f13, $f23, $f0
    ctx->pc = 0x3ab3a8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x3ab3ac: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3ab3acu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab3b0: 0x0  nop
    ctx->pc = 0x3ab3b0u;
    // NOP
    // 0x3ab3b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3ab3b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ab3b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ab3b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab3bc: 0x0  nop
    ctx->pc = 0x3ab3bcu;
    // NOP
    // 0x3ab3c0: 0x46180018  adda.s      $f0, $f24
    ctx->pc = 0x3ab3c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x3ab3c4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB3C4u;
    {
        const bool branch_taken_0x3ab3c4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3AB3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB3C4u;
            // 0x3ab3c8: 0x4601639c  madd.s      $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab3c4) {
            ctx->pc = 0x3AB3D8u;
            goto label_3ab3d8;
        }
    }
    ctx->pc = 0x3AB3CCu;
    // 0x3ab3cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ab3ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab3d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AB3D0u;
    {
        const bool branch_taken_0x3ab3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB3D0u;
            // 0x3ab3d4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab3d0) {
            ctx->pc = 0x3AB3F4u;
            goto label_3ab3f4;
        }
    }
    ctx->pc = 0x3AB3D8u;
label_3ab3d8:
    // 0x3ab3d8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3ab3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3ab3dc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3ab3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3ab3e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ab3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ab3e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ab3e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab3e8: 0x0  nop
    ctx->pc = 0x3ab3e8u;
    // NOP
    // 0x3ab3ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ab3ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3ab3f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3ab3f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3ab3f4:
    // 0x3ab3f4: 0x461403c0  add.s       $f15, $f0, $f20
    ctx->pc = 0x3ab3f4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x3ab3f8: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x3ab3f8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ab3fc: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3ab3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3ab400: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x3ab400u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3ab404: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x3ab404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3ab408: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ab408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ab40c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3ab40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3ab410: 0x2033025  or          $a2, $s0, $v1
    ctx->pc = 0x3ab410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x3ab414: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3ab414u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab418: 0x0  nop
    ctx->pc = 0x3ab418u;
    // NOP
    // 0x3ab41c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3ab41cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3ab420: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ab420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab424: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3ab424u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab428: 0x0  nop
    ctx->pc = 0x3ab428u;
    // NOP
    // 0x3ab42c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3ab42cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3ab430: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3ab430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3ab434: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AB434u;
    SET_GPR_U32(ctx, 31, 0x3AB43Cu);
    ctx->pc = 0x3AB438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB434u;
            // 0x3ab438: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AB43Cu; }
        if (ctx->pc != 0x3AB43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AB43Cu; }
        if (ctx->pc != 0x3AB43Cu) { return; }
    }
    ctx->pc = 0x3AB43Cu;
label_3ab43c:
    // 0x3ab43c: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x3ab43cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ab440: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x3ab440u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
    // 0x3ab444: 0x9268002c  lbu         $t0, 0x2C($s3)
    ctx->pc = 0x3ab444u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x3ab448: 0x24e7f430  addiu       $a3, $a3, -0xBD0
    ctx->pc = 0x3ab448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964272));
    // 0x3ab44c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3ab44cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3ab450: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x3ab450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3ab454: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ab454u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab458: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3ab458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3ab45c: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x3ab45cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3ab460: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x3ab460u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x3ab464: 0x2484021  addu        $t0, $s2, $t0
    ctx->pc = 0x3ab464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x3ab468: 0xc5050000  lwc1        $f5, 0x0($t0)
    ctx->pc = 0x3ab468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3ab46c: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x3ab46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ab470: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ab470u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab474: 0x46042983  div.s       $f6, $f5, $f4
    ctx->pc = 0x3ab474u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[6] = ctx->f[5] / ctx->f[4];
    // 0x3ab478: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x3ab478u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x3ab47c: 0x46040903  div.s       $f4, $f1, $f4
    ctx->pc = 0x3ab47cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[4] = ctx->f[1] / ctx->f[4];
    // 0x3ab480: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3ab480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3ab484: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x3ab484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ab488: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x3ab488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ab48c: 0x46021843  div.s       $f1, $f3, $f2
    ctx->pc = 0x3ab48cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[1] = ctx->f[3] / ctx->f[2];
    // 0x3ab490: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3ab490u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3ab494: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3ab494u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_3ab498:
    // 0x3ab498: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x3ab498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ab49c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ab49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ab4a0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3ab4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3ab4a4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x3ab4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x3ab4a8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x3ab4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x3ab4ac: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3ab4acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3ab4b0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3AB4B0u;
    {
        const bool branch_taken_0x3ab4b0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x3AB4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB4B0u;
            // 0x3ab4b4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab4b0) {
            ctx->pc = 0x3AB498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ab498;
        }
    }
    ctx->pc = 0x3AB4B8u;
    // 0x3ab4b8: 0x4615c540  add.s       $f21, $f24, $f21
    ctx->pc = 0x3ab4b8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
    // 0x3ab4bc: 0x8fb50120  lw          $s5, 0x120($sp)
    ctx->pc = 0x3ab4bcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3ab4c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3ab4c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab4c4: 0x27b30100  addiu       $s3, $sp, 0x100
    ctx->pc = 0x3ab4c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3ab4c8: 0x27b200e0  addiu       $s2, $sp, 0xE0
    ctx->pc = 0x3ab4c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3ab4cc: 0x27b10120  addiu       $s1, $sp, 0x120
    ctx->pc = 0x3ab4ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3ab4d0: 0xe7a4009c  swc1        $f4, 0x9C($sp)
    ctx->pc = 0x3ab4d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x3ab4d4: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x3ab4d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3ab4d8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3ab4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3ab4dc: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x3ab4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x3ab4e0: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x3ab4e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x3ab4e4: 0xe7a100dc  swc1        $f1, 0xDC($sp)
    ctx->pc = 0x3ab4e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x3ab4e8: 0xe7a600c4  swc1        $f6, 0xC4($sp)
    ctx->pc = 0x3ab4e8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x3ab4ec: 0xe7a600d8  swc1        $f6, 0xD8($sp)
    ctx->pc = 0x3ab4ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3ab4f0:
    // 0x3ab4f0: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x3ab4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ab4f4: 0x4601b036  c.le.s      $f22, $f1
    ctx->pc = 0x3ab4f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ab4f8: 0x450100ab  bc1t        . + 4 + (0xAB << 2)
    ctx->pc = 0x3AB4F8u;
    {
        const bool branch_taken_0x3ab4f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ab4f8) {
            ctx->pc = 0x3AB7A8u;
            goto label_3ab7a8;
        }
    }
    ctx->pc = 0x3AB500u;
    // 0x3ab500: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x3ab500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ab504: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x3ab504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ab508: 0x4602b036  c.le.s      $f22, $f2
    ctx->pc = 0x3ab508u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ab50c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB50Cu;
    {
        const bool branch_taken_0x3ab50c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AB510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB50Cu;
            // 0x3ab510: 0x4600c140  add.s       $f5, $f24, $f0 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab50c) {
            ctx->pc = 0x3AB520u;
            goto label_3ab520;
        }
    }
    ctx->pc = 0x3AB514u;
    // 0x3ab514: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3ab514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ab518: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AB518u;
    {
        const bool branch_taken_0x3ab518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB518u;
            // 0x3ab51c: 0x4600c100  add.s       $f4, $f24, $f0 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab518) {
            ctx->pc = 0x3AB524u;
            goto label_3ab524;
        }
    }
    ctx->pc = 0x3AB520u;
label_3ab520:
    // 0x3ab520: 0x4600a906  mov.s       $f4, $f21
    ctx->pc = 0x3ab520u;
    ctx->f[4] = FPU_MOV_S(ctx->f[21]);
label_3ab524:
    // 0x3ab524: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x3ab524u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3ab528: 0x4601b041  sub.s       $f1, $f22, $f1
    ctx->pc = 0x3ab528u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x3ab52c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3ab52cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ab530: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3AB530u;
    {
        const bool branch_taken_0x3ab530 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ab530) {
            ctx->pc = 0x3AB540u;
            goto label_3ab540;
        }
    }
    ctx->pc = 0x3AB538u;
    // 0x3ab538: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x3ab538u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x3ab53c: 0x0  nop
    ctx->pc = 0x3ab53cu;
    // NOP
label_3ab540:
    // 0x3ab540: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x3ab540u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x3ab544: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x3ab544u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
    // 0x3ab548: 0x2a61024  and         $v0, $s5, $a2
    ctx->pc = 0x3ab548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 6));
    // 0x3ab54c: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x3ab54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x3ab550: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x3ab550u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3ab554: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x3ab554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x3ab558: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x3ab558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x3ab55c: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x3ab55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x3ab560: 0x32a2ff00  andi        $v0, $s5, 0xFF00
    ctx->pc = 0x3ab560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65280);
    // 0x3ab564: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3ab564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ab568: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ab568u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ab56c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ab56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ab570: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3ab570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3ab574: 0x2b01025  or          $v0, $s5, $s0
    ctx->pc = 0x3ab574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 16));
    // 0x3ab578: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x3ab578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x3ab57c: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x3ab57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x3ab580: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x3ab580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x3ab584: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x3ab584u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x3ab588: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ab588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3ab58c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x3ab58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3ab590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ab590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab594: 0x0  nop
    ctx->pc = 0x3ab594u;
    // NOP
    // 0x3ab598: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3ab598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3ab59c: 0xe7b700bc  swc1        $f23, 0xBC($sp)
    ctx->pc = 0x3ab59cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x3ab5a0: 0xe7b70094  swc1        $f23, 0x94($sp)
    ctx->pc = 0x3ab5a0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3ab5a4: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x3ab5a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x3ab5a8: 0xe7b400a8  swc1        $f20, 0xA8($sp)
    ctx->pc = 0x3ab5a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3ab5ac: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x3ab5acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x3ab5b0: 0xe7a50090  swc1        $f5, 0x90($sp)
    ctx->pc = 0x3ab5b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3ab5b4: 0xe7a400cc  swc1        $f4, 0xCC($sp)
    ctx->pc = 0x3ab5b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x3ab5b8: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB5B8u;
    {
        const bool branch_taken_0x3ab5b8 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x3AB5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB5B8u;
            // 0x3ab5bc: 0xe7a400b8  swc1        $f4, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab5b8) {
            ctx->pc = 0x3AB5CCu;
            goto label_3ab5cc;
        }
    }
    ctx->pc = 0x3AB5C0u;
    // 0x3ab5c0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3ab5c0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab5c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AB5C4u;
    {
        const bool branch_taken_0x3ab5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB5C4u;
            // 0x3ab5c8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab5c4) {
            ctx->pc = 0x3AB5E8u;
            goto label_3ab5e8;
        }
    }
    ctx->pc = 0x3AB5CCu;
label_3ab5cc:
    // 0x3ab5cc: 0x73042  srl         $a2, $a3, 1
    ctx->pc = 0x3ab5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x3ab5d0: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x3ab5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x3ab5d4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3ab5d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3ab5d8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3ab5d8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab5dc: 0x0  nop
    ctx->pc = 0x3ab5dcu;
    // NOP
    // 0x3ab5e0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3ab5e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ab5e4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3ab5e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3ab5e8:
    // 0x3ab5e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ab5e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab5ec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ab5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ab5f0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3ab5f0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3ab5f4: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x3ab5f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x3ab5f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ab5f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab5fc: 0x0  nop
    ctx->pc = 0x3ab5fcu;
    // NOP
    // 0x3ab600: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ab600u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ab604: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3AB604u;
    {
        const bool branch_taken_0x3ab604 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ab604) {
            ctx->pc = 0x3AB608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB604u;
            // 0x3ab608: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AB61Cu;
            goto label_3ab61c;
        }
    }
    ctx->pc = 0x3AB60Cu;
    // 0x3ab60c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ab60cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3ab610: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3ab610u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3ab614: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3AB614u;
    {
        const bool branch_taken_0x3ab614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB614u;
            // 0x3ab618: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab614) {
            ctx->pc = 0x3AB634u;
            goto label_3ab634;
        }
    }
    ctx->pc = 0x3AB61Cu;
label_3ab61c:
    // 0x3ab61c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ab61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ab620: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ab620u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3ab624: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3ab624u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3ab628: 0x0  nop
    ctx->pc = 0x3ab628u;
    // NOP
    // 0x3ab62c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3ab62cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3ab630: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x3ab630u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_3ab634:
    // 0x3ab634: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x3ab634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3ab638: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x3ab638u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
    // 0x3ab63c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3ab63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3ab640: 0x663024  and         $a2, $v1, $a2
    ctx->pc = 0x3ab640u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x3ab644: 0x63c02  srl         $a3, $a2, 16
    ctx->pc = 0x3ab644u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x3ab648: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x3ab648u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3ab64c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x3ab64cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3ab650: 0xe63023  subu        $a2, $a3, $a2
    ctx->pc = 0x3ab650u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x3ab654: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3ab654u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab658: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB658u;
    {
        const bool branch_taken_0x3ab658 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x3AB65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB658u;
            // 0x3ab65c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab658) {
            ctx->pc = 0x3AB66Cu;
            goto label_3ab66c;
        }
    }
    ctx->pc = 0x3AB660u;
    // 0x3ab660: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3ab660u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab664: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AB664u;
    {
        const bool branch_taken_0x3ab664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB664u;
            // 0x3ab668: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab664) {
            ctx->pc = 0x3AB688u;
            goto label_3ab688;
        }
    }
    ctx->pc = 0x3AB66Cu;
label_3ab66c:
    // 0x3ab66c: 0x53042  srl         $a2, $a1, 1
    ctx->pc = 0x3ab66cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x3ab670: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3ab670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3ab674: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x3ab674u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x3ab678: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3ab678u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab67c: 0x0  nop
    ctx->pc = 0x3ab67cu;
    // NOP
    // 0x3ab680: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3ab680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ab684: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3ab684u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3ab688:
    // 0x3ab688: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ab688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab68c: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x3ab68cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x3ab690: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3ab690u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3ab694: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x3ab694u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x3ab698: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3ab698u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab69c: 0x0  nop
    ctx->pc = 0x3ab69cu;
    // NOP
    // 0x3ab6a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ab6a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ab6a4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3AB6A4u;
    {
        const bool branch_taken_0x3ab6a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ab6a4) {
            ctx->pc = 0x3AB6A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB6A4u;
            // 0x3ab6a8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AB6BCu;
            goto label_3ab6bc;
        }
    }
    ctx->pc = 0x3AB6ACu;
    // 0x3ab6ac: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ab6acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3ab6b0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3ab6b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3ab6b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3AB6B4u;
    {
        const bool branch_taken_0x3ab6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB6B4u;
            // 0x3ab6b8: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab6b4) {
            ctx->pc = 0x3AB6D4u;
            goto label_3ab6d4;
        }
    }
    ctx->pc = 0x3AB6BCu;
label_3ab6bc:
    // 0x3ab6bc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3ab6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3ab6c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ab6c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3ab6c4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3ab6c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3ab6c8: 0x0  nop
    ctx->pc = 0x3ab6c8u;
    // NOP
    // 0x3ab6cc: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x3ab6ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x3ab6d0: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x3ab6d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_3ab6d4:
    // 0x3ab6d4: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x3ab6d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3ab6d8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x3ab6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x3ab6dc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3ab6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3ab6e0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3ab6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3ab6e4: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x3ab6e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3ab6e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ab6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ab6ec: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x3ab6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3ab6f0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3ab6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ab6f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ab6f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab6f8: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB6F8u;
    {
        const bool branch_taken_0x3ab6f8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3AB6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB6F8u;
            // 0x3ab6fc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab6f8) {
            ctx->pc = 0x3AB70Cu;
            goto label_3ab70c;
        }
    }
    ctx->pc = 0x3AB700u;
    // 0x3ab700: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ab700u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab704: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AB704u;
    {
        const bool branch_taken_0x3ab704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB704u;
            // 0x3ab708: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab704) {
            ctx->pc = 0x3AB728u;
            goto label_3ab728;
        }
    }
    ctx->pc = 0x3AB70Cu;
label_3ab70c:
    // 0x3ab70c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3ab70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3ab710: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3ab710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3ab714: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ab714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ab718: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ab718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab71c: 0x0  nop
    ctx->pc = 0x3ab71cu;
    // NOP
    // 0x3ab720: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3ab720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ab724: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3ab724u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3ab728:
    // 0x3ab728: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ab728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab72c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ab72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ab730: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3ab730u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3ab734: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x3ab734u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x3ab738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ab738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab73c: 0x0  nop
    ctx->pc = 0x3ab73cu;
    // NOP
    // 0x3ab740: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ab740u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ab744: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3AB744u;
    {
        const bool branch_taken_0x3ab744 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ab744) {
            ctx->pc = 0x3AB748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB744u;
            // 0x3ab748: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AB75Cu;
            goto label_3ab75c;
        }
    }
    ctx->pc = 0x3AB74Cu;
    // 0x3ab74c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ab74cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3ab750: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3ab750u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ab754: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3AB754u;
    {
        const bool branch_taken_0x3ab754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB754u;
            // 0x3ab758: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab754) {
            ctx->pc = 0x3AB774u;
            goto label_3ab774;
        }
    }
    ctx->pc = 0x3AB75Cu;
label_3ab75c:
    // 0x3ab75c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ab75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ab760: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ab760u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3ab764: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3ab764u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ab768: 0x0  nop
    ctx->pc = 0x3ab768u;
    // NOP
    // 0x3ab76c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ab76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ab770: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ab770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3ab774:
    // 0x3ab774: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3ab774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ab778: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x3ab778u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ab77c: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x3ab77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ab780: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ab780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ab784: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3ab784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3ab788: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3ab788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3ab78c: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x3ab78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x3ab790: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3ab790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3ab794: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3ab794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3ab798: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x3ab798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x3ab79c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x3ab79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x3ab7a0: 0xc050780  jal         func_141E00
    ctx->pc = 0x3AB7A0u;
    SET_GPR_U32(ctx, 31, 0x3AB7A8u);
    ctx->pc = 0x3AB7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB7A0u;
            // 0x3ab7a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E00u;
    if (runtime->hasFunction(0x141E00u)) {
        auto targetFn = runtime->lookupFunction(0x141E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AB7A8u; }
        if (ctx->pc != 0x3AB7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141E00_0x141e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AB7A8u; }
        if (ctx->pc != 0x3AB7A8u) { return; }
    }
    ctx->pc = 0x3AB7A8u;
label_3ab7a8:
    // 0x3ab7a8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3ab7a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3ab7ac: 0x2a830004  slti        $v1, $s4, 0x4
    ctx->pc = 0x3ab7acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3ab7b0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3ab7b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x3ab7b4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3ab7b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3ab7b8: 0x1460ff4d  bnez        $v1, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x3AB7B8u;
    {
        const bool branch_taken_0x3ab7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB7B8u;
            // 0x3ab7bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab7b8) {
            ctx->pc = 0x3AB4F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ab4f0;
        }
    }
    ctx->pc = 0x3AB7C0u;
    // 0x3ab7c0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3ab7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ab7c4: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3ab7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3ab7c8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3ab7c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ab7cc: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3ab7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3ab7d0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3ab7d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ab7d4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3ab7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3ab7d8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3ab7d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ab7dc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3ab7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3ab7e0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3ab7e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ab7e4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3ab7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ab7e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3ab7e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ab7ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3ab7ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ab7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3AB7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB7F0u;
            // 0x3ab7f4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AB7F8u;
    // 0x3ab7f8: 0x0  nop
    ctx->pc = 0x3ab7f8u;
    // NOP
    // 0x3ab7fc: 0x0  nop
    ctx->pc = 0x3ab7fcu;
    // NOP
}
