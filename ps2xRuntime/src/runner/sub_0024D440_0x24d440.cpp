#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024D440
// Address: 0x24d440 - 0x24d920
void sub_0024D440_0x24d440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D440_0x24d440");
#endif

    switch (ctx->pc) {
        case 0x24d470u: goto label_24d470;
        case 0x24d510u: goto label_24d510;
        case 0x24d528u: goto label_24d528;
        default: break;
    }

    ctx->pc = 0x24d440u;

    // 0x24d440: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x24d440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x24d444: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24d444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24d448: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24d448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24d44c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24d44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24d450: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24d450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d454: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24d454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24d458: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24d458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d45c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24d45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24d460: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x24d460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d464: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24d464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24d468: 0xc079150  jal         func_1E4540
    ctx->pc = 0x24D468u;
    SET_GPR_U32(ctx, 31, 0x24D470u);
    ctx->pc = 0x24D46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D468u;
            // 0x24d46c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4540u;
    if (runtime->hasFunction(0x1E4540u)) {
        auto targetFn = runtime->lookupFunction(0x1E4540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D470u; }
        if (ctx->pc != 0x24D470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4540_0x1e4540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D470u; }
        if (ctx->pc != 0x24D470u) { return; }
    }
    ctx->pc = 0x24D470u;
label_24d470:
    // 0x24d470: 0xa7a0010e  sh          $zero, 0x10E($sp)
    ctx->pc = 0x24d470u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 270), (uint16_t)GPR_U32(ctx, 0));
    // 0x24d474: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24d474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d478: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x24d478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d47c: 0x26450080  addiu       $a1, $s2, 0x80
    ctx->pc = 0x24d47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x24d480: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x24d480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
    // 0x24d484: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x24d484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d488: 0xe64000c4  swc1        $f0, 0xC4($s2)
    ctx->pc = 0x24d488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 196), bits); }
    // 0x24d48c: 0xc6400058  lwc1        $f0, 0x58($s2)
    ctx->pc = 0x24d48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d490: 0xe64000c8  swc1        $f0, 0xC8($s2)
    ctx->pc = 0x24d490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 200), bits); }
    // 0x24d494: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x24d494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d498: 0xe64000cc  swc1        $f0, 0xCC($s2)
    ctx->pc = 0x24d498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 204), bits); }
    // 0x24d49c: 0xc64500c0  lwc1        $f5, 0xC0($s2)
    ctx->pc = 0x24d49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24d4a0: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x24d4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d4a4: 0xc64400c4  lwc1        $f4, 0xC4($s2)
    ctx->pc = 0x24d4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24d4a8: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x24d4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d4ac: 0xc64300c8  lwc1        $f3, 0xC8($s2)
    ctx->pc = 0x24d4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d4b0: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x24d4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d4b4: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x24d4b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x24d4b8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x24d4b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x24d4bc: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x24d4bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x24d4c0: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x24d4c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x24d4c4: 0xe64000d0  swc1        $f0, 0xD0($s2)
    ctx->pc = 0x24d4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x24d4c8: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x24d4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d4cc: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x24d4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d4d0: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x24d4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d4d4: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x24d4d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x24d4d8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x24d4d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x24d4dc: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x24d4dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x24d4e0: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x24d4e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x24d4e4: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x24d4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    // 0x24d4e8: 0xc6420040  lwc1        $f2, 0x40($s2)
    ctx->pc = 0x24d4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d4ec: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x24d4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d4f0: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x24d4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d4f4: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x24d4f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x24d4f8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x24d4f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x24d4fc: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x24d4fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x24d500: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x24d500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x24d504: 0xe64000d8  swc1        $f0, 0xD8($s2)
    ctx->pc = 0x24d504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
    // 0x24d508: 0xc092d40  jal         func_24B500
    ctx->pc = 0x24D508u;
    SET_GPR_U32(ctx, 31, 0x24D510u);
    ctx->pc = 0x24D50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D508u;
            // 0x24d50c: 0xae4000dc  sw          $zero, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24B500u;
    if (runtime->hasFunction(0x24B500u)) {
        auto targetFn = runtime->lookupFunction(0x24B500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D510u; }
        if (ctx->pc != 0x24D510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024B500_0x24b500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D510u; }
        if (ctx->pc != 0x24D510u) { return; }
    }
    ctx->pc = 0x24D510u;
label_24d510:
    // 0x24d510: 0x144000fb  bnez        $v0, . + 4 + (0xFB << 2)
    ctx->pc = 0x24D510u;
    {
        const bool branch_taken_0x24d510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D510u;
            // 0x24d514: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d510) {
            ctx->pc = 0x24D900u;
            goto label_24d900;
        }
    }
    ctx->pc = 0x24D518u;
    // 0x24d518: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24d518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24d51c: 0x27a6010c  addiu       $a2, $sp, 0x10C
    ctx->pc = 0x24d51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x24d520: 0xc093048  jal         func_24C120
    ctx->pc = 0x24D520u;
    SET_GPR_U32(ctx, 31, 0x24D528u);
    ctx->pc = 0x24D524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D520u;
            // 0x24d524: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C120u;
    if (runtime->hasFunction(0x24C120u)) {
        auto targetFn = runtime->lookupFunction(0x24C120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D528u; }
        if (ctx->pc != 0x24D528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024C120_0x24c120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D528u; }
        if (ctx->pc != 0x24D528u) { return; }
    }
    ctx->pc = 0x24D528u;
label_24d528:
    // 0x24d528: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24d528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24d52c: 0x144300f4  bne         $v0, $v1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x24D52Cu;
    {
        const bool branch_taken_0x24d52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24d52c) {
            ctx->pc = 0x24D900u;
            goto label_24d900;
        }
    }
    ctx->pc = 0x24D534u;
    // 0x24d534: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x24d534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x24d538: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x24d538u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24d53c: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x24D53Cu;
    {
        const bool branch_taken_0x24d53c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D53Cu;
            // 0x24d540: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d53c) {
            ctx->pc = 0x24D630u;
            goto label_24d630;
        }
    }
    ctx->pc = 0x24D544u;
    // 0x24d544: 0x97a4010e  lhu         $a0, 0x10E($sp)
    ctx->pc = 0x24d544u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 270)));
    // 0x24d548: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x24d548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d54c: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x24d54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24d550: 0x93a3010c  lbu         $v1, 0x10C($sp)
    ctx->pc = 0x24d550u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x24d554: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x24d554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24d558: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x24d558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24d55c: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x24d55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24d560: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x24d560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x24d564: 0x46000107  neg.s       $f4, $f0
    ctx->pc = 0x24d564u;
    ctx->f[4] = FPU_NEG_S(ctx->f[0]);
    // 0x24d568: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x24d568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x24d56c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x24d56cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x24d570: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x24d570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d574: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x24d574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d578: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x24d578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d57c: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x24d57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d580: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x24d580u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x24d584: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x24d584u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x24d588: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x24d588u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x24d58c: 0x4601285c  madd.s      $f1, $f5, $f1
    ctx->pc = 0x24d58cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x24d590: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24d590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24d594: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x24d594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x24d598: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x24d598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d59c: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x24d59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d5a0: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x24d5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d5a4: 0xc4c00034  lwc1        $f0, 0x34($a2)
    ctx->pc = 0x24d5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d5a8: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x24d5a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x24d5ac: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x24d5acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x24d5b0: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x24d5b0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x24d5b4: 0x4601285c  madd.s      $f1, $f5, $f1
    ctx->pc = 0x24d5b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x24d5b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24d5b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24d5bc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x24d5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x24d5c0: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x24d5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d5c4: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x24d5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d5c8: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x24d5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d5cc: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x24d5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d5d0: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x24d5d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x24d5d4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x24d5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x24d5d8: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x24d5d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x24d5dc: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x24d5dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x24d5e0: 0x4601285c  madd.s      $f1, $f5, $f1
    ctx->pc = 0x24d5e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x24d5e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24d5e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24d5e8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x24d5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x24d5ec: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x24d5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x24d5f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24d5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24d5f4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x24d5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d5f8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x24d5f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x24d5fc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x24d5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x24d600: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x24d600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d604: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x24d604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x24d608: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x24d608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x24d60c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x24d60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d610: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x24d610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x24d614: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x24d614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x24d618: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x24d618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d61c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x24d61cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x24d620: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x24d620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x24d624: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x24d624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d628: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x24D628u;
    {
        const bool branch_taken_0x24d628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D628u;
            // 0x24d62c: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d628) {
            ctx->pc = 0x24D848u;
            goto label_24d848;
        }
    }
    ctx->pc = 0x24D630u;
label_24d630:
    // 0x24d630: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x24d630u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x24d634: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x24D634u;
    {
        const bool branch_taken_0x24d634 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d634) {
            ctx->pc = 0x24D730u;
            goto label_24d730;
        }
    }
    ctx->pc = 0x24D63Cu;
    // 0x24d63c: 0x97a4010e  lhu         $a0, 0x10E($sp)
    ctx->pc = 0x24d63cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 270)));
    // 0x24d640: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x24d640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d644: 0x93a3010c  lbu         $v1, 0x10C($sp)
    ctx->pc = 0x24d644u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x24d648: 0xc7a70080  lwc1        $f7, 0x80($sp)
    ctx->pc = 0x24d648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24d64c: 0xc7a60084  lwc1        $f6, 0x84($sp)
    ctx->pc = 0x24d64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24d650: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x24d650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24d654: 0xc7a50088  lwc1        $f5, 0x88($sp)
    ctx->pc = 0x24d654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24d658: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x24d658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x24d65c: 0x46000107  neg.s       $f4, $f0
    ctx->pc = 0x24d65cu;
    ctx->f[4] = FPU_NEG_S(ctx->f[0]);
    // 0x24d660: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x24d660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x24d664: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x24d664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x24d668: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x24d668u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x24d66c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x24d66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d670: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x24d670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d674: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x24d674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d678: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x24d678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d67c: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x24d67cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x24d680: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x24d680u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x24d684: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x24d684u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x24d688: 0x4601285c  madd.s      $f1, $f5, $f1
    ctx->pc = 0x24d688u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x24d68c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24d68cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24d690: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x24d690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x24d694: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x24d694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d698: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x24d698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d69c: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x24d69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d6a0: 0xc4c00034  lwc1        $f0, 0x34($a2)
    ctx->pc = 0x24d6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d6a4: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x24d6a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x24d6a8: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x24d6a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x24d6ac: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x24d6acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x24d6b0: 0x4601285c  madd.s      $f1, $f5, $f1
    ctx->pc = 0x24d6b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x24d6b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24d6b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24d6b8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x24d6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x24d6bc: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x24d6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d6c0: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x24d6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d6c4: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x24d6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d6c8: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x24d6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d6cc: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x24d6ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x24d6d0: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x24d6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x24d6d4: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x24d6d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x24d6d8: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x24d6d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x24d6dc: 0x4601285c  madd.s      $f1, $f5, $f1
    ctx->pc = 0x24d6dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x24d6e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24d6e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24d6e4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x24d6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x24d6e8: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x24d6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x24d6ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24d6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24d6f0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x24d6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d6f4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x24d6f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x24d6f8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x24d6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x24d6fc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x24d6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d700: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x24d700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x24d704: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x24d704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x24d708: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x24d708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d70c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x24d70cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x24d710: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x24d710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x24d714: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x24d714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d718: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x24d718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x24d71c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x24d71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x24d720: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x24d720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d724: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x24D724u;
    {
        const bool branch_taken_0x24d724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D724u;
            // 0x24d728: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d724) {
            ctx->pc = 0x24D848u;
            goto label_24d848;
        }
    }
    ctx->pc = 0x24D72Cu;
    // 0x24d72c: 0x0  nop
    ctx->pc = 0x24d72cu;
    // NOP
label_24d730:
    // 0x24d730: 0x97a3010e  lhu         $v1, 0x10E($sp)
    ctx->pc = 0x24d730u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 270)));
    // 0x24d734: 0xc7a90080  lwc1        $f9, 0x80($sp)
    ctx->pc = 0x24d734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x24d738: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x24d738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24d73c: 0xc7a80084  lwc1        $f8, 0x84($sp)
    ctx->pc = 0x24d73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24d740: 0xc7a70088  lwc1        $f7, 0x88($sp)
    ctx->pc = 0x24d740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24d744: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x24d744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d748: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x24d748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d74c: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x24d74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x24d750: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x24d750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d754: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x24d754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x24d758: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x24d758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24d75c: 0xc4650010  lwc1        $f5, 0x10($v1)
    ctx->pc = 0x24d75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24d760: 0xc4640020  lwc1        $f4, 0x20($v1)
    ctx->pc = 0x24d760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24d764: 0xc4630030  lwc1        $f3, 0x30($v1)
    ctx->pc = 0x24d764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d768: 0x46064982  mul.s       $f6, $f9, $f6
    ctx->pc = 0x24d768u;
    ctx->f[6] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x24d76c: 0x46054142  mul.s       $f5, $f8, $f5
    ctx->pc = 0x24d76cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x24d770: 0x46053018  adda.s      $f6, $f5
    ctx->pc = 0x24d770u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x24d774: 0x4604391c  madd.s      $f4, $f7, $f4
    ctx->pc = 0x24d774u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
    // 0x24d778: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x24d778u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x24d77c: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x24d77cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x24d780: 0xc4660004  lwc1        $f6, 0x4($v1)
    ctx->pc = 0x24d780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24d784: 0xc4650014  lwc1        $f5, 0x14($v1)
    ctx->pc = 0x24d784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24d788: 0xc4640024  lwc1        $f4, 0x24($v1)
    ctx->pc = 0x24d788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24d78c: 0xc4630034  lwc1        $f3, 0x34($v1)
    ctx->pc = 0x24d78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d790: 0x46064982  mul.s       $f6, $f9, $f6
    ctx->pc = 0x24d790u;
    ctx->f[6] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x24d794: 0x46054142  mul.s       $f5, $f8, $f5
    ctx->pc = 0x24d794u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x24d798: 0x46053018  adda.s      $f6, $f5
    ctx->pc = 0x24d798u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x24d79c: 0x4604391c  madd.s      $f4, $f7, $f4
    ctx->pc = 0x24d79cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
    // 0x24d7a0: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x24d7a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x24d7a4: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x24d7a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x24d7a8: 0xc4660008  lwc1        $f6, 0x8($v1)
    ctx->pc = 0x24d7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24d7ac: 0xc4650018  lwc1        $f5, 0x18($v1)
    ctx->pc = 0x24d7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24d7b0: 0xc4640028  lwc1        $f4, 0x28($v1)
    ctx->pc = 0x24d7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24d7b4: 0xc4630038  lwc1        $f3, 0x38($v1)
    ctx->pc = 0x24d7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d7b8: 0x46064982  mul.s       $f6, $f9, $f6
    ctx->pc = 0x24d7b8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x24d7bc: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x24d7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x24d7c0: 0x46054142  mul.s       $f5, $f8, $f5
    ctx->pc = 0x24d7c0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x24d7c4: 0x46053018  adda.s      $f6, $f5
    ctx->pc = 0x24d7c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x24d7c8: 0x4604391c  madd.s      $f4, $f7, $f4
    ctx->pc = 0x24d7c8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
    // 0x24d7cc: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x24d7ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x24d7d0: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x24d7d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x24d7d4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x24d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x24d7d8: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x24d7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24d7dc: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x24d7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24d7e0: 0xc4630020  lwc1        $f3, 0x20($v1)
    ctx->pc = 0x24d7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d7e4: 0x46051142  mul.s       $f5, $f2, $f5
    ctx->pc = 0x24d7e4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x24d7e8: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x24d7e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x24d7ec: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x24d7ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x24d7f0: 0x460300dc  madd.s      $f3, $f0, $f3
    ctx->pc = 0x24d7f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x24d7f4: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x24d7f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x24d7f8: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x24d7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24d7fc: 0xc4640014  lwc1        $f4, 0x14($v1)
    ctx->pc = 0x24d7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24d800: 0xc4630024  lwc1        $f3, 0x24($v1)
    ctx->pc = 0x24d800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d804: 0x46051142  mul.s       $f5, $f2, $f5
    ctx->pc = 0x24d804u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x24d808: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x24d808u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x24d80c: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x24d80cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x24d810: 0x460300dc  madd.s      $f3, $f0, $f3
    ctx->pc = 0x24d810u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x24d814: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x24d814u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x24d818: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x24d818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24d81c: 0xc4640018  lwc1        $f4, 0x18($v1)
    ctx->pc = 0x24d81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24d820: 0xc4630028  lwc1        $f3, 0x28($v1)
    ctx->pc = 0x24d820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d824: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x24d824u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x24d828: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x24d828u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x24d82c: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x24d82cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x24d830: 0x4603001c  madd.s      $f0, $f0, $f3
    ctx->pc = 0x24d830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x24d834: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x24d834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x24d838: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x24d838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x24d83c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x24d83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d840: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x24d840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x24d844: 0x0  nop
    ctx->pc = 0x24d844u;
    // NOP
label_24d848:
    // 0x24d848: 0x93a3010c  lbu         $v1, 0x10C($sp)
    ctx->pc = 0x24d848u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x24d84c: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x24d84cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24d850: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x24D850u;
    {
        const bool branch_taken_0x24d850 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D850u;
            // 0x24d854: 0x27a30060  addiu       $v1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d850) {
            ctx->pc = 0x24D8B0u;
            goto label_24d8b0;
        }
    }
    ctx->pc = 0x24D858u;
    // 0x24d858: 0xc7a5006c  lwc1        $f5, 0x6C($sp)
    ctx->pc = 0x24d858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24d85c: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x24d85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24d860: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x24d860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d864: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x24d864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d868: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x24d868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d86c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x24d86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d870: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x24d870u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
    // 0x24d874: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x24d874u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x24d878: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x24d878u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x24d87c: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x24d87cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x24d880: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x24d880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d884: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x24d884u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x24d888: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x24d888u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x24d88c: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x24d88cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x24d890: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x24d890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d894: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x24d894u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x24d898: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24d898u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24d89c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x24d89cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x24d8a0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x24d8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d8a4: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x24d8a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x24d8a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24d8a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24d8ac: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x24d8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_24d8b0:
    // 0x24d8b0: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x24d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24d8b4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x24d8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d8b8: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x24d8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x24d8bc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x24d8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d8c0: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x24d8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x24d8c4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x24d8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d8c8: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x24d8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x24d8cc: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x24d8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d8d0: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x24d8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x24d8d4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x24d8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d8d8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x24d8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x24d8dc: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x24d8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d8e0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x24d8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x24d8e4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x24d8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d8e8: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x24d8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x24d8ec: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x24d8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d8f0: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x24d8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x24d8f4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x24d8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d8f8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x24D8F8u;
    {
        const bool branch_taken_0x24d8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D8F8u;
            // 0x24d8fc: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d8f8) {
            ctx->pc = 0x24D900u;
            goto label_24d900;
        }
    }
    ctx->pc = 0x24D900u;
label_24d900:
    // 0x24d900: 0xa2700000  sb          $s0, 0x0($s3)
    ctx->pc = 0x24d900u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x24d904: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24d904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24d908: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24d908u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d90c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24d90cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d910: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24d910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24d914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d918: 0x3e00008  jr          $ra
    ctx->pc = 0x24D918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D918u;
            // 0x24d91c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24D920u;
}
