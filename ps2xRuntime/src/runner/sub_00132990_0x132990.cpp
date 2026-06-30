#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132990
// Address: 0x132990 - 0x132ac0
void sub_00132990_0x132990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132990_0x132990");
#endif

    switch (ctx->pc) {
        case 0x1329e8u: goto label_1329e8;
        case 0x132a18u: goto label_132a18;
        case 0x132a48u: goto label_132a48;
        default: break;
    }

    ctx->pc = 0x132990u;

    // 0x132990: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x132990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x132994: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x132994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x132998: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x132998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13299c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13299cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1329a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1329a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1329a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1329a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1329a8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1329a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1329ac: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1329acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1329b0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1329b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1329b4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1329b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1329b8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1329b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1329bc: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1329BCu;
    {
        const bool branch_taken_0x1329bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1329C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1329BCu;
            // 0x1329c0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1329bc) {
            ctx->pc = 0x1329D8u;
            goto label_1329d8;
        }
    }
    ctx->pc = 0x1329C4u;
    // 0x1329c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1329c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1329c8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1329c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1329cc: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x1329ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1329d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1329D0u;
    {
        const bool branch_taken_0x1329d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1329d0) {
            ctx->pc = 0x1329F0u;
            goto label_1329f0;
        }
    }
    ctx->pc = 0x1329D8u;
label_1329d8:
    // 0x1329d8: 0x52043  sra         $a0, $a1, 1
    ctx->pc = 0x1329d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1329dc: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x1329dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1329e0: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x1329E0u;
    SET_GPR_U32(ctx, 31, 0x1329E8u);
    ctx->pc = 0x1329E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1329E0u;
            // 0x1329e4: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1329E8u; }
        if (ctx->pc != 0x1329E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1329E8u; }
        if (ctx->pc != 0x1329E8u) { return; }
    }
    ctx->pc = 0x1329E8u;
label_1329e8:
    // 0x1329e8: 0xc7b5005c  lwc1        $f21, 0x5C($sp)
    ctx->pc = 0x1329e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1329ec: 0xc7b40058  lwc1        $f20, 0x58($sp)
    ctx->pc = 0x1329ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1329f0:
    // 0x1329f0: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1329F0u;
    {
        const bool branch_taken_0x1329f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1329f0) {
            ctx->pc = 0x1329F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1329F0u;
            // 0x1329f4: 0x112043  sra         $a0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132A0Cu;
            goto label_132a0c;
        }
    }
    ctx->pc = 0x1329F8u;
    // 0x1329f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1329f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1329fc: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1329fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x132a00: 0x4483b000  mtc1        $v1, $f22
    ctx->pc = 0x132a00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x132a04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x132A04u;
    {
        const bool branch_taken_0x132a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132a04) {
            ctx->pc = 0x132A20u;
            goto label_132a20;
        }
    }
    ctx->pc = 0x132A0Cu;
label_132a0c:
    // 0x132a0c: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x132a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x132a10: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x132A10u;
    SET_GPR_U32(ctx, 31, 0x132A18u);
    ctx->pc = 0x132A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132A10u;
            // 0x132a14: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132A18u; }
        if (ctx->pc != 0x132A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132A18u; }
        if (ctx->pc != 0x132A18u) { return; }
    }
    ctx->pc = 0x132A18u;
label_132a18:
    // 0x132a18: 0xc7b7005c  lwc1        $f23, 0x5C($sp)
    ctx->pc = 0x132a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x132a1c: 0xc7b60058  lwc1        $f22, 0x58($sp)
    ctx->pc = 0x132a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_132a20:
    // 0x132a20: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x132A20u;
    {
        const bool branch_taken_0x132a20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x132a20) {
            ctx->pc = 0x132A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x132A20u;
            // 0x132a24: 0x102043  sra         $a0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132A3Cu;
            goto label_132a3c;
        }
    }
    ctx->pc = 0x132A28u;
    // 0x132a28: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x132a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x132a2c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x132a2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x132a30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x132a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132a34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x132A34u;
    {
        const bool branch_taken_0x132a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132A34u;
            // 0x132a38: 0x4601b882  mul.s       $f2, $f23, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a34) {
            ctx->pc = 0x132A54u;
            goto label_132a54;
        }
    }
    ctx->pc = 0x132A3Cu;
label_132a3c:
    // 0x132a3c: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x132a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x132a40: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x132A40u;
    SET_GPR_U32(ctx, 31, 0x132A48u);
    ctx->pc = 0x132A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132A40u;
            // 0x132a44: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132A48u; }
        if (ctx->pc != 0x132A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132A48u; }
        if (ctx->pc != 0x132A48u) { return; }
    }
    ctx->pc = 0x132A48u;
label_132a48:
    // 0x132a48: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x132a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132a4c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x132a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132a50: 0x4601b882  mul.s       $f2, $f23, $f1
    ctx->pc = 0x132a50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
label_132a54:
    // 0x132a54: 0x4600b102  mul.s       $f4, $f22, $f0
    ctx->pc = 0x132a54u;
    ctx->f[4] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x132a58: 0x4600b8c2  mul.s       $f3, $f23, $f0
    ctx->pc = 0x132a58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x132a5c: 0x4614101a  mula.s      $f2, $f20
    ctx->pc = 0x132a5cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x132a60: 0x4615201c  madd.s      $f0, $f4, $f21
    ctx->pc = 0x132a60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[21]));
    // 0x132a64: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x132a64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x132a68: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x132a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x132a6c: 0x4615081a  mula.s      $f1, $f21
    ctx->pc = 0x132a6cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x132a70: 0x4614181c  madd.s      $f0, $f3, $f20
    ctx->pc = 0x132a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[20]));
    // 0x132a74: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x132a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x132a78: 0x4614081a  mula.s      $f1, $f20
    ctx->pc = 0x132a78u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x132a7c: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x132a7cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x132a80: 0x4615005c  madd.s      $f1, $f0, $f21
    ctx->pc = 0x132a80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
    // 0x132a84: 0x4614201a  mula.s      $f4, $f20
    ctx->pc = 0x132a84u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x132a88: 0x4615101d  msub.s      $f0, $f2, $f21
    ctx->pc = 0x132a88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[21]));
    // 0x132a8c: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x132a8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x132a90: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x132a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x132a94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x132a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x132a98: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x132a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x132a9c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x132a9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132aa0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x132aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x132aa4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x132aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132aa8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x132aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x132aac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x132aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132ab0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x132ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x132ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x132AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132AB4u;
            // 0x132ab8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132ABCu;
    // 0x132abc: 0x0  nop
    ctx->pc = 0x132abcu;
    // NOP
}
