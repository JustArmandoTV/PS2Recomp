#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F16C0
// Address: 0x2f16c0 - 0x2f17a0
void sub_002F16C0_0x2f16c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F16C0_0x2f16c0");
#endif

    switch (ctx->pc) {
        case 0x2f16f4u: goto label_2f16f4;
        case 0x2f1704u: goto label_2f1704;
        case 0x2f1710u: goto label_2f1710;
        case 0x2f171cu: goto label_2f171c;
        case 0x2f173cu: goto label_2f173c;
        default: break;
    }

    ctx->pc = 0x2f16c0u;

    // 0x2f16c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f16c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f16c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f16c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f16c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f16c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2f16cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f16ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f16d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f16d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f16d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f16d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f16dc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f16dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16e0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2f16e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16e4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f16e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f16e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f16e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16ec: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2F16ECu;
    SET_GPR_U32(ctx, 31, 0x2F16F4u);
    ctx->pc = 0x2F16F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F16ECu;
            // 0x2f16f0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F16F4u; }
        if (ctx->pc != 0x2F16F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F16F4u; }
        if (ctx->pc != 0x2F16F4u) { return; }
    }
    ctx->pc = 0x2F16F4u;
label_2f16f4:
    // 0x2f16f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f16f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16f8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f16f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f16fc: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2F16FCu;
    SET_GPR_U32(ctx, 31, 0x2F1704u);
    ctx->pc = 0x2F1700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F16FCu;
            // 0x2f1700: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1704u; }
        if (ctx->pc != 0x2F1704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1704u; }
        if (ctx->pc != 0x2F1704u) { return; }
    }
    ctx->pc = 0x2F1704u;
label_2f1704:
    // 0x2f1704: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f1704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f1708: 0xc04cc08  jal         func_133020
    ctx->pc = 0x2F1708u;
    SET_GPR_U32(ctx, 31, 0x2F1710u);
    ctx->pc = 0x2F170Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1708u;
            // 0x2f170c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1710u; }
        if (ctx->pc != 0x2F1710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1710u; }
        if (ctx->pc != 0x2F1710u) { return; }
    }
    ctx->pc = 0x2F1710u;
label_2f1710:
    // 0x2f1710: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2f1710u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2f1714: 0xc04cc2c  jal         func_1330B0
    ctx->pc = 0x2F1714u;
    SET_GPR_U32(ctx, 31, 0x2F171Cu);
    ctx->pc = 0x2F1718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1714u;
            // 0x2f1718: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F171Cu; }
        if (ctx->pc != 0x2F171Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F171Cu; }
        if (ctx->pc != 0x2F171Cu) { return; }
    }
    ctx->pc = 0x2F171Cu;
label_2f171c:
    // 0x2f171c: 0x0  nop
    ctx->pc = 0x2f171cu;
    // NOP
    // 0x2f1720: 0x0  nop
    ctx->pc = 0x2f1720u;
    // NOP
    // 0x2f1724: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x2f1724u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x2f1728: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f172c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f172cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1730: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2f1730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f1734: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x2F1734u;
    SET_GPR_U32(ctx, 31, 0x2F173Cu);
    ctx->pc = 0x2F1738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1734u;
            // 0x2f1738: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F173Cu; }
        if (ctx->pc != 0x2F173Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F173Cu; }
        if (ctx->pc != 0x2F173Cu) { return; }
    }
    ctx->pc = 0x2F173Cu;
label_2f173c:
    // 0x2f173c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f173cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f1740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1744: 0x0  nop
    ctx->pc = 0x2f1744u;
    // NOP
    // 0x2f1748: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2f1748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f174c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2F174Cu;
    {
        const bool branch_taken_0x2f174c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f174c) {
            ctx->pc = 0x2F175Cu;
            goto label_2f175c;
        }
    }
    ctx->pc = 0x2F1754u;
    // 0x2f1754: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F1754u;
    {
        const bool branch_taken_0x2f1754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1754u;
            // 0x2f1758: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1754) {
            ctx->pc = 0x2F1774u;
            goto label_2f1774;
        }
    }
    ctx->pc = 0x2F175Cu;
label_2f175c:
    // 0x2f175c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f175cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1760: 0x0  nop
    ctx->pc = 0x2f1760u;
    // NOP
    // 0x2f1764: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2f1764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1768: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1768u;
    {
        const bool branch_taken_0x2f1768 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f1768) {
            ctx->pc = 0x2F176Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1768u;
            // 0x2f176c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1778u;
            goto label_2f1778;
        }
    }
    ctx->pc = 0x2F1770u;
    // 0x2f1770: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2f1770u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2f1774:
    // 0x2f1774: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x2f1774u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_2f1778:
    // 0x2f1778: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f1778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f177c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f177cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1780: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f1780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f1784: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f1784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1788: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f1788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f178c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F178Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F178Cu;
            // 0x2f1790: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1794u;
    // 0x2f1794: 0x0  nop
    ctx->pc = 0x2f1794u;
    // NOP
    // 0x2f1798: 0x0  nop
    ctx->pc = 0x2f1798u;
    // NOP
    // 0x2f179c: 0x0  nop
    ctx->pc = 0x2f179cu;
    // NOP
}
