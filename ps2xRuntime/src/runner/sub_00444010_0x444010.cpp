#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00444010
// Address: 0x444010 - 0x444190
void sub_00444010_0x444010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444010_0x444010");
#endif

    switch (ctx->pc) {
        case 0x444068u: goto label_444068;
        case 0x444078u: goto label_444078;
        case 0x4440b0u: goto label_4440b0;
        case 0x4440e4u: goto label_4440e4;
        case 0x444118u: goto label_444118;
        case 0x444128u: goto label_444128;
        case 0x444138u: goto label_444138;
        case 0x444144u: goto label_444144;
        case 0x444150u: goto label_444150;
        default: break;
    }

    ctx->pc = 0x444010u;

    // 0x444010: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x444010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x444014: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x444014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x444018: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x444018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x44401c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x44401cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x444020: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x444020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444024: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x444024u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x444028: 0x249000f0  addiu       $s0, $a0, 0xF0
    ctx->pc = 0x444028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x44402c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x44402cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x444030: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x444030u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x444034: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x444034u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x444038: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x444038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x44403c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x44403cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x444040: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x444040u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x444044: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x444044u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x444048: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x444048u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x44404c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x44404cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x444050: 0x46000344  c1          0x344
    ctx->pc = 0x444050u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x444054: 0xc4ac0004  lwc1        $f12, 0x4($a1)
    ctx->pc = 0x444054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x444058: 0x0  nop
    ctx->pc = 0x444058u;
    // NOP
    // 0x44405c: 0x0  nop
    ctx->pc = 0x44405cu;
    // NOP
    // 0x444060: 0xc04780a  jal         func_11E028
    ctx->pc = 0x444060u;
    SET_GPR_U32(ctx, 31, 0x444068u);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444068u; }
        if (ctx->pc != 0x444068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444068u; }
        if (ctx->pc != 0x444068u) { return; }
    }
    ctx->pc = 0x444068u;
label_444068:
    // 0x444068: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x444068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x44406c: 0xc62d0008  lwc1        $f13, 0x8($s1)
    ctx->pc = 0x44406cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x444070: 0xc04780a  jal         func_11E028
    ctx->pc = 0x444070u;
    SET_GPR_U32(ctx, 31, 0x444078u);
    ctx->pc = 0x444074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444070u;
            // 0x444074: 0x460005c7  neg.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444078u; }
        if (ctx->pc != 0x444078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444078u; }
        if (ctx->pc != 0x444078u) { return; }
    }
    ctx->pc = 0x444078u;
label_444078:
    // 0x444078: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x444078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x44407c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x44407cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x444080: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x444080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x444084: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x444084u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x444088: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x444088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x44408c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x44408cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x444090: 0x0  nop
    ctx->pc = 0x444090u;
    // NOP
    // 0x444094: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x444094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x444098: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x444098u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x44409c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x44409cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x4440a0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4440a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x4440a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4440a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4440a8: 0xc04c970  jal         func_1325C0
    ctx->pc = 0x4440A8u;
    SET_GPR_U32(ctx, 31, 0x4440B0u);
    ctx->pc = 0x4440ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4440A8u;
            // 0x4440ac: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4440B0u; }
        if (ctx->pc != 0x4440B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4440B0u; }
        if (ctx->pc != 0x4440B0u) { return; }
    }
    ctx->pc = 0x4440B0u;
label_4440b0:
    // 0x4440b0: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x4440b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
    // 0x4440b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4440b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4440b8: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x4440b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
    // 0x4440bc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4440bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4440c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4440c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4440c4: 0x0  nop
    ctx->pc = 0x4440c4u;
    // NOP
    // 0x4440c8: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x4440c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x4440cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4440ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4440d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4440d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4440d4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4440d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x4440d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4440d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x4440dc: 0xc04c970  jal         func_1325C0
    ctx->pc = 0x4440DCu;
    SET_GPR_U32(ctx, 31, 0x4440E4u);
    ctx->pc = 0x4440E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4440DCu;
            // 0x4440e0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4440E4u; }
        if (ctx->pc != 0x4440E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4440E4u; }
        if (ctx->pc != 0x4440E4u) { return; }
    }
    ctx->pc = 0x4440E4u;
label_4440e4:
    // 0x4440e4: 0x3c034336  lui         $v1, 0x4336
    ctx->pc = 0x4440e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17206 << 16));
    // 0x4440e8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x4440e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x4440ec: 0x34630b60  ori         $v1, $v1, 0xB60
    ctx->pc = 0x4440ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2912);
    // 0x4440f0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4440f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x4440f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4440f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4440f8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4440f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4440fc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4440fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x444100: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x444100u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x444104: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x444104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x444108: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x444108u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x44410c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x44410cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x444110: 0xc04c970  jal         func_1325C0
    ctx->pc = 0x444110u;
    SET_GPR_U32(ctx, 31, 0x444118u);
    ctx->pc = 0x444114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444110u;
            // 0x444114: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444118u; }
        if (ctx->pc != 0x444118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444118u; }
        if (ctx->pc != 0x444118u) { return; }
    }
    ctx->pc = 0x444118u;
label_444118:
    // 0x444118: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x444118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x44411c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x44411cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x444120: 0xc04c72c  jal         func_131CB0
    ctx->pc = 0x444120u;
    SET_GPR_U32(ctx, 31, 0x444128u);
    ctx->pc = 0x444124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444120u;
            // 0x444124: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444128u; }
        if (ctx->pc != 0x444128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444128u; }
        if (ctx->pc != 0x444128u) { return; }
    }
    ctx->pc = 0x444128u;
label_444128:
    // 0x444128: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x444128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x44412c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x44412cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x444130: 0xc04c72c  jal         func_131CB0
    ctx->pc = 0x444130u;
    SET_GPR_U32(ctx, 31, 0x444138u);
    ctx->pc = 0x444134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444130u;
            // 0x444134: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444138u; }
        if (ctx->pc != 0x444138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444138u; }
        if (ctx->pc != 0x444138u) { return; }
    }
    ctx->pc = 0x444138u;
label_444138:
    // 0x444138: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x444138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x44413c: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x44413Cu;
    SET_GPR_U32(ctx, 31, 0x444144u);
    ctx->pc = 0x444140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44413Cu;
            // 0x444140: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444144u; }
        if (ctx->pc != 0x444144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444144u; }
        if (ctx->pc != 0x444144u) { return; }
    }
    ctx->pc = 0x444144u;
label_444144:
    // 0x444144: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x444144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x444148: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x444148u;
    SET_GPR_U32(ctx, 31, 0x444150u);
    ctx->pc = 0x44414Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444148u;
            // 0x44414c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444150u; }
        if (ctx->pc != 0x444150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444150u; }
        if (ctx->pc != 0x444150u) { return; }
    }
    ctx->pc = 0x444150u;
label_444150:
    // 0x444150: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x444150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x444154: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x444154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x444158: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x444158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x44415c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x44415cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x444160: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x444160u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x444164: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x444164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x444168: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x444168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44416c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x44416cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x444170: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x444170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x444174: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x444174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x444178: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x444178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44417c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x44417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x444180: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x444180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x444184: 0x3e00008  jr          $ra
    ctx->pc = 0x444184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x444184u;
            // 0x444188: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44418Cu;
    // 0x44418c: 0x0  nop
    ctx->pc = 0x44418cu;
    // NOP
}
