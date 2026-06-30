#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E1770
// Address: 0x1e1770 - 0x1e1870
void sub_001E1770_0x1e1770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1770_0x1e1770");
#endif

    switch (ctx->pc) {
        case 0x1e180cu: goto label_1e180c;
        case 0x1e181cu: goto label_1e181c;
        case 0x1e182cu: goto label_1e182c;
        case 0x1e1840u: goto label_1e1840;
        case 0x1e1850u: goto label_1e1850;
        default: break;
    }

    ctx->pc = 0x1e1770u;

    // 0x1e1770: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e1770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1e1774: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x1e1774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
    // 0x1e1778: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e1778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e177c: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x1e177cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x1e1780: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e1784: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x1e1784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x1e1788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e178c: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x1e178cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x1e1790: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1e1790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1794: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1e1794u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1e1798: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e1798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e179c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e179cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e17a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e17a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e17a4: 0xe48003e0  swc1        $f0, 0x3E0($a0)
    ctx->pc = 0x1e17a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 992), bits); }
    // 0x1e17a8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1e17a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e17ac: 0xe48003e4  swc1        $f0, 0x3E4($a0)
    ctx->pc = 0x1e17acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 996), bits); }
    // 0x1e17b0: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1e17b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e17b4: 0xe48003e8  swc1        $f0, 0x3E8($a0)
    ctx->pc = 0x1e17b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1000), bits); }
    // 0x1e17b8: 0xac8603ec  sw          $a2, 0x3EC($a0)
    ctx->pc = 0x1e17b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1004), GPR_U32(ctx, 6));
    // 0x1e17bc: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x1e17bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e17c0: 0xe48003f0  swc1        $f0, 0x3F0($a0)
    ctx->pc = 0x1e17c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1008), bits); }
    // 0x1e17c4: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x1e17c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e17c8: 0xe48003f4  swc1        $f0, 0x3F4($a0)
    ctx->pc = 0x1e17c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1012), bits); }
    // 0x1e17cc: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x1e17ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e17d0: 0xe48003f8  swc1        $f0, 0x3F8($a0)
    ctx->pc = 0x1e17d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1016), bits); }
    // 0x1e17d4: 0xac8603fc  sw          $a2, 0x3FC($a0)
    ctx->pc = 0x1e17d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1020), GPR_U32(ctx, 6));
    // 0x1e17d8: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x1e17d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e17dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e17dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e17e0: 0xe4800400  swc1        $f0, 0x400($a0)
    ctx->pc = 0x1e17e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1024), bits); }
    // 0x1e17e4: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x1e17e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e17e8: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1e17e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e17ec: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1e17ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1e17f0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1e17f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1e17f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e17f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e17f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e17f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e17fc: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x1e17fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1e1800: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1e1800u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e1804: 0xc04f29c  jal         func_13CA70
    ctx->pc = 0x1E1804u;
    SET_GPR_U32(ctx, 31, 0x1E180Cu);
    ctx->pc = 0x1E1808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1804u;
            // 0x1e1808: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CA70u;
    if (runtime->hasFunction(0x13CA70u)) {
        auto targetFn = runtime->lookupFunction(0x13CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E180Cu; }
        if (ctx->pc != 0x1E180Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA70_0x13ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E180Cu; }
        if (ctx->pc != 0x1E180Cu) { return; }
    }
    ctx->pc = 0x1E180Cu;
label_1e180c:
    // 0x1e180c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e180cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1810: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e1810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e1814: 0xc04cdf0  jal         func_1337C0
    ctx->pc = 0x1E1814u;
    SET_GPR_U32(ctx, 31, 0x1E181Cu);
    ctx->pc = 0x1E1818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1814u;
            // 0x1e1818: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E181Cu; }
        if (ctx->pc != 0x1E181Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E181Cu; }
        if (ctx->pc != 0x1E181Cu) { return; }
    }
    ctx->pc = 0x1E181Cu;
label_1e181c:
    // 0x1e181c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1e181cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e1820: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1e1820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e1824: 0xc04cdd0  jal         func_133740
    ctx->pc = 0x1E1824u;
    SET_GPR_U32(ctx, 31, 0x1E182Cu);
    ctx->pc = 0x1E1828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1824u;
            // 0x1e1828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E182Cu; }
        if (ctx->pc != 0x1E182Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E182Cu; }
        if (ctx->pc != 0x1E182Cu) { return; }
    }
    ctx->pc = 0x1E182Cu;
label_1e182c:
    // 0x1e182c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1e182cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1e1830: 0x260403f0  addiu       $a0, $s0, 0x3F0
    ctx->pc = 0x1e1830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
    // 0x1e1834: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1e1834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e1838: 0xc04cca0  jal         func_133280
    ctx->pc = 0x1E1838u;
    SET_GPR_U32(ctx, 31, 0x1E1840u);
    ctx->pc = 0x1E183Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1838u;
            // 0x1e183c: 0x24c6c8e0  addiu       $a2, $a2, -0x3720 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1840u; }
        if (ctx->pc != 0x1E1840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1840u; }
        if (ctx->pc != 0x1E1840u) { return; }
    }
    ctx->pc = 0x1E1840u;
label_1e1840:
    // 0x1e1840: 0x26040410  addiu       $a0, $s0, 0x410
    ctx->pc = 0x1e1840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x1e1844: 0x260503e0  addiu       $a1, $s0, 0x3E0
    ctx->pc = 0x1e1844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 992));
    // 0x1e1848: 0xc04a508  jal         func_129420
    ctx->pc = 0x1E1848u;
    SET_GPR_U32(ctx, 31, 0x1E1850u);
    ctx->pc = 0x1E184Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1848u;
            // 0x1e184c: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1850u; }
        if (ctx->pc != 0x1E1850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1850u; }
        if (ctx->pc != 0x1E1850u) { return; }
    }
    ctx->pc = 0x1E1850u;
label_1e1850:
    // 0x1e1850: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e1850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1854: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e1854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e185c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E185Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E185Cu;
            // 0x1e1860: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1864u;
    // 0x1e1864: 0x0  nop
    ctx->pc = 0x1e1864u;
    // NOP
    // 0x1e1868: 0x0  nop
    ctx->pc = 0x1e1868u;
    // NOP
    // 0x1e186c: 0x0  nop
    ctx->pc = 0x1e186cu;
    // NOP
}
