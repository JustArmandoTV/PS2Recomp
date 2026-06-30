#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A63A0
// Address: 0x3a63a0 - 0x3a6600
void sub_003A63A0_0x3a63a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A63A0_0x3a63a0");
#endif

    switch (ctx->pc) {
        case 0x3a6494u: goto label_3a6494;
        case 0x3a6500u: goto label_3a6500;
        case 0x3a6558u: goto label_3a6558;
        case 0x3a65c8u: goto label_3a65c8;
        default: break;
    }

    ctx->pc = 0x3a63a0u;

    // 0x3a63a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3a63a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3a63a4: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x3a63a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x3a63a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3a63a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3a63ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a63acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a63b0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3a63b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3a63b4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3a63b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3a63b8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x3a63b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a63bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3a63bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3a63c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a63c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3a63c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a63c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3a63c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a63c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a63cc: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x3a63ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
    // 0x3a63d0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3a63d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3a63d4: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x3a63d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
    // 0x3a63d8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3a63d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3a63dc: 0x26319bc0  addiu       $s1, $s1, -0x6440
    ctx->pc = 0x3a63dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941632));
    // 0x3a63e0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3a63e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3a63e4: 0x26102100  addiu       $s0, $s0, 0x2100
    ctx->pc = 0x3a63e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
    // 0x3a63e8: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x3a63e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a63ec: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x3a63ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a63f0: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x3a63f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3a63f4: 0xc4a0009c  lwc1        $f0, 0x9C($a1)
    ctx->pc = 0x3a63f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a63f8: 0x90830116  lbu         $v1, 0x116($a0)
    ctx->pc = 0x3a63f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 278)));
    // 0x3a63fc: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x3a63fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x3a6400: 0x16a20003  bne         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A6400u;
    {
        const bool branch_taken_0x3a6400 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A6404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6400u;
            // 0x3a6404: 0x24a40094  addiu       $a0, $a1, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6400) {
            ctx->pc = 0x3A6410u;
            goto label_3a6410;
        }
    }
    ctx->pc = 0x3A6408u;
    // 0x3a6408: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3a6408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a640c: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x3a640cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_3a6410:
    // 0x3a6410: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3a6410u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6414: 0x8649000e  lh          $t1, 0xE($s2)
    ctx->pc = 0x3a6414u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x3a6418: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x3a6418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x3a641c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3a641cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3a6420: 0x1155018  mult        $t2, $t0, $s5
    ctx->pc = 0x3a6420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3a6424: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3a6424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3a6428: 0x62a025  or          $s4, $v1, $v0
    ctx->pc = 0x3a6428u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a642c: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x3a642cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3a6430: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a6430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a6434: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3a6434u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a6438: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a6438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a643c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3a643cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6440: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3a6440u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a6444: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a6444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6448: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x3a6448u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a644c: 0x0  nop
    ctx->pc = 0x3a644cu;
    // NOP
    // 0x3a6450: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a6450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a6454: 0x4600b541  sub.s       $f21, $f22, $f0
    ctx->pc = 0x3a6454u;
    ctx->f[21] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x3a6458: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3a6458u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a645c: 0x0  nop
    ctx->pc = 0x3a645cu;
    // NOP
    // 0x3a6460: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a6460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a6464: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x3a6464u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3a6468: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a6468u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a646c: 0x0  nop
    ctx->pc = 0x3a646cu;
    // NOP
    // 0x3a6470: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a6470u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a6474: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a6474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6478: 0x0  nop
    ctx->pc = 0x3a6478u;
    // NOP
    // 0x3a647c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a647cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a6480: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x3a6480u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x3a6484: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x3a6484u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x3a6488: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a6488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a648c: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A648Cu;
    SET_GPR_U32(ctx, 31, 0x3A6494u);
    ctx->pc = 0x3A6490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A648Cu;
            // 0x3a6490: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A6494u; }
        if (ctx->pc != 0x3A6494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A6494u; }
        if (ctx->pc != 0x3A6494u) { return; }
    }
    ctx->pc = 0x3A6494u;
label_3a6494:
    // 0x3a6494: 0x8644000e  lh          $a0, 0xE($s2)
    ctx->pc = 0x3a6494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x3a6498: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a6498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a649c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a649cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a64a0: 0x26330080  addiu       $s3, $s1, 0x80
    ctx->pc = 0x3a64a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x3a64a4: 0x86480010  lh          $t0, 0x10($s2)
    ctx->pc = 0x3a64a4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3a64a8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3a64a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3a64ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a64acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a64b0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x3a64b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a64b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a64b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a64b8: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x3a64b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a64bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a64bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a64c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a64c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a64c4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3a64c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a64c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a64c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a64cc: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x3a64ccu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3a64d0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a64d0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a64d4: 0x0  nop
    ctx->pc = 0x3a64d4u;
    // NOP
    // 0x3a64d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a64d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a64dc: 0x460d03c0  add.s       $f15, $f0, $f13
    ctx->pc = 0x3a64dcu;
    ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x3a64e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a64e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a64e4: 0x0  nop
    ctx->pc = 0x3a64e4u;
    // NOP
    // 0x3a64e8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a64e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a64ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a64ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a64f0: 0x0  nop
    ctx->pc = 0x3a64f0u;
    // NOP
    // 0x3a64f4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a64f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a64f8: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A64F8u;
    SET_GPR_U32(ctx, 31, 0x3A6500u);
    ctx->pc = 0x3A64FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A64F8u;
            // 0x3a64fc: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A6500u; }
        if (ctx->pc != 0x3A6500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A6500u; }
        if (ctx->pc != 0x3A6500u) { return; }
    }
    ctx->pc = 0x3A6500u;
label_3a6500:
    // 0x3a6500: 0x86460010  lh          $a2, 0x10($s2)
    ctx->pc = 0x3a6500u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3a6504: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a6504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a6508: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a6508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a650c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x3a650cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a6510: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x3a6510u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a6514: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x3a6514u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x3a6518: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3a6518u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a651c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a651cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6520: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a6520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a6524: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a6524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a6528: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3a6528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a652c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a652cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6530: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x3a6530u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3a6534: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a6534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6538: 0x0  nop
    ctx->pc = 0x3a6538u;
    // NOP
    // 0x3a653c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a653cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a6540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a6540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6544: 0x0  nop
    ctx->pc = 0x3a6544u;
    // NOP
    // 0x3a6548: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a6548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a654c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3a654cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3a6550: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A6550u;
    SET_GPR_U32(ctx, 31, 0x3A6558u);
    ctx->pc = 0x3A6554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6550u;
            // 0x3a6554: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A6558u; }
        if (ctx->pc != 0x3A6558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A6558u; }
        if (ctx->pc != 0x3A6558u) { return; }
    }
    ctx->pc = 0x3A6558u;
label_3a6558:
    // 0x3a6558: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x3a6558u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a655c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a655cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a6560: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3a6560u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3a6564: 0x8649000e  lh          $t1, 0xE($s2)
    ctx->pc = 0x3a6564u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x3a6568: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3a6568u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a656c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3a656cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6570: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3a6570u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a6574: 0x26250290  addiu       $a1, $s1, 0x290
    ctx->pc = 0x3a6574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x3a6578: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a6578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a657c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a657cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6580: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3a6580u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6584: 0x0  nop
    ctx->pc = 0x3a6584u;
    // NOP
    // 0x3a6588: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a6588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a658c: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x3a658cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3a6590: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a6590u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6594: 0x0  nop
    ctx->pc = 0x3a6594u;
    // NOP
    // 0x3a6598: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a6598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a659c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a659cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a65a0: 0x0  nop
    ctx->pc = 0x3a65a0u;
    // NOP
    // 0x3a65a4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a65a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a65a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a65a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a65ac: 0xc6220298  lwc1        $f2, 0x298($s1)
    ctx->pc = 0x3a65acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a65b0: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3a65b0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x3a65b4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3a65b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3a65b8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x3a65b8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x3a65bc: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a65bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a65c0: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A65C0u;
    SET_GPR_U32(ctx, 31, 0x3A65C8u);
    ctx->pc = 0x3A65C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A65C0u;
            // 0x3a65c4: 0x4601139d  msub.s      $f14, $f2, $f1 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A65C8u; }
        if (ctx->pc != 0x3A65C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A65C8u; }
        if (ctx->pc != 0x3A65C8u) { return; }
    }
    ctx->pc = 0x3A65C8u;
label_3a65c8:
    // 0x3a65c8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3a65c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a65cc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3a65ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3a65d0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3a65d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a65d4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3a65d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3a65d8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3a65d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a65dc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3a65dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a65e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3a65e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a65e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a65e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a65e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a65e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a65ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a65ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a65f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A65F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A65F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A65F0u;
            // 0x3a65f4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A65F8u;
    // 0x3a65f8: 0x0  nop
    ctx->pc = 0x3a65f8u;
    // NOP
    // 0x3a65fc: 0x0  nop
    ctx->pc = 0x3a65fcu;
    // NOP
}
