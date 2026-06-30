#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC750
// Address: 0x1dc750 - 0x1dc840
void sub_001DC750_0x1dc750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC750_0x1dc750");
#endif

    switch (ctx->pc) {
        case 0x1dc774u: goto label_1dc774;
        case 0x1dc780u: goto label_1dc780;
        case 0x1dc78cu: goto label_1dc78c;
        case 0x1dc818u: goto label_1dc818;
        default: break;
    }

    ctx->pc = 0x1dc750u;

    // 0x1dc750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dc750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dc754: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1dc754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1dc758: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dc758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1dc75c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dc75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dc760: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dc760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc764: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1dc764u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1dc768: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1dc768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc76c: 0xc04cc08  jal         func_133020
    ctx->pc = 0x1DC76Cu;
    SET_GPR_U32(ctx, 31, 0x1DC774u);
    ctx->pc = 0x1DC770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC76Cu;
            // 0x1dc770: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC774u; }
        if (ctx->pc != 0x1DC774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC774u; }
        if (ctx->pc != 0x1DC774u) { return; }
    }
    ctx->pc = 0x1DC774u;
label_1dc774:
    // 0x1dc774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dc774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc778: 0xc04cc14  jal         func_133050
    ctx->pc = 0x1DC778u;
    SET_GPR_U32(ctx, 31, 0x1DC780u);
    ctx->pc = 0x1DC77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC778u;
            // 0x1dc77c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC780u; }
        if (ctx->pc != 0x1DC780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC780u; }
        if (ctx->pc != 0x1DC780u) { return; }
    }
    ctx->pc = 0x1DC780u;
label_1dc780:
    // 0x1dc780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc784: 0xc04cc14  jal         func_133050
    ctx->pc = 0x1DC784u;
    SET_GPR_U32(ctx, 31, 0x1DC78Cu);
    ctx->pc = 0x1DC788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC784u;
            // 0x1dc788: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC78Cu; }
        if (ctx->pc != 0x1DC78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC78Cu; }
        if (ctx->pc != 0x1DC78Cu) { return; }
    }
    ctx->pc = 0x1DC78Cu;
label_1dc78c:
    // 0x1dc78c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1dc78cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1dc790: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1dc790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1dc794: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dc794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc798: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x1dc798u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
    // 0x1dc79c: 0x0  nop
    ctx->pc = 0x1dc79cu;
    // NOP
    // 0x1dc7a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc7a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc7a4: 0x0  nop
    ctx->pc = 0x1dc7a4u;
    // NOP
    // 0x1dc7a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dc7a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc7ac: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC7ACu;
    {
        const bool branch_taken_0x1dc7ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc7ac) {
            ctx->pc = 0x1DC7B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC7ACu;
            // 0x1dc7b0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DC7BCu;
            goto label_1dc7bc;
        }
    }
    ctx->pc = 0x1DC7B4u;
    // 0x1dc7b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1dc7b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc7b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dc7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1dc7bc:
    // 0x1dc7bc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1dc7bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dc7c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc7c4: 0x0  nop
    ctx->pc = 0x1dc7c4u;
    // NOP
    // 0x1dc7c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dc7c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc7cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1DC7CCu;
    {
        const bool branch_taken_0x1dc7cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DC7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC7CCu;
            // 0x1dc7d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc7cc) {
            ctx->pc = 0x1DC7D8u;
            goto label_1dc7d8;
        }
    }
    ctx->pc = 0x1DC7D4u;
    // 0x1dc7d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dc7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc7d8:
    // 0x1dc7d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dc7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc7dc: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x1dc7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x1dc7e0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1dc7e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1dc7e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1dc7e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc7e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1dc7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1dc7ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dc7ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dc7f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1dc7f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dc7f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dc7f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc7f8: 0x0  nop
    ctx->pc = 0x1dc7f8u;
    // NOP
    // 0x1dc7fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dc7fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dc800: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1dc800u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dc804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc808: 0x0  nop
    ctx->pc = 0x1dc808u;
    // NOP
    // 0x1dc80c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dc80cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dc810: 0xc0477fe  jal         func_11DFF8
    ctx->pc = 0x1DC810u;
    SET_GPR_U32(ctx, 31, 0x1DC818u);
    ctx->pc = 0x1DC814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC810u;
            // 0x1dc814: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC818u; }
        if (ctx->pc != 0x1DC818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC818u; }
        if (ctx->pc != 0x1DC818u) { return; }
    }
    ctx->pc = 0x1DC818u;
label_1dc818:
    // 0x1dc818: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1dc818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc81c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1dc81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1dc820: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dc820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc824: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1dc824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dc828: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dc828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc82c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC82Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC82Cu;
            // 0x1dc830: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC834u;
    // 0x1dc834: 0x0  nop
    ctx->pc = 0x1dc834u;
    // NOP
    // 0x1dc838: 0x0  nop
    ctx->pc = 0x1dc838u;
    // NOP
    // 0x1dc83c: 0x0  nop
    ctx->pc = 0x1dc83cu;
    // NOP
}
