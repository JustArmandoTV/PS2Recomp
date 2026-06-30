#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132AC0
// Address: 0x132ac0 - 0x132bf0
void sub_00132AC0_0x132ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132AC0_0x132ac0");
#endif

    switch (ctx->pc) {
        case 0x132b18u: goto label_132b18;
        case 0x132b48u: goto label_132b48;
        case 0x132b78u: goto label_132b78;
        default: break;
    }

    ctx->pc = 0x132ac0u;

    // 0x132ac0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x132ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x132ac4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x132ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x132ac8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x132ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x132acc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x132accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x132ad0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x132ad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132ad4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x132ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x132ad8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x132ad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132adc: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x132adcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x132ae0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x132ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132ae4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x132ae4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x132ae8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x132ae8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x132aec: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x132AECu;
    {
        const bool branch_taken_0x132aec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x132AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132AECu;
            // 0x132af0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132aec) {
            ctx->pc = 0x132B08u;
            goto label_132b08;
        }
    }
    ctx->pc = 0x132AF4u;
    // 0x132af4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x132af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x132af8: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x132af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x132afc: 0x4483b000  mtc1        $v1, $f22
    ctx->pc = 0x132afcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x132b00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x132B00u;
    {
        const bool branch_taken_0x132b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132b00) {
            ctx->pc = 0x132B20u;
            goto label_132b20;
        }
    }
    ctx->pc = 0x132B08u;
label_132b08:
    // 0x132b08: 0x52043  sra         $a0, $a1, 1
    ctx->pc = 0x132b08u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 1));
    // 0x132b0c: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x132b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x132b10: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x132B10u;
    SET_GPR_U32(ctx, 31, 0x132B18u);
    ctx->pc = 0x132B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132B10u;
            // 0x132b14: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132B18u; }
        if (ctx->pc != 0x132B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132B18u; }
        if (ctx->pc != 0x132B18u) { return; }
    }
    ctx->pc = 0x132B18u;
label_132b18:
    // 0x132b18: 0xc7b7005c  lwc1        $f23, 0x5C($sp)
    ctx->pc = 0x132b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x132b1c: 0xc7b60058  lwc1        $f22, 0x58($sp)
    ctx->pc = 0x132b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_132b20:
    // 0x132b20: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x132B20u;
    {
        const bool branch_taken_0x132b20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x132b20) {
            ctx->pc = 0x132B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x132B20u;
            // 0x132b24: 0x112043  sra         $a0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132B3Cu;
            goto label_132b3c;
        }
    }
    ctx->pc = 0x132B28u;
    // 0x132b28: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x132b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x132b2c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x132b2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x132b30: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x132b30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x132b34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x132B34u;
    {
        const bool branch_taken_0x132b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132b34) {
            ctx->pc = 0x132B50u;
            goto label_132b50;
        }
    }
    ctx->pc = 0x132B3Cu;
label_132b3c:
    // 0x132b3c: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x132b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x132b40: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x132B40u;
    SET_GPR_U32(ctx, 31, 0x132B48u);
    ctx->pc = 0x132B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132B40u;
            // 0x132b44: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132B48u; }
        if (ctx->pc != 0x132B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132B48u; }
        if (ctx->pc != 0x132B48u) { return; }
    }
    ctx->pc = 0x132B48u;
label_132b48:
    // 0x132b48: 0xc7b5005c  lwc1        $f21, 0x5C($sp)
    ctx->pc = 0x132b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x132b4c: 0xc7b40058  lwc1        $f20, 0x58($sp)
    ctx->pc = 0x132b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_132b50:
    // 0x132b50: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x132B50u;
    {
        const bool branch_taken_0x132b50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x132b50) {
            ctx->pc = 0x132B54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x132B50u;
            // 0x132b54: 0x102043  sra         $a0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132B6Cu;
            goto label_132b6c;
        }
    }
    ctx->pc = 0x132B58u;
    // 0x132b58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x132b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x132b5c: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x132b5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x132b60: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x132b60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x132b64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x132B64u;
    {
        const bool branch_taken_0x132b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132B64u;
            // 0x132b68: 0x4616a8c2  mul.s       $f3, $f21, $f22 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132b64) {
            ctx->pc = 0x132B84u;
            goto label_132b84;
        }
    }
    ctx->pc = 0x132B6Cu;
label_132b6c:
    // 0x132b6c: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x132b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x132b70: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x132B70u;
    SET_GPR_U32(ctx, 31, 0x132B78u);
    ctx->pc = 0x132B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132B70u;
            // 0x132b74: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132B78u; }
        if (ctx->pc != 0x132B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132B78u; }
        if (ctx->pc != 0x132B78u) { return; }
    }
    ctx->pc = 0x132B78u;
label_132b78:
    // 0x132b78: 0xc7a5005c  lwc1        $f5, 0x5C($sp)
    ctx->pc = 0x132b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x132b7c: 0xc7a40058  lwc1        $f4, 0x58($sp)
    ctx->pc = 0x132b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x132b80: 0x4616a8c2  mul.s       $f3, $f21, $f22
    ctx->pc = 0x132b80u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
label_132b84:
    // 0x132b84: 0x4617a042  mul.s       $f1, $f20, $f23
    ctx->pc = 0x132b84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x132b88: 0x4603281a  mula.s      $f5, $f3
    ctx->pc = 0x132b88u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x132b8c: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x132b8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x132b90: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x132b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x132b94: 0x4600a047  neg.s       $f1, $f20
    ctx->pc = 0x132b94u;
    ctx->f[1] = FPU_NEG_S(ctx->f[20]);
    // 0x132b98: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x132b98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x132b9c: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x132b9cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x132ba0: 0x4601285c  madd.s      $f1, $f5, $f1
    ctx->pc = 0x132ba0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x132ba4: 0x4616a002  mul.s       $f0, $f20, $f22
    ctx->pc = 0x132ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x132ba8: 0x4617a882  mul.s       $f2, $f21, $f23
    ctx->pc = 0x132ba8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x132bac: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x132bacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x132bb0: 0x4600281a  mula.s      $f5, $f0
    ctx->pc = 0x132bb0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x132bb4: 0x4602205d  msub.s      $f1, $f4, $f2
    ctx->pc = 0x132bb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x132bb8: 0x4602281a  mula.s      $f5, $f2
    ctx->pc = 0x132bb8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x132bbc: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x132bbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x132bc0: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x132bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x132bc4: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x132bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x132bc8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x132bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x132bcc: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x132bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x132bd0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x132bd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132bd4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x132bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x132bd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x132bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132bdc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x132bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x132be0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x132be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132be4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x132be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x132be8: 0x3e00008  jr          $ra
    ctx->pc = 0x132BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132BE8u;
            // 0x132bec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132BF0u;
}
