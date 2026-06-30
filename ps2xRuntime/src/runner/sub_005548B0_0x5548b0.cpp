#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005548B0
// Address: 0x5548b0 - 0x554ab0
void sub_005548B0_0x5548b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005548B0_0x5548b0");
#endif

    switch (ctx->pc) {
        case 0x55499cu: goto label_55499c;
        case 0x5549c0u: goto label_5549c0;
        case 0x554a38u: goto label_554a38;
        case 0x554a50u: goto label_554a50;
        default: break;
    }

    ctx->pc = 0x5548b0u;

    // 0x5548b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x5548b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x5548b4: 0x3c0338e3  lui         $v1, 0x38E3
    ctx->pc = 0x5548b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14563 << 16));
    // 0x5548b8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x5548b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x5548bc: 0x34668e39  ori         $a2, $v1, 0x8E39
    ctx->pc = 0x5548bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36409);
    // 0x5548c0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x5548c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x5548c4: 0x3c05aaaa  lui         $a1, 0xAAAA
    ctx->pc = 0x5548c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43690 << 16));
    // 0x5548c8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x5548c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x5548cc: 0x34a7aaab  ori         $a3, $a1, 0xAAAB
    ctx->pc = 0x5548ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43691);
    // 0x5548d0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x5548d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x5548d4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x5548d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x5548d8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x5548d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x5548dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x5548dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5548e0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x5548e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x5548e4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x5548e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5548e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x5548e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x5548ec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x5548ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x5548f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x5548f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x5548f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x5548f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x5548f8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x5548f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x5548fc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x5548fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x554900: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x554900u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x554904: 0x8c880078  lw          $t0, 0x78($a0)
    ctx->pc = 0x554904u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x554908: 0x8ca589f0  lw          $a1, -0x7610($a1)
    ctx->pc = 0x554908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937072)));
    // 0x55490c: 0xc80019  multu       $a2, $t0
    ctx->pc = 0x55490cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 6) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x554910: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x554910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x554914: 0x3c0642b4  lui         $a2, 0x42B4
    ctx->pc = 0x554914u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17076 << 16));
    // 0x554918: 0x4486b000  mtc1        $a2, $f22
    ctx->pc = 0x554918u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x55491c: 0x90a60029  lbu         $a2, 0x29($a1)
    ctx->pc = 0x55491cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 41)));
    // 0x554920: 0x2810  mfhi        $a1
    ctx->pc = 0x554920u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x554924: 0x54882  srl         $t1, $a1, 2
    ctx->pc = 0x554924u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x554928: 0x928c0  sll         $a1, $t1, 3
    ctx->pc = 0x554928u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x55492c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x55492cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x554930: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x554930u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x554934: 0x1054023  subu        $t0, $t0, $a1
    ctx->pc = 0x554934u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x554938: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x554938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x55493c: 0xe80019  multu       $a3, $t0
    ctx->pc = 0x55493cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 7) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x554940: 0x2810  mfhi        $a1
    ctx->pc = 0x554940u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x554944: 0x104001b  divu        $zero, $t0, $a0
    ctx->pc = 0x554944u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
    // 0x554948: 0xb810  mfhi        $s7
    ctx->pc = 0x554948u;
    SET_GPR_U64(ctx, 23, ctx->hi);
    // 0x55494c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x55494Cu;
    {
        const bool branch_taken_0x55494c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x554950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55494Cu;
            // 0x554950: 0x5b082  srl         $s6, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55494c) {
            ctx->pc = 0x554964u;
            goto label_554964;
        }
    }
    ctx->pc = 0x554954u;
    // 0x554954: 0x3c054200  lui         $a1, 0x4200
    ctx->pc = 0x554954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16896 << 16));
    // 0x554958: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x554958u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x55495c: 0x0  nop
    ctx->pc = 0x55495cu;
    // NOP
    // 0x554960: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x554960u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_554964:
    // 0x554964: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x554964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x554968: 0x51250003  beql        $t1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x554968u;
    {
        const bool branch_taken_0x554968 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        if (branch_taken_0x554968) {
            ctx->pc = 0x55496Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x554968u;
            // 0x55496c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x554978u;
            goto label_554978;
        }
    }
    ctx->pc = 0x554970u;
    // 0x554970: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x554970u;
    {
        const bool branch_taken_0x554970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554970u;
            // 0x554974: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x554970) {
            ctx->pc = 0x554988u;
            goto label_554988;
        }
    }
    ctx->pc = 0x554978u;
label_554978:
    // 0x554978: 0x8b082  srl         $s6, $t0, 2
    ctx->pc = 0x554978u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 2));
    // 0x55497c: 0x31170003  andi        $s7, $t0, 0x3
    ctx->pc = 0x55497cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x554980: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x554980u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x554984: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x554984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_554988:
    // 0x554988: 0x48c3c  dsll32      $s1, $a0, 16
    ctx->pc = 0x554988u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) << (32 + 16));
    // 0x55498c: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x55498cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x554990: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x554990u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x554994: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x554994u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x554998: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x554998u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55499c:
    // 0x55499c: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x55499cu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5549a0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x5549a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x5549a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5549a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x5549a8: 0x8fb200d0  lw          $s2, 0xD0($sp)
    ctx->pc = 0x5549a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x5549ac: 0x2912018  mult        $a0, $s4, $s1
    ctx->pc = 0x5549acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x5549b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x5549b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5549b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5549b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x5549b8: 0x4600b500  add.s       $f20, $f22, $f0
    ctx->pc = 0x5549b8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x5549bc: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x5549bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_5549c0:
    // 0x5549c0: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x5549c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x5549c4: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x5549c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x5549c8: 0x28a1003d  slti        $at, $a1, 0x3D
    ctx->pc = 0x5549c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x5549cc: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x5549CCu;
    {
        const bool branch_taken_0x5549cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5549cc) {
            ctx->pc = 0x554A50u;
            goto label_554a50;
        }
    }
    ctx->pc = 0x5549D4u;
    // 0x5549d4: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x5549d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x5549d8: 0x3c0342d2  lui         $v1, 0x42D2
    ctx->pc = 0x5549d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17106 << 16));
    // 0x5549dc: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x5549dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x5549e0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x5549e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x5549e4: 0x2771026  xor         $v0, $s3, $s7
    ctx->pc = 0x5549e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 23));
    // 0x5549e8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x5549e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x5549ec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x5549ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x5549f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x5549f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5549f4: 0x0  nop
    ctx->pc = 0x5549f4u;
    // NOP
    // 0x5549f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x5549f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x5549fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5549fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x554a00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x554A00u;
    {
        const bool branch_taken_0x554a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x554A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554A00u;
            // 0x554a04: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x554a00) {
            ctx->pc = 0x554A10u;
            goto label_554a10;
        }
    }
    ctx->pc = 0x554A08u;
    // 0x554a08: 0x2961026  xor         $v0, $s4, $s6
    ctx->pc = 0x554a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 22));
    // 0x554a0c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x554a0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_554a10:
    // 0x554a10: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x554a10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x554a14: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x554a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x554a18: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x554A18u;
    {
        const bool branch_taken_0x554a18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x554A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554A18u;
            // 0x554a1c: 0x34467fff  ori         $a2, $v0, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x554a18) {
            ctx->pc = 0x554A28u;
            goto label_554a28;
        }
    }
    ctx->pc = 0x554A20u;
    // 0x554a20: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x554a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x554a24: 0x0  nop
    ctx->pc = 0x554a24u;
    // NOP
label_554a28:
    // 0x554a28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x554a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x554a2c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x554a2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x554a30: 0xc15538c  jal         func_554E30
    ctx->pc = 0x554A30u;
    SET_GPR_U32(ctx, 31, 0x554A38u);
    ctx->pc = 0x554A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x554A30u;
            // 0x554a34: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x554E30u;
    if (runtime->hasFunction(0x554E30u)) {
        auto targetFn = runtime->lookupFunction(0x554E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554A38u; }
        if (ctx->pc != 0x554A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00554E30_0x554e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554A38u; }
        if (ctx->pc != 0x554A38u) { return; }
    }
    ctx->pc = 0x554A38u;
label_554a38:
    // 0x554a38: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x554A38u;
    {
        const bool branch_taken_0x554a38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x554a38) {
            ctx->pc = 0x554A50u;
            goto label_554a50;
        }
    }
    ctx->pc = 0x554A40u;
    // 0x554a40: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x554a40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x554a44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x554a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x554a48: 0xc1552ac  jal         func_554AB0
    ctx->pc = 0x554A48u;
    SET_GPR_U32(ctx, 31, 0x554A50u);
    ctx->pc = 0x554A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x554A48u;
            // 0x554a4c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x554AB0u;
    if (runtime->hasFunction(0x554AB0u)) {
        auto targetFn = runtime->lookupFunction(0x554AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554A50u; }
        if (ctx->pc != 0x554A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00554AB0_0x554ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554A50u; }
        if (ctx->pc != 0x554A50u) { return; }
    }
    ctx->pc = 0x554A50u;
label_554a50:
    // 0x554a50: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x554a50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x554a54: 0x271182a  slt         $v1, $s3, $s1
    ctx->pc = 0x554a54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x554a58: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x554A58u;
    {
        const bool branch_taken_0x554a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x554A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554A58u;
            // 0x554a5c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x554a58) {
            ctx->pc = 0x5549C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5549c0;
        }
    }
    ctx->pc = 0x554A60u;
    // 0x554a60: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x554a60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x554a64: 0x2a830003  slti        $v1, $s4, 0x3
    ctx->pc = 0x554a64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x554a68: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x554A68u;
    {
        const bool branch_taken_0x554a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x554A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554A68u;
            // 0x554a6c: 0x27de0044  addiu       $fp, $fp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x554a68) {
            ctx->pc = 0x55499Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55499c;
        }
    }
    ctx->pc = 0x554A70u;
    // 0x554a70: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x554a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x554a74: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x554a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x554a78: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x554a78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x554a7c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x554a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x554a80: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x554a80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x554a84: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x554a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x554a88: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x554a88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x554a8c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x554a8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x554a90: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x554a90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x554a94: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x554a94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x554a98: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x554a98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x554a9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x554a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x554aa0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x554aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x554aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x554AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x554AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554AA4u;
            // 0x554aa8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x554AACu;
    // 0x554aac: 0x0  nop
    ctx->pc = 0x554aacu;
    // NOP
}
