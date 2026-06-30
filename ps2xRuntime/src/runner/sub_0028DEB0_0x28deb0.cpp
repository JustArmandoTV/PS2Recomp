#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028DEB0
// Address: 0x28deb0 - 0x28e0a0
void sub_0028DEB0_0x28deb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DEB0_0x28deb0");
#endif

    ctx->pc = 0x28deb0u;

    // 0x28deb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28deb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28deb4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x28deb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28deb8: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x28deb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28debc: 0xc4a40028  lwc1        $f4, 0x28($a1)
    ctx->pc = 0x28debcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28dec0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28dec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dec4: 0x46021840  add.s       $f1, $f3, $f2
    ctx->pc = 0x28dec4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x28dec8: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x28dec8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x28decc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28deccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ded0: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x28DED0u;
    {
        const bool branch_taken_0x28ded0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28ded0) {
            ctx->pc = 0x28DF44u;
            goto label_28df44;
        }
    }
    ctx->pc = 0x28DED8u;
    // 0x28ded8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28ded8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28dedc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28dedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dee0: 0x0  nop
    ctx->pc = 0x28dee0u;
    // NOP
    // 0x28dee4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28dee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28dee8: 0x46000044  c1          0x44
    ctx->pc = 0x28dee8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x28deec: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x28deecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x28def0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28def0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28def4: 0x0  nop
    ctx->pc = 0x28def4u;
    // NOP
    // 0x28def8: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x28def8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[1];
    // 0x28defc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28defcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28df00: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x28df00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x28df04: 0xc4a30018  lwc1        $f3, 0x18($a1)
    ctx->pc = 0x28df04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28df08: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x28df08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28df0c: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x28df0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28df10: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x28df10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28df14: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x28df14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x28df18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28df18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28df1c: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x28df1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x28df20: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x28df20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x28df24: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x28df24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28df28: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28df28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28df2c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x28df2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28df30: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x28df30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28df34: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28df34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28df38: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x28df38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x28df3c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x28DF3Cu;
    {
        const bool branch_taken_0x28df3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DF3Cu;
            // 0x28df40: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28df3c) {
            ctx->pc = 0x28E070u;
            goto label_28e070;
        }
    }
    ctx->pc = 0x28DF44u;
label_28df44:
    // 0x28df44: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x28df44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28df48: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x28df48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x28df4c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x28df4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x28df50: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x28df50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x28df54: 0xc4e2d6c8  lwc1        $f2, -0x2938($a3)
    ctx->pc = 0x28df54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294956744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28df58: 0xc4c1d6cc  lwc1        $f1, -0x2934($a2)
    ctx->pc = 0x28df58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294956748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28df5c: 0xc460d6d0  lwc1        $f0, -0x2930($v1)
    ctx->pc = 0x28df5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28df60: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x28df60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28df64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28df64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df68: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x28df68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28df6c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28DF6Cu;
    {
        const bool branch_taken_0x28df6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28DF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DF6Cu;
            // 0x28df70: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28df6c) {
            ctx->pc = 0x28DF78u;
            goto label_28df78;
        }
    }
    ctx->pc = 0x28DF74u;
    // 0x28df74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28df74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28df78:
    // 0x28df78: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x28df78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x28df7c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x28df7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x28df80: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x28df80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x28df84: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x28df84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x28df88: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x28df88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28df8c: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x28df8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28df90: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x28DF90u;
    {
        const bool branch_taken_0x28df90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28df90) {
            ctx->pc = 0x28DF94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28DF90u;
            // 0x28df94: 0x71900  sll         $v1, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28DFA0u;
            goto label_28dfa0;
        }
    }
    ctx->pc = 0x28DF98u;
    // 0x28df98: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x28df98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28df9c: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x28df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_28dfa0:
    // 0x28dfa0: 0x75080  sll         $t2, $a3, 2
    ctx->pc = 0x28dfa0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x28dfa4: 0xa37021  addu        $t6, $a1, $v1
    ctx->pc = 0x28dfa4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28dfa8: 0x1ca3021  addu        $a2, $t6, $t2
    ctx->pc = 0x28dfa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x28dfac: 0x15d1821  addu        $v1, $t2, $sp
    ctx->pc = 0x28dfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x28dfb0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x28dfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28dfb4: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x28dfb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x28dfb8: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x28dfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x28dfbc: 0x74880  sll         $t1, $a3, 2
    ctx->pc = 0x28dfbcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x28dfc0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28dfc0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dfc4: 0x13d7821  addu        $t7, $t1, $sp
    ctx->pc = 0x28dfc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x28dfc8: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x28dfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x28dfcc: 0xa64021  addu        $t0, $a1, $a2
    ctx->pc = 0x28dfccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x28dfd0: 0x8de70010  lw          $a3, 0x10($t7)
    ctx->pc = 0x28dfd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 16)));
    // 0x28dfd4: 0x1093021  addu        $a2, $t0, $t1
    ctx->pc = 0x28dfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x28dfd8: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x28dfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28dfdc: 0x76880  sll         $t5, $a3, 2
    ctx->pc = 0x28dfdcu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x28dfe0: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x28dfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x28dfe4: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x28dfe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x28dfe8: 0xed2821  addu        $a1, $a3, $t5
    ctx->pc = 0x28dfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x28dfec: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x28dfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28dff0: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x28dff0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x28dff4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x28dff4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x28dff8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28dff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28dffc: 0x46000184  c1          0x184
    ctx->pc = 0x28dffcu;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
    // 0x28e000: 0x10d5821  addu        $t3, $t0, $t5
    ctx->pc = 0x28e000u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x28e004: 0x3c0c3f00  lui         $t4, 0x3F00
    ctx->pc = 0x28e004u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16128 << 16));
    // 0x28e008: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x28e008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x28e00c: 0xea3021  addu        $a2, $a3, $t2
    ctx->pc = 0x28e00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x28e010: 0x1bd2821  addu        $a1, $t5, $sp
    ctx->pc = 0x28e010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 29)));
    // 0x28e014: 0xe95021  addu        $t2, $a3, $t1
    ctx->pc = 0x28e014u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x28e018: 0x1c94821  addu        $t1, $t6, $t1
    ctx->pc = 0x28e018u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
    // 0x28e01c: 0x1cd3821  addu        $a3, $t6, $t5
    ctx->pc = 0x28e01cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x28e020: 0x448c2000  mtc1        $t4, $f4
    ctx->pc = 0x28e020u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28e024: 0x0  nop
    ctx->pc = 0x28e024u;
    // NOP
    // 0x28e028: 0x46062143  div.s       $f5, $f4, $f6
    ctx->pc = 0x28e028u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[5] = ctx->f[4] / ctx->f[6];
    // 0x28e02c: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x28e02cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x28e030: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x28e030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e034: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x28e034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e038: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x28e038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e03c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x28e03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e040: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x28e040u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x28e044: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x28e044u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28e048: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x28e048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e04c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x28e04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e050: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x28e050u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x28e054: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28e054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28e058: 0x46032842  mul.s       $f1, $f5, $f3
    ctx->pc = 0x28e058u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x28e05c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x28e05cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x28e060: 0x46022842  mul.s       $f1, $f5, $f2
    ctx->pc = 0x28e060u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x28e064: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x28e064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x28e068: 0xe5e10000  swc1        $f1, 0x0($t7)
    ctx->pc = 0x28e068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
    // 0x28e06c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x28e06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_28e070:
    // 0x28e070: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x28e070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e074: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x28e074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e078: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x28e078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e07c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x28e07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x28e080: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x28e080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e084: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x28e084u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x28e088: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x28e088u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x28e08c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x28e08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x28e090: 0x3e00008  jr          $ra
    ctx->pc = 0x28E090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E090u;
            // 0x28e094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28E098u;
    // 0x28e098: 0x0  nop
    ctx->pc = 0x28e098u;
    // NOP
    // 0x28e09c: 0x0  nop
    ctx->pc = 0x28e09cu;
    // NOP
}
