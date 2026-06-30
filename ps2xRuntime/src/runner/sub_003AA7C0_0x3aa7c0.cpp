#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AA7C0
// Address: 0x3aa7c0 - 0x3aaa10
void sub_003AA7C0_0x3aa7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA7C0_0x3aa7c0");
#endif

    switch (ctx->pc) {
        case 0x3aa990u: goto label_3aa990;
        case 0x3aa9dcu: goto label_3aa9dc;
        default: break;
    }

    ctx->pc = 0x3aa7c0u;

    // 0x3aa7c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3aa7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3aa7c4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x3aa7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x3aa7c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3aa7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3aa7cc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3aa7ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa7d0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3aa7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3aa7d4: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x3aa7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x3aa7d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3aa7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3aa7dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3aa7dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3aa7e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3aa7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3aa7e4: 0x24639bc0  addiu       $v1, $v1, -0x6440
    ctx->pc = 0x3aa7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941632));
    // 0x3aa7e8: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x3aa7e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
    // 0x3aa7ec: 0x26102100  addiu       $s0, $s0, 0x2100
    ctx->pc = 0x3aa7ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
    // 0x3aa7f0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3aa7f0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3aa7f4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3aa7f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3aa7f8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3aa7f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3aa7fc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3aa7fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3aa800: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3aa800u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3aa804: 0x8c890034  lw          $t1, 0x34($a0)
    ctx->pc = 0x3aa804u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3aa808: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x3aa808u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3aa80c: 0x908b0028  lbu         $t3, 0x28($a0)
    ctx->pc = 0x3aa80cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3aa810: 0x912a0000  lbu         $t2, 0x0($t1)
    ctx->pc = 0x3aa810u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3aa814: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x3aa814u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x3aa818: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x3aa818u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x3aa81c: 0x91290001  lbu         $t1, 0x1($t1)
    ctx->pc = 0x3aa81cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x3aa820: 0xca3023  subu        $a2, $a2, $t2
    ctx->pc = 0x3aa820u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3aa824: 0xc5640008  lwc1        $f4, 0x8($t3)
    ctx->pc = 0x3aa824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3aa828: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x3aa828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x3aa82c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3aa82cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa830: 0x0  nop
    ctx->pc = 0x3aa830u;
    // NOP
    // 0x3aa834: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x3aa834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x3aa838: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3aa838u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa83c: 0x0  nop
    ctx->pc = 0x3aa83cu;
    // NOP
    // 0x3aa840: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3aa840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3aa844: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3aa844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa848: 0x0  nop
    ctx->pc = 0x3aa848u;
    // NOP
    // 0x3aa84c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3aa84cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3aa850: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA850u;
    {
        const bool branch_taken_0x3aa850 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x3AA854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA850u;
            // 0x3aa854: 0x4602259c  madd.s      $f22, $f4, $f2 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa850) {
            ctx->pc = 0x3AA864u;
            goto label_3aa864;
        }
    }
    ctx->pc = 0x3AA858u;
    // 0x3aa858: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3aa858u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa85c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AA85Cu;
    {
        const bool branch_taken_0x3aa85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA85Cu;
            // 0x3aa860: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa85c) {
            ctx->pc = 0x3AA880u;
            goto label_3aa880;
        }
    }
    ctx->pc = 0x3AA864u;
label_3aa864:
    // 0x3aa864: 0x93042  srl         $a2, $t1, 1
    ctx->pc = 0x3aa864u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x3aa868: 0x31250001  andi        $a1, $t1, 0x1
    ctx->pc = 0x3aa868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x3aa86c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x3aa86cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x3aa870: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3aa870u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa874: 0x0  nop
    ctx->pc = 0x3aa874u;
    // NOP
    // 0x3aa878: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3aa878u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3aa87c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3aa87cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3aa880:
    // 0x3aa880: 0x5420004  bltzl       $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA880u;
    {
        const bool branch_taken_0x3aa880 = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x3aa880) {
            ctx->pc = 0x3AA884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA880u;
            // 0x3aa884: 0xa3042  srl         $a2, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AA894u;
            goto label_3aa894;
        }
    }
    ctx->pc = 0x3AA888u;
    // 0x3aa888: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x3aa888u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa88c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3AA88Cu;
    {
        const bool branch_taken_0x3aa88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA88Cu;
            // 0x3aa890: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa88c) {
            ctx->pc = 0x3AA8ACu;
            goto label_3aa8ac;
        }
    }
    ctx->pc = 0x3AA894u;
label_3aa894:
    // 0x3aa894: 0x31450001  andi        $a1, $t2, 0x1
    ctx->pc = 0x3aa894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x3aa898: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x3aa898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x3aa89c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3aa89cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa8a0: 0x0  nop
    ctx->pc = 0x3aa8a0u;
    // NOP
    // 0x3aa8a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3aa8a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3aa8a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3aa8a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3aa8ac:
    // 0x3aa8ac: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x3aa8acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3aa8b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3aa8b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa8b4: 0x0  nop
    ctx->pc = 0x3aa8b4u;
    // NOP
    // 0x3aa8b8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3aa8b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3aa8bc: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x3aa8bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x3aa8c0: 0x90c60116  lbu         $a2, 0x116($a2)
    ctx->pc = 0x3aa8c0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 278)));
    // 0x3aa8c4: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x3aa8c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3aa8c8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AA8C8u;
    {
        const bool branch_taken_0x3aa8c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA8C8u;
            // 0x3aa8cc: 0x46021d1d  msub.s      $f20, $f3, $f2 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa8c8) {
            ctx->pc = 0x3AA8D4u;
            goto label_3aa8d4;
        }
    }
    ctx->pc = 0x3AA8D0u;
    // 0x3aa8d0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3aa8d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3aa8d4:
    // 0x3aa8d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3aa8d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa8d8: 0x0  nop
    ctx->pc = 0x3aa8d8u;
    // NOP
    // 0x3aa8dc: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x3aa8dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3aa8e0: 0x4503003f  bc1tl       . + 4 + (0x3F << 2)
    ctx->pc = 0x3AA8E0u;
    {
        const bool branch_taken_0x3aa8e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3aa8e0) {
            ctx->pc = 0x3AA8E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA8E0u;
            // 0x3aa8e4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AA9E0u;
            goto label_3aa9e0;
        }
    }
    ctx->pc = 0x3AA8E8u;
    // 0x3aa8e8: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA8E8u;
    {
        const bool branch_taken_0x3aa8e8 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x3aa8e8) {
            ctx->pc = 0x3AA8ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA8E8u;
            // 0x3aa8ec: 0x92842  srl         $a1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AA8FCu;
            goto label_3aa8fc;
        }
    }
    ctx->pc = 0x3AA8F0u;
    // 0x3aa8f0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3aa8f0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa8f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3AA8F4u;
    {
        const bool branch_taken_0x3aa8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA8F4u;
            // 0x3aa8f8: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa8f4) {
            ctx->pc = 0x3AA914u;
            goto label_3aa914;
        }
    }
    ctx->pc = 0x3AA8FCu;
label_3aa8fc:
    // 0x3aa8fc: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x3aa8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x3aa900: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3aa900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3aa904: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3aa904u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa908: 0x0  nop
    ctx->pc = 0x3aa908u;
    // NOP
    // 0x3aa90c: 0x46800620  cvt.s.w     $f24, $f0
    ctx->pc = 0x3aa90cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
    // 0x3aa910: 0x4618c600  add.s       $f24, $f24, $f24
    ctx->pc = 0x3aa910u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[24]);
label_3aa914:
    // 0x3aa914: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x3aa914u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3aa918: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x3aa918u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x3aa91c: 0x9084002b  lbu         $a0, 0x2B($a0)
    ctx->pc = 0x3aa91cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 43)));
    // 0x3aa920: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3aa920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3aa924: 0xc28825  or          $s1, $a2, $v0
    ctx->pc = 0x3aa924u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3aa928: 0x86080002  lh          $t0, 0x2($s0)
    ctx->pc = 0x3aa928u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3aa92c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3aa92cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa930: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3aa930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3aa934: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3aa934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3aa938: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3aa938u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3aa93c: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x3aa93cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3aa940: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3aa940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa944: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3aa944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aa948: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3aa948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa94c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3aa94cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa950: 0x0  nop
    ctx->pc = 0x3aa950u;
    // NOP
    // 0x3aa954: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3aa954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3aa958: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3aa958u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa95c: 0x0  nop
    ctx->pc = 0x3aa95cu;
    // NOP
    // 0x3aa960: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3aa960u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3aa964: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3aa964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa968: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3aa968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa96c: 0x0  nop
    ctx->pc = 0x3aa96cu;
    // NOP
    // 0x3aa970: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x3aa970u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x3aa974: 0x460165dc  madd.s      $f23, $f12, $f1
    ctx->pc = 0x3aa974u;
    ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[1]));
    // 0x3aa978: 0x4618abc1  sub.s       $f15, $f21, $f24
    ctx->pc = 0x3aa978u;
    ctx->f[15] = FPU_SUB_S(ctx->f[21], ctx->f[24]);
    // 0x3aa97c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3aa97cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x3aa980: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3aa980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3aa984: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3aa984u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3aa988: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AA988u;
    SET_GPR_U32(ctx, 31, 0x3AA990u);
    ctx->pc = 0x3AA98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA988u;
            // 0x3aa98c: 0x4600bb86  mov.s       $f14, $f23 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA990u; }
        if (ctx->pc != 0x3AA990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA990u; }
        if (ctx->pc != 0x3AA990u) { return; }
    }
    ctx->pc = 0x3AA990u;
label_3aa990:
    // 0x3aa990: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3aa990u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3aa994: 0x4614ab40  add.s       $f13, $f21, $f20
    ctx->pc = 0x3aa994u;
    ctx->f[13] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x3aa998: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3aa998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3aa99c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3aa99cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3aa9a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3aa9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa9a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3aa9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa9a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3aa9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aa9ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3aa9acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa9b0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3aa9b0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa9b4: 0x0  nop
    ctx->pc = 0x3aa9b4u;
    // NOP
    // 0x3aa9b8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3aa9b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3aa9bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3aa9bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa9c0: 0x0  nop
    ctx->pc = 0x3aa9c0u;
    // NOP
    // 0x3aa9c4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3aa9c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3aa9c8: 0x460dc3c0  add.s       $f15, $f24, $f13
    ctx->pc = 0x3aa9c8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[24], ctx->f[13]);
    // 0x3aa9cc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3aa9ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3aa9d0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3aa9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3aa9d4: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AA9D4u;
    SET_GPR_U32(ctx, 31, 0x3AA9DCu);
    ctx->pc = 0x3AA9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA9D4u;
            // 0x3aa9d8: 0x4600bb86  mov.s       $f14, $f23 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA9DCu; }
        if (ctx->pc != 0x3AA9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA9DCu; }
        if (ctx->pc != 0x3AA9DCu) { return; }
    }
    ctx->pc = 0x3AA9DCu;
label_3aa9dc:
    // 0x3aa9dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3aa9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3aa9e0:
    // 0x3aa9e0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3aa9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3aa9e4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3aa9e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3aa9e8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3aa9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3aa9ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3aa9ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3aa9f0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3aa9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3aa9f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3aa9f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3aa9f8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3aa9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3aa9fc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3aa9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3aaa00: 0x3e00008  jr          $ra
    ctx->pc = 0x3AAA00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AAA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AAA00u;
            // 0x3aaa04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AAA08u;
    // 0x3aaa08: 0x0  nop
    ctx->pc = 0x3aaa08u;
    // NOP
    // 0x3aaa0c: 0x0  nop
    ctx->pc = 0x3aaa0cu;
    // NOP
}
