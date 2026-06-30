#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004646D0
// Address: 0x4646d0 - 0x464850
void sub_004646D0_0x4646d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004646D0_0x4646d0");
#endif

    switch (ctx->pc) {
        case 0x464728u: goto label_464728;
        case 0x464738u: goto label_464738;
        case 0x464770u: goto label_464770;
        case 0x4647a4u: goto label_4647a4;
        case 0x4647d8u: goto label_4647d8;
        case 0x4647e8u: goto label_4647e8;
        case 0x4647f8u: goto label_4647f8;
        case 0x464804u: goto label_464804;
        case 0x464810u: goto label_464810;
        default: break;
    }

    ctx->pc = 0x4646d0u;

    // 0x4646d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4646d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4646d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4646d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4646d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4646d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4646dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4646dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4646e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4646e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4646e4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4646e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x4646e8: 0x249000f0  addiu       $s0, $a0, 0xF0
    ctx->pc = 0x4646e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x4646ec: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4646ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4646f0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4646f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4646f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4646f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4646f8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4646f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4646fc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4646fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x464700: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x464700u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x464704: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x464704u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x464708: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x464708u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x46470c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x46470cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x464710: 0x46000344  c1          0x344
    ctx->pc = 0x464710u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x464714: 0xc4ac0004  lwc1        $f12, 0x4($a1)
    ctx->pc = 0x464714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x464718: 0x0  nop
    ctx->pc = 0x464718u;
    // NOP
    // 0x46471c: 0x0  nop
    ctx->pc = 0x46471cu;
    // NOP
    // 0x464720: 0xc04780a  jal         func_11E028
    ctx->pc = 0x464720u;
    SET_GPR_U32(ctx, 31, 0x464728u);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464728u; }
        if (ctx->pc != 0x464728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464728u; }
        if (ctx->pc != 0x464728u) { return; }
    }
    ctx->pc = 0x464728u;
label_464728:
    // 0x464728: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x464728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x46472c: 0xc62d0008  lwc1        $f13, 0x8($s1)
    ctx->pc = 0x46472cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x464730: 0xc04780a  jal         func_11E028
    ctx->pc = 0x464730u;
    SET_GPR_U32(ctx, 31, 0x464738u);
    ctx->pc = 0x464734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464730u;
            // 0x464734: 0x460005c7  neg.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464738u; }
        if (ctx->pc != 0x464738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464738u; }
        if (ctx->pc != 0x464738u) { return; }
    }
    ctx->pc = 0x464738u;
label_464738:
    // 0x464738: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x464738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x46473c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x46473cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x464740: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x464740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x464744: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x464744u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x464748: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x464748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x46474c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x46474cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x464750: 0x0  nop
    ctx->pc = 0x464750u;
    // NOP
    // 0x464754: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x464754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x464758: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x464758u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x46475c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x46475cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x464760: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x464760u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x464764: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x464764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x464768: 0xc04c970  jal         func_1325C0
    ctx->pc = 0x464768u;
    SET_GPR_U32(ctx, 31, 0x464770u);
    ctx->pc = 0x46476Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464768u;
            // 0x46476c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464770u; }
        if (ctx->pc != 0x464770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464770u; }
        if (ctx->pc != 0x464770u) { return; }
    }
    ctx->pc = 0x464770u;
label_464770:
    // 0x464770: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x464770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
    // 0x464774: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x464774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x464778: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x464778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
    // 0x46477c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x46477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x464780: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x464780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x464784: 0x0  nop
    ctx->pc = 0x464784u;
    // NOP
    // 0x464788: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x464788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x46478c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x46478cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x464790: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x464790u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x464794: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x464794u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x464798: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x464798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x46479c: 0xc04c970  jal         func_1325C0
    ctx->pc = 0x46479Cu;
    SET_GPR_U32(ctx, 31, 0x4647A4u);
    ctx->pc = 0x4647A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46479Cu;
            // 0x4647a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4647A4u; }
        if (ctx->pc != 0x4647A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4647A4u; }
        if (ctx->pc != 0x4647A4u) { return; }
    }
    ctx->pc = 0x4647A4u;
label_4647a4:
    // 0x4647a4: 0x3c034336  lui         $v1, 0x4336
    ctx->pc = 0x4647a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17206 << 16));
    // 0x4647a8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x4647a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x4647ac: 0x34630b60  ori         $v1, $v1, 0xB60
    ctx->pc = 0x4647acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2912);
    // 0x4647b0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4647b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x4647b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4647b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4647b8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4647b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4647bc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4647bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x4647c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4647c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4647c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4647c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4647c8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4647c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x4647cc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4647ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x4647d0: 0xc04c970  jal         func_1325C0
    ctx->pc = 0x4647D0u;
    SET_GPR_U32(ctx, 31, 0x4647D8u);
    ctx->pc = 0x4647D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4647D0u;
            // 0x4647d4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4647D8u; }
        if (ctx->pc != 0x4647D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4647D8u; }
        if (ctx->pc != 0x4647D8u) { return; }
    }
    ctx->pc = 0x4647D8u;
label_4647d8:
    // 0x4647d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4647d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4647dc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4647dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4647e0: 0xc04c72c  jal         func_131CB0
    ctx->pc = 0x4647E0u;
    SET_GPR_U32(ctx, 31, 0x4647E8u);
    ctx->pc = 0x4647E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4647E0u;
            // 0x4647e4: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4647E8u; }
        if (ctx->pc != 0x4647E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4647E8u; }
        if (ctx->pc != 0x4647E8u) { return; }
    }
    ctx->pc = 0x4647E8u;
label_4647e8:
    // 0x4647e8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4647e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4647ec: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x4647ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4647f0: 0xc04c72c  jal         func_131CB0
    ctx->pc = 0x4647F0u;
    SET_GPR_U32(ctx, 31, 0x4647F8u);
    ctx->pc = 0x4647F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4647F0u;
            // 0x4647f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4647F8u; }
        if (ctx->pc != 0x4647F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4647F8u; }
        if (ctx->pc != 0x4647F8u) { return; }
    }
    ctx->pc = 0x4647F8u;
label_4647f8:
    // 0x4647f8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x4647f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x4647fc: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x4647FCu;
    SET_GPR_U32(ctx, 31, 0x464804u);
    ctx->pc = 0x464800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4647FCu;
            // 0x464800: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464804u; }
        if (ctx->pc != 0x464804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464804u; }
        if (ctx->pc != 0x464804u) { return; }
    }
    ctx->pc = 0x464804u;
label_464804:
    // 0x464804: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x464804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x464808: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x464808u;
    SET_GPR_U32(ctx, 31, 0x464810u);
    ctx->pc = 0x46480Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464808u;
            // 0x46480c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464810u; }
        if (ctx->pc != 0x464810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464810u; }
        if (ctx->pc != 0x464810u) { return; }
    }
    ctx->pc = 0x464810u;
label_464810:
    // 0x464810: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x464810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x464814: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x464814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x464818: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x464818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x46481c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x46481cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x464820: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x464820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x464824: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x464824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x464828: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x464828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46482c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x46482cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x464830: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x464830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x464834: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x464834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x464838: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x464838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46483c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x46483cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x464840: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x464840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x464844: 0x3e00008  jr          $ra
    ctx->pc = 0x464844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x464848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x464844u;
            // 0x464848: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46484Cu;
    // 0x46484c: 0x0  nop
    ctx->pc = 0x46484cu;
    // NOP
}
