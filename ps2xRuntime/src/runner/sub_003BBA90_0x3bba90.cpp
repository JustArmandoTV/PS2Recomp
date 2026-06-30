#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BBA90
// Address: 0x3bba90 - 0x3bbfe0
void sub_003BBA90_0x3bba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BBA90_0x3bba90");
#endif

    switch (ctx->pc) {
        case 0x3bbdf0u: goto label_3bbdf0;
        case 0x3bbe00u: goto label_3bbe00;
        case 0x3bbe0cu: goto label_3bbe0c;
        case 0x3bbe20u: goto label_3bbe20;
        case 0x3bbe5cu: goto label_3bbe5c;
        case 0x3bbefcu: goto label_3bbefc;
        case 0x3bbf08u: goto label_3bbf08;
        case 0x3bbf18u: goto label_3bbf18;
        case 0x3bbf2cu: goto label_3bbf2c;
        case 0x3bbf54u: goto label_3bbf54;
        case 0x3bbf60u: goto label_3bbf60;
        case 0x3bbfb4u: goto label_3bbfb4;
        default: break;
    }

    ctx->pc = 0x3bba90u;

    // 0x3bba90: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x3bba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x3bba94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3bba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3bba98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3bba98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3bba9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3bba9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3bbaa0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bbaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3bbaa4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3bbaa4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3bbaa8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3bbaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bbaac: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x3bbaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x3bbab0: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x3bbab0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bbab4: 0x8e220d60  lw          $v0, 0xD60($s1)
    ctx->pc = 0x3bbab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
    // 0x3bbab8: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3BBAB8u;
    {
        const bool branch_taken_0x3bbab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BBABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBAB8u;
            // 0x3bbabc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbab8) {
            ctx->pc = 0x3BBB04u;
            goto label_3bbb04;
        }
    }
    ctx->pc = 0x3BBAC0u;
    // 0x3bbac0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3bbac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3bbac4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3bbac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x3bbac8: 0xc4616534  lwc1        $f1, 0x6534($v1)
    ctx->pc = 0x3bbac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 25908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bbacc: 0xc4806538  lwc1        $f0, 0x6538($a0)
    ctx->pc = 0x3bbaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 25912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bbad0: 0xc6440088  lwc1        $f4, 0x88($s2)
    ctx->pc = 0x3bbad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bbad4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3bbad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3bbad8: 0xc4626540  lwc1        $f2, 0x6540($v1)
    ctx->pc = 0x3bbad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 25920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bbadc: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3bbadcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x3bbae0: 0x46800a20  cvt.s.w     $f8, $f1
    ctx->pc = 0x3bbae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x3bbae4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3bbae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3bbae8: 0x468001e0  cvt.s.w     $f7, $f0
    ctx->pc = 0x3bbae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x3bbaec: 0xc6430098  lwc1        $f3, 0x98($s2)
    ctx->pc = 0x3bbaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bbaf0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3bbaf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3bbaf4: 0xc4816574  lwc1        $f1, 0x6574($a0)
    ctx->pc = 0x3bbaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 25972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bbaf8: 0xc4606578  lwc1        $f0, 0x6578($v1)
    ctx->pc = 0x3bbaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 25976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bbafc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3BBAFCu;
    {
        const bool branch_taken_0x3bbafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBAFCu;
            // 0x3bbb00: 0x460418c2  mul.s       $f3, $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbafc) {
            ctx->pc = 0x3BBB44u;
            goto label_3bbb44;
        }
    }
    ctx->pc = 0x3BBB04u;
label_3bbb04:
    // 0x3bbb04: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3bbb04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3bbb08: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3bbb08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x3bbb0c: 0xc4616564  lwc1        $f1, 0x6564($v1)
    ctx->pc = 0x3bbb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 25956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bbb10: 0xc4806568  lwc1        $f0, 0x6568($a0)
    ctx->pc = 0x3bbb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 25960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bbb14: 0xc6440088  lwc1        $f4, 0x88($s2)
    ctx->pc = 0x3bbb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bbb18: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3bbb18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3bbb1c: 0xc4626570  lwc1        $f2, 0x6570($v1)
    ctx->pc = 0x3bbb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 25968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bbb20: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3bbb20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x3bbb24: 0x46800a20  cvt.s.w     $f8, $f1
    ctx->pc = 0x3bbb24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x3bbb28: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3bbb28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3bbb2c: 0x468001e0  cvt.s.w     $f7, $f0
    ctx->pc = 0x3bbb2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x3bbb30: 0xc6430098  lwc1        $f3, 0x98($s2)
    ctx->pc = 0x3bbb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bbb34: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3bbb34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3bbb38: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3bbb38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x3bbb3c: 0xc4816574  lwc1        $f1, 0x6574($a0)
    ctx->pc = 0x3bbb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 25972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bbb40: 0xc4606578  lwc1        $f0, 0x6578($v1)
    ctx->pc = 0x3bbb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 25976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bbb44:
    // 0x3bbb44: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x3bbb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x3bbb48: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3BBB48u;
    {
        const bool branch_taken_0x3bbb48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bbb48) {
            ctx->pc = 0x3BBB78u;
            goto label_3bbb78;
        }
    }
    ctx->pc = 0x3BBB50u;
    // 0x3bbb50: 0x8c64004c  lw          $a0, 0x4C($v1)
    ctx->pc = 0x3bbb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x3bbb54: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x3bbb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3bbb58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3bbb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bbb5c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BBB5Cu;
    {
        const bool branch_taken_0x3bbb5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bbb5c) {
            ctx->pc = 0x3BBB78u;
            goto label_3bbb78;
        }
    }
    ctx->pc = 0x3BBB64u;
    // 0x3bbb64: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x3bbb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x3bbb68: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x3bbb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x3bbb6c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3bbb6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3bbb70: 0x0  nop
    ctx->pc = 0x3bbb70u;
    // NOP
    // 0x3bbb74: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3bbb74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3bbb78:
    // 0x3bbb78: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3bbb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3bbb7c: 0x80440004  lb          $a0, 0x4($v0)
    ctx->pc = 0x3bbb7cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3bbb80: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3bbb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x3bbb84: 0xc4660018  lwc1        $f6, 0x18($v1)
    ctx->pc = 0x3bbb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3bbb88: 0xc4650020  lwc1        $f5, 0x20($v1)
    ctx->pc = 0x3bbb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3bbb8c: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x3bbb8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x3bbb90: 0x46053902  mul.s       $f4, $f7, $f5
    ctx->pc = 0x3bbb90u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x3bbb94: 0x46054202  mul.s       $f8, $f8, $f5
    ctx->pc = 0x3bbb94u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x3bbb98: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3BBB98u;
    {
        const bool branch_taken_0x3bbb98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBB98u;
            // 0x3bbb9c: 0x46061082  mul.s       $f2, $f2, $f6 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbb98) {
            ctx->pc = 0x3BBBCCu;
            goto label_3bbbcc;
        }
    }
    ctx->pc = 0x3BBBA0u;
    // 0x3bbba0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3bbba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3bbba4: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x3bbba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3bbba8: 0x0  nop
    ctx->pc = 0x3bbba8u;
    // NOP
    // 0x3bbbac: 0x46042903  div.s       $f4, $f5, $f4
    ctx->pc = 0x3bbbacu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[4] = ctx->f[5] / ctx->f[4];
    // 0x3bbbb0: 0xc6460064  lwc1        $f6, 0x64($s2)
    ctx->pc = 0x3bbbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3bbbb4: 0x46043100  add.s       $f4, $f6, $f4
    ctx->pc = 0x3bbbb4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x3bbbb8: 0x46052036  c.le.s      $f4, $f5
    ctx->pc = 0x3bbbb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bbbbc: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x3BBBBCu;
    {
        const bool branch_taken_0x3bbbbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BBBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBBBCu;
            // 0x3bbbc0: 0xe6440064  swc1        $f4, 0x64($s2) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbbbc) {
            ctx->pc = 0x3BBC18u;
            goto label_3bbc18;
        }
    }
    ctx->pc = 0x3BBBC4u;
    // 0x3bbbc4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3BBBC4u;
    {
        const bool branch_taken_0x3bbbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBBC4u;
            // 0x3bbbc8: 0xe6450064  swc1        $f5, 0x64($s2) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbbc4) {
            ctx->pc = 0x3BBC18u;
            goto label_3bbc18;
        }
    }
    ctx->pc = 0x3BBBCCu;
label_3bbbcc:
    // 0x3bbbcc: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3BBBCCu;
    {
        const bool branch_taken_0x3bbbcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bbbcc) {
            ctx->pc = 0x3BBBD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBBCCu;
            // 0x3bbbd0: 0x3c033f4c  lui         $v1, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BBC00u;
            goto label_3bbc00;
        }
    }
    ctx->pc = 0x3BBBD4u;
    // 0x3bbbd4: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x3bbbd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3bbbd8: 0x0  nop
    ctx->pc = 0x3bbbd8u;
    // NOP
    // 0x3bbbdc: 0x468021a0  cvt.s.w     $f6, $f4
    ctx->pc = 0x3bbbdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x3bbbe0: 0xc645005c  lwc1        $f5, 0x5C($s2)
    ctx->pc = 0x3bbbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3bbbe4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x3bbbe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3bbbe8: 0x0  nop
    ctx->pc = 0x3bbbe8u;
    // NOP
    // 0x3bbbec: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x3bbbecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x3bbbf0: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x3bbbf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bbbf4: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x3BBBF4u;
    {
        const bool branch_taken_0x3bbbf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bbbf4) {
            ctx->pc = 0x3BBBF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBBF4u;
            // 0x3bbbf8: 0x80430005  lb          $v1, 0x5($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BBC1Cu;
            goto label_3bbc1c;
        }
    }
    ctx->pc = 0x3BBBFCu;
    // 0x3bbbfc: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x3bbbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_3bbc00:
    // 0x3bbc00: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3bbc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3bbc04: 0xc6440064  lwc1        $f4, 0x64($s2)
    ctx->pc = 0x3bbc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bbc08: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x3bbc08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3bbc0c: 0x0  nop
    ctx->pc = 0x3bbc0cu;
    // NOP
    // 0x3bbc10: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x3bbc10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x3bbc14: 0xe6440064  swc1        $f4, 0x64($s2)
    ctx->pc = 0x3bbc14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
label_3bbc18:
    // 0x3bbc18: 0x80430005  lb          $v1, 0x5($v0)
    ctx->pc = 0x3bbc18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_3bbc1c:
    // 0x3bbc1c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3BBC1Cu;
    {
        const bool branch_taken_0x3bbc1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bbc1c) {
            ctx->pc = 0x3BBC50u;
            goto label_3bbc50;
        }
    }
    ctx->pc = 0x3BBC24u;
    // 0x3bbc24: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3bbc24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3bbc28: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x3bbc28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3bbc2c: 0x0  nop
    ctx->pc = 0x3bbc2cu;
    // NOP
    // 0x3bbc30: 0x46082903  div.s       $f4, $f5, $f8
    ctx->pc = 0x3bbc30u;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[4] = ctx->f[5] / ctx->f[8];
    // 0x3bbc34: 0xc6460068  lwc1        $f6, 0x68($s2)
    ctx->pc = 0x3bbc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3bbc38: 0x46043100  add.s       $f4, $f6, $f4
    ctx->pc = 0x3bbc38u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x3bbc3c: 0x46052036  c.le.s      $f4, $f5
    ctx->pc = 0x3bbc3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bbc40: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x3BBC40u;
    {
        const bool branch_taken_0x3bbc40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BBC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBC40u;
            // 0x3bbc44: 0xe6440068  swc1        $f4, 0x68($s2) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbc40) {
            ctx->pc = 0x3BBC9Cu;
            goto label_3bbc9c;
        }
    }
    ctx->pc = 0x3BBC48u;
    // 0x3bbc48: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3BBC48u;
    {
        const bool branch_taken_0x3bbc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBC48u;
            // 0x3bbc4c: 0xe6450068  swc1        $f5, 0x68($s2) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbc48) {
            ctx->pc = 0x3BBC9Cu;
            goto label_3bbc9c;
        }
    }
    ctx->pc = 0x3BBC50u;
label_3bbc50:
    // 0x3bbc50: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3BBC50u;
    {
        const bool branch_taken_0x3bbc50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bbc50) {
            ctx->pc = 0x3BBC54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBC50u;
            // 0x3bbc54: 0x3c033f4c  lui         $v1, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BBC84u;
            goto label_3bbc84;
        }
    }
    ctx->pc = 0x3BBC58u;
    // 0x3bbc58: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3bbc58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3bbc5c: 0x0  nop
    ctx->pc = 0x3bbc5cu;
    // NOP
    // 0x3bbc60: 0x468021a0  cvt.s.w     $f6, $f4
    ctx->pc = 0x3bbc60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x3bbc64: 0xc6450060  lwc1        $f5, 0x60($s2)
    ctx->pc = 0x3bbc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3bbc68: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x3bbc68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3bbc6c: 0x0  nop
    ctx->pc = 0x3bbc6cu;
    // NOP
    // 0x3bbc70: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x3bbc70u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x3bbc74: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x3bbc74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bbc78: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x3BBC78u;
    {
        const bool branch_taken_0x3bbc78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bbc78) {
            ctx->pc = 0x3BBC7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBC78u;
            // 0x3bbc7c: 0x80440004  lb          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BBCA0u;
            goto label_3bbca0;
        }
    }
    ctx->pc = 0x3BBC80u;
    // 0x3bbc80: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x3bbc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_3bbc84:
    // 0x3bbc84: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3bbc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3bbc88: 0xc6440068  lwc1        $f4, 0x68($s2)
    ctx->pc = 0x3bbc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bbc8c: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x3bbc8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3bbc90: 0x0  nop
    ctx->pc = 0x3bbc90u;
    // NOP
    // 0x3bbc94: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x3bbc94u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x3bbc98: 0xe6440068  swc1        $f4, 0x68($s2)
    ctx->pc = 0x3bbc98u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
label_3bbc9c:
    // 0x3bbc9c: 0x80440004  lb          $a0, 0x4($v0)
    ctx->pc = 0x3bbc9cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_3bbca0:
    // 0x3bbca0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3bbca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x3bbca4: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x3bbca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3bbca8: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x3bbca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x3bbcac: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x3bbcacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3bbcb0: 0x0  nop
    ctx->pc = 0x3bbcb0u;
    // NOP
    // 0x3bbcb4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3bbcb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3bbcb8: 0x46052103  div.s       $f4, $f4, $f5
    ctx->pc = 0x3bbcb8u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[5];
    // 0x3bbcbc: 0xe644005c  swc1        $f4, 0x5C($s2)
    ctx->pc = 0x3bbcbcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    // 0x3bbcc0: 0x80420005  lb          $v0, 0x5($v0)
    ctx->pc = 0x3bbcc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x3bbcc4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3bbcc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3bbcc8: 0x0  nop
    ctx->pc = 0x3bbcc8u;
    // NOP
    // 0x3bbccc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3bbcccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3bbcd0: 0x46052103  div.s       $f4, $f4, $f5
    ctx->pc = 0x3bbcd0u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[5];
    // 0x3bbcd4: 0xe6440060  swc1        $f4, 0x60($s2)
    ctx->pc = 0x3bbcd4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x3bbcd8: 0xc6480068  lwc1        $f8, 0x68($s2)
    ctx->pc = 0x3bbcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3bbcdc: 0xc6460060  lwc1        $f6, 0x60($s2)
    ctx->pc = 0x3bbcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3bbce0: 0xc644006c  lwc1        $f4, 0x6C($s2)
    ctx->pc = 0x3bbce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bbce4: 0x46084142  mul.s       $f5, $f8, $f8
    ctx->pc = 0x3bbce4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x3bbce8: 0x46061982  mul.s       $f6, $f3, $f6
    ctx->pc = 0x3bbce8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x3bbcec: 0x460540c2  mul.s       $f3, $f8, $f5
    ctx->pc = 0x3bbcecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x3bbcf0: 0x46043818  adda.s      $f7, $f4
    ctx->pc = 0x3bbcf0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x3bbcf4: 0x460330dc  madd.s      $f3, $f6, $f3
    ctx->pc = 0x3bbcf4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
    // 0x3bbcf8: 0xe643006c  swc1        $f3, 0x6C($s2)
    ctx->pc = 0x3bbcf8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
    // 0x3bbcfc: 0xc6430070  lwc1        $f3, 0x70($s2)
    ctx->pc = 0x3bbcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bbd00: 0xc6460064  lwc1        $f6, 0x64($s2)
    ctx->pc = 0x3bbd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3bbd04: 0xc645005c  lwc1        $f5, 0x5C($s2)
    ctx->pc = 0x3bbd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3bbd08: 0x46033818  adda.s      $f7, $f3
    ctx->pc = 0x3bbd08u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x3bbd0c: 0x46063102  mul.s       $f4, $f6, $f6
    ctx->pc = 0x3bbd0cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x3bbd10: 0x460510c2  mul.s       $f3, $f2, $f5
    ctx->pc = 0x3bbd10u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x3bbd14: 0x46043082  mul.s       $f2, $f6, $f4
    ctx->pc = 0x3bbd14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x3bbd18: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x3bbd18u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x3bbd1c: 0xe6420070  swc1        $f2, 0x70($s2)
    ctx->pc = 0x3bbd1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x3bbd20: 0xc642006c  lwc1        $f2, 0x6C($s2)
    ctx->pc = 0x3bbd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bbd24: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x3bbd24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bbd28: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3BBD28u;
    {
        const bool branch_taken_0x3bbd28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bbd28) {
            ctx->pc = 0x3BBD2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBD28u;
            // 0x3bbd2c: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BBD38u;
            goto label_3bbd38;
        }
    }
    ctx->pc = 0x3BBD30u;
    // 0x3bbd30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3BBD30u;
    {
        const bool branch_taken_0x3bbd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBD30u;
            // 0x3bbd34: 0xe641006c  swc1        $f1, 0x6C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbd30) {
            ctx->pc = 0x3BBD48u;
            goto label_3bbd48;
        }
    }
    ctx->pc = 0x3BBD38u;
label_3bbd38:
    // 0x3bbd38: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3bbd38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bbd3c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3BBD3Cu;
    {
        const bool branch_taken_0x3bbd3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bbd3c) {
            ctx->pc = 0x3BBD40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBD3Cu;
            // 0x3bbd40: 0xc6410070  lwc1        $f1, 0x70($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BBD4Cu;
            goto label_3bbd4c;
        }
    }
    ctx->pc = 0x3BBD44u;
    // 0x3bbd44: 0xe641006c  swc1        $f1, 0x6C($s2)
    ctx->pc = 0x3bbd44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
label_3bbd48:
    // 0x3bbd48: 0xc6410070  lwc1        $f1, 0x70($s2)
    ctx->pc = 0x3bbd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3bbd4c:
    // 0x3bbd4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3bbd4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bbd50: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3BBD50u;
    {
        const bool branch_taken_0x3bbd50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bbd50) {
            ctx->pc = 0x3BBD54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBD50u;
            // 0x3bbd54: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BBD60u;
            goto label_3bbd60;
        }
    }
    ctx->pc = 0x3BBD58u;
    // 0x3bbd58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3BBD58u;
    {
        const bool branch_taken_0x3bbd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBD58u;
            // 0x3bbd5c: 0xe6400070  swc1        $f0, 0x70($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbd58) {
            ctx->pc = 0x3BBD70u;
            goto label_3bbd70;
        }
    }
    ctx->pc = 0x3BBD60u;
label_3bbd60:
    // 0x3bbd60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3bbd60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bbd64: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3BBD64u;
    {
        const bool branch_taken_0x3bbd64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bbd64) {
            ctx->pc = 0x3BBD68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBD64u;
            // 0x3bbd68: 0xc641006c  lwc1        $f1, 0x6C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BBD74u;
            goto label_3bbd74;
        }
    }
    ctx->pc = 0x3BBD6Cu;
    // 0x3bbd6c: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x3bbd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
label_3bbd70:
    // 0x3bbd70: 0xc641006c  lwc1        $f1, 0x6C($s2)
    ctx->pc = 0x3bbd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3bbd74:
    // 0x3bbd74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bbd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3bbd78: 0xc6430074  lwc1        $f3, 0x74($s2)
    ctx->pc = 0x3bbd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bbd7c: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x3bbd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
    // 0x3bbd80: 0xc440650c  lwc1        $f0, 0x650C($v0)
    ctx->pc = 0x3bbd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bbd84: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x3bbd84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
    // 0x3bbd88: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x3bbd88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3bbd8c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3bbd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3bbd90: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3bbd90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3bbd94: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bbd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3bbd98: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x3bbd98u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x3bbd9c: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x3bbd9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x3bbda0: 0xe6400074  swc1        $f0, 0x74($s2)
    ctx->pc = 0x3bbda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x3bbda4: 0xc6410078  lwc1        $f1, 0x78($s2)
    ctx->pc = 0x3bbda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bbda8: 0xc6430070  lwc1        $f3, 0x70($s2)
    ctx->pc = 0x3bbda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bbdac: 0xc440650c  lwc1        $f0, 0x650C($v0)
    ctx->pc = 0x3bbdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bbdb0: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x3bbdb0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x3bbdb4: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x3bbdb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3bbdb8: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x3bbdb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x3bbdbc: 0xe6400078  swc1        $f0, 0x78($s2)
    ctx->pc = 0x3bbdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x3bbdc0: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x3bbdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bbdc4: 0xc641006c  lwc1        $f1, 0x6C($s2)
    ctx->pc = 0x3bbdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bbdc8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3bbdc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3bbdcc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3bbdccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3bbdd0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3bbdd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3bbdd4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3bbdd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3bbdd8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bbdd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bbddc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bbddcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3bbde0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3bbde0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3bbde4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3bbde4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3bbde8: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x3BBDE8u;
    SET_GPR_U32(ctx, 31, 0x3BBDF0u);
    ctx->pc = 0x3BBDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBDE8u;
            // 0x3bbdec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBDF0u; }
        if (ctx->pc != 0x3BBDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBDF0u; }
        if (ctx->pc != 0x3BBDF0u) { return; }
    }
    ctx->pc = 0x3BBDF0u;
label_3bbdf0:
    // 0x3bbdf0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x3bbdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x3bbdf4: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x3bbdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3bbdf8: 0xc04c72c  jal         func_131CB0
    ctx->pc = 0x3BBDF8u;
    SET_GPR_U32(ctx, 31, 0x3BBE00u);
    ctx->pc = 0x3BBDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBDF8u;
            // 0x3bbdfc: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBE00u; }
        if (ctx->pc != 0x3BBE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBE00u; }
        if (ctx->pc != 0x3BBE00u) { return; }
    }
    ctx->pc = 0x3BBE00u;
label_3bbe00:
    // 0x3bbe00: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3bbe00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3bbe04: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x3BBE04u;
    SET_GPR_U32(ctx, 31, 0x3BBE0Cu);
    ctx->pc = 0x3BBE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBE04u;
            // 0x3bbe08: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBE0Cu; }
        if (ctx->pc != 0x3BBE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBE0Cu; }
        if (ctx->pc != 0x3BBE0Cu) { return; }
    }
    ctx->pc = 0x3BBE0Cu;
label_3bbe0c:
    // 0x3bbe0c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3bbe0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3bbe10: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x3bbe10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3bbe14: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3bbe14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3bbe18: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3BBE18u;
    SET_GPR_U32(ctx, 31, 0x3BBE20u);
    ctx->pc = 0x3BBE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBE18u;
            // 0x3bbe1c: 0x24c683e0  addiu       $a2, $a2, -0x7C20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBE20u; }
        if (ctx->pc != 0x3BBE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBE20u; }
        if (ctx->pc != 0x3BBE20u) { return; }
    }
    ctx->pc = 0x3BBE20u;
label_3bbe20:
    // 0x3bbe20: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x3bbe20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x3bbe24: 0x26240140  addiu       $a0, $s1, 0x140
    ctx->pc = 0x3bbe24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x3bbe28: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x3bbe28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x3bbe2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bbe2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbe30: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x3bbe30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bbe34: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3bbe34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3bbe38: 0xc6410074  lwc1        $f1, 0x74($s2)
    ctx->pc = 0x3bbe38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bbe3c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3bbe3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3bbe40: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3bbe40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3bbe44: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bbe44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3bbe48: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bbe48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bbe4c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3bbe4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3bbe50: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3bbe50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3bbe54: 0xc04f308  jal         func_13CC20
    ctx->pc = 0x3BBE54u;
    SET_GPR_U32(ctx, 31, 0x3BBE5Cu);
    ctx->pc = 0x3BBE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBE54u;
            // 0x3bbe58: 0x23023  negu        $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CC20u;
    if (runtime->hasFunction(0x13CC20u)) {
        auto targetFn = runtime->lookupFunction(0x13CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBE5Cu; }
        if (ctx->pc != 0x3BBE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CC20_0x13cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBE5Cu; }
        if (ctx->pc != 0x3BBE5Cu) { return; }
    }
    ctx->pc = 0x3BBE5Cu;
label_3bbe5c:
    // 0x3bbe5c: 0x8e230d9c  lw          $v1, 0xD9C($s1)
    ctx->pc = 0x3bbe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3484)));
    // 0x3bbe60: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3bbe60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3bbe64: 0x50600057  beql        $v1, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x3BBE64u;
    {
        const bool branch_taken_0x3bbe64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bbe64) {
            ctx->pc = 0x3BBE68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBE64u;
            // 0x3bbe68: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BBFC4u;
            goto label_3bbfc4;
        }
    }
    ctx->pc = 0x3BBE6Cu;
    // 0x3bbe6c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3bbe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x3bbe70: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3bbe70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x3bbe74: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x3bbe74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x3bbe78: 0xc6410080  lwc1        $f1, 0x80($s2)
    ctx->pc = 0x3bbe78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bbe7c: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x3bbe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
    // 0x3bbe80: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x3bbe80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x3bbe84: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x3bbe84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3bbe88: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x3bbe88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x3bbe8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3bbe8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bbe90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3bbe90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3bbe94: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3bbe94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3bbe98: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3bbe98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3bbe9c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3bbe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3bbea0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3bbea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3bbea4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3bbea4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bbea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bbea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bbeac: 0x0  nop
    ctx->pc = 0x3bbeacu;
    // NOP
    // 0x3bbeb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3bbeb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bbeb4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3BBEB4u;
    {
        const bool branch_taken_0x3bbeb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BBEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBEB4u;
            // 0x3bbeb8: 0xe6410080  swc1        $f1, 0x80($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbeb4) {
            ctx->pc = 0x3BBEC0u;
            goto label_3bbec0;
        }
    }
    ctx->pc = 0x3BBEBCu;
    // 0x3bbebc: 0xe6400080  swc1        $f0, 0x80($s2)
    ctx->pc = 0x3bbebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
label_3bbec0:
    // 0x3bbec0: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x3bbec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bbec4: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x3bbec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x3bbec8: 0xc641006c  lwc1        $f1, 0x6C($s2)
    ctx->pc = 0x3bbec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bbecc: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x3bbeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x3bbed0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3bbed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3bbed4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3bbed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3bbed8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3bbed8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3bbedc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3bbedcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3bbee0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3bbee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3bbee4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bbee4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bbee8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bbee8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3bbeec: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3bbeecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3bbef0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3bbef0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3bbef4: 0xc04f380  jal         func_13CE00
    ctx->pc = 0x3BBEF4u;
    SET_GPR_U32(ctx, 31, 0x3BBEFCu);
    ctx->pc = 0x3BBEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBEF4u;
            // 0x3bbef8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CE00u;
    if (runtime->hasFunction(0x13CE00u)) {
        auto targetFn = runtime->lookupFunction(0x13CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBEFCu; }
        if (ctx->pc != 0x3BBEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CE00_0x13ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBEFCu; }
        if (ctx->pc != 0x3BBEFCu) { return; }
    }
    ctx->pc = 0x3BBEFCu;
label_3bbefc:
    // 0x3bbefc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3bbefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3bbf00: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x3BBF00u;
    SET_GPR_U32(ctx, 31, 0x3BBF08u);
    ctx->pc = 0x3BBF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBF00u;
            // 0x3bbf04: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBF08u; }
        if (ctx->pc != 0x3BBF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBF08u; }
        if (ctx->pc != 0x3BBF08u) { return; }
    }
    ctx->pc = 0x3BBF08u;
label_3bbf08:
    // 0x3bbf08: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3bbf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3bbf0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3bbf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3bbf10: 0xc04cd60  jal         func_133580
    ctx->pc = 0x3BBF10u;
    SET_GPR_U32(ctx, 31, 0x3BBF18u);
    ctx->pc = 0x3BBF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBF10u;
            // 0x3bbf14: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBF18u; }
        if (ctx->pc != 0x3BBF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBF18u; }
        if (ctx->pc != 0x3BBF18u) { return; }
    }
    ctx->pc = 0x3BBF18u;
label_3bbf18:
    // 0x3bbf18: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3bbf18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3bbf1c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3bbf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3bbf20: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x3bbf20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3bbf24: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3BBF24u;
    SET_GPR_U32(ctx, 31, 0x3BBF2Cu);
    ctx->pc = 0x3BBF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBF24u;
            // 0x3bbf28: 0x24c683d0  addiu       $a2, $a2, -0x7C30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBF2Cu; }
        if (ctx->pc != 0x3BBF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBF2Cu; }
        if (ctx->pc != 0x3BBF2Cu) { return; }
    }
    ctx->pc = 0x3BBF2Cu;
label_3bbf2c:
    // 0x3bbf2c: 0x92230e3d  lbu         $v1, 0xE3D($s1)
    ctx->pc = 0x3bbf2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3645)));
    // 0x3bbf30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bbf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bbf34: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3bbf34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3bbf38: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x3bbf38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3bbf3c: 0x24c683d0  addiu       $a2, $a2, -0x7C30
    ctx->pc = 0x3bbf3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935504));
    // 0x3bbf40: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3bbf40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bbf44: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3bbf44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3bbf48: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3bbf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3bbf4c: 0xc04ccc4  jal         func_133310
    ctx->pc = 0x3BBF4Cu;
    SET_GPR_U32(ctx, 31, 0x3BBF54u);
    ctx->pc = 0x3BBF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBF4Cu;
            // 0x3bbf50: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBF54u; }
        if (ctx->pc != 0x3BBF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBF54u; }
        if (ctx->pc != 0x3BBF54u) { return; }
    }
    ctx->pc = 0x3BBF54u;
label_3bbf54:
    // 0x3bbf54: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3bbf54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3bbf58: 0xc04cc08  jal         func_133020
    ctx->pc = 0x3BBF58u;
    SET_GPR_U32(ctx, 31, 0x3BBF60u);
    ctx->pc = 0x3BBF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBF58u;
            // 0x3bbf5c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBF60u; }
        if (ctx->pc != 0x3BBF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBF60u; }
        if (ctx->pc != 0x3BBF60u) { return; }
    }
    ctx->pc = 0x3BBF60u;
label_3bbf60:
    // 0x3bbf60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3bbf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3bbf64: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x3bbf64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x3bbf68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3bbf68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bbf6c: 0x26240380  addiu       $a0, $s1, 0x380
    ctx->pc = 0x3bbf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
    // 0x3bbf70: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3bbf70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3bbf74: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x3bbf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x3bbf78: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x3bbf78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3bbf7c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x3bbf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x3bbf80: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3bbf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x3bbf84: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3bbf84u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bbf88: 0x0  nop
    ctx->pc = 0x3bbf88u;
    // NOP
    // 0x3bbf8c: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x3bbf8cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
    // 0x3bbf90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3bbf90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bbf94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3bbf94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bbf98: 0xc60c01a4  lwc1        $f12, 0x1A4($s0)
    ctx->pc = 0x3bbf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3bbf9c: 0xc60d01a8  lwc1        $f13, 0x1A8($s0)
    ctx->pc = 0x3bbf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3bbfa0: 0xc60e01ac  lwc1        $f14, 0x1AC($s0)
    ctx->pc = 0x3bbfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3bbfa4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3bbfa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3bbfa8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3bbfa8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3bbfac: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3BBFACu;
    SET_GPR_U32(ctx, 31, 0x3BBFB4u);
    ctx->pc = 0x3BBFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBFACu;
            // 0x3bbfb0: 0x4603151c  madd.s      $f20, $f2, $f3 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBFB4u; }
        if (ctx->pc != 0x3BBFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBFB4u; }
        if (ctx->pc != 0x3BBFB4u) { return; }
    }
    ctx->pc = 0x3BBFB4u;
label_3bbfb4:
    // 0x3bbfb4: 0xc6400080  lwc1        $f0, 0x80($s2)
    ctx->pc = 0x3bbfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bbfb8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3bbfb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3bbfbc: 0xe6200dfc  swc1        $f0, 0xDFC($s1)
    ctx->pc = 0x3bbfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3580), bits); }
    // 0x3bbfc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3bbfc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3bbfc4:
    // 0x3bbfc4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3bbfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3bbfc8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3bbfc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bbfcc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3bbfccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bbfd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3bbfd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bbfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x3BBFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BBFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBFD4u;
            // 0x3bbfd8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BBFDCu;
    // 0x3bbfdc: 0x0  nop
    ctx->pc = 0x3bbfdcu;
    // NOP
}
