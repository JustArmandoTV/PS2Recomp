#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00276B40
// Address: 0x276b40 - 0x276de0
void sub_00276B40_0x276b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276B40_0x276b40");
#endif

    switch (ctx->pc) {
        case 0x276b7cu: goto label_276b7c;
        case 0x276dbcu: goto label_276dbc;
        default: break;
    }

    ctx->pc = 0x276b40u;

    // 0x276b40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x276b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x276b44: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x276b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x276b48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x276b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x276b4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x276b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x276b50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x276b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x276b54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x276b54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276b58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x276b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x276b5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x276b5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276b60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x276b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x276b64: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x276b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276b68: 0x8022e9d0  lb          $v0, -0x1630($at)
    ctx->pc = 0x276b68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961616)));
    // 0x276b6c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x276B6Cu;
    {
        const bool branch_taken_0x276b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276B6Cu;
            // 0x276b70: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b6c) {
            ctx->pc = 0x276B98u;
            goto label_276b98;
        }
    }
    ctx->pc = 0x276B74u;
    // 0x276b74: 0xc086406  jal         func_219018
    ctx->pc = 0x276B74u;
    SET_GPR_U32(ctx, 31, 0x276B7Cu);
    ctx->pc = 0x276B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276B74u;
            // 0x276b78: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219018u;
    if (runtime->hasFunction(0x219018u)) {
        auto targetFn = runtime->lookupFunction(0x219018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276B7Cu; }
        if (ctx->pc != 0x276B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00219018_0x219018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276B7Cu; }
        if (ctx->pc != 0x276B7Cu) { return; }
    }
    ctx->pc = 0x276B7Cu;
label_276b7c:
    // 0x276b7c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x276b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x276b80: 0xa022e9d0  sb          $v0, -0x1630($at)
    ctx->pc = 0x276b80u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294961616), (uint8_t)GPR_U32(ctx, 2));
    // 0x276b84: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x276b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x276b88: 0x8023e9d0  lb          $v1, -0x1630($at)
    ctx->pc = 0x276b88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961616)));
    // 0x276b8c: 0x1060008c  beqz        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x276B8Cu;
    {
        const bool branch_taken_0x276b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x276b8c) {
            ctx->pc = 0x276DC0u;
            goto label_276dc0;
        }
    }
    ctx->pc = 0x276B94u;
    // 0x276b94: 0x0  nop
    ctx->pc = 0x276b94u;
    // NOP
label_276b98:
    // 0x276b98: 0xae72002c  sw          $s2, 0x2C($s3)
    ctx->pc = 0x276b98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 18));
    // 0x276b9c: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x276b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x276ba0: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x276ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x276ba4: 0x3c024780  lui         $v0, 0x4780
    ctx->pc = 0x276ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18304 << 16));
    // 0x276ba8: 0x27ab0078  addiu       $t3, $sp, 0x78
    ctx->pc = 0x276ba8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x276bac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276bb0: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x276bb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x276bb4: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x276bb4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x276bb8: 0x27a90094  addiu       $t1, $sp, 0x94
    ctx->pc = 0x276bb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x276bbc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x276bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x276bc0: 0x27a80098  addiu       $t0, $sp, 0x98
    ctx->pc = 0x276bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x276bc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276bc8: 0x27a7009c  addiu       $a3, $sp, 0x9C
    ctx->pc = 0x276bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x276bcc: 0x8c6d0038  lw          $t5, 0x38($v1)
    ctx->pc = 0x276bccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x276bd0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x276bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x276bd4: 0x27a400a4  addiu       $a0, $sp, 0xA4
    ctx->pc = 0x276bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x276bd8: 0x27a200ac  addiu       $v0, $sp, 0xAC
    ctx->pc = 0x276bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x276bdc: 0x240c000d  addiu       $t4, $zero, 0xD
    ctx->pc = 0x276bdcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x276be0: 0x8dad0000  lw          $t5, 0x0($t5)
    ctx->pc = 0x276be0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x276be4: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x276be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x276be8: 0x8dad0018  lw          $t5, 0x18($t5)
    ctx->pc = 0x276be8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x276bec: 0xae6d0010  sw          $t5, 0x10($s3)
    ctx->pc = 0x276becu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 13));
    // 0x276bf0: 0xae710024  sw          $s1, 0x24($s3)
    ctx->pc = 0x276bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 17));
    // 0x276bf4: 0xae700028  sw          $s0, 0x28($s3)
    ctx->pc = 0x276bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 16));
    // 0x276bf8: 0x8e4d0034  lw          $t5, 0x34($s2)
    ctx->pc = 0x276bf8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x276bfc: 0x8dad0000  lw          $t5, 0x0($t5)
    ctx->pc = 0x276bfcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x276c00: 0x8dad000c  lw          $t5, 0xC($t5)
    ctx->pc = 0x276c00u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x276c04: 0xae6d0018  sw          $t5, 0x18($s3)
    ctx->pc = 0x276c04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 13));
    // 0x276c08: 0xae66001c  sw          $a2, 0x1C($s3)
    ctx->pc = 0x276c08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 6));
    // 0x276c0c: 0xae660020  sw          $a2, 0x20($s3)
    ctx->pc = 0x276c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 6));
    // 0x276c10: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x276c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x276c14: 0x8cc60020  lw          $a2, 0x20($a2)
    ctx->pc = 0x276c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x276c18: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x276c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x276c1c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x276c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x276c20: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x276c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x276c24: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x276c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x276c28: 0x8e6d0010  lw          $t5, 0x10($s3)
    ctx->pc = 0x276c28u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x276c2c: 0xc5a2001c  lwc1        $f2, 0x1C($t5)
    ctx->pc = 0x276c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x276c30: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x276c30u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
    // 0x276c34: 0xe6620014  swc1        $f2, 0x14($s3)
    ctx->pc = 0x276c34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x276c38: 0x8e6d0010  lw          $t5, 0x10($s3)
    ctx->pc = 0x276c38u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x276c3c: 0xc5a2001c  lwc1        $f2, 0x1C($t5)
    ctx->pc = 0x276c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x276c40: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x276c40u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x276c44: 0xe5620000  swc1        $f2, 0x0($t3)
    ctx->pc = 0x276c44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x276c48: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x276c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276c4c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x276c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x276c50: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x276c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x276c54: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x276c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276c58: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x276c58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x276c5c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x276c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x276c60: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x276c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276c64: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x276c64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x276c68: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x276c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x276c6c: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x276c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276c70: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x276c70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x276c74: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x276c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x276c78: 0xc6430020  lwc1        $f3, 0x20($s2)
    ctx->pc = 0x276c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x276c7c: 0xc6420024  lwc1        $f2, 0x24($s2)
    ctx->pc = 0x276c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x276c80: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x276c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276c84: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x276c84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x276c88: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x276c88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x276c8c: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x276c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x276c90: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x276c90u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x276c94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x276c94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x276c98: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x276c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x276c9c: 0x8e6a0010  lw          $t2, 0x10($s3)
    ctx->pc = 0x276c9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x276ca0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x276ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276ca4: 0xc5400010  lwc1        $f0, 0x10($t2)
    ctx->pc = 0x276ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276ca8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x276ca8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x276cac: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x276cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x276cb0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x276cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276cb4: 0xc5400014  lwc1        $f0, 0x14($t2)
    ctx->pc = 0x276cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276cb8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x276cb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x276cbc: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x276cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x276cc0: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x276cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276cc4: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x276cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276cc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x276cc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x276ccc: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x276cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x276cd0: 0xc540001c  lwc1        $f0, 0x1C($t2)
    ctx->pc = 0x276cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276cd4: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x276cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276cd8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x276cd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x276cdc: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x276cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x276ce0: 0x8e6a0010  lw          $t2, 0x10($s3)
    ctx->pc = 0x276ce0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x276ce4: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x276ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276ce8: 0xc5400010  lwc1        $f0, 0x10($t2)
    ctx->pc = 0x276ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276cec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x276cecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x276cf0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x276cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x276cf4: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x276cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276cf8: 0xc5400014  lwc1        $f0, 0x14($t2)
    ctx->pc = 0x276cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276cfc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x276cfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x276d00: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x276d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x276d04: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x276d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276d08: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x276d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276d0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x276d0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x276d10: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x276d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x276d14: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x276d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276d18: 0xc540001c  lwc1        $f0, 0x1C($t2)
    ctx->pc = 0x276d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276d1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x276d1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x276d20: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x276d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x276d24: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x276d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276d28: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x276d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276d2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x276d2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x276d30: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x276d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x276d34: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x276d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276d38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x276d38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x276d3c: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x276d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x276d40: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x276d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276d44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x276d44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x276d48: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x276d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x276d4c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x276d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276d50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x276d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x276d54: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x276d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x276d58: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x276d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276d5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x276d5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x276d60: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x276d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x276d64: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x276d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276d68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x276d68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x276d6c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x276d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x276d70: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x276d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276d74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x276d74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x276d78: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x276d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x276d7c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x276d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276d80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x276d80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x276d84: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x276d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x276d88: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x276d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x276d8c: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x276d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x276d90: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x276d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x276d94: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x276d94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x276d98: 0x144c0002  bne         $v0, $t4, . + 4 + (0x2 << 2)
    ctx->pc = 0x276D98u;
    {
        const bool branch_taken_0x276d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        ctx->pc = 0x276D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276D98u;
            // 0x276d9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276d98) {
            ctx->pc = 0x276DA4u;
            goto label_276da4;
        }
    }
    ctx->pc = 0x276DA0u;
    // 0x276da0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x276da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_276da4:
    // 0x276da4: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x276da4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
    // 0x276da8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x276da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276dac: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x276dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x276db0: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x276db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x276db4: 0xc09d4e0  jal         func_275380
    ctx->pc = 0x276DB4u;
    SET_GPR_U32(ctx, 31, 0x276DBCu);
    ctx->pc = 0x276DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276DB4u;
            // 0x276db8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x275380u;
    if (runtime->hasFunction(0x275380u)) {
        auto targetFn = runtime->lookupFunction(0x275380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276DBCu; }
        if (ctx->pc != 0x276DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00275380_0x275380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276DBCu; }
        if (ctx->pc != 0x276DBCu) { return; }
    }
    ctx->pc = 0x276DBCu;
label_276dbc:
    // 0x276dbc: 0x0  nop
    ctx->pc = 0x276dbcu;
    // NOP
label_276dc0:
    // 0x276dc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x276dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x276dc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x276dc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276dc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x276dc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276dcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x276dccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276dd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x276dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x276DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276DD4u;
            // 0x276dd8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276DDCu;
    // 0x276ddc: 0x0  nop
    ctx->pc = 0x276ddcu;
    // NOP
}
