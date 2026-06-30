#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00268A60
// Address: 0x268a60 - 0x2690f0
void sub_00268A60_0x268a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268A60_0x268a60");
#endif

    switch (ctx->pc) {
        case 0x268ae0u: goto label_268ae0;
        case 0x268b04u: goto label_268b04;
        case 0x268b4cu: goto label_268b4c;
        case 0x268b78u: goto label_268b78;
        case 0x268f78u: goto label_268f78;
        case 0x268f90u: goto label_268f90;
        case 0x268fa8u: goto label_268fa8;
        case 0x268fc0u: goto label_268fc0;
        default: break;
    }

    ctx->pc = 0x268a60u;

    // 0x268a60: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x268a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x268a64: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x268a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x268a68: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x268a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x268a6c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x268a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x268a70: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x268a70u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
    // 0x268a74: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x268a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x268a78: 0x27ded6e0  addiu       $fp, $fp, -0x2920
    ctx->pc = 0x268a78u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956768));
    // 0x268a7c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x268a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x268a80: 0x27b60128  addiu       $s6, $sp, 0x128
    ctx->pc = 0x268a80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x268a84: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x268a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x268a88: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x268a88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a8c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x268a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x268a90: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x268a90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a94: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x268a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x268a98: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x268a98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x268a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x268aa0: 0x27b20150  addiu       $s2, $sp, 0x150
    ctx->pc = 0x268aa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x268aa4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x268aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x268aa8: 0x2642000c  addiu       $v0, $s2, 0xC
    ctx->pc = 0x268aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x268aac: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x268aacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x268ab0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x268ab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ab4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x268ab4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x268ab8: 0x27b00124  addiu       $s0, $sp, 0x124
    ctx->pc = 0x268ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x268abc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x268abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x268ac0: 0x27b7012c  addiu       $s7, $sp, 0x12C
    ctx->pc = 0x268ac0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x268ac4: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x268ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x268ac8: 0xafa700cc  sw          $a3, 0xCC($sp)
    ctx->pc = 0x268ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 7));
    // 0x268acc: 0xafa800c8  sw          $t0, 0xC8($sp)
    ctx->pc = 0x268accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 8));
    // 0x268ad0: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x268ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x268ad4: 0xafa900c4  sw          $t1, 0xC4($sp)
    ctx->pc = 0x268ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 9));
    // 0x268ad8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x268ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x268adc: 0x0  nop
    ctx->pc = 0x268adcu;
    // NOP
label_268ae0:
    // 0x268ae0: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x268ae0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x268ae4: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x268ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x268ae8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x268ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268aec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x268aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268af0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x268af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268af4: 0x27a80130  addiu       $t0, $sp, 0x130
    ctx->pc = 0x268af4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x268af8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x268af8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x268afc: 0xc09a1f8  jal         func_2687E0
    ctx->pc = 0x268AFCu;
    SET_GPR_U32(ctx, 31, 0x268B04u);
    ctx->pc = 0x268B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268AFCu;
            // 0x268b00: 0x27de0010  addiu       $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2687E0u;
    if (runtime->hasFunction(0x2687E0u)) {
        auto targetFn = runtime->lookupFunction(0x2687E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268B04u; }
        if (ctx->pc != 0x268B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002687E0_0x2687e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268B04u; }
        if (ctx->pc != 0x268B04u) { return; }
    }
    ctx->pc = 0x268B04u;
label_268b04:
    // 0x268b04: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x268b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268b08: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x268b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268b0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x268b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268b10: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x268b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268b14: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x268b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x268b18: 0x27a80130  addiu       $t0, $sp, 0x130
    ctx->pc = 0x268b18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x268b1c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x268b1cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x268b20: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x268b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x268b24: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x268b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268b28: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x268b28u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x268b2c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x268b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x268b30: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x268b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268b34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x268b34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x268b38: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x268b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x268b3c: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x268b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268b40: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x268b40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x268b44: 0xc09a1f8  jal         func_2687E0
    ctx->pc = 0x268B44u;
    SET_GPR_U32(ctx, 31, 0x268B4Cu);
    ctx->pc = 0x268B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268B44u;
            // 0x268b48: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2687E0u;
    if (runtime->hasFunction(0x2687E0u)) {
        auto targetFn = runtime->lookupFunction(0x2687E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268B4Cu; }
        if (ctx->pc != 0x268B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002687E0_0x2687e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268B4Cu; }
        if (ctx->pc != 0x268B4Cu) { return; }
    }
    ctx->pc = 0x268B4Cu;
label_268b4c:
    // 0x268b4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x268b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x268b50: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x268b50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x268b54: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x268B54u;
    {
        const bool branch_taken_0x268b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268B54u;
            // 0x268b58: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268b54) {
            ctx->pc = 0x268AE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_268ae0;
        }
    }
    ctx->pc = 0x268B5Cu;
    // 0x268b5c: 0x27b70154  addiu       $s7, $sp, 0x154
    ctx->pc = 0x268b5cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x268b60: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x268b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x268b64: 0x27be0158  addiu       $fp, $sp, 0x158
    ctx->pc = 0x268b64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x268b68: 0x27b6011c  addiu       $s6, $sp, 0x11C
    ctx->pc = 0x268b68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x268b6c: 0x27b10118  addiu       $s1, $sp, 0x118
    ctx->pc = 0x268b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x268b70: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x268b70u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x268b74: 0x27b00114  addiu       $s0, $sp, 0x114
    ctx->pc = 0x268b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_268b78:
    // 0x268b78: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x268b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x268b7c: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x268b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x268b80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x268b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268b84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268b88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x268b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268b8c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x268b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268b90: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x268b90u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x268b94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x268b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x268b98: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x268b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268b9c: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x268b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268ba0: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x268ba0u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x268ba4: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x268ba4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x268ba8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x268ba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268bac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x268BACu;
    {
        const bool branch_taken_0x268bac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x268BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268BACu;
            // 0x268bb0: 0x46000005  abs.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_ABS_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268bac) {
            ctx->pc = 0x268BC0u;
            goto label_268bc0;
        }
    }
    ctx->pc = 0x268BB4u;
    // 0x268bb4: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x268bb4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x268bb8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x268bb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268bbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x268bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268bc0:
    // 0x268bc0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x268bc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268bc4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x268BC4u;
    {
        const bool branch_taken_0x268bc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x268bc4) {
            ctx->pc = 0x268BD0u;
            goto label_268bd0;
        }
    }
    ctx->pc = 0x268BCCu;
    // 0x268bcc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x268bccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_268bd0:
    // 0x268bd0: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x268bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x268bd4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x268bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x268bd8: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x268bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x268bdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x268bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x268be0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x268be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x268be4: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x268be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x268be8: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x268be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x268bec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x268becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268bf0: 0xbd2021  addu        $a0, $a1, $sp
    ctx->pc = 0x268bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x268bf4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x268bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x268bf8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x268bf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x268bfc: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x268bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x268c00: 0xe4800110  swc1        $f0, 0x110($a0)
    ctx->pc = 0x268c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
    // 0x268c04: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x268c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268c08: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x268c08u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x268c0c: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x268c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x268c10: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x268c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268c14: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x268c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268c18: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x268c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268c1c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x268c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x268c20: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x268c20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x268c24: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x268c24u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x268c28: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x268c28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x268c2c: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x268c2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268c30: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x268C30u;
    {
        const bool branch_taken_0x268c30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x268c30) {
            ctx->pc = 0x268C58u;
            goto label_268c58;
        }
    }
    ctx->pc = 0x268C38u;
    // 0x268c38: 0x0  nop
    ctx->pc = 0x268c38u;
    // NOP
    // 0x268c3c: 0x0  nop
    ctx->pc = 0x268c3cu;
    // NOP
    // 0x268c40: 0x4600a0d6  rsqrt.s     $f3, $f20, $f0
    ctx->pc = 0x268c40u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[20]);
    // 0x268c44: 0x0  nop
    ctx->pc = 0x268c44u;
    // NOP
    // 0x268c48: 0x0  nop
    ctx->pc = 0x268c48u;
    // NOP
    // 0x268c4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x268C4Cu;
    {
        const bool branch_taken_0x268c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268c4c) {
            ctx->pc = 0x268C58u;
            goto label_268c58;
        }
    }
    ctx->pc = 0x268C54u;
    // 0x268c54: 0x0  nop
    ctx->pc = 0x268c54u;
    // NOP
label_268c58:
    // 0x268c58: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x268c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x268c5c: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x268c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268c60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x268c60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268c64: 0x0  nop
    ctx->pc = 0x268c64u;
    // NOP
    // 0x268c68: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x268c68u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x268c6c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x268c6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x268c70: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x268c70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x268c74: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x268c74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x268c78: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x268c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268c7c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x268c7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x268c80: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x268c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x268c84: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x268c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268c88: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x268c88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x268c8c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x268c8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x268c90: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x268c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268c94: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x268c94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x268c98: 0xe6c10000  swc1        $f1, 0x0($s6)
    ctx->pc = 0x268c98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x268c9c: 0xc6280000  lwc1        $f8, 0x0($s1)
    ctx->pc = 0x268c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x268ca0: 0xc6e70000  lwc1        $f7, 0x0($s7)
    ctx->pc = 0x268ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x268ca4: 0xc6060000  lwc1        $f6, 0x0($s0)
    ctx->pc = 0x268ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x268ca8: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x268ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268cac: 0xc7a50110  lwc1        $f5, 0x110($sp)
    ctx->pc = 0x268cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x268cb0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x268cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268cb4: 0x4608381a  mula.s      $f7, $f8
    ctx->pc = 0x268cb4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x268cb8: 0x460610dd  msub.s      $f3, $f2, $f6
    ctx->pc = 0x268cb8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[6]));
    // 0x268cbc: 0x4605101a  mula.s      $f2, $f5
    ctx->pc = 0x268cbcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x268cc0: 0x4608089d  msub.s      $f2, $f1, $f8
    ctx->pc = 0x268cc0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[8]));
    // 0x268cc4: 0x4606081a  mula.s      $f1, $f6
    ctx->pc = 0x268cc4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x268cc8: 0x4605385d  msub.s      $f1, $f7, $f5
    ctx->pc = 0x268cc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[5]));
    // 0x268ccc: 0x46152942  mul.s       $f5, $f5, $f21
    ctx->pc = 0x268cccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[21]);
    // 0x268cd0: 0xe7a50110  swc1        $f5, 0x110($sp)
    ctx->pc = 0x268cd0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x268cd4: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x268cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x268cd8: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x268cd8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x268cdc: 0x46152942  mul.s       $f5, $f5, $f21
    ctx->pc = 0x268cdcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[21]);
    // 0x268ce0: 0xe6050000  swc1        $f5, 0x0($s0)
    ctx->pc = 0x268ce0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x268ce4: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x268ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x268ce8: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x268ce8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x268cec: 0x46152942  mul.s       $f5, $f5, $f21
    ctx->pc = 0x268cecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[21]);
    // 0x268cf0: 0xe6250000  swc1        $f5, 0x0($s1)
    ctx->pc = 0x268cf0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x268cf4: 0xc6c50000  lwc1        $f5, 0x0($s6)
    ctx->pc = 0x268cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x268cf8: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x268cf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x268cfc: 0x46152942  mul.s       $f5, $f5, $f21
    ctx->pc = 0x268cfcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[21]);
    // 0x268d00: 0xe6c50000  swc1        $f5, 0x0($s6)
    ctx->pc = 0x268d00u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x268d04: 0xc6460000  lwc1        $f6, 0x0($s2)
    ctx->pc = 0x268d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x268d08: 0xc7a50110  lwc1        $f5, 0x110($sp)
    ctx->pc = 0x268d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x268d0c: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x268d0cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x268d10: 0xe7a50100  swc1        $f5, 0x100($sp)
    ctx->pc = 0x268d10u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x268d14: 0xc6e60000  lwc1        $f6, 0x0($s7)
    ctx->pc = 0x268d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x268d18: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x268d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x268d1c: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x268d1cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x268d20: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x268d20u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268d24: 0xc7c60000  lwc1        $f6, 0x0($fp)
    ctx->pc = 0x268d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x268d28: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x268d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x268d2c: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x268d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x268d30: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x268d30u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x268d34: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x268d34u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268d38: 0x27a2015c  addiu       $v0, $sp, 0x15C
    ctx->pc = 0x268d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x268d3c: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x268d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x268d40: 0xc6c50000  lwc1        $f5, 0x0($s6)
    ctx->pc = 0x268d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x268d44: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x268d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x268d48: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x268d48u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x268d4c: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x268d4cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268d50: 0xc6460000  lwc1        $f6, 0x0($s2)
    ctx->pc = 0x268d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x268d54: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x268d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x268d58: 0xc7a50110  lwc1        $f5, 0x110($sp)
    ctx->pc = 0x268d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x268d5c: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x268d5cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x268d60: 0xe7a500f0  swc1        $f5, 0xF0($sp)
    ctx->pc = 0x268d60u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x268d64: 0xc6e60000  lwc1        $f6, 0x0($s7)
    ctx->pc = 0x268d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x268d68: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x268d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x268d6c: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x268d6cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x268d70: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x268d70u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268d74: 0xc7c60000  lwc1        $f6, 0x0($fp)
    ctx->pc = 0x268d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x268d78: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x268d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x268d7c: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x268d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x268d80: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x268d80u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x268d84: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x268d84u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268d88: 0x27a2015c  addiu       $v0, $sp, 0x15C
    ctx->pc = 0x268d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x268d8c: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x268d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x268d90: 0xc6c50000  lwc1        $f5, 0x0($s6)
    ctx->pc = 0x268d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x268d94: 0x27a200fc  addiu       $v0, $sp, 0xFC
    ctx->pc = 0x268d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x268d98: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x268d98u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x268d9c: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x268d9cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268da0: 0xc6450000  lwc1        $f5, 0x0($s2)
    ctx->pc = 0x268da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x268da4: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x268da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x268da8: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x268da8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x268dac: 0xe7a500e0  swc1        $f5, 0xE0($sp)
    ctx->pc = 0x268dacu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x268db0: 0xc6e50000  lwc1        $f5, 0x0($s7)
    ctx->pc = 0x268db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x268db4: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x268db4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x268db8: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x268db8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268dbc: 0xc7c50000  lwc1        $f5, 0x0($fp)
    ctx->pc = 0x268dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x268dc0: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x268dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x268dc4: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x268dc4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x268dc8: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x268dc8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268dcc: 0x27a2015c  addiu       $v0, $sp, 0x15C
    ctx->pc = 0x268dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x268dd0: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x268dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x268dd4: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x268dd4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x268dd8: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x268dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x268ddc: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x268ddcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268de0: 0xc6450000  lwc1        $f5, 0x0($s2)
    ctx->pc = 0x268de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x268de4: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x268de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x268de8: 0x460328c1  sub.s       $f3, $f5, $f3
    ctx->pc = 0x268de8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x268dec: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x268decu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x268df0: 0xc6e30000  lwc1        $f3, 0x0($s7)
    ctx->pc = 0x268df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x268df4: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x268df4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x268df8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x268df8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268dfc: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x268dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268e00: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x268e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x268e04: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x268e04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x268e08: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x268e08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268e0c: 0x27a2015c  addiu       $v0, $sp, 0x15C
    ctx->pc = 0x268e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x268e10: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x268e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268e14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x268e14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x268e18: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x268e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x268e1c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x268e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268e20: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x268e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x268e24: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x268e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268e28: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x268e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268e2c: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x268e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x268e30: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x268e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268e34: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x268e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x268e38: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x268e38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x268e3c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x268e3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x268e40: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x268e40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x268e44: 0x46040032  c.eq.s      $f0, $f4
    ctx->pc = 0x268e44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268e48: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x268E48u;
    {
        const bool branch_taken_0x268e48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x268e48) {
            ctx->pc = 0x268E70u;
            goto label_268e70;
        }
    }
    ctx->pc = 0x268E50u;
    // 0x268e50: 0x0  nop
    ctx->pc = 0x268e50u;
    // NOP
    // 0x268e54: 0x0  nop
    ctx->pc = 0x268e54u;
    // NOP
    // 0x268e58: 0x4600a116  rsqrt.s     $f4, $f20, $f0
    ctx->pc = 0x268e58u;
    ctx->f[4] = 1.0f / sqrtf(ctx->f[20]);
    // 0x268e5c: 0x0  nop
    ctx->pc = 0x268e5cu;
    // NOP
    // 0x268e60: 0x0  nop
    ctx->pc = 0x268e60u;
    // NOP
    // 0x268e64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x268E64u;
    {
        const bool branch_taken_0x268e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268e64) {
            ctx->pc = 0x268E70u;
            goto label_268e70;
        }
    }
    ctx->pc = 0x268E6Cu;
    // 0x268e6c: 0x0  nop
    ctx->pc = 0x268e6cu;
    // NOP
label_268e70:
    // 0x268e70: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x268e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x268e74: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x268e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268e78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x268e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x268e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e80: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x268e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e84: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x268e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x268e88: 0x27a80130  addiu       $t0, $sp, 0x130
    ctx->pc = 0x268e88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x268e8c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x268e8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x268e90: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x268e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x268e94: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x268e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268e98: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x268e98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x268e9c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x268e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268ea0: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x268ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x268ea4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x268ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268ea8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x268ea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x268eac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x268eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268eb0: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x268eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x268eb4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x268eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268eb8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x268eb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x268ebc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x268ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268ec0: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x268ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268ec4: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x268ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x268ec8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x268ec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x268ecc: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x268eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x268ed0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x268ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268ed4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x268ed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x268ed8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x268ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268edc: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x268edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x268ee0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x268ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268ee4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x268ee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x268ee8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x268ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268eec: 0x27a200fc  addiu       $v0, $sp, 0xFC
    ctx->pc = 0x268eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x268ef0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x268ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268ef4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x268ef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x268ef8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x268ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268efc: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x268efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268f00: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x268f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x268f04: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x268f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x268f08: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x268f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x268f0c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x268f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268f10: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x268f10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x268f14: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x268f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268f18: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x268f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x268f1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x268f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268f20: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x268f20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x268f24: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x268f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268f28: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x268f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x268f2c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x268f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268f30: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x268f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x268f34: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x268f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268f38: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x268f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268f3c: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x268f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x268f40: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x268f40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x268f44: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x268f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x268f48: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x268f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268f4c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x268f4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x268f50: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x268f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268f54: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x268f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x268f58: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x268f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268f5c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x268f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x268f60: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x268f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x268f64: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x268f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x268f68: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x268f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268f6c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x268f6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x268f70: 0xc09a1f8  jal         func_2687E0
    ctx->pc = 0x268F70u;
    SET_GPR_U32(ctx, 31, 0x268F78u);
    ctx->pc = 0x268F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268F70u;
            // 0x268f74: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2687E0u;
    if (runtime->hasFunction(0x2687E0u)) {
        auto targetFn = runtime->lookupFunction(0x2687E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268F78u; }
        if (ctx->pc != 0x268F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002687E0_0x2687e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268F78u; }
        if (ctx->pc != 0x268F78u) { return; }
    }
    ctx->pc = 0x268F78u;
label_268f78:
    // 0x268f78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x268f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x268f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f80: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x268f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f84: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x268f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x268f88: 0xc09a1f8  jal         func_2687E0
    ctx->pc = 0x268F88u;
    SET_GPR_U32(ctx, 31, 0x268F90u);
    ctx->pc = 0x268F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268F88u;
            // 0x268f8c: 0x27a80130  addiu       $t0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2687E0u;
    if (runtime->hasFunction(0x2687E0u)) {
        auto targetFn = runtime->lookupFunction(0x2687E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268F90u; }
        if (ctx->pc != 0x268F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002687E0_0x2687e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268F90u; }
        if (ctx->pc != 0x268F90u) { return; }
    }
    ctx->pc = 0x268F90u;
label_268f90:
    // 0x268f90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x268f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f94: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x268f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f98: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x268f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f9c: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x268f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x268fa0: 0xc09a1f8  jal         func_2687E0
    ctx->pc = 0x268FA0u;
    SET_GPR_U32(ctx, 31, 0x268FA8u);
    ctx->pc = 0x268FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268FA0u;
            // 0x268fa4: 0x27a80130  addiu       $t0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2687E0u;
    if (runtime->hasFunction(0x2687E0u)) {
        auto targetFn = runtime->lookupFunction(0x2687E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268FA8u; }
        if (ctx->pc != 0x268FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002687E0_0x2687e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268FA8u; }
        if (ctx->pc != 0x268FA8u) { return; }
    }
    ctx->pc = 0x268FA8u;
label_268fa8:
    // 0x268fa8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x268fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268fac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x268facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268fb0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x268fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268fb4: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x268fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x268fb8: 0xc09a1f8  jal         func_2687E0
    ctx->pc = 0x268FB8u;
    SET_GPR_U32(ctx, 31, 0x268FC0u);
    ctx->pc = 0x268FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268FB8u;
            // 0x268fbc: 0x27a80130  addiu       $t0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2687E0u;
    if (runtime->hasFunction(0x2687E0u)) {
        auto targetFn = runtime->lookupFunction(0x2687E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268FC0u; }
        if (ctx->pc != 0x268FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002687E0_0x2687e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268FC0u; }
        if (ctx->pc != 0x268FC0u) { return; }
    }
    ctx->pc = 0x268FC0u;
label_268fc0:
    // 0x268fc0: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x268fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x268fc4: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x268fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x268fc8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x268fc8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x268fcc: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x268fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x268fd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x268fd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268fd4: 0x0  nop
    ctx->pc = 0x268fd4u;
    // NOP
    // 0x268fd8: 0x4601ad42  mul.s       $f21, $f21, $f1
    ctx->pc = 0x268fd8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x268fdc: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x268fdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268fe0: 0x4500fee5  bc1f        . + 4 + (-0x11B << 2)
    ctx->pc = 0x268FE0u;
    {
        const bool branch_taken_0x268fe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x268fe0) {
            ctx->pc = 0x268B78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_268b78;
        }
    }
    ctx->pc = 0x268FE8u;
    // 0x268fe8: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x268fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268fec: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x268fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x268ff0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x268ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x268ff4: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x268ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268ff8: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x268ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x268ffc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x268ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x269000: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x269000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269004: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x269004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x269008: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x269008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x26900c: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x26900cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269010: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x269010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x269014: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x269014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x269018: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x269018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26901c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x26901cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x269020: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x269020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x269024: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x269024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269028: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x269028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x26902c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x26902cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x269030: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x269030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269034: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x269034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x269038: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x269038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x26903c: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x26903cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269040: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x269040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x269044: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x269044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x269048: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x269048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26904c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x26904cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269050: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x269050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x269054: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x269054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x269058: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x269058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26905c: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x26905cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x269060: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x269060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x269064: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x269064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269068: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x269068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x26906c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x26906cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x269070: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x269070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269074: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x269074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x269078: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x269078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x26907c: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x26907cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269080: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x269080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x269084: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x269084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x269088: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x269088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26908c: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x26908cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x269090: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x269090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x269094: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x269094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269098: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x269098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x26909c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x26909cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2690a0: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x2690a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2690a4: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x2690a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2690a8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2690a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2690ac: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x2690acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2690b0: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x2690b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2690b4: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x2690b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x2690b8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2690b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2690bc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2690bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2690c0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2690c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2690c4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2690c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2690c8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2690c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2690cc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2690ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2690d0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2690d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2690d4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2690d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2690d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2690d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2690dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2690dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2690e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2690e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2690e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2690e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2690e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2690E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2690ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2690E8u;
            // 0x2690ec: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2690F0u;
}
