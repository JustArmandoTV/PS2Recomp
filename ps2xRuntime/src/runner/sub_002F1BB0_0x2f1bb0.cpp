#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1BB0
// Address: 0x2f1bb0 - 0x2f1d50
void sub_002F1BB0_0x2f1bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1BB0_0x2f1bb0");
#endif

    ctx->pc = 0x2f1bb0u;

    // 0x2f1bb0: 0x90830021  lbu         $v1, 0x21($a0)
    ctx->pc = 0x2f1bb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
    // 0x2f1bb4: 0x14600063  bnez        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x2F1BB4u;
    {
        const bool branch_taken_0x2f1bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1bb4) {
            ctx->pc = 0x2F1D44u;
            goto label_2f1d44;
        }
    }
    ctx->pc = 0x2F1BBCu;
    // 0x2f1bbc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2f1bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x2f1bc0: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x2f1bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
    // 0x2f1bc4: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x2f1bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x2f1bc8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2f1bc8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1bcc: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x2f1bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2f1bd0: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x2f1bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f1bd4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2f1bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2f1bd8: 0x8c63edf0  lw          $v1, -0x1210($v1)
    ctx->pc = 0x2f1bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962672)));
    // 0x2f1bdc: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x2f1bdcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
    // 0x2f1be0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2f1be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2f1be4: 0x0  nop
    ctx->pc = 0x2f1be4u;
    // NOP
    // 0x2f1be8: 0x0  nop
    ctx->pc = 0x2f1be8u;
    // NOP
    // 0x2f1bec: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2F1BECu;
    {
        const bool branch_taken_0x2f1bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1bec) {
            ctx->pc = 0x2F1CA8u;
            goto label_2f1ca8;
        }
    }
    ctx->pc = 0x2F1BF4u;
    // 0x2f1bf4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2f1bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1bf8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2f1bf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2f1bfc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2f1bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2f1c00: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2f1c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f1c04: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2f1c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1c08: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f1c08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f1c0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f1c0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1c10: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
    ctx->pc = 0x2F1C10u;
    {
        const bool branch_taken_0x2f1c10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f1c10) {
            ctx->pc = 0x2F1D44u;
            goto label_2f1d44;
        }
    }
    ctx->pc = 0x2F1C18u;
    // 0x2f1c18: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2f1c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2f1c1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f1c1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1c20: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2f1c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f1c24: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x2f1c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f1c28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f1c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f1c2c: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x2f1c2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f1c30: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x2F1C30u;
    {
        const bool branch_taken_0x2f1c30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1C30u;
            // 0x2f1c34: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c30) {
            ctx->pc = 0x2F1D44u;
            goto label_2f1d44;
        }
    }
    ctx->pc = 0x2F1C38u;
    // 0x2f1c38: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2f1c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2f1c3c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2f1c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f1c40: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2f1c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2f1c44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f1c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f1c48: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x2f1c48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f1c4c: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x2F1C4Cu;
    {
        const bool branch_taken_0x2f1c4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1C4Cu;
            // 0x2f1c50: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c4c) {
            ctx->pc = 0x2F1D44u;
            goto label_2f1d44;
        }
    }
    ctx->pc = 0x2F1C54u;
    // 0x2f1c54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f1c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1c58: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2f1c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2f1c5c: 0xa0860020  sb          $a2, 0x20($a0)
    ctx->pc = 0x2f1c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 6));
    // 0x2f1c60: 0x8c65edf8  lw          $a1, -0x1208($v1)
    ctx->pc = 0x2f1c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962680)));
    // 0x2f1c64: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2f1c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2f1c68: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2f1c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2f1c6c: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2F1C6Cu;
    {
        const bool branch_taken_0x2f1c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1c6c) {
            ctx->pc = 0x2F1C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1C6Cu;
            // 0x2f1c70: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1C9Cu;
            goto label_2f1c9c;
        }
    }
    ctx->pc = 0x2F1C74u;
    // 0x2f1c74: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2f1c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f1c78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f1c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f1c7c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2f1c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2f1c80: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2f1c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f1c84: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2f1c84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2f1c88: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x2f1c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1c8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f1c8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f1c90: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2f1c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2f1c94: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2F1C94u;
    {
        const bool branch_taken_0x2f1c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1C94u;
            // 0x2f1c98: 0xa0860021  sb          $a2, 0x21($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c94) {
            ctx->pc = 0x2F1D44u;
            goto label_2f1d44;
        }
    }
    ctx->pc = 0x2F1C9Cu;
label_2f1c9c:
    // 0x2f1c9c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2f1c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2f1ca0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2F1CA0u;
    {
        const bool branch_taken_0x2f1ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1CA0u;
            // 0x2f1ca4: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1ca0) {
            ctx->pc = 0x2F1D44u;
            goto label_2f1d44;
        }
    }
    ctx->pc = 0x2F1CA8u;
label_2f1ca8:
    // 0x2f1ca8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2f1ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1cac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2f1cacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1cb0: 0x0  nop
    ctx->pc = 0x2f1cb0u;
    // NOP
    // 0x2f1cb4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f1cb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2f1cb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f1cb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1cbc: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x2F1CBCu;
    {
        const bool branch_taken_0x2f1cbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F1CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1CBCu;
            // 0x2f1cc0: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1cbc) {
            ctx->pc = 0x2F1D44u;
            goto label_2f1d44;
        }
    }
    ctx->pc = 0x2F1CC4u;
    // 0x2f1cc4: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x2f1cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1cc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f1cc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f1ccc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2f1cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2f1cd0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2f1cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f1cd4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f1cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f1cd8: 0x461001a  bgez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2F1CD8u;
    {
        const bool branch_taken_0x2f1cd8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2F1CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1CD8u;
            // 0x2f1cdc: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1cd8) {
            ctx->pc = 0x2F1D44u;
            goto label_2f1d44;
        }
    }
    ctx->pc = 0x2F1CE0u;
    // 0x2f1ce0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2f1ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f1ce4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2f1ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2f1ce8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2f1ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f1cec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f1cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f1cf0: 0x4610014  bgez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F1CF0u;
    {
        const bool branch_taken_0x2f1cf0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2F1CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1CF0u;
            // 0x2f1cf4: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1cf0) {
            ctx->pc = 0x2F1D44u;
            goto label_2f1d44;
        }
    }
    ctx->pc = 0x2F1CF8u;
    // 0x2f1cf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f1cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1cfc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2f1cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2f1d00: 0xa0860020  sb          $a2, 0x20($a0)
    ctx->pc = 0x2f1d00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 6));
    // 0x2f1d04: 0x8c65ee00  lw          $a1, -0x1200($v1)
    ctx->pc = 0x2f1d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962688)));
    // 0x2f1d08: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2f1d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2f1d0c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2f1d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2f1d10: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F1D10u;
    {
        const bool branch_taken_0x2f1d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1d10) {
            ctx->pc = 0x2F1D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1D10u;
            // 0x2f1d14: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1D2Cu;
            goto label_2f1d2c;
        }
    }
    ctx->pc = 0x2F1D18u;
    // 0x2f1d18: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2f1d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2f1d1c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2f1d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2f1d20: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2f1d20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2f1d24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F1D24u;
    {
        const bool branch_taken_0x2f1d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1D24u;
            // 0x2f1d28: 0xa0860021  sb          $a2, 0x21($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1d24) {
            ctx->pc = 0x2F1D44u;
            goto label_2f1d44;
        }
    }
    ctx->pc = 0x2F1D2Cu;
label_2f1d2c:
    // 0x2f1d2c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2f1d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2f1d30: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2f1d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f1d34: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2f1d34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2f1d38: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x2f1d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1d3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f1d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f1d40: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2f1d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_2f1d44:
    // 0x2f1d44: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1D4Cu;
    // 0x2f1d4c: 0x0  nop
    ctx->pc = 0x2f1d4cu;
    // NOP
}
