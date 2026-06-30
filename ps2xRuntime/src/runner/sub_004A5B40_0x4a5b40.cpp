#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A5B40
// Address: 0x4a5b40 - 0x4a5c30
void sub_004A5B40_0x4a5b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5B40_0x4a5b40");
#endif

    switch (ctx->pc) {
        case 0x4a5b64u: goto label_4a5b64;
        case 0x4a5b70u: goto label_4a5b70;
        case 0x4a5b7cu: goto label_4a5b7c;
        case 0x4a5c08u: goto label_4a5c08;
        default: break;
    }

    ctx->pc = 0x4a5b40u;

    // 0x4a5b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a5b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4a5b44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4a5b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4a5b48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a5b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4a5b4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a5b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4a5b50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a5b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5b54: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4a5b54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4a5b58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4a5b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5b5c: 0xc04cc08  jal         func_133020
    ctx->pc = 0x4A5B5Cu;
    SET_GPR_U32(ctx, 31, 0x4A5B64u);
    ctx->pc = 0x4A5B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5B5Cu;
            // 0x4a5b60: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5B64u; }
        if (ctx->pc != 0x4A5B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5B64u; }
        if (ctx->pc != 0x4A5B64u) { return; }
    }
    ctx->pc = 0x4A5B64u;
label_4a5b64:
    // 0x4a5b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a5b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5b68: 0xc04cc14  jal         func_133050
    ctx->pc = 0x4A5B68u;
    SET_GPR_U32(ctx, 31, 0x4A5B70u);
    ctx->pc = 0x4A5B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5B68u;
            // 0x4a5b6c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5B70u; }
        if (ctx->pc != 0x4A5B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5B70u; }
        if (ctx->pc != 0x4A5B70u) { return; }
    }
    ctx->pc = 0x4A5B70u;
label_4a5b70:
    // 0x4a5b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a5b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5b74: 0xc04cc14  jal         func_133050
    ctx->pc = 0x4A5B74u;
    SET_GPR_U32(ctx, 31, 0x4A5B7Cu);
    ctx->pc = 0x4A5B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5B74u;
            // 0x4a5b78: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5B7Cu; }
        if (ctx->pc != 0x4A5B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5B7Cu; }
        if (ctx->pc != 0x4A5B7Cu) { return; }
    }
    ctx->pc = 0x4A5B7Cu;
label_4a5b7c:
    // 0x4a5b7c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x4a5b7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x4a5b80: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x4a5b84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a5b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a5b88: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x4a5b88u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
    // 0x4a5b8c: 0x0  nop
    ctx->pc = 0x4a5b8cu;
    // NOP
    // 0x4a5b90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a5b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a5b94: 0x0  nop
    ctx->pc = 0x4a5b94u;
    // NOP
    // 0x4a5b98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4a5b98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a5b9c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x4A5B9Cu;
    {
        const bool branch_taken_0x4a5b9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a5b9c) {
            ctx->pc = 0x4A5BA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5B9Cu;
            // 0x4a5ba0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A5BACu;
            goto label_4a5bac;
        }
    }
    ctx->pc = 0x4A5BA4u;
    // 0x4a5ba4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4a5ba4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5ba8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4a5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4a5bac:
    // 0x4a5bac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4a5bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4a5bb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a5bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a5bb4: 0x0  nop
    ctx->pc = 0x4a5bb4u;
    // NOP
    // 0x4a5bb8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4a5bb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a5bbc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x4A5BBCu;
    {
        const bool branch_taken_0x4a5bbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4A5BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5BBCu;
            // 0x4a5bc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5bbc) {
            ctx->pc = 0x4A5BC8u;
            goto label_4a5bc8;
        }
    }
    ctx->pc = 0x4A5BC4u;
    // 0x4a5bc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a5bc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a5bc8:
    // 0x4a5bc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4a5bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4a5bcc: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x4a5bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x4a5bd0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a5bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a5bd4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4a5bd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a5bd8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4a5bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x4a5bdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a5bdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a5be0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4a5be0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4a5be4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a5be4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a5be8: 0x0  nop
    ctx->pc = 0x4a5be8u;
    // NOP
    // 0x4a5bec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a5becu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a5bf0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4a5bf0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4a5bf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a5bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a5bf8: 0x0  nop
    ctx->pc = 0x4a5bf8u;
    // NOP
    // 0x4a5bfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a5bfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a5c00: 0xc0477fe  jal         func_11DFF8
    ctx->pc = 0x4A5C00u;
    SET_GPR_U32(ctx, 31, 0x4A5C08u);
    ctx->pc = 0x4A5C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5C00u;
            // 0x4a5c04: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5C08u; }
        if (ctx->pc != 0x4A5C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5C08u; }
        if (ctx->pc != 0x4A5C08u) { return; }
    }
    ctx->pc = 0x4A5C08u;
label_4a5c08:
    // 0x4a5c08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4a5c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a5c0c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4a5c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4a5c10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a5c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a5c14: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4a5c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4a5c18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a5c18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a5c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5C1Cu;
            // 0x4a5c20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A5C24u;
    // 0x4a5c24: 0x0  nop
    ctx->pc = 0x4a5c24u;
    // NOP
    // 0x4a5c28: 0x0  nop
    ctx->pc = 0x4a5c28u;
    // NOP
    // 0x4a5c2c: 0x0  nop
    ctx->pc = 0x4a5c2cu;
    // NOP
}
