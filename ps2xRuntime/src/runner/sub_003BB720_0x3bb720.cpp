#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BB720
// Address: 0x3bb720 - 0x3bb8a0
void sub_003BB720_0x3bb720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB720_0x3bb720");
#endif

    switch (ctx->pc) {
        case 0x3bb7d4u: goto label_3bb7d4;
        case 0x3bb7e0u: goto label_3bb7e0;
        case 0x3bb7f8u: goto label_3bb7f8;
        case 0x3bb85cu: goto label_3bb85c;
        case 0x3bb86cu: goto label_3bb86c;
        default: break;
    }

    ctx->pc = 0x3bb720u;

    // 0x3bb720: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3bb720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3bb724: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3bb724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3bb728: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3bb728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3bb72c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3bb72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3bb730: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bb730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3bb734: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bb734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb738: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3bb738u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3bb73c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3bb73cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3bb740: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3bb740u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3bb744: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3bb744u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3bb748: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3bb748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bb74c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x3bb74cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x3bb750: 0x46176d41  sub.s       $f21, $f13, $f23
    ctx->pc = 0x3bb750u;
    ctx->f[21] = FPU_SUB_S(ctx->f[13], ctx->f[23]);
    // 0x3bb754: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x3bb754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x3bb758: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3bb758u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bb75c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BB75Cu;
    {
        const bool branch_taken_0x3bb75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB75Cu;
            // 0x3bb760: 0x46007586  mov.s       $f22, $f14 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb75c) {
            ctx->pc = 0x3BB784u;
            goto label_3bb784;
        }
    }
    ctx->pc = 0x3BB764u;
    // 0x3bb764: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bb764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3bb768: 0xc6210084  lwc1        $f1, 0x84($s1)
    ctx->pc = 0x3bb768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bb76c: 0xc4406524  lwc1        $f0, 0x6524($v0)
    ctx->pc = 0x3bb76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bb770: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x3bb770u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x3bb774: 0x0  nop
    ctx->pc = 0x3bb774u;
    // NOP
    // 0x3bb778: 0x0  nop
    ctx->pc = 0x3bb778u;
    // NOP
    // 0x3bb77c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB77Cu;
    {
        const bool branch_taken_0x3bb77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb77c) {
            ctx->pc = 0x3BB794u;
            goto label_3bb794;
        }
    }
    ctx->pc = 0x3BB784u;
label_3bb784:
    // 0x3bb784: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bb784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3bb788: 0xc6210084  lwc1        $f1, 0x84($s1)
    ctx->pc = 0x3bb788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bb78c: 0xc440655c  lwc1        $f0, 0x655C($v0)
    ctx->pc = 0x3bb78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bb790: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x3bb790u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_3bb794:
    // 0x3bb794: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3bb794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bb798: 0x0  nop
    ctx->pc = 0x3bb798u;
    // NOP
    // 0x3bb79c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3bb79cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bb7a0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB7A0u;
    {
        const bool branch_taken_0x3bb7a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bb7a0) {
            ctx->pc = 0x3BB7A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB7A0u;
            // 0x3bb7a4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BB7B0u;
            goto label_3bb7b0;
        }
    }
    ctx->pc = 0x3BB7A8u;
    // 0x3bb7a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3BB7A8u;
    {
        const bool branch_taken_0x3bb7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB7A8u;
            // 0x3bb7ac: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb7a8) {
            ctx->pc = 0x3BB7C8u;
            goto label_3bb7c8;
        }
    }
    ctx->pc = 0x3BB7B0u;
label_3bb7b0:
    // 0x3bb7b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bb7b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bb7b4: 0x0  nop
    ctx->pc = 0x3bb7b4u;
    // NOP
    // 0x3bb7b8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3bb7b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bb7bc: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB7BCu;
    {
        const bool branch_taken_0x3bb7bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bb7bc) {
            ctx->pc = 0x3BB7C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB7BCu;
            // 0x3bb7c0: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BB7CCu;
            goto label_3bb7cc;
        }
    }
    ctx->pc = 0x3BB7C4u;
    // 0x3bb7c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3bb7c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3bb7c8:
    // 0x3bb7c8: 0x26040440  addiu       $a0, $s0, 0x440
    ctx->pc = 0x3bb7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
label_3bb7cc:
    // 0x3bb7cc: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x3BB7CCu;
    SET_GPR_U32(ctx, 31, 0x3BB7D4u);
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB7D4u; }
        if (ctx->pc != 0x3BB7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB7D4u; }
        if (ctx->pc != 0x3BB7D4u) { return; }
    }
    ctx->pc = 0x3BB7D4u;
label_3bb7d4:
    // 0x3bb7d4: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x3bb7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
    // 0x3bb7d8: 0xc0bd780  jal         func_2F5E00
    ctx->pc = 0x3BB7D8u;
    SET_GPR_U32(ctx, 31, 0x3BB7E0u);
    ctx->pc = 0x3BB7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB7D8u;
            // 0x3bb7dc: 0x8c520030  lw          $s2, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB7E0u; }
        if (ctx->pc != 0x3BB7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB7E0u; }
        if (ctx->pc != 0x3BB7E0u) { return; }
    }
    ctx->pc = 0x3BB7E0u;
label_3bb7e0:
    // 0x3bb7e0: 0x38430004  xori        $v1, $v0, 0x4
    ctx->pc = 0x3bb7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x3bb7e4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3bb7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3bb7e8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3bb7e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3bb7ec: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x3bb7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x3bb7f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3bb7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3bb7f4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_3bb7f8:
    if (ctx->pc == 0x3BB7F8u) {
        ctx->pc = 0x3BB7F8u;
            // 0x3bb7f8: 0x4614b002  mul.s       $f0, $f22, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
        ctx->pc = 0x3BB7FCu;
        goto label_fallthrough_0x3bb7f4;
    }
    ctx->pc = 0x3BB7F4u;
    {
        const bool branch_taken_0x3bb7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb7f4) {
            ctx->pc = 0x3BB7F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB7F4u;
            // 0x3bb7f8: 0x4614b002  mul.s       $f0, $f22, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BB834u;
            goto label_3bb834;
        }
    }
label_fallthrough_0x3bb7f4:
    ctx->pc = 0x3BB7FCu;
    // 0x3bb7fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bb7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3bb800: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3bb800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3bb804: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3bb804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3bb808: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x3bb808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x3bb80c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB80Cu;
    {
        const bool branch_taken_0x3bb80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bb80c) {
            ctx->pc = 0x3BB824u;
            goto label_3bb824;
        }
    }
    ctx->pc = 0x3BB814u;
    // 0x3bb814: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x3bb814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
    // 0x3bb818: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3bb818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bb81c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BB81Cu;
    {
        const bool branch_taken_0x3bb81c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3bb81c) {
            ctx->pc = 0x3BB830u;
            goto label_3bb830;
        }
    }
    ctx->pc = 0x3BB824u;
label_3bb824:
    // 0x3bb824: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bb824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3bb828: 0xc4406594  lwc1        $f0, 0x6594($v0)
    ctx->pc = 0x3bb828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 26004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bb82c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3bb82cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3bb830:
    // 0x3bb830: 0x4614b002  mul.s       $f0, $f22, $f20
    ctx->pc = 0x3bb830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
label_3bb834:
    // 0x3bb834: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3bb834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3bb838: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3bb838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bb83c: 0xe620007c  swc1        $f0, 0x7C($s1)
    ctx->pc = 0x3bb83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
    // 0x3bb840: 0x46176018  adda.s      $f12, $f23
    ctx->pc = 0x3bb840u;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[23]);
    // 0x3bb844: 0x4614a81c  madd.s      $f0, $f21, $f20
    ctx->pc = 0x3bb844u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[20]));
    // 0x3bb848: 0xe6000de4  swc1        $f0, 0xDE4($s0)
    ctx->pc = 0x3bb848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3556), bits); }
    // 0x3bb84c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3bb84cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3bb850: 0xae000de8  sw          $zero, 0xDE8($s0)
    ctx->pc = 0x3bb850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3560), GPR_U32(ctx, 0));
    // 0x3bb854: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3BB854u;
    SET_GPR_U32(ctx, 31, 0x3BB85Cu);
    ctx->pc = 0x3BB858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB854u;
            // 0x3bb858: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB85Cu; }
        if (ctx->pc != 0x3BB85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB85Cu; }
        if (ctx->pc != 0x3BB85Cu) { return; }
    }
    ctx->pc = 0x3BB85Cu;
label_3bb85c:
    // 0x3bb85c: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x3bb85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x3bb860: 0x26050580  addiu       $a1, $s0, 0x580
    ctx->pc = 0x3bb860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x3bb864: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3BB864u;
    SET_GPR_U32(ctx, 31, 0x3BB86Cu);
    ctx->pc = 0x3BB868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB864u;
            // 0x3bb868: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB86Cu; }
        if (ctx->pc != 0x3BB86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB86Cu; }
        if (ctx->pc != 0x3BB86Cu) { return; }
    }
    ctx->pc = 0x3BB86Cu;
label_3bb86c:
    // 0x3bb86c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3bb86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bb870: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3bb870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3bb874: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3bb874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bb878: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3bb878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3bb87c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3bb87cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bb880: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3bb880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3bb884: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3bb884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb888: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3bb888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3bb88c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB88Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB88Cu;
            // 0x3bb890: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BB894u;
    // 0x3bb894: 0x0  nop
    ctx->pc = 0x3bb894u;
    // NOP
    // 0x3bb898: 0x0  nop
    ctx->pc = 0x3bb898u;
    // NOP
    // 0x3bb89c: 0x0  nop
    ctx->pc = 0x3bb89cu;
    // NOP
}
