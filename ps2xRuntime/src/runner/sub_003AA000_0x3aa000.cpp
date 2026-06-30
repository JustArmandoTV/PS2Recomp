#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AA000
// Address: 0x3aa000 - 0x3aa490
void sub_003AA000_0x3aa000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA000_0x3aa000");
#endif

    switch (ctx->pc) {
        case 0x3aa250u: goto label_3aa250;
        case 0x3aa2acu: goto label_3aa2ac;
        case 0x3aa2b8u: goto label_3aa2b8;
        case 0x3aa36cu: goto label_3aa36c;
        case 0x3aa3e8u: goto label_3aa3e8;
        case 0x3aa43cu: goto label_3aa43c;
        default: break;
    }

    ctx->pc = 0x3aa000u;

    // 0x3aa000: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3aa000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3aa004: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3aa004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x3aa008: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3aa008u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa00c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x3aa00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x3aa010: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3aa010u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3aa014: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x3aa014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x3aa018: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3aa018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x3aa01c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3aa01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x3aa020: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3aa020u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa024: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3aa024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3aa028: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3aa028u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa02c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3aa02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3aa030: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x3aa030u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa034: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3aa034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3aa038: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3aa038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3aa03c: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x3aa03cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
    // 0x3aa040: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3aa040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3aa044: 0x26529bc0  addiu       $s2, $s2, -0x6440
    ctx->pc = 0x3aa044u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941632));
    // 0x3aa048: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x3aa048u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3aa04c: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x3aa04cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
    // 0x3aa050: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x3aa050u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3aa054: 0x26102100  addiu       $s0, $s0, 0x2100
    ctx->pc = 0x3aa054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
    // 0x3aa058: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3aa058u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3aa05c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3aa05cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3aa060: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3aa060u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3aa064: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3aa064u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3aa068: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3aa068u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3aa06c: 0x8c910034  lw          $s1, 0x34($a0)
    ctx->pc = 0x3aa06cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3aa070: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x3aa070u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x3aa074: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3aa074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3aa078: 0x90830028  lbu         $v1, 0x28($a0)
    ctx->pc = 0x3aa078u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3aa07c: 0x82250002  lb          $a1, 0x2($s1)
    ctx->pc = 0x3aa07cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3aa080: 0x90570116  lbu         $s7, 0x116($v0)
    ctx->pc = 0x3aa080u;
    SET_GPR_U32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
    // 0x3aa084: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3aa084u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3aa088: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3aa088u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa08c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x3aa08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x3aa090: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3aa090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3aa094: 0x82230003  lb          $v1, 0x3($s1)
    ctx->pc = 0x3aa094u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3aa098: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x3aa098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x3aa09c: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x3aa09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3aa0a0: 0x460010c0  add.s       $f3, $f2, $f0
    ctx->pc = 0x3aa0a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3aa0a4: 0x92240018  lbu         $a0, 0x18($s1)
    ctx->pc = 0x3aa0a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3aa0a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3aa0a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa0ac: 0x0  nop
    ctx->pc = 0x3aa0acu;
    // NOP
    // 0x3aa0b0: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x3aa0b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x3aa0b4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3aa0b4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa0b8: 0x0  nop
    ctx->pc = 0x3aa0b8u;
    // NOP
    // 0x3aa0bc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3aa0bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3aa0c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3aa0c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa0c4: 0x0  nop
    ctx->pc = 0x3aa0c4u;
    // NOP
    // 0x3aa0c8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3aa0c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3aa0cc: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA0CCu;
    {
        const bool branch_taken_0x3aa0cc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3AA0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA0CCu;
            // 0x3aa0d0: 0x4603151c  madd.s      $f20, $f2, $f3 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa0cc) {
            ctx->pc = 0x3AA0E0u;
            goto label_3aa0e0;
        }
    }
    ctx->pc = 0x3AA0D4u;
    // 0x3aa0d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3aa0d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa0d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AA0D8u;
    {
        const bool branch_taken_0x3aa0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA0D8u;
            // 0x3aa0dc: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa0d8) {
            ctx->pc = 0x3AA0FCu;
            goto label_3aa0fc;
        }
    }
    ctx->pc = 0x3AA0E0u;
label_3aa0e0:
    // 0x3aa0e0: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3aa0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3aa0e4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3aa0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3aa0e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3aa0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3aa0ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3aa0ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa0f0: 0x0  nop
    ctx->pc = 0x3aa0f0u;
    // NOP
    // 0x3aa0f4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3aa0f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3aa0f8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3aa0f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3aa0fc:
    // 0x3aa0fc: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x3aa0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3aa100: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3aa100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x3aa104: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x3aa104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3aa108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3aa108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa10c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3aa10cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3aa110: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3aa110u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3aa114: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3aa114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3aa118: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3aa118u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3aa11c: 0x441e0000  mfc1        $fp, $f0
    ctx->pc = 0x3aa11cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 30, bits); }
    // 0x3aa120: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA120u;
    {
        const bool branch_taken_0x3aa120 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3aa120) {
            ctx->pc = 0x3AA124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA120u;
            // 0x3aa124: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AA134u;
            goto label_3aa134;
        }
    }
    ctx->pc = 0x3AA128u;
    // 0x3aa128: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3aa128u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa12c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3AA12Cu;
    {
        const bool branch_taken_0x3aa12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA12Cu;
            // 0x3aa130: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa12c) {
            ctx->pc = 0x3AA14Cu;
            goto label_3aa14c;
        }
    }
    ctx->pc = 0x3AA134u;
label_3aa134:
    // 0x3aa134: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3aa134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3aa138: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3aa138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3aa13c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3aa13cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa140: 0x0  nop
    ctx->pc = 0x3aa140u;
    // NOP
    // 0x3aa144: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3aa144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3aa148: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3aa148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3aa14c:
    // 0x3aa14c: 0x92220019  lbu         $v0, 0x19($s1)
    ctx->pc = 0x3aa14cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x3aa150: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA150u;
    {
        const bool branch_taken_0x3aa150 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AA154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA150u;
            // 0x3aa154: 0x461805c2  mul.s       $f23, $f0, $f24 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa150) {
            ctx->pc = 0x3AA164u;
            goto label_3aa164;
        }
    }
    ctx->pc = 0x3AA158u;
    // 0x3aa158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3aa158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa15c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AA15Cu;
    {
        const bool branch_taken_0x3aa15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA15Cu;
            // 0x3aa160: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa15c) {
            ctx->pc = 0x3AA180u;
            goto label_3aa180;
        }
    }
    ctx->pc = 0x3AA164u;
label_3aa164:
    // 0x3aa164: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3aa164u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3aa168: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3aa168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3aa16c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3aa16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3aa170: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3aa170u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa174: 0x0  nop
    ctx->pc = 0x3aa174u;
    // NOP
    // 0x3aa178: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3aa178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3aa17c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3aa17cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3aa180:
    // 0x3aa180: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA180u;
    {
        const bool branch_taken_0x3aa180 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3AA184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA180u;
            // 0x3aa184: 0x46180582  mul.s       $f22, $f0, $f24 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa180) {
            ctx->pc = 0x3AA194u;
            goto label_3aa194;
        }
    }
    ctx->pc = 0x3AA188u;
    // 0x3aa188: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3aa188u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa18c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AA18Cu;
    {
        const bool branch_taken_0x3aa18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA18Cu;
            // 0x3aa190: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa18c) {
            ctx->pc = 0x3AA1B0u;
            goto label_3aa1b0;
        }
    }
    ctx->pc = 0x3AA194u;
label_3aa194:
    // 0x3aa194: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3aa194u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3aa198: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3aa198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3aa19c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3aa19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3aa1a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3aa1a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa1a4: 0x0  nop
    ctx->pc = 0x3aa1a4u;
    // NOP
    // 0x3aa1a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3aa1a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3aa1ac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3aa1acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3aa1b0:
    // 0x3aa1b0: 0x46180042  mul.s       $f1, $f0, $f24
    ctx->pc = 0x3aa1b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x3aa1b4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3aa1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3aa1b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3aa1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3aa1bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3aa1bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa1c0: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AA1C0u;
    {
        const bool branch_taken_0x3aa1c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AA1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA1C0u;
            // 0x3aa1c4: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa1c0) {
            ctx->pc = 0x3AA1D8u;
            goto label_3aa1d8;
        }
    }
    ctx->pc = 0x3AA1C8u;
    // 0x3aa1c8: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x3aa1c8u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa1cc: 0x0  nop
    ctx->pc = 0x3aa1ccu;
    // NOP
    // 0x3aa1d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3aa1d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3aa1d4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x3aa1d4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_3aa1d8:
    // 0x3aa1d8: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x3aa1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x3aa1dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3aa1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3aa1e0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3AA1E0u;
    {
        const bool branch_taken_0x3aa1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa1e0) {
            ctx->pc = 0x3AA258u;
            goto label_3aa258;
        }
    }
    ctx->pc = 0x3AA1E8u;
    // 0x3aa1e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3aa1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3aa1ec: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AA1ECu;
    {
        const bool branch_taken_0x3aa1ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AA1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA1ECu;
            // 0x3aa1f0: 0x26530060  addiu       $s3, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa1ec) {
            ctx->pc = 0x3AA1FCu;
            goto label_3aa1fc;
        }
    }
    ctx->pc = 0x3AA1F4u;
    // 0x3aa1f4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x3aa1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aa1f8: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x3aa1f8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_3aa1fc:
    // 0x3aa1fc: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x3aa1fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3aa200: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x3aa200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3aa204: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x3aa204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aa208: 0x86080002  lh          $t0, 0x2($s0)
    ctx->pc = 0x3aa208u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3aa20c: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x3aa20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x3aa210: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3aa210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3aa214: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3aa214u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3aa218: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3aa218u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3aa21c: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x3aa21cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3aa220: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3aa220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3aa224: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3aa224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aa228: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3aa228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa22c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3aa22cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa230: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x3aa230u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3aa234: 0x0  nop
    ctx->pc = 0x3aa234u;
    // NOP
    // 0x3aa238: 0x46801460  cvt.s.w     $f17, $f2
    ctx->pc = 0x3aa238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3aa23c: 0x46017b41  sub.s       $f13, $f15, $f1
    ctx->pc = 0x3aa23cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
    // 0x3aa240: 0x4600a380  add.s       $f14, $f20, $f0
    ctx->pc = 0x3aa240u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3aa244: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3aa244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3aa248: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AA248u;
    SET_GPR_U32(ctx, 31, 0x3AA250u);
    ctx->pc = 0x3AA24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA248u;
            // 0x3aa24c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA250u; }
        if (ctx->pc != 0x3AA250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA250u; }
        if (ctx->pc != 0x3AA250u) { return; }
    }
    ctx->pc = 0x3AA250u;
label_3aa250:
    // 0x3aa250: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x3aa250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aa254: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x3aa254u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3aa258:
    // 0x3aa258: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x3aa258u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa25c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3aa25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3aa260: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3aa260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3aa264: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3aa264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa268: 0x0  nop
    ctx->pc = 0x3aa268u;
    // NOP
    // 0x3aa26c: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x3aa26cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x3aa270: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3aa270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3aa274: 0x0  nop
    ctx->pc = 0x3aa274u;
    // NOP
    // 0x3aa278: 0x4601151c  madd.s      $f20, $f2, $f1
    ctx->pc = 0x3aa278u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x3aa27c: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x3aa27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3aa280: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3aa280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aa284: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x3aa284u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x3aa288: 0x4600c032  c.eq.s      $f24, $f0
    ctx->pc = 0x3aa288u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3aa28c: 0x4601b800  add.s       $f0, $f23, $f1
    ctx->pc = 0x3aa28cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
    // 0x3aa290: 0x4600a681  sub.s       $f26, $f20, $f0
    ctx->pc = 0x3aa290u;
    ctx->f[26] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3aa294: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x3AA294u;
    {
        const bool branch_taken_0x3aa294 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AA298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA294u;
            // 0x3aa298: 0x4601a640  add.s       $f25, $f20, $f1 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa294) {
            ctx->pc = 0x3AA2C4u;
            goto label_3aa2c4;
        }
    }
    ctx->pc = 0x3AA29Cu;
    // 0x3aa29c: 0x5280000a  beql        $s4, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3AA29Cu;
    {
        const bool branch_taken_0x3aa29c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa29c) {
            ctx->pc = 0x3AA2A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA29Cu;
            // 0x3aa2a0: 0x82260003  lb          $a2, 0x3($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AA2C8u;
            goto label_3aa2c8;
        }
    }
    ctx->pc = 0x3AA2A4u;
    // 0x3aa2a4: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3AA2A4u;
    SET_GPR_U32(ctx, 31, 0x3AA2ACu);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA2ACu; }
        if (ctx->pc != 0x3AA2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA2ACu; }
        if (ctx->pc != 0x3AA2ACu) { return; }
    }
    ctx->pc = 0x3AA2ACu;
label_3aa2ac:
    // 0x3aa2ac: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3aa2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3aa2b0: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3AA2B0u;
    SET_GPR_U32(ctx, 31, 0x3AA2B8u);
    ctx->pc = 0x3AA2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA2B0u;
            // 0x3aa2b4: 0x29f40  sll         $s3, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA2B8u; }
        if (ctx->pc != 0x3AA2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA2B8u; }
        if (ctx->pc != 0x3AA2B8u) { return; }
    }
    ctx->pc = 0x3AA2B8u;
label_3aa2b8:
    // 0x3aa2b8: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x3aa2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x3aa2bc: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x3aa2bcu;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3aa2c0: 0xa010  mfhi        $s4
    ctx->pc = 0x3aa2c0u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_3aa2c4:
    // 0x3aa2c4: 0x82260003  lb          $a2, 0x3($s1)
    ctx->pc = 0x3aa2c4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_3aa2c8:
    // 0x3aa2c8: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x3aa2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x3aa2cc: 0x3444851f  ori         $a0, $v0, 0x851F
    ctx->pc = 0x3aa2ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x3aa2d0: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3aa2d0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3aa2d4: 0x940018  mult        $zero, $a0, $s4
    ctx->pc = 0x3aa2d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3aa2d8: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x3aa2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x3aa2dc: 0x2c63021  addu        $a2, $s6, $a2
    ctx->pc = 0x3aa2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x3aa2e0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3aa2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3aa2e4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3aa2e4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa2e8: 0x628825  or          $s1, $v1, $v0
    ctx->pc = 0x3aa2e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3aa2ec: 0x46800620  cvt.s.w     $f24, $f0
    ctx->pc = 0x3aa2ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
    // 0x3aa2f0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3aa2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3aa2f4: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3aa2f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3aa2f8: 0x1457c2  srl         $t2, $s4, 31
    ctx->pc = 0x3aa2f8u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
    // 0x3aa2fc: 0x4810  mfhi        $t1
    ctx->pc = 0x3aa2fcu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x3aa300: 0x92a50030  lbu         $a1, 0x30($s5)
    ctx->pc = 0x3aa300u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x3aa304: 0x94943  sra         $t1, $t1, 5
    ctx->pc = 0x3aa304u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 5));
    // 0x3aa308: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3aa308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aa30c: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x3aa30cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x3aa310: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3aa310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa314: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x3aa314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x3aa318: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x3aa318u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x3aa31c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3aa31cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa320: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x3aa320u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x3aa324: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3aa324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3aa328: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x3aa328u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x3aa32c: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x3aa32cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3aa330: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3aa330u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3aa334: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x3aa334u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3aa338: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3aa338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa33c: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x3aa33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x3aa340: 0x2899823  subu        $s3, $s4, $t1
    ctx->pc = 0x3aa340u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x3aa344: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3aa344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa348: 0x0  nop
    ctx->pc = 0x3aa348u;
    // NOP
    // 0x3aa34c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3aa34cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3aa350: 0x4616c581  sub.s       $f22, $f24, $f22
    ctx->pc = 0x3aa350u;
    ctx->f[22] = FPU_SUB_S(ctx->f[24], ctx->f[22]);
    // 0x3aa354: 0x4617d380  add.s       $f14, $f26, $f23
    ctx->pc = 0x3aa354u;
    ctx->f[14] = FPU_ADD_S(ctx->f[26], ctx->f[23]);
    // 0x3aa358: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x3aa358u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x3aa35c: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x3aa35cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x3aa360: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3aa360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3aa364: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AA364u;
    SET_GPR_U32(ctx, 31, 0x3AA36Cu);
    ctx->pc = 0x3AA368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA364u;
            // 0x3aa368: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA36Cu; }
        if (ctx->pc != 0x3AA36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA36Cu; }
        if (ctx->pc != 0x3AA36Cu) { return; }
    }
    ctx->pc = 0x3AA36Cu;
label_3aa36c:
    // 0x3aa36c: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3aa36cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3aa370: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3aa370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3aa374: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3aa374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3aa378: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3aa378u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3aa37c: 0x530018  mult        $zero, $v0, $s3
    ctx->pc = 0x3aa37cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3aa380: 0x1357c2  srl         $t2, $s3, 31
    ctx->pc = 0x3aa380u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
    // 0x3aa384: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3aa384u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa388: 0x92a50030  lbu         $a1, 0x30($s5)
    ctx->pc = 0x3aa388u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x3aa38c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3aa38cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3aa390: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3aa390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aa394: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3aa394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa398: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3aa398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa39c: 0x4810  mfhi        $t1
    ctx->pc = 0x3aa39cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x3aa3a0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3aa3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3aa3a4: 0x94883  sra         $t1, $t1, 2
    ctx->pc = 0x3aa3a4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 2));
    // 0x3aa3a8: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x3aa3a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x3aa3ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3aa3acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa3b0: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x3aa3b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x3aa3b4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3aa3b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3aa3b8: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x3aa3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x3aa3bc: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x3aa3bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x3aa3c0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3aa3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3aa3c4: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x3aa3c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x3aa3c8: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x3aa3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x3aa3cc: 0x2699823  subu        $s3, $s3, $t1
    ctx->pc = 0x3aa3ccu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x3aa3d0: 0x4615a301  sub.s       $f12, $f20, $f21
    ctx->pc = 0x3aa3d0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x3aa3d4: 0x4615a380  add.s       $f14, $f20, $f21
    ctx->pc = 0x3aa3d4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x3aa3d8: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3aa3d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x3aa3dc: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3aa3dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3aa3e0: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AA3E0u;
    SET_GPR_U32(ctx, 31, 0x3AA3E8u);
    ctx->pc = 0x3AA3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA3E0u;
            // 0x3aa3e4: 0x4600c3c6  mov.s       $f15, $f24 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA3E8u; }
        if (ctx->pc != 0x3AA3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA3E8u; }
        if (ctx->pc != 0x3AA3E8u) { return; }
    }
    ctx->pc = 0x3AA3E8u;
label_3aa3e8:
    // 0x3aa3e8: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x3aa3e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3aa3ec: 0x4617cb80  add.s       $f14, $f25, $f23
    ctx->pc = 0x3aa3ecu;
    ctx->f[14] = FPU_ADD_S(ctx->f[25], ctx->f[23]);
    // 0x3aa3f0: 0x92a20030  lbu         $v0, 0x30($s5)
    ctx->pc = 0x3aa3f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x3aa3f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3aa3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa3f8: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3aa3f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3aa3fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3aa3fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa400: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3aa400u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa404: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3aa404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3aa408: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3aa408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3aa40c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3aa40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3aa410: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x3aa410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3aa414: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3aa414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aa418: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3aa418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3aa41c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3aa41cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa420: 0x0  nop
    ctx->pc = 0x3aa420u;
    // NOP
    // 0x3aa424: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3aa424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3aa428: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3aa428u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x3aa42c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3aa42cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x3aa430: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3aa430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3aa434: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AA434u;
    SET_GPR_U32(ctx, 31, 0x3AA43Cu);
    ctx->pc = 0x3AA438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA434u;
            // 0x3aa438: 0x4600c3c6  mov.s       $f15, $f24 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA43Cu; }
        if (ctx->pc != 0x3AA43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA43Cu; }
        if (ctx->pc != 0x3AA43Cu) { return; }
    }
    ctx->pc = 0x3AA43Cu;
label_3aa43c:
    // 0x3aa43c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3aa43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3aa440: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x3aa440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x3aa444: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x3aa444u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3aa448: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x3aa448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3aa44c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x3aa44cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3aa450: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3aa450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3aa454: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3aa454u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3aa458: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3aa458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3aa45c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3aa45cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3aa460: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3aa460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3aa464: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3aa464u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3aa468: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3aa468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3aa46c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3aa46cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3aa470: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3aa470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3aa474: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3aa474u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3aa478: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3aa478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3aa47c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3aa47cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3aa480: 0x3e00008  jr          $ra
    ctx->pc = 0x3AA480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA480u;
            // 0x3aa484: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AA488u;
    // 0x3aa488: 0x0  nop
    ctx->pc = 0x3aa488u;
    // NOP
    // 0x3aa48c: 0x0  nop
    ctx->pc = 0x3aa48cu;
    // NOP
}
