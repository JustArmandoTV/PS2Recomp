#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00384770
// Address: 0x384770 - 0x384840
void sub_00384770_0x384770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384770_0x384770");
#endif

    switch (ctx->pc) {
        case 0x384794u: goto label_384794;
        case 0x3847a4u: goto label_3847a4;
        case 0x3847ccu: goto label_3847cc;
        case 0x3847f8u: goto label_3847f8;
        case 0x384824u: goto label_384824;
        default: break;
    }

    ctx->pc = 0x384770u;

    // 0x384770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x384770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x384774: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x384774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384778: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x384778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38477c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x38477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x384780: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x384780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x384784: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x384784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x384788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38478c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x38478Cu;
    SET_GPR_U32(ctx, 31, 0x384794u);
    ctx->pc = 0x384790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38478Cu;
            // 0x384790: 0x244502e0  addiu       $a1, $v0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384794u; }
        if (ctx->pc != 0x384794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384794u; }
        if (ctx->pc != 0x384794u) { return; }
    }
    ctx->pc = 0x384794u;
label_384794:
    // 0x384794: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x384794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x384798: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x384798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x38479c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x38479Cu;
    SET_GPR_U32(ctx, 31, 0x3847A4u);
    ctx->pc = 0x3847A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38479Cu;
            // 0x3847a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3847A4u; }
        if (ctx->pc != 0x3847A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3847A4u; }
        if (ctx->pc != 0x3847A4u) { return; }
    }
    ctx->pc = 0x3847A4u;
label_3847a4:
    // 0x3847a4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x3847a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3847a8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x3847a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3847ac: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x3847acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3847b0: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x3847b0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3847b4: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x3847b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x3847b8: 0x46000344  c1          0x344
    ctx->pc = 0x3847b8u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x3847bc: 0x0  nop
    ctx->pc = 0x3847bcu;
    // NOP
    // 0x3847c0: 0x0  nop
    ctx->pc = 0x3847c0u;
    // NOP
    // 0x3847c4: 0xc04780a  jal         func_11E028
    ctx->pc = 0x3847C4u;
    SET_GPR_U32(ctx, 31, 0x3847CCu);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3847CCu; }
        if (ctx->pc != 0x3847CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3847CCu; }
        if (ctx->pc != 0x3847CCu) { return; }
    }
    ctx->pc = 0x3847CCu;
label_3847cc:
    // 0x3847cc: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x3847ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x3847d0: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x3847d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x3847d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3847d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3847d8: 0x0  nop
    ctx->pc = 0x3847d8u;
    // NOP
    // 0x3847dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3847dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3847e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3847e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3847e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3847e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3847e8: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x3847e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3847ec: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x3847ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3847f0: 0xc04780a  jal         func_11E028
    ctx->pc = 0x3847F0u;
    SET_GPR_U32(ctx, 31, 0x3847F8u);
    ctx->pc = 0x3847F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3847F0u;
            // 0x3847f4: 0x28023  negu        $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3847F8u; }
        if (ctx->pc != 0x3847F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3847F8u; }
        if (ctx->pc != 0x3847F8u) { return; }
    }
    ctx->pc = 0x3847F8u;
label_3847f8:
    // 0x3847f8: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x3847f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x3847fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3847fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384800: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x384800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x384804: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x384804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384808: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x384808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38480c: 0x0  nop
    ctx->pc = 0x38480cu;
    // NOP
    // 0x384810: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x384810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x384814: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x384814u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x384818: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x384818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x38481c: 0xc04ca18  jal         func_132860
    ctx->pc = 0x38481Cu;
    SET_GPR_U32(ctx, 31, 0x384824u);
    ctx->pc = 0x384820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38481Cu;
            // 0x384820: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384824u; }
        if (ctx->pc != 0x384824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384824u; }
        if (ctx->pc != 0x384824u) { return; }
    }
    ctx->pc = 0x384824u;
label_384824:
    // 0x384824: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x384824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x384828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38482c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38482cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384830: 0x3e00008  jr          $ra
    ctx->pc = 0x384830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384830u;
            // 0x384834: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x384838u;
    // 0x384838: 0x0  nop
    ctx->pc = 0x384838u;
    // NOP
    // 0x38483c: 0x0  nop
    ctx->pc = 0x38483cu;
    // NOP
}
