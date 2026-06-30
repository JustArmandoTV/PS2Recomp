#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00228B30
// Address: 0x228b30 - 0x229140
void sub_00228B30_0x228b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228B30_0x228b30");
#endif

    switch (ctx->pc) {
        case 0x228b68u: goto label_228b68;
        case 0x228c84u: goto label_228c84;
        default: break;
    }

    ctx->pc = 0x228b30u;

    // 0x228b30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x228b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x228b34: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x228b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x228b38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x228b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x228b3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x228b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x228b40: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x228b40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228b44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x228b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x228b48: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x228b48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228b4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x228b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x228b50: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x228b50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228b54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x228b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x228b58: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x228b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228b5c: 0x24d1ffff  addiu       $s1, $a2, -0x1
    ctx->pc = 0x228b5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x228b60: 0x620016b  bltz        $s1, . + 4 + (0x16B << 2)
    ctx->pc = 0x228B60u;
    {
        const bool branch_taken_0x228b60 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x228B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228B60u;
            // 0x228b64: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228b60) {
            ctx->pc = 0x229110u;
            goto label_229110;
        }
    }
    ctx->pc = 0x228B68u;
label_228b68:
    // 0x228b68: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x228b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x228b6c: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x228b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x228b70: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x228b70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x228b74: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x228b74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x228b78: 0x10200161  beqz        $at, . + 4 + (0x161 << 2)
    ctx->pc = 0x228B78u;
    {
        const bool branch_taken_0x228b78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x228b78) {
            ctx->pc = 0x229100u;
            goto label_229100;
        }
    }
    ctx->pc = 0x228B80u;
    // 0x228b80: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x228b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x228b84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x228b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x228b88: 0x2463f270  addiu       $v1, $v1, -0xD90
    ctx->pc = 0x228b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963824));
    // 0x228b8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x228b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x228b90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x228b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x228b94: 0x400008  jr          $v0
    ctx->pc = 0x228B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228BA0u: goto label_228ba0;
            case 0x228DB8u: goto label_228db8;
            case 0x228FC0u: goto label_228fc0;
            case 0x229040u: goto label_229040;
            case 0x229100u: goto label_229100;
            default: break;
        }
        return;
    }
    ctx->pc = 0x228B9Cu;
    // 0x228b9c: 0x0  nop
    ctx->pc = 0x228b9cu;
    // NOP
label_228ba0:
    // 0x228ba0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x228ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x228ba4: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x228ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x228ba8: 0xc60100bc  lwc1        $f1, 0xBC($s0)
    ctx->pc = 0x228ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228bac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228bb0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x228bb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x228bb4: 0x0  nop
    ctx->pc = 0x228bb4u;
    // NOP
    // 0x228bb8: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x228bb8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x228bbc: 0x4601201d  msub.s      $f0, $f4, $f1
    ctx->pc = 0x228bbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x228bc0: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x228bc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228bc4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x228BC4u;
    {
        const bool branch_taken_0x228bc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228bc4) {
            ctx->pc = 0x228BD8u;
            goto label_228bd8;
        }
    }
    ctx->pc = 0x228BCCu;
    // 0x228bcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x228BCCu;
    {
        const bool branch_taken_0x228bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228bcc) {
            ctx->pc = 0x228BE0u;
            goto label_228be0;
        }
    }
    ctx->pc = 0x228BD4u;
    // 0x228bd4: 0x0  nop
    ctx->pc = 0x228bd4u;
    // NOP
label_228bd8:
    // 0x228bd8: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x228bd8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x228bdc: 0x0  nop
    ctx->pc = 0x228bdcu;
    // NOP
label_228be0:
    // 0x228be0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x228be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x228be4: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x228be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228be8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228bec: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x228becu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x228bf0: 0x0  nop
    ctx->pc = 0x228bf0u;
    // NOP
    // 0x228bf4: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x228bf4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x228bf8: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x228bf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x228bfc: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x228bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x228c00: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x228c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228c04: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x228c04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x228c08: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x228c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x228c0c: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x228c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228c10: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x228c10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x228c14: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x228c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x228c18: 0xc60000ec  lwc1        $f0, 0xEC($s0)
    ctx->pc = 0x228c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228c1c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x228c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x228c20: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x228c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x228c24: 0xc60000c0  lwc1        $f0, 0xC0($s0)
    ctx->pc = 0x228c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228c28: 0x4600201d  msub.s      $f0, $f4, $f0
    ctx->pc = 0x228c28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x228c2c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x228c2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228c30: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x228C30u;
    {
        const bool branch_taken_0x228c30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228c30) {
            ctx->pc = 0x228C40u;
            goto label_228c40;
        }
    }
    ctx->pc = 0x228C38u;
    // 0x228c38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x228C38u;
    {
        const bool branch_taken_0x228c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228c38) {
            ctx->pc = 0x228C48u;
            goto label_228c48;
        }
    }
    ctx->pc = 0x228C40u;
label_228c40:
    // 0x228c40: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x228c40u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x228c44: 0x0  nop
    ctx->pc = 0x228c44u;
    // NOP
label_228c48:
    // 0x228c48: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x228c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x228c4c: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x228c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228c50: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x228c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x228c54: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x228c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x228c58: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x228c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x228c5c: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x228c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228c60: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x228c60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x228c64: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x228c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x228c68: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x228c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228c6c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x228c6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x228c70: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x228c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x228c74: 0xc60000fc  lwc1        $f0, 0xFC($s0)
    ctx->pc = 0x228c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228c78: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x228c78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x228c7c: 0xc0a330c  jal         func_28CC30
    ctx->pc = 0x228C7Cu;
    SET_GPR_U32(ctx, 31, 0x228C84u);
    ctx->pc = 0x228C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228C7Cu;
            // 0x228c80: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CC30u;
    if (runtime->hasFunction(0x28CC30u)) {
        auto targetFn = runtime->lookupFunction(0x28CC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228C84u; }
        if (ctx->pc != 0x228C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CC30_0x28cc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228C84u; }
        if (ctx->pc != 0x228C84u) { return; }
    }
    ctx->pc = 0x228C84u;
label_228c84:
    // 0x228c84: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x228c84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x228c88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x228c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x228c8c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x228c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228c90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228c94: 0x0  nop
    ctx->pc = 0x228c94u;
    // NOP
    // 0x228c98: 0xe6410030  swc1        $f1, 0x30($s2)
    ctx->pc = 0x228c98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x228c9c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x228c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228ca0: 0xe6410034  swc1        $f1, 0x34($s2)
    ctx->pc = 0x228ca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x228ca4: 0xc60100d8  lwc1        $f1, 0xD8($s0)
    ctx->pc = 0x228ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228ca8: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x228ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x228cac: 0xc60100dc  lwc1        $f1, 0xDC($s0)
    ctx->pc = 0x228cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228cb0: 0xe641003c  swc1        $f1, 0x3C($s2)
    ctx->pc = 0x228cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x228cb4: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x228cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228cb8: 0xe6410010  swc1        $f1, 0x10($s2)
    ctx->pc = 0x228cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x228cbc: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x228cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228cc0: 0xe6410014  swc1        $f1, 0x14($s2)
    ctx->pc = 0x228cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x228cc4: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x228cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228cc8: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x228cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x228ccc: 0xc60100ec  lwc1        $f1, 0xEC($s0)
    ctx->pc = 0x228cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228cd0: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x228cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x228cd4: 0xc6840000  lwc1        $f4, 0x0($s4)
    ctx->pc = 0x228cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x228cd8: 0xc603005c  lwc1        $f3, 0x5C($s0)
    ctx->pc = 0x228cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x228cdc: 0xc602006c  lwc1        $f2, 0x6C($s0)
    ctx->pc = 0x228cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228ce0: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x228ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228ce4: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x228ce4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x228ce8: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x228ce8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x228cec: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x228cecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x228cf0: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x228cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228cf4: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x228cf4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x228cf8: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x228cf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x228cfc: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x228cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x228d00: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x228d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228d04: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x228d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228d08: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x228d08u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x228d0c: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x228d0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x228d10: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x228d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x228d14: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x228d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228d18: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x228d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228d1c: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x228d1cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x228d20: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x228d20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x228d24: 0xe6400048  swc1        $f0, 0x48($s2)
    ctx->pc = 0x228d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x228d28: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x228d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228d2c: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x228d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228d30: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x228d30u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x228d34: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x228d34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x228d38: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x228d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x228d3c: 0xc60400f4  lwc1        $f4, 0xF4($s0)
    ctx->pc = 0x228d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x228d40: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x228d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228d44: 0xc60500f0  lwc1        $f5, 0xF0($s0)
    ctx->pc = 0x228d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x228d48: 0xc6410050  lwc1        $f1, 0x50($s2)
    ctx->pc = 0x228d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228d4c: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x228d4cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x228d50: 0xc60300f8  lwc1        $f3, 0xF8($s0)
    ctx->pc = 0x228d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x228d54: 0xc6420070  lwc1        $f2, 0x70($s2)
    ctx->pc = 0x228d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228d58: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x228d58u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x228d5c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x228d5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x228d60: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x228d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x228d64: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x228d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228d68: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x228d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228d6c: 0xc6420074  lwc1        $f2, 0x74($s2)
    ctx->pc = 0x228d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228d70: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x228d70u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x228d74: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x228d74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x228d78: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x228d78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x228d7c: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x228d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x228d80: 0xc6400068  lwc1        $f0, 0x68($s2)
    ctx->pc = 0x228d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228d84: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x228d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228d88: 0xc6420078  lwc1        $f2, 0x78($s2)
    ctx->pc = 0x228d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228d8c: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x228d8cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x228d90: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x228d90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x228d94: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x228d94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x228d98: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x228d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x228d9c: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x228d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    // 0x228da0: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x228da0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x228da4: 0x960200c4  lhu         $v0, 0xC4($s0)
    ctx->pc = 0x228da4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x228da8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x228da8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x228dac: 0x960200c6  lhu         $v0, 0xC6($s0)
    ctx->pc = 0x228dacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 198)));
    // 0x228db0: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x228DB0u;
    {
        const bool branch_taken_0x228db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228DB0u;
            // 0x228db4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228db0) {
            ctx->pc = 0x229100u;
            goto label_229100;
        }
    }
    ctx->pc = 0x228DB8u;
label_228db8:
    // 0x228db8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x228db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x228dbc: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x228dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x228dc0: 0xc60100bc  lwc1        $f1, 0xBC($s0)
    ctx->pc = 0x228dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228dc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228dc8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x228dc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x228dcc: 0x0  nop
    ctx->pc = 0x228dccu;
    // NOP
    // 0x228dd0: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x228dd0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x228dd4: 0x4601201d  msub.s      $f0, $f4, $f1
    ctx->pc = 0x228dd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x228dd8: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x228dd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228ddc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x228DDCu;
    {
        const bool branch_taken_0x228ddc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228ddc) {
            ctx->pc = 0x228DF0u;
            goto label_228df0;
        }
    }
    ctx->pc = 0x228DE4u;
    // 0x228de4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x228DE4u;
    {
        const bool branch_taken_0x228de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228de4) {
            ctx->pc = 0x228DF8u;
            goto label_228df8;
        }
    }
    ctx->pc = 0x228DECu;
    // 0x228dec: 0x0  nop
    ctx->pc = 0x228decu;
    // NOP
label_228df0:
    // 0x228df0: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x228df0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x228df4: 0x0  nop
    ctx->pc = 0x228df4u;
    // NOP
label_228df8:
    // 0x228df8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x228df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x228dfc: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x228dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228e04: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x228e04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x228e08: 0x0  nop
    ctx->pc = 0x228e08u;
    // NOP
    // 0x228e0c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x228e0cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x228e10: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x228e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x228e14: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x228e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x228e18: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x228e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228e1c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x228e1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x228e20: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x228e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x228e24: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x228e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228e28: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x228e28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x228e2c: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x228e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x228e30: 0xc60000ec  lwc1        $f0, 0xEC($s0)
    ctx->pc = 0x228e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228e34: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x228e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x228e38: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x228e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x228e3c: 0xc60000c0  lwc1        $f0, 0xC0($s0)
    ctx->pc = 0x228e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228e40: 0x4600201d  msub.s      $f0, $f4, $f0
    ctx->pc = 0x228e40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x228e44: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x228e44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228e48: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x228E48u;
    {
        const bool branch_taken_0x228e48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228e48) {
            ctx->pc = 0x228E58u;
            goto label_228e58;
        }
    }
    ctx->pc = 0x228E50u;
    // 0x228e50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x228E50u;
    {
        const bool branch_taken_0x228e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228e50) {
            ctx->pc = 0x228E60u;
            goto label_228e60;
        }
    }
    ctx->pc = 0x228E58u;
label_228e58:
    // 0x228e58: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x228e58u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x228e5c: 0x0  nop
    ctx->pc = 0x228e5cu;
    // NOP
label_228e60:
    // 0x228e60: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x228e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x228e64: 0xc60100f0  lwc1        $f1, 0xF0($s0)
    ctx->pc = 0x228e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228e68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x228e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228e6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x228e6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228e70: 0x0  nop
    ctx->pc = 0x228e70u;
    // NOP
    // 0x228e74: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x228e74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x228e78: 0xe60100f0  swc1        $f1, 0xF0($s0)
    ctx->pc = 0x228e78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x228e7c: 0xc60100f4  lwc1        $f1, 0xF4($s0)
    ctx->pc = 0x228e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228e80: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x228e80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x228e84: 0xe60100f4  swc1        $f1, 0xF4($s0)
    ctx->pc = 0x228e84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x228e88: 0xc60100f8  lwc1        $f1, 0xF8($s0)
    ctx->pc = 0x228e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228e8c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x228e8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x228e90: 0xe60100f8  swc1        $f1, 0xF8($s0)
    ctx->pc = 0x228e90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x228e94: 0xc60100fc  lwc1        $f1, 0xFC($s0)
    ctx->pc = 0x228e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228e98: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x228e98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x228e9c: 0xe60100fc  swc1        $f1, 0xFC($s0)
    ctx->pc = 0x228e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x228ea0: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x228ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x228ea4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x228ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228ea8: 0xe6410030  swc1        $f1, 0x30($s2)
    ctx->pc = 0x228ea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x228eac: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x228eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228eb0: 0xe6410034  swc1        $f1, 0x34($s2)
    ctx->pc = 0x228eb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x228eb4: 0xc60100d8  lwc1        $f1, 0xD8($s0)
    ctx->pc = 0x228eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228eb8: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x228eb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x228ebc: 0xc60100dc  lwc1        $f1, 0xDC($s0)
    ctx->pc = 0x228ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228ec0: 0xe641003c  swc1        $f1, 0x3C($s2)
    ctx->pc = 0x228ec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x228ec4: 0xc6840000  lwc1        $f4, 0x0($s4)
    ctx->pc = 0x228ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x228ec8: 0xc603005c  lwc1        $f3, 0x5C($s0)
    ctx->pc = 0x228ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x228ecc: 0xc602006c  lwc1        $f2, 0x6C($s0)
    ctx->pc = 0x228eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228ed0: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x228ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228ed4: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x228ed4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x228ed8: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x228ed8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x228edc: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x228edcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x228ee0: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x228ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228ee4: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x228ee4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x228ee8: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x228ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x228eec: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x228eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x228ef0: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x228ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228ef4: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x228ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228ef8: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x228ef8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x228efc: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x228efcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x228f00: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x228f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x228f04: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x228f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228f08: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x228f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228f0c: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x228f0cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x228f10: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x228f10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x228f14: 0xe6400048  swc1        $f0, 0x48($s2)
    ctx->pc = 0x228f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x228f18: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x228f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228f1c: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x228f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228f20: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x228f20u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x228f24: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x228f24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x228f28: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x228f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x228f2c: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x228f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228f30: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x228f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x228f34: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x228f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228f38: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x228f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x228f3c: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x228f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228f40: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x228f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x228f44: 0xc60000fc  lwc1        $f0, 0xFC($s0)
    ctx->pc = 0x228f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228f48: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x228f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x228f4c: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x228f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228f50: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x228f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x228f54: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x228f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228f58: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x228f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x228f5c: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x228f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228f60: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x228f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x228f64: 0xc60000ec  lwc1        $f0, 0xEC($s0)
    ctx->pc = 0x228f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228f68: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x228f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x228f6c: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x228f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x228f70: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x228f70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x228f74: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x228f74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x228f78: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x228f78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    // 0x228f7c: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x228f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    // 0x228f80: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x228f80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    // 0x228f84: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x228f84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
    // 0x228f88: 0xae40006c  sw          $zero, 0x6C($s2)
    ctx->pc = 0x228f88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
    // 0x228f8c: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x228f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
    // 0x228f90: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x228f90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
    // 0x228f94: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x228f94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
    // 0x228f98: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x228f98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
    // 0x228f9c: 0xae430050  sw          $v1, 0x50($s2)
    ctx->pc = 0x228f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
    // 0x228fa0: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x228fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
    // 0x228fa4: 0xae430078  sw          $v1, 0x78($s2)
    ctx->pc = 0x228fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 3));
    // 0x228fa8: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x228fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x228fac: 0x960200c4  lhu         $v0, 0xC4($s0)
    ctx->pc = 0x228facu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x228fb0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x228fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x228fb4: 0x960200c6  lhu         $v0, 0xC6($s0)
    ctx->pc = 0x228fb4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 198)));
    // 0x228fb8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x228FB8u;
    {
        const bool branch_taken_0x228fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228FB8u;
            // 0x228fbc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228fb8) {
            ctx->pc = 0x229100u;
            goto label_229100;
        }
    }
    ctx->pc = 0x228FC0u;
label_228fc0:
    // 0x228fc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x228fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228fc4: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x228fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x228fc8: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x228fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x228fcc: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x228fccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x228fd0: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x228fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x228fd4: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x228fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x228fd8: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x228fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x228fdc: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x228fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x228fe0: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x228fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x228fe4: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x228fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x228fe8: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x228fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x228fec: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x228fecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    // 0x228ff0: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x228ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x228ff4: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x228ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x228ff8: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x228ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x228ffc: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x228ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x229000: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x229000u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x229004: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x229004u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
    // 0x229008: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x229008u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x22900c: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x22900cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x229010: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x229010u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x229014: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x229014u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x229018: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x229018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    // 0x22901c: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x22901cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    // 0x229020: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x229020u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    // 0x229024: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x229024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
    // 0x229028: 0xae40006c  sw          $zero, 0x6C($s2)
    ctx->pc = 0x229028u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
    // 0x22902c: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x22902cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
    // 0x229030: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x229030u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
    // 0x229034: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x229034u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
    // 0x229038: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x229038u;
    {
        const bool branch_taken_0x229038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22903Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229038u;
            // 0x22903c: 0xae40007c  sw          $zero, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229038) {
            ctx->pc = 0x229100u;
            goto label_229100;
        }
    }
    ctx->pc = 0x229040u;
label_229040:
    // 0x229040: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x229040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229044: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x229044u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x229048: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x229048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22904c: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x22904cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x229050: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x229050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x229054: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x229054u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x229058: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x229058u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x22905c: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x22905cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229060: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x229060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x229064: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x229064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229068: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x229068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x22906c: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x22906cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229070: 0xe6400048  swc1        $f0, 0x48($s2)
    ctx->pc = 0x229070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x229074: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x229074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229078: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x229078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x22907c: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x22907cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229080: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x229080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x229084: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x229084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229088: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x229088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x22908c: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x22908cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229090: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x229090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x229094: 0xc60000fc  lwc1        $f0, 0xFC($s0)
    ctx->pc = 0x229094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229098: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x229098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x22909c: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x22909cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2290a0: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x2290a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2290a4: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x2290a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2290a8: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x2290a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x2290ac: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x2290acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2290b0: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x2290b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x2290b4: 0xc60000ec  lwc1        $f0, 0xEC($s0)
    ctx->pc = 0x2290b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2290b8: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x2290b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x2290bc: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x2290bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x2290c0: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x2290c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x2290c4: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x2290c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x2290c8: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x2290c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    // 0x2290cc: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x2290ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    // 0x2290d0: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x2290d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    // 0x2290d4: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x2290d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
    // 0x2290d8: 0xae40006c  sw          $zero, 0x6C($s2)
    ctx->pc = 0x2290d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
    // 0x2290dc: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x2290dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
    // 0x2290e0: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x2290e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
    // 0x2290e4: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x2290e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
    // 0x2290e8: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x2290e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
    // 0x2290ec: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x2290ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
    // 0x2290f0: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x2290f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    // 0x2290f4: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x2290f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
    // 0x2290f8: 0xa2430001  sb          $v1, 0x1($s2)
    ctx->pc = 0x2290f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2290fc: 0x0  nop
    ctx->pc = 0x2290fcu;
    // NOP
label_229100:
    // 0x229100: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x229100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x229104: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x229104u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x229108: 0x621fe97  bgez        $s1, . + 4 + (-0x169 << 2)
    ctx->pc = 0x229108u;
    {
        const bool branch_taken_0x229108 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x22910Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229108u;
            // 0x22910c: 0x26520080  addiu       $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229108) {
            ctx->pc = 0x228B68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_228b68;
        }
    }
    ctx->pc = 0x229110u;
label_229110:
    // 0x229110: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x229110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229114: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x229114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x229118: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x229118u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22911c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22911cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229120: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x229120u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229124: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x229124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229128: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x229128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22912c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22912cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229130: 0x3e00008  jr          $ra
    ctx->pc = 0x229130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229130u;
            // 0x229134: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x229138u;
    // 0x229138: 0x0  nop
    ctx->pc = 0x229138u;
    // NOP
    // 0x22913c: 0x0  nop
    ctx->pc = 0x22913cu;
    // NOP
}
