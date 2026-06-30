#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00289C60
// Address: 0x289c60 - 0x28a090
void sub_00289C60_0x289c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289C60_0x289c60");
#endif

    switch (ctx->pc) {
        case 0x289ca4u: goto label_289ca4;
        case 0x289d84u: goto label_289d84;
        default: break;
    }

    ctx->pc = 0x289c60u;

    // 0x289c60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x289c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x289c64: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x289c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x289c68: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x289c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x289c6c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x289c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x289c70: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x289c70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c74: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x289c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x289c78: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x289c78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c7c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x289c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x289c80: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x289c80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c84: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x289c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x289c88: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x289c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x289c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x289c90: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x289c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c94: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x289c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c98: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x289c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x289c9c: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x289C9Cu;
    SET_GPR_U32(ctx, 31, 0x289CA4u);
    ctx->pc = 0x289CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289C9Cu;
            // 0x289ca0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289CA4u; }
        if (ctx->pc != 0x289CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289CA4u; }
        if (ctx->pc != 0x289CA4u) { return; }
    }
    ctx->pc = 0x289CA4u;
label_289ca4:
    // 0x289ca4: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x289ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x289ca8: 0x27b00098  addiu       $s0, $sp, 0x98
    ctx->pc = 0x289ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x289cac: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x289cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289cb0: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x289cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x289cb4: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x289cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x289cb8: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x289cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289cbc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x289cbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x289cc0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x289cc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x289cc4: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x289cc4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x289cc8: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x289cc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x289ccc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x289cccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289cd0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x289CD0u;
    {
        const bool branch_taken_0x289cd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x289cd0) {
            ctx->pc = 0x289CE8u;
            goto label_289ce8;
        }
    }
    ctx->pc = 0x289CD8u;
    // 0x289cd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x289cd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289cdc: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x289CDCu;
    {
        const bool branch_taken_0x289cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289cdc) {
            ctx->pc = 0x28A068u;
            goto label_28a068;
        }
    }
    ctx->pc = 0x289CE4u;
    // 0x289ce4: 0x0  nop
    ctx->pc = 0x289ce4u;
    // NOP
label_289ce8:
    // 0x289ce8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x289ce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x289cec: 0x0  nop
    ctx->pc = 0x289cecu;
    // NOP
    // 0x289cf0: 0x46040832  c.eq.s      $f1, $f4
    ctx->pc = 0x289cf0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289cf4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x289CF4u;
    {
        const bool branch_taken_0x289cf4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x289CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289CF4u;
            // 0x289cf8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289cf4) {
            ctx->pc = 0x289D18u;
            goto label_289d18;
        }
    }
    ctx->pc = 0x289CFCu;
    // 0x289cfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289d00: 0x0  nop
    ctx->pc = 0x289d00u;
    // NOP
    // 0x289d04: 0x46010116  rsqrt.s     $f4, $f0, $f1
    ctx->pc = 0x289d04u;
    ctx->f[4] = 1.0f / sqrtf(ctx->f[0]);
    // 0x289d08: 0x0  nop
    ctx->pc = 0x289d08u;
    // NOP
    // 0x289d0c: 0x0  nop
    ctx->pc = 0x289d0cu;
    // NOP
    // 0x289d10: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x289D10u;
    {
        const bool branch_taken_0x289d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289d10) {
            ctx->pc = 0x289D18u;
            goto label_289d18;
        }
    }
    ctx->pc = 0x289D18u;
label_289d18:
    // 0x289d18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x289d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d1c: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x289d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x289d20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x289d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d24: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x289d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289d28: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x289d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x289d2c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x289d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289d30: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x289d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x289d34: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x289d34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x289d38: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x289d38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x289d3c: 0x460410c2  mul.s       $f3, $f2, $f4
    ctx->pc = 0x289d3cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x289d40: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x289d40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x289d44: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x289d44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x289d48: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x289d48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x289d4c: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x289d4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x289d50: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x289d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x289d54: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x289d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x289d58: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x289d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x289d5c: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x289d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x289d60: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x289d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x289d64: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x289d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289d68: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x289d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289d6c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x289d6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x289d70: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x289d70u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x289d74: 0x46041018  adda.s      $f2, $f4
    ctx->pc = 0x289d74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x289d78: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x289d78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x289d7c: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x289D7Cu;
    SET_GPR_U32(ctx, 31, 0x289D84u);
    ctx->pc = 0x289D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289D7Cu;
            // 0x289d80: 0x46000507  neg.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289D84u; }
        if (ctx->pc != 0x289D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289D84u; }
        if (ctx->pc != 0x289D84u) { return; }
    }
    ctx->pc = 0x289D84u;
label_289d84:
    // 0x289d84: 0xc6850008  lwc1        $f5, 0x8($s4)
    ctx->pc = 0x289d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x289d88: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x289d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x289d8c: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x289d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289d90: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x289d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x289d94: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x289d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x289d98: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x289d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289d9c: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x289d9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x289da0: 0x4605101a  mula.s      $f2, $f5
    ctx->pc = 0x289da0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x289da4: 0x4601219d  msub.s      $f6, $f4, $f1
    ctx->pc = 0x289da4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x289da8: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x289da8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x289dac: 0x4605015d  msub.s      $f5, $f0, $f5
    ctx->pc = 0x289dacu;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
    // 0x289db0: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x289db0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x289db4: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x289db4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x289db8: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x289db8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x289dbc: 0x4603111d  msub.s      $f4, $f2, $f3
    ctx->pc = 0x289dbcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x289dc0: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x289dc0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x289dc4: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x289dc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x289dc8: 0x46070832  c.eq.s      $f1, $f7
    ctx->pc = 0x289dc8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289dcc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x289DCCu;
    {
        const bool branch_taken_0x289dcc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x289DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289DCCu;
            // 0x289dd0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289dcc) {
            ctx->pc = 0x289DF0u;
            goto label_289df0;
        }
    }
    ctx->pc = 0x289DD4u;
    // 0x289dd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289dd8: 0x0  nop
    ctx->pc = 0x289dd8u;
    // NOP
    // 0x289ddc: 0x460101d6  rsqrt.s     $f7, $f0, $f1
    ctx->pc = 0x289ddcu;
    ctx->f[7] = 1.0f / sqrtf(ctx->f[0]);
    // 0x289de0: 0x0  nop
    ctx->pc = 0x289de0u;
    // NOP
    // 0x289de4: 0x0  nop
    ctx->pc = 0x289de4u;
    // NOP
    // 0x289de8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x289DE8u;
    {
        const bool branch_taken_0x289de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289de8) {
            ctx->pc = 0x289DF0u;
            goto label_289df0;
        }
    }
    ctx->pc = 0x289DF0u;
label_289df0:
    // 0x289df0: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x289df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x289df4: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x289df4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x289df8: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x289df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x289dfc: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x289dfcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x289e00: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x289e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289e04: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x289e04u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x289e08: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x289e08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x289e0c: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x289e0cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x289e10: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x289e10u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x289e14: 0x4601209c  madd.s      $f2, $f4, $f1
    ctx->pc = 0x289e14u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x289e18: 0x4614a01a  mula.s      $f20, $f20
    ctx->pc = 0x289e18u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x289e1c: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x289e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289e20: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x289e20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x289e24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x289e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289e28: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x289E28u;
    {
        const bool branch_taken_0x289e28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x289E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289E28u;
            // 0x289e2c: 0x3c027eff  lui         $v0, 0x7EFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e28) {
            ctx->pc = 0x289E40u;
            goto label_289e40;
        }
    }
    ctx->pc = 0x289E30u;
    // 0x289e30: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x289e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x289e34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289e38: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x289E38u;
    {
        const bool branch_taken_0x289e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289e38) {
            ctx->pc = 0x28A068u;
            goto label_28a068;
        }
    }
    ctx->pc = 0x289E40u;
label_289e40:
    // 0x289e40: 0x3c023586  lui         $v0, 0x3586
    ctx->pc = 0x289e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13702 << 16));
    // 0x289e44: 0x344237bd  ori         $v0, $v0, 0x37BD
    ctx->pc = 0x289e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14269);
    // 0x289e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289e4c: 0x4600a045  abs.s       $f1, $f20
    ctx->pc = 0x289e4cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
    // 0x289e50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x289e50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289e54: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x289E54u;
    {
        const bool branch_taken_0x289e54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x289E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289E54u;
            // 0x289e58: 0xc6a40030  lwc1        $f4, 0x30($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e54) {
            ctx->pc = 0x289E98u;
            goto label_289e98;
        }
    }
    ctx->pc = 0x289E5Cu;
    // 0x289e5c: 0x3c0233d6  lui         $v0, 0x33D6
    ctx->pc = 0x289e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13270 << 16));
    // 0x289e60: 0x3442bf95  ori         $v0, $v0, 0xBF95
    ctx->pc = 0x289e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49045);
    // 0x289e64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289e68: 0x46001045  abs.s       $f1, $f2
    ctx->pc = 0x289e68u;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
    // 0x289e6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x289e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289e70: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x289E70u;
    {
        const bool branch_taken_0x289e70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x289e70) {
            ctx->pc = 0x289E98u;
            goto label_289e98;
        }
    }
    ctx->pc = 0x289E78u;
    // 0x289e78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x289e78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289e7c: 0x0  nop
    ctx->pc = 0x289e7cu;
    // NOP
    // 0x289e80: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x289e80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289e84: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x289E84u;
    {
        const bool branch_taken_0x289e84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x289E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289E84u;
            // 0x289e88: 0x3c024080  lui         $v0, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e84) {
            ctx->pc = 0x289E90u;
            goto label_289e90;
        }
    }
    ctx->pc = 0x289E8Cu;
    // 0x289e8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289e90:
    // 0x289e90: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x289E90u;
    {
        const bool branch_taken_0x289e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289e90) {
            ctx->pc = 0x28A028u;
            goto label_28a028;
        }
    }
    ctx->pc = 0x289E98u;
label_289e98:
    // 0x289e98: 0x4600a0c5  abs.s       $f3, $f20
    ctx->pc = 0x289e98u;
    ctx->f[3] = FPU_ABS_S(ctx->f[20]);
    // 0x289e9c: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x289e9cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x289ea0: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x289ea0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289ea4: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x289EA4u;
    {
        const bool branch_taken_0x289ea4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x289ea4) {
            ctx->pc = 0x289F00u;
            goto label_289f00;
        }
    }
    ctx->pc = 0x289EACu;
    // 0x289eac: 0x0  nop
    ctx->pc = 0x289eacu;
    // NOP
    // 0x289eb0: 0x0  nop
    ctx->pc = 0x289eb0u;
    // NOP
    // 0x289eb4: 0x46141083  div.s       $f2, $f2, $f20
    ctx->pc = 0x289eb4u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[20];
    // 0x289eb8: 0x3c023586  lui         $v0, 0x3586
    ctx->pc = 0x289eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13702 << 16));
    // 0x289ebc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x289ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x289ec0: 0x344237bd  ori         $v0, $v0, 0x37BD
    ctx->pc = 0x289ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14269);
    // 0x289ec4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x289ec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289ec8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x289ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289ecc: 0x0  nop
    ctx->pc = 0x289eccu;
    // NOP
    // 0x289ed0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x289ed0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x289ed4: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x289ed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289ed8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x289ED8u;
    {
        const bool branch_taken_0x289ed8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x289EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289ED8u;
            // 0x289edc: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ed8) {
            ctx->pc = 0x289EF0u;
            goto label_289ef0;
        }
    }
    ctx->pc = 0x289EE0u;
    // 0x289ee0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x289ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x289ee4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x289ee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289ee8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x289EE8u;
    {
        const bool branch_taken_0x289ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289ee8) {
            ctx->pc = 0x289EF8u;
            goto label_289ef8;
        }
    }
    ctx->pc = 0x289EF0u;
label_289ef0:
    // 0x289ef0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x289ef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289ef4: 0x0  nop
    ctx->pc = 0x289ef4u;
    // NOP
label_289ef8:
    // 0x289ef8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x289EF8u;
    {
        const bool branch_taken_0x289ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289EF8u;
            // 0x289efc: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ef8) {
            ctx->pc = 0x28A028u;
            goto label_28a028;
        }
    }
    ctx->pc = 0x289F00u;
label_289f00:
    // 0x289f00: 0x3c02bf7f  lui         $v0, 0xBF7F
    ctx->pc = 0x289f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49023 << 16));
    // 0x289f04: 0x4602a003  div.s       $f0, $f20, $f2
    ctx->pc = 0x289f04u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[2];
    // 0x289f08: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x289f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x289f0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x289f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289f10: 0x0  nop
    ctx->pc = 0x289f10u;
    // NOP
    // 0x289f14: 0x0  nop
    ctx->pc = 0x289f14u;
    // NOP
    // 0x289f18: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x289f18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289f1c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x289F1Cu;
    {
        const bool branch_taken_0x289f1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x289F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289F1Cu;
            // 0x289f20: 0x3c023586  lui         $v0, 0x3586 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13702 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f1c) {
            ctx->pc = 0x289F50u;
            goto label_289f50;
        }
    }
    ctx->pc = 0x289F24u;
    // 0x289f24: 0x344237bd  ori         $v0, $v0, 0x37BD
    ctx->pc = 0x289f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14269);
    // 0x289f28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x289f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289f2c: 0x0  nop
    ctx->pc = 0x289f2cu;
    // NOP
    // 0x289f30: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x289f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289f34: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x289F34u;
    {
        const bool branch_taken_0x289f34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x289f34) {
            ctx->pc = 0x289F50u;
            goto label_289f50;
        }
    }
    ctx->pc = 0x289F3Cu;
    // 0x289f3c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x289f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x289f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289f44: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x289F44u;
    {
        const bool branch_taken_0x289f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289f44) {
            ctx->pc = 0x289F90u;
            goto label_289f90;
        }
    }
    ctx->pc = 0x289F4Cu;
    // 0x289f4c: 0x0  nop
    ctx->pc = 0x289f4cu;
    // NOP
label_289f50:
    // 0x289f50: 0x3c023586  lui         $v0, 0x3586
    ctx->pc = 0x289f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13702 << 16));
    // 0x289f54: 0x344237bd  ori         $v0, $v0, 0x37BD
    ctx->pc = 0x289f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14269);
    // 0x289f58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x289f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289f5c: 0x0  nop
    ctx->pc = 0x289f5cu;
    // NOP
    // 0x289f60: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x289f60u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x289f64: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x289f64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289f68: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x289F68u;
    {
        const bool branch_taken_0x289f68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x289F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289F68u;
            // 0x289f6c: 0x3c024080  lui         $v0, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f68) {
            ctx->pc = 0x289F80u;
            goto label_289f80;
        }
    }
    ctx->pc = 0x289F70u;
    // 0x289f70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x289f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289f74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x289F74u;
    {
        const bool branch_taken_0x289f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289f74) {
            ctx->pc = 0x289F88u;
            goto label_289f88;
        }
    }
    ctx->pc = 0x289F7Cu;
    // 0x289f7c: 0x0  nop
    ctx->pc = 0x289f7cu;
    // NOP
label_289f80:
    // 0x289f80: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x289f80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289f84: 0x0  nop
    ctx->pc = 0x289f84u;
    // NOP
label_289f88:
    // 0x289f88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x289f88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x289f8c: 0x0  nop
    ctx->pc = 0x289f8cu;
    // NOP
label_289f90:
    // 0x289f90: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x289f90u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x289f94: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x289f94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289f98: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x289F98u;
    {
        const bool branch_taken_0x289f98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x289f98) {
            ctx->pc = 0x289FB0u;
            goto label_289fb0;
        }
    }
    ctx->pc = 0x289FA0u;
    // 0x289fa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x289fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289fa4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x289FA4u;
    {
        const bool branch_taken_0x289fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289fa4) {
            ctx->pc = 0x28A028u;
            goto label_28a028;
        }
    }
    ctx->pc = 0x289FACu;
    // 0x289fac: 0x0  nop
    ctx->pc = 0x289facu;
    // NOP
label_289fb0:
    // 0x289fb0: 0x3c023586  lui         $v0, 0x3586
    ctx->pc = 0x289fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13702 << 16));
    // 0x289fb4: 0x344237bd  ori         $v0, $v0, 0x37BD
    ctx->pc = 0x289fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14269);
    // 0x289fb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x289fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289fbc: 0x0  nop
    ctx->pc = 0x289fbcu;
    // NOP
    // 0x289fc0: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x289fc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289fc4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x289FC4u;
    {
        const bool branch_taken_0x289fc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x289FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289FC4u;
            // 0x289fc8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289fc4) {
            ctx->pc = 0x289FD0u;
            goto label_289fd0;
        }
    }
    ctx->pc = 0x289FCCu;
    // 0x289fcc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x289fccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289fd0:
    // 0x289fd0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x289fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x289fd4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x289FD4u;
    {
        const bool branch_taken_0x289fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x289fd4) {
            ctx->pc = 0x28A000u;
            goto label_28a000;
        }
    }
    ctx->pc = 0x289FDCu;
    // 0x289fdc: 0x3c0233d6  lui         $v0, 0x33D6
    ctx->pc = 0x289fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13270 << 16));
    // 0x289fe0: 0x3442bf95  ori         $v0, $v0, 0xBF95
    ctx->pc = 0x289fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49045);
    // 0x289fe4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x289fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289fe8: 0x4600a085  abs.s       $f2, $f20
    ctx->pc = 0x289fe8u;
    ctx->f[2] = FPU_ABS_S(ctx->f[20]);
    // 0x289fec: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x289fecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289ff0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x289FF0u;
    {
        const bool branch_taken_0x289ff0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x289FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289FF0u;
            // 0x289ff4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ff0) {
            ctx->pc = 0x289FFCu;
            goto label_289ffc;
        }
    }
    ctx->pc = 0x289FF8u;
    // 0x289ff8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x289ff8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289ffc:
    // 0x289ffc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x289ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_28a000:
    // 0x28a000: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A000u;
    {
        const bool branch_taken_0x28a000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a000) {
            ctx->pc = 0x28A018u;
            goto label_28a018;
        }
    }
    ctx->pc = 0x28A008u;
    // 0x28a008: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x28a008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x28a00c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28a00cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28a010: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28A010u;
    {
        const bool branch_taken_0x28a010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a010) {
            ctx->pc = 0x28A020u;
            goto label_28a020;
        }
    }
    ctx->pc = 0x28A018u;
label_28a018:
    // 0x28a018: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x28a018u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28a01c: 0x0  nop
    ctx->pc = 0x28a01cu;
    // NOP
label_28a020:
    // 0x28a020: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28a020u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28a024: 0x0  nop
    ctx->pc = 0x28a024u;
    // NOP
label_28a028:
    // 0x28a028: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x28a028u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x28a02c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28a02cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28a030: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x28A030u;
    {
        const bool branch_taken_0x28a030 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28A034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A030u;
            // 0x28a034: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a030) {
            ctx->pc = 0x28A048u;
            goto label_28a048;
        }
    }
    ctx->pc = 0x28A038u;
    // 0x28a038: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28a038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28a03c: 0x0  nop
    ctx->pc = 0x28a03cu;
    // NOP
    // 0x28a040: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28a040u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28a044: 0x0  nop
    ctx->pc = 0x28a044u;
    // NOP
label_28a048:
    // 0x28a048: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x28a048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x28a04c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28a04cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28a050: 0x0  nop
    ctx->pc = 0x28a050u;
    // NOP
    // 0x28a054: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28a054u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28a058: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x28A058u;
    {
        const bool branch_taken_0x28a058 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28a058) {
            ctx->pc = 0x28A068u;
            goto label_28a068;
        }
    }
    ctx->pc = 0x28A060u;
    // 0x28a060: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28a060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a064: 0x0  nop
    ctx->pc = 0x28a064u;
    // NOP
label_28a068:
    // 0x28a068: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28a068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28a06c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x28a06cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28a070: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x28a070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28a074: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x28a074u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28a078: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x28a078u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28a07c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28a07cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a080: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28a080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a084: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28a084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a088: 0x3e00008  jr          $ra
    ctx->pc = 0x28A088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A088u;
            // 0x28a08c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28A090u;
}
