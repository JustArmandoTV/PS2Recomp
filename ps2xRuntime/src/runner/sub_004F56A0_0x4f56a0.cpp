#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F56A0
// Address: 0x4f56a0 - 0x4f5790
void sub_004F56A0_0x4f56a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F56A0_0x4f56a0");
#endif

    switch (ctx->pc) {
        case 0x4f56c4u: goto label_4f56c4;
        case 0x4f56d0u: goto label_4f56d0;
        case 0x4f56dcu: goto label_4f56dc;
        case 0x4f5768u: goto label_4f5768;
        default: break;
    }

    ctx->pc = 0x4f56a0u;

    // 0x4f56a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f56a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4f56a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4f56a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4f56a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f56a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4f56ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f56acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4f56b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f56b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f56b4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4f56b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4f56b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f56b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f56bc: 0xc04cc08  jal         func_133020
    ctx->pc = 0x4F56BCu;
    SET_GPR_U32(ctx, 31, 0x4F56C4u);
    ctx->pc = 0x4F56C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F56BCu;
            // 0x4f56c0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F56C4u; }
        if (ctx->pc != 0x4F56C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F56C4u; }
        if (ctx->pc != 0x4F56C4u) { return; }
    }
    ctx->pc = 0x4F56C4u;
label_4f56c4:
    // 0x4f56c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f56c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f56c8: 0xc04cc14  jal         func_133050
    ctx->pc = 0x4F56C8u;
    SET_GPR_U32(ctx, 31, 0x4F56D0u);
    ctx->pc = 0x4F56CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F56C8u;
            // 0x4f56cc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F56D0u; }
        if (ctx->pc != 0x4F56D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F56D0u; }
        if (ctx->pc != 0x4F56D0u) { return; }
    }
    ctx->pc = 0x4F56D0u;
label_4f56d0:
    // 0x4f56d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f56d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f56d4: 0xc04cc14  jal         func_133050
    ctx->pc = 0x4F56D4u;
    SET_GPR_U32(ctx, 31, 0x4F56DCu);
    ctx->pc = 0x4F56D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F56D4u;
            // 0x4f56d8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F56DCu; }
        if (ctx->pc != 0x4F56DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F56DCu; }
        if (ctx->pc != 0x4F56DCu) { return; }
    }
    ctx->pc = 0x4F56DCu;
label_4f56dc:
    // 0x4f56dc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x4f56dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x4f56e0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4f56e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x4f56e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4f56e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f56e8: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x4f56e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
    // 0x4f56ec: 0x0  nop
    ctx->pc = 0x4f56ecu;
    // NOP
    // 0x4f56f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f56f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f56f4: 0x0  nop
    ctx->pc = 0x4f56f4u;
    // NOP
    // 0x4f56f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4f56f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4f56fc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x4F56FCu;
    {
        const bool branch_taken_0x4f56fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f56fc) {
            ctx->pc = 0x4F5700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F56FCu;
            // 0x4f5700: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F570Cu;
            goto label_4f570c;
        }
    }
    ctx->pc = 0x4F5704u;
    // 0x4f5704: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4f5704u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5708: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4f5708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4f570c:
    // 0x4f570c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4f570cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4f5710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f5710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f5714: 0x0  nop
    ctx->pc = 0x4f5714u;
    // NOP
    // 0x4f5718: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4f5718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4f571c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x4F571Cu;
    {
        const bool branch_taken_0x4f571c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4F5720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F571Cu;
            // 0x4f5720: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f571c) {
            ctx->pc = 0x4F5728u;
            goto label_4f5728;
        }
    }
    ctx->pc = 0x4F5724u;
    // 0x4f5724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4f5724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f5728:
    // 0x4f5728: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4f5728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4f572c: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x4f572cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x4f5730: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4f5730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f5734: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4f5734u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f5738: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4f5738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x4f573c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4f573cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4f5740: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4f5740u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4f5744: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f5744u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f5748: 0x0  nop
    ctx->pc = 0x4f5748u;
    // NOP
    // 0x4f574c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4f574cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4f5750: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4f5750u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4f5754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f5754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f5758: 0x0  nop
    ctx->pc = 0x4f5758u;
    // NOP
    // 0x4f575c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4f575cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4f5760: 0xc0477fe  jal         func_11DFF8
    ctx->pc = 0x4F5760u;
    SET_GPR_U32(ctx, 31, 0x4F5768u);
    ctx->pc = 0x4F5764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5760u;
            // 0x4f5764: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5768u; }
        if (ctx->pc != 0x4F5768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5768u; }
        if (ctx->pc != 0x4F5768u) { return; }
    }
    ctx->pc = 0x4F5768u;
label_4f5768:
    // 0x4f5768: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f5768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f576c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4f576cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4f5770: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f5770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f5774: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4f5774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4f5778: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f5778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f577c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F577Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F577Cu;
            // 0x4f5780: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F5784u;
    // 0x4f5784: 0x0  nop
    ctx->pc = 0x4f5784u;
    // NOP
    // 0x4f5788: 0x0  nop
    ctx->pc = 0x4f5788u;
    // NOP
    // 0x4f578c: 0x0  nop
    ctx->pc = 0x4f578cu;
    // NOP
}
