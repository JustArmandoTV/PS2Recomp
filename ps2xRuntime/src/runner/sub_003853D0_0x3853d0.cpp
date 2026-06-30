#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003853D0
// Address: 0x3853d0 - 0x385450
void sub_003853D0_0x3853d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003853D0_0x3853d0");
#endif

    switch (ctx->pc) {
        case 0x3853f4u: goto label_3853f4;
        case 0x385408u: goto label_385408;
        case 0x38541cu: goto label_38541c;
        case 0x385430u: goto label_385430;
        default: break;
    }

    ctx->pc = 0x3853d0u;

    // 0x3853d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3853d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3853d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3853d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3853d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3853d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3853dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3853dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3853e0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3853e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3853e4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3853e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3853e8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3853e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3853ec: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x3853ECu;
    SET_GPR_U32(ctx, 31, 0x3853F4u);
    ctx->pc = 0x3853F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3853ECu;
            // 0x3853f0: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3853F4u; }
        if (ctx->pc != 0x3853F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3853F4u; }
        if (ctx->pc != 0x3853F4u) { return; }
    }
    ctx->pc = 0x3853F4u;
label_3853f4:
    // 0x3853f4: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3853f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x3853f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3853f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3853fc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3853fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x385400: 0xc04cca0  jal         func_133280
    ctx->pc = 0x385400u;
    SET_GPR_U32(ctx, 31, 0x385408u);
    ctx->pc = 0x385404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385400u;
            // 0x385404: 0x24c65d50  addiu       $a2, $a2, 0x5D50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385408u; }
        if (ctx->pc != 0x385408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385408u; }
        if (ctx->pc != 0x385408u) { return; }
    }
    ctx->pc = 0x385408u;
label_385408:
    // 0x385408: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x385408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x38540c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x38540cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x385410: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x385410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x385414: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x385414u;
    SET_GPR_U32(ctx, 31, 0x38541Cu);
    ctx->pc = 0x385418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385414u;
            // 0x385418: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38541Cu; }
        if (ctx->pc != 0x38541Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38541Cu; }
        if (ctx->pc != 0x38541Cu) { return; }
    }
    ctx->pc = 0x38541Cu;
label_38541c:
    // 0x38541c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x38541cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x385420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x385420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385424: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x385424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385428: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x385428u;
    SET_GPR_U32(ctx, 31, 0x385430u);
    ctx->pc = 0x38542Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385428u;
            // 0x38542c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385430u; }
        if (ctx->pc != 0x385430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385430u; }
        if (ctx->pc != 0x385430u) { return; }
    }
    ctx->pc = 0x385430u;
label_385430:
    // 0x385430: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x385430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x385434: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x385434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x385438: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x385438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38543c: 0x3e00008  jr          $ra
    ctx->pc = 0x38543Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38543Cu;
            // 0x385440: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x385444u;
    // 0x385444: 0x0  nop
    ctx->pc = 0x385444u;
    // NOP
    // 0x385448: 0x0  nop
    ctx->pc = 0x385448u;
    // NOP
    // 0x38544c: 0x0  nop
    ctx->pc = 0x38544cu;
    // NOP
}
