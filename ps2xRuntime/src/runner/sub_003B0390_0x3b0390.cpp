#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B0390
// Address: 0x3b0390 - 0x3b0690
void sub_003B0390_0x3b0390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0390_0x3b0390");
#endif

    switch (ctx->pc) {
        case 0x3b04d4u: goto label_3b04d4;
        case 0x3b056cu: goto label_3b056c;
        case 0x3b0600u: goto label_3b0600;
        case 0x3b0664u: goto label_3b0664;
        default: break;
    }

    ctx->pc = 0x3b0390u;

    // 0x3b0390: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b0390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3b0394: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b0394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b0398: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3b0398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3b039c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3b039cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b03a0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3b03a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3b03a4: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x3b03a4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b03a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3b03a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3b03ac: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x3b03acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3b03b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3b03b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3b03b4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3b03b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b03b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b03b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3b03bc: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3b03bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x3b03c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b03c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3b03c4: 0x24a59c30  addiu       $a1, $a1, -0x63D0
    ctx->pc = 0x3b03c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941744));
    // 0x3b03c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b03c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b03cc: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x3b03ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
    // 0x3b03d0: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x3b03d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
    // 0x3b03d4: 0x26529bc0  addiu       $s2, $s2, -0x6440
    ctx->pc = 0x3b03d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941632));
    // 0x3b03d8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3b03d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b03dc: 0x26102100  addiu       $s0, $s0, 0x2100
    ctx->pc = 0x3b03dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
    // 0x3b03e0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b03e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b03e4: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x3b03e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b03e8: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x3b03e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3b03ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b03ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b03f0: 0x82290004  lb          $t1, 0x4($s1)
    ctx->pc = 0x3b03f0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3b03f4: 0x90660116  lbu         $a2, 0x116($v1)
    ctx->pc = 0x3b03f4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 278)));
    // 0x3b03f8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x3b03f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x3b03fc: 0x24849e50  addiu       $a0, $a0, -0x61B0
    ctx->pc = 0x3b03fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942288));
    // 0x3b0400: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x3b0400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3b0404: 0x82230003  lb          $v1, 0x3($s1)
    ctx->pc = 0x3b0404u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3b0408: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3b0408u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b040c: 0x0  nop
    ctx->pc = 0x3b040cu;
    // NOP
    // 0x3b0410: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x3b0410u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x3b0414: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x3b0414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b0418: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b0418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b041c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3b041cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b0420: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x3b0420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3b0424: 0x46051018  adda.s      $f2, $f5
    ctx->pc = 0x3b0424u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x3b0428: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b0428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b042c: 0x4603201e  madda.s     $f4, $f3
    ctx->pc = 0x3b042cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x3b0430: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3b0430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0434: 0x4603601e  madda.s     $f12, $f3
    ctx->pc = 0x3b0434u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[3]));
    // 0x3b0438: 0x4603085c  madd.s      $f1, $f1, $f3
    ctx->pc = 0x3b0438u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x3b043c: 0x15020007  bne         $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B043Cu;
    {
        const bool branch_taken_0x3b043c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B0440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B043Cu;
            // 0x3b0440: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b043c) {
            ctx->pc = 0x3B045Cu;
            goto label_3b045c;
        }
    }
    ctx->pc = 0x3B0444u;
    // 0x3b0444: 0x82220005  lb          $v0, 0x5($s1)
    ctx->pc = 0x3b0444u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x3b0448: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b0448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b044c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b044cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b0450: 0x0  nop
    ctx->pc = 0x3b0450u;
    // NOP
    // 0x3b0454: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b0454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b0458: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x3b0458u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_3b045c:
    // 0x3b045c: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x3b045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0460: 0x82290005  lb          $t1, 0x5($s1)
    ctx->pc = 0x3b0460u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x3b0464: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x3b0464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0468: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3b0468u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b046c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x3b046cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3b0470: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3b0470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3b0474: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b0474u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b0478: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x3b0478u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b047c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b047cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3b0480: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3b0480u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3b0484: 0x26450600  addiu       $a1, $s2, 0x600
    ctx->pc = 0x3b0484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1536));
    // 0x3b0488: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b0488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b048c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b048cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0490: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b0490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0494: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x3b0494u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x3b0498: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x3b0498u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b049c: 0x0  nop
    ctx->pc = 0x3b049cu;
    // NOP
    // 0x3b04a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3b04a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3b04a4: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x3b04a4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x3b04a8: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x3b04a8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b04ac: 0x0  nop
    ctx->pc = 0x3b04acu;
    // NOP
    // 0x3b04b0: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x3b04b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3b04b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b04b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b04b8: 0x0  nop
    ctx->pc = 0x3b04b8u;
    // NOP
    // 0x3b04bc: 0x46800c60  cvt.s.w     $f17, $f1
    ctx->pc = 0x3b04bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3b04c0: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3b04c0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3b04c4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b04c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3b04c8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b04c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3b04cc: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3B04CCu;
    SET_GPR_U32(ctx, 31, 0x3B04D4u);
    ctx->pc = 0x3B04D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B04CCu;
            // 0x3b04d0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B04D4u; }
        if (ctx->pc != 0x3B04D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B04D4u; }
        if (ctx->pc != 0x3B04D4u) { return; }
    }
    ctx->pc = 0x3B04D4u;
label_3b04d4:
    // 0x3b04d4: 0x82230005  lb          $v1, 0x5($s1)
    ctx->pc = 0x3b04d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x3b04d8: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x3b04d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x3b04dc: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x3b04dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x3b04e0: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x3b04e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b04e4: 0x550018  mult        $zero, $v0, $s5
    ctx->pc = 0x3b04e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b04e8: 0x154fc2  srl         $t1, $s5, 31
    ctx->pc = 0x3b04e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x3b04ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b04ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b04f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b04f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b04f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3b04f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3b04f8: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3b04f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3b04fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b04fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0500: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b0500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0504: 0x4010  mfhi        $t0
    ctx->pc = 0x3b0504u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x3b0508: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b0508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3b050c: 0x84143  sra         $t0, $t0, 5
    ctx->pc = 0x3b050cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 5));
    // 0x3b0510: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x3b0510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x3b0514: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3b0514u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b0518: 0x0  nop
    ctx->pc = 0x3b0518u;
    // NOP
    // 0x3b051c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b051cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3b0520: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x3b0520u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3b0524: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x3b0524u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x3b0528: 0x2505001d  addiu       $a1, $t0, 0x1D
    ctx->pc = 0x3b0528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 29));
    // 0x3b052c: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x3b052cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3b0530: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3b0530u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3b0534: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x3b0534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x3b0538: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x3b0538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x3b053c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x3b053cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3b0540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b0540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b0544: 0x2a8a823  subu        $s5, $s5, $t0
    ctx->pc = 0x3b0544u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 8)));
    // 0x3b0548: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b0548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3b054c: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x3b054cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x3b0550: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x3b0550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0554: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x3b0554u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x3b0558: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3b0558u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3b055c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3b055cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3b0560: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b0560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3b0564: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3B0564u;
    SET_GPR_U32(ctx, 31, 0x3B056Cu);
    ctx->pc = 0x3B0568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0564u;
            // 0x3b0568: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B056Cu; }
        if (ctx->pc != 0x3B056Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B056Cu; }
        if (ctx->pc != 0x3B056Cu) { return; }
    }
    ctx->pc = 0x3B056Cu;
label_3b056c:
    // 0x3b056c: 0x82230005  lb          $v1, 0x5($s1)
    ctx->pc = 0x3b056cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x3b0570: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3b0570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3b0574: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3b0574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3b0578: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x3b0578u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b057c: 0x550018  mult        $zero, $v0, $s5
    ctx->pc = 0x3b057cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b0580: 0x154fc2  srl         $t1, $s5, 31
    ctx->pc = 0x3b0580u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x3b0584: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b0584u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b0588: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b0588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b058c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3b058cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3b0590: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3b0590u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3b0594: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b0594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0598: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b0598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b059c: 0x4010  mfhi        $t0
    ctx->pc = 0x3b059cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x3b05a0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b05a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3b05a4: 0x84083  sra         $t0, $t0, 2
    ctx->pc = 0x3b05a4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 2));
    // 0x3b05a8: 0x1094821  addu        $t1, $t0, $t1
    ctx->pc = 0x3b05a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x3b05ac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3b05acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b05b0: 0x0  nop
    ctx->pc = 0x3b05b0u;
    // NOP
    // 0x3b05b4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b05b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3b05b8: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x3b05b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3b05bc: 0xa94021  addu        $t0, $a1, $t1
    ctx->pc = 0x3b05bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3b05c0: 0x2525001d  addiu       $a1, $t1, 0x1D
    ctx->pc = 0x3b05c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 29));
    // 0x3b05c4: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x3b05c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3b05c8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3b05c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3b05cc: 0x2a8a823  subu        $s5, $s5, $t0
    ctx->pc = 0x3b05ccu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 8)));
    // 0x3b05d0: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x3b05d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x3b05d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b05d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b05d8: 0x0  nop
    ctx->pc = 0x3b05d8u;
    // NOP
    // 0x3b05dc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b05dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3b05e0: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x3b05e0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x3b05e4: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x3b05e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b05e8: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x3b05e8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x3b05ec: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3b05ecu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3b05f0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3b05f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3b05f4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b05f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3b05f8: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3B05F8u;
    SET_GPR_U32(ctx, 31, 0x3B0600u);
    ctx->pc = 0x3B05FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B05F8u;
            // 0x3b05fc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0600u; }
        if (ctx->pc != 0x3B0600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0600u; }
        if (ctx->pc != 0x3B0600u) { return; }
    }
    ctx->pc = 0x3B0600u;
label_3b0600:
    // 0x3b0600: 0x82230005  lb          $v1, 0x5($s1)
    ctx->pc = 0x3b0600u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x3b0604: 0x26a2001d  addiu       $v0, $s5, 0x1D
    ctx->pc = 0x3b0604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 29));
    // 0x3b0608: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3b0608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3b060c: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3b060cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b0610: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x3b0610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3b0614: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b0614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b0618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b061c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b061cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3b0620: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b0620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b0624: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3b0624u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3b0628: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b0628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b062c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b062cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0630: 0x4600ab00  add.s       $f12, $f21, $f0
    ctx->pc = 0x3b0630u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x3b0634: 0x46006380  add.s       $f14, $f12, $f0
    ctx->pc = 0x3b0634u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x3b0638: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3b0638u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b063c: 0x0  nop
    ctx->pc = 0x3b063cu;
    // NOP
    // 0x3b0640: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b0640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3b0644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b0644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b0648: 0x0  nop
    ctx->pc = 0x3b0648u;
    // NOP
    // 0x3b064c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b064cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3b0650: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x3b0650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0654: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3b0654u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3b0658: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b0658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3b065c: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3B065Cu;
    SET_GPR_U32(ctx, 31, 0x3B0664u);
    ctx->pc = 0x3B0660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B065Cu;
            // 0x3b0660: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0664u; }
        if (ctx->pc != 0x3B0664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0664u; }
        if (ctx->pc != 0x3B0664u) { return; }
    }
    ctx->pc = 0x3B0664u;
label_3b0664:
    // 0x3b0664: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3b0664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b0668: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3b0668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3b066c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3b066cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b0670: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b0670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b0674: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3b0674u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b0678: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3b0678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b067c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b067cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b0680: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b0680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b0684: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b0684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b0688: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B068Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0688u;
            // 0x3b068c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B0690u;
}
