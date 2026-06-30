#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0750
// Address: 0x1e0750 - 0x1e0e90
void sub_001E0750_0x1e0750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0750_0x1e0750");
#endif

    switch (ctx->pc) {
        case 0x1e07a0u: goto label_1e07a0;
        case 0x1e07dcu: goto label_1e07dc;
        case 0x1e0804u: goto label_1e0804;
        case 0x1e0814u: goto label_1e0814;
        case 0x1e082cu: goto label_1e082c;
        case 0x1e0860u: goto label_1e0860;
        case 0x1e0874u: goto label_1e0874;
        case 0x1e087cu: goto label_1e087c;
        case 0x1e0890u: goto label_1e0890;
        case 0x1e08a4u: goto label_1e08a4;
        case 0x1e08acu: goto label_1e08ac;
        case 0x1e08e4u: goto label_1e08e4;
        case 0x1e090cu: goto label_1e090c;
        case 0x1e0930u: goto label_1e0930;
        case 0x1e0950u: goto label_1e0950;
        case 0x1e0970u: goto label_1e0970;
        case 0x1e09f4u: goto label_1e09f4;
        case 0x1e0a04u: goto label_1e0a04;
        case 0x1e0a18u: goto label_1e0a18;
        case 0x1e0a28u: goto label_1e0a28;
        case 0x1e0a34u: goto label_1e0a34;
        case 0x1e0a48u: goto label_1e0a48;
        case 0x1e0a58u: goto label_1e0a58;
        case 0x1e0a60u: goto label_1e0a60;
        case 0x1e0a68u: goto label_1e0a68;
        case 0x1e0a74u: goto label_1e0a74;
        case 0x1e0a80u: goto label_1e0a80;
        case 0x1e0aa4u: goto label_1e0aa4;
        case 0x1e0ab0u: goto label_1e0ab0;
        case 0x1e0ac0u: goto label_1e0ac0;
        case 0x1e0accu: goto label_1e0acc;
        case 0x1e0ad8u: goto label_1e0ad8;
        case 0x1e0ae0u: goto label_1e0ae0;
        case 0x1e0b70u: goto label_1e0b70;
        case 0x1e0b80u: goto label_1e0b80;
        case 0x1e0b94u: goto label_1e0b94;
        case 0x1e0bc4u: goto label_1e0bc4;
        case 0x1e0d44u: goto label_1e0d44;
        case 0x1e0d54u: goto label_1e0d54;
        case 0x1e0d68u: goto label_1e0d68;
        case 0x1e0d78u: goto label_1e0d78;
        case 0x1e0d88u: goto label_1e0d88;
        case 0x1e0d98u: goto label_1e0d98;
        case 0x1e0db8u: goto label_1e0db8;
        case 0x1e0dd8u: goto label_1e0dd8;
        case 0x1e0df8u: goto label_1e0df8;
        case 0x1e0e34u: goto label_1e0e34;
        case 0x1e0e44u: goto label_1e0e44;
        case 0x1e0e64u: goto label_1e0e64;
        default: break;
    }

    ctx->pc = 0x1e0750u;

    // 0x1e0750: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e0750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1e0754: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1e0754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1e0758: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e0758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e075c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e075cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e0760: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e0760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e0764: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e0764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e0768: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e0768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e076c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1e076cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e0770: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e0770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0774: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1e0774u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e0778: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1e0778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1e077c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1e077cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e0780: 0x24a5c8f0  addiu       $a1, $a1, -0x3710
    ctx->pc = 0x1e0780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
    // 0x1e0784: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e0784u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e0788: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x1e0788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x1e078c: 0xc4800dbc  lwc1        $f0, 0xDBC($a0)
    ctx->pc = 0x1e078cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0790: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1e0790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0798: 0xc04cc04  jal         func_133010
    ctx->pc = 0x1E0798u;
    SET_GPR_U32(ctx, 31, 0x1E07A0u);
    ctx->pc = 0x1E079Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0798u;
            // 0x1e079c: 0x460105c2  mul.s       $f23, $f0, $f1 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E07A0u; }
        if (ctx->pc != 0x1E07A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E07A0u; }
        if (ctx->pc != 0x1E07A0u) { return; }
    }
    ctx->pc = 0x1E07A0u;
label_1e07a0:
    // 0x1e07a0: 0xc6210e2c  lwc1        $f1, 0xE2C($s1)
    ctx->pc = 0x1e07a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e07a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e07a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e07a8: 0x0  nop
    ctx->pc = 0x1e07a8u;
    // NOP
    // 0x1e07ac: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e07acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e07b0: 0x4503001f  bc1tl       . + 4 + (0x1F << 2)
    ctx->pc = 0x1E07B0u;
    {
        const bool branch_taken_0x1e07b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e07b0) {
            ctx->pc = 0x1E07B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E07B0u;
            // 0x1e07b4: 0x8e220db8  lw          $v0, 0xDB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3512)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0830u;
            goto label_1e0830;
        }
    }
    ctx->pc = 0x1E07B8u;
    // 0x1e07b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1e07b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1e07bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e07bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e07c0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x1e07c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x1e07c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e07c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e07c8: 0x26260360  addiu       $a2, $s1, 0x360
    ctx->pc = 0x1e07c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
    // 0x1e07cc: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1e07ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e07d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e07d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e07d4: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x1E07D4u;
    SET_GPR_U32(ctx, 31, 0x1E07DCu);
    ctx->pc = 0x1E07D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E07D4u;
            // 0x1e07d8: 0xe6200e2c  swc1        $f0, 0xE2C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3628), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E07DCu; }
        if (ctx->pc != 0x1E07DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E07DCu; }
        if (ctx->pc != 0x1E07DCu) { return; }
    }
    ctx->pc = 0x1E07DCu;
label_1e07dc:
    // 0x1e07dc: 0xc6210e2c  lwc1        $f1, 0xE2C($s1)
    ctx->pc = 0x1e07dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e07e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e07e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e07e4: 0x0  nop
    ctx->pc = 0x1e07e4u;
    // NOP
    // 0x1e07e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e07e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e07ec: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x1E07ECu;
    {
        const bool branch_taken_0x1e07ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e07ec) {
            ctx->pc = 0x1E07F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E07ECu;
            // 0x1e07f0: 0x26240360  addiu       $a0, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E081Cu;
            goto label_1e081c;
        }
    }
    ctx->pc = 0x1E07F4u;
    // 0x1e07f4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1e07f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1e07f8: 0x26240360  addiu       $a0, $s1, 0x360
    ctx->pc = 0x1e07f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
    // 0x1e07fc: 0xc04cc04  jal         func_133010
    ctx->pc = 0x1E07FCu;
    SET_GPR_U32(ctx, 31, 0x1E0804u);
    ctx->pc = 0x1E0800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E07FCu;
            // 0x1e0800: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0804u; }
        if (ctx->pc != 0x1E0804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0804u; }
        if (ctx->pc != 0x1E0804u) { return; }
    }
    ctx->pc = 0x1E0804u;
label_1e0804:
    // 0x1e0804: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1e0804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1e0808: 0x26240370  addiu       $a0, $s1, 0x370
    ctx->pc = 0x1e0808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
    // 0x1e080c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x1E080Cu;
    SET_GPR_U32(ctx, 31, 0x1E0814u);
    ctx->pc = 0x1E0810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E080Cu;
            // 0x1e0810: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0814u; }
        if (ctx->pc != 0x1E0814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0814u; }
        if (ctx->pc != 0x1E0814u) { return; }
    }
    ctx->pc = 0x1E0814u;
label_1e0814:
    // 0x1e0814: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0814u;
    {
        const bool branch_taken_0x1e0814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0814u;
            // 0x1e0818: 0xae200e2c  sw          $zero, 0xE2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0814) {
            ctx->pc = 0x1E082Cu;
            goto label_1e082c;
        }
    }
    ctx->pc = 0x1E081Cu;
label_1e081c:
    // 0x1e081c: 0x26260370  addiu       $a2, $s1, 0x370
    ctx->pc = 0x1e081cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
    // 0x1e0820: 0x4600bb07  neg.s       $f12, $f23
    ctx->pc = 0x1e0820u;
    ctx->f[12] = FPU_NEG_S(ctx->f[23]);
    // 0x1e0824: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x1E0824u;
    SET_GPR_U32(ctx, 31, 0x1E082Cu);
    ctx->pc = 0x1E0828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0824u;
            // 0x1e0828: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E082Cu; }
        if (ctx->pc != 0x1E082Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E082Cu; }
        if (ctx->pc != 0x1E082Cu) { return; }
    }
    ctx->pc = 0x1E082Cu;
label_1e082c:
    // 0x1e082c: 0x8e220db8  lw          $v0, 0xDB8($s1)
    ctx->pc = 0x1e082cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3512)));
label_1e0830:
    // 0x1e0830: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0834: 0x50400159  beql        $v0, $zero, . + 4 + (0x159 << 2)
    ctx->pc = 0x1E0834u;
    {
        const bool branch_taken_0x1e0834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0834) {
            ctx->pc = 0x1E0838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0834u;
            // 0x1e0838: 0x8e220db8  lw          $v0, 0xDB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3512)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0D9Cu;
            goto label_1e0d9c;
        }
    }
    ctx->pc = 0x1E083Cu;
    // 0x1e083c: 0xc6360df4  lwc1        $f22, 0xDF4($s1)
    ctx->pc = 0x1e083cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e0840: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e0840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0844: 0x0  nop
    ctx->pc = 0x1e0844u;
    // NOP
    // 0x1e0848: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x1e0848u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e084c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E084Cu;
    {
        const bool branch_taken_0x1e084c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e084c) {
            ctx->pc = 0x1E0858u;
            goto label_1e0858;
        }
    }
    ctx->pc = 0x1E0854u;
    // 0x1e0854: 0xc6360de0  lwc1        $f22, 0xDE0($s1)
    ctx->pc = 0x1e0854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1e0858:
    // 0x1e0858: 0xc077588  jal         func_1DD620
    ctx->pc = 0x1E0858u;
    SET_GPR_U32(ctx, 31, 0x1E0860u);
    ctx->pc = 0x1E085Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0858u;
            // 0x1e085c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD620u;
    if (runtime->hasFunction(0x1DD620u)) {
        auto targetFn = runtime->lookupFunction(0x1DD620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0860u; }
        if (ctx->pc != 0x1E0860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD620_0x1dd620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0860u; }
        if (ctx->pc != 0x1E0860u) { return; }
    }
    ctx->pc = 0x1E0860u;
label_1e0860:
    // 0x1e0860: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0864: 0x504000cc  beql        $v0, $zero, . + 4 + (0xCC << 2)
    ctx->pc = 0x1E0864u;
    {
        const bool branch_taken_0x1e0864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0864) {
            ctx->pc = 0x1E0868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0864u;
            // 0x1e0868: 0xc6210de4  lwc1        $f1, 0xDE4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0B98u;
            goto label_1e0b98;
        }
    }
    ctx->pc = 0x1E086Cu;
    // 0x1e086c: 0xc0772f0  jal         func_1DCBC0
    ctx->pc = 0x1E086Cu;
    SET_GPR_U32(ctx, 31, 0x1E0874u);
    ctx->pc = 0x1E0870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E086Cu;
            // 0x1e0870: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBC0u;
    if (runtime->hasFunction(0x1DCBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0874u; }
        if (ctx->pc != 0x1E0874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBC0_0x1dcbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0874u; }
        if (ctx->pc != 0x1E0874u) { return; }
    }
    ctx->pc = 0x1E0874u;
label_1e0874:
    // 0x1e0874: 0xc0772ec  jal         func_1DCBB0
    ctx->pc = 0x1E0874u;
    SET_GPR_U32(ctx, 31, 0x1E087Cu);
    ctx->pc = 0x1E0878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0874u;
            // 0x1e0878: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB0u;
    if (runtime->hasFunction(0x1DCBB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E087Cu; }
        if (ctx->pc != 0x1E087Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBB0_0x1dcbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E087Cu; }
        if (ctx->pc != 0x1E087Cu) { return; }
    }
    ctx->pc = 0x1E087Cu;
label_1e087c:
    // 0x1e087c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e087cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e0880: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x1E0880u;
    {
        const bool branch_taken_0x1e0880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0880) {
            ctx->pc = 0x1E0B94u;
            goto label_1e0b94;
        }
    }
    ctx->pc = 0x1E0888u;
    // 0x1e0888: 0xc07758c  jal         func_1DD630
    ctx->pc = 0x1E0888u;
    SET_GPR_U32(ctx, 31, 0x1E0890u);
    ctx->pc = 0x1E088Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0888u;
            // 0x1e088c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD630u;
    if (runtime->hasFunction(0x1DD630u)) {
        auto targetFn = runtime->lookupFunction(0x1DD630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0890u; }
        if (ctx->pc != 0x1E0890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD630_0x1dd630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0890u; }
        if (ctx->pc != 0x1E0890u) { return; }
    }
    ctx->pc = 0x1E0890u;
label_1e0890:
    // 0x1e0890: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e0890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1e0894: 0x104000bf  beqz        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x1E0894u;
    {
        const bool branch_taken_0x1e0894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0894) {
            ctx->pc = 0x1E0B94u;
            goto label_1e0b94;
        }
    }
    ctx->pc = 0x1E089Cu;
    // 0x1e089c: 0xc0775d8  jal         func_1DD760
    ctx->pc = 0x1E089Cu;
    SET_GPR_U32(ctx, 31, 0x1E08A4u);
    ctx->pc = 0x1E08A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E089Cu;
            // 0x1e08a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E08A4u; }
        if (ctx->pc != 0x1E08A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E08A4u; }
        if (ctx->pc != 0x1E08A4u) { return; }
    }
    ctx->pc = 0x1E08A4u;
label_1e08a4:
    // 0x1e08a4: 0xc077578  jal         func_1DD5E0
    ctx->pc = 0x1E08A4u;
    SET_GPR_U32(ctx, 31, 0x1E08ACu);
    ctx->pc = 0x1E08A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E08A4u;
            // 0x1e08a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5E0u;
    if (runtime->hasFunction(0x1DD5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E08ACu; }
        if (ctx->pc != 0x1E08ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5E0_0x1dd5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E08ACu; }
        if (ctx->pc != 0x1E08ACu) { return; }
    }
    ctx->pc = 0x1E08ACu;
label_1e08ac:
    // 0x1e08ac: 0x80430003  lb          $v1, 0x3($v0)
    ctx->pc = 0x1e08acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1e08b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e08b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e08b4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1e08b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e08b8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1e08b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1e08bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1e08bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1e08c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e08c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e08c4: 0x0  nop
    ctx->pc = 0x1e08c4u;
    // NOP
    // 0x1e08c8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1e08c8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x1e08cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e08d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e08d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e08d4: 0x0  nop
    ctx->pc = 0x1e08d4u;
    // NOP
    // 0x1e08d8: 0x0  nop
    ctx->pc = 0x1e08d8u;
    // NOP
    // 0x1e08dc: 0xc0783bc  jal         func_1E0EF0
    ctx->pc = 0x1E08DCu;
    SET_GPR_U32(ctx, 31, 0x1E08E4u);
    ctx->pc = 0x1E08E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E08DCu;
            // 0x1e08e0: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EF0u;
    if (runtime->hasFunction(0x1E0EF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E08E4u; }
        if (ctx->pc != 0x1E08E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EF0_0x1e0ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E08E4u; }
        if (ctx->pc != 0x1E08E4u) { return; }
    }
    ctx->pc = 0x1E08E4u;
label_1e08e4:
    // 0x1e08e4: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x1e08e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x1e08e8: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1e08e8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1e08ec: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x1e08ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x1e08f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e08f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e08f4: 0x0  nop
    ctx->pc = 0x1e08f4u;
    // NOP
    // 0x1e08f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e08f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e08fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e08fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e0900: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1e0900u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e0904: 0xc04f2b8  jal         func_13CAE0
    ctx->pc = 0x1E0904u;
    SET_GPR_U32(ctx, 31, 0x1E090Cu);
    ctx->pc = 0x1E0908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0904u;
            // 0x1e0908: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E090Cu; }
        if (ctx->pc != 0x1E090Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E090Cu; }
        if (ctx->pc != 0x1E090Cu) { return; }
    }
    ctx->pc = 0x1E090Cu;
label_1e090c:
    // 0x1e090c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e090cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0914: 0x0  nop
    ctx->pc = 0x1e0914u;
    // NOP
    // 0x1e0918: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1e0918u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e091c: 0x45020037  bc1fl       . + 4 + (0x37 << 2)
    ctx->pc = 0x1E091Cu;
    {
        const bool branch_taken_0x1e091c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e091c) {
            ctx->pc = 0x1E0920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E091Cu;
            // 0x1e0920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E09FCu;
            goto label_1e09fc;
        }
    }
    ctx->pc = 0x1E0924u;
    // 0x1e0924: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1e0924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1e0928: 0xc0783b8  jal         func_1E0EE0
    ctx->pc = 0x1E0928u;
    SET_GPR_U32(ctx, 31, 0x1E0930u);
    ctx->pc = 0x1E092Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0928u;
            // 0x1e092c: 0x26240ab0  addiu       $a0, $s1, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EE0u;
    if (runtime->hasFunction(0x1E0EE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0930u; }
        if (ctx->pc != 0x1E0930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EE0_0x1e0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0930u; }
        if (ctx->pc != 0x1E0930u) { return; }
    }
    ctx->pc = 0x1E0930u;
label_1e0930:
    // 0x1e0930: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e0930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0934: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x1e0934u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x1e0938: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e0938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e093c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e093cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0940: 0x4503008d  bc1tl       . + 4 + (0x8D << 2)
    ctx->pc = 0x1E0940u;
    {
        const bool branch_taken_0x1e0940 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0940) {
            ctx->pc = 0x1E0944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0940u;
            // 0x1e0944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0B78u;
            goto label_1e0b78;
        }
    }
    ctx->pc = 0x1E0948u;
    // 0x1e0948: 0xc0783b4  jal         func_1E0ED0
    ctx->pc = 0x1E0948u;
    SET_GPR_U32(ctx, 31, 0x1E0950u);
    ctx->pc = 0x1E094Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0948u;
            // 0x1e094c: 0x26240ab0  addiu       $a0, $s1, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0ED0u;
    if (runtime->hasFunction(0x1E0ED0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0950u; }
        if (ctx->pc != 0x1E0950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0ED0_0x1e0ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0950u; }
        if (ctx->pc != 0x1E0950u) { return; }
    }
    ctx->pc = 0x1E0950u;
label_1e0950:
    // 0x1e0950: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e0950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0954: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x1e0954u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x1e0958: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e0958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e095c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e095cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0960: 0x45000084  bc1f        . + 4 + (0x84 << 2)
    ctx->pc = 0x1E0960u;
    {
        const bool branch_taken_0x1e0960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0960) {
            ctx->pc = 0x1E0B74u;
            goto label_1e0b74;
        }
    }
    ctx->pc = 0x1E0968u;
    // 0x1e0968: 0xc0783b8  jal         func_1E0EE0
    ctx->pc = 0x1E0968u;
    SET_GPR_U32(ctx, 31, 0x1E0970u);
    ctx->pc = 0x1E096Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0968u;
            // 0x1e096c: 0x26240ab0  addiu       $a0, $s1, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EE0u;
    if (runtime->hasFunction(0x1E0EE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0970u; }
        if (ctx->pc != 0x1E0970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EE0_0x1e0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0970u; }
        if (ctx->pc != 0x1E0970u) { return; }
    }
    ctx->pc = 0x1E0970u;
label_1e0970:
    // 0x1e0970: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e0970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0974: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x1e0974u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x1e0978: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e0978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e097c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e097cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0980: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0980u;
    {
        const bool branch_taken_0x1e0980 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0980u;
            // 0x1e0984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0980) {
            ctx->pc = 0x1E098Cu;
            goto label_1e098c;
        }
    }
    ctx->pc = 0x1E0988u;
    // 0x1e0988: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e098c:
    // 0x1e098c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E098Cu;
    {
        const bool branch_taken_0x1e098c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e098c) {
            ctx->pc = 0x1E0990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E098Cu;
            // 0x1e0990: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E09A0u;
            goto label_1e09a0;
        }
    }
    ctx->pc = 0x1E0994u;
    // 0x1e0994: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0998: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0998u;
    {
        const bool branch_taken_0x1e0998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E099Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0998u;
            // 0x1e099c: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0998) {
            ctx->pc = 0x1E09B8u;
            goto label_1e09b8;
        }
    }
    ctx->pc = 0x1E09A0u;
label_1e09a0:
    // 0x1e09a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e09a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e09a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e09a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e09a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e09a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e09ac: 0x0  nop
    ctx->pc = 0x1e09acu;
    // NOP
    // 0x1e09b0: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x1e09b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1e09b4: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1e09b4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1e09b8:
    // 0x1e09b8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e09b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e09bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e09bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1e09c0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e09c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e09c4: 0x3c024436  lui         $v0, 0x4436
    ctx->pc = 0x1e09c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17462 << 16));
    // 0x1e09c8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1e09c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e09cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e09ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e09d0: 0x0  nop
    ctx->pc = 0x1e09d0u;
    // NOP
    // 0x1e09d4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1e09d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1e09d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e09d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e09dc: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x1e09dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x1e09e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e09e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e09e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e09e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e09e8: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x1e09e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x1e09ec: 0xc0783b4  jal         func_1E0ED0
    ctx->pc = 0x1E09ECu;
    SET_GPR_U32(ctx, 31, 0x1E09F4u);
    ctx->pc = 0x1E09F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E09ECu;
            // 0x1e09f0: 0x26240ab0  addiu       $a0, $s1, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0ED0u;
    if (runtime->hasFunction(0x1E0ED0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09F4u; }
        if (ctx->pc != 0x1E09F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0ED0_0x1e0ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09F4u; }
        if (ctx->pc != 0x1E09F4u) { return; }
    }
    ctx->pc = 0x1E09F4u;
label_1e09f4:
    // 0x1e09f4: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1E09F4u;
    {
        const bool branch_taken_0x1e09f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E09F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E09F4u;
            // 0x1e09f8: 0xac520004  sw          $s2, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e09f4) {
            ctx->pc = 0x1E0B74u;
            goto label_1e0b74;
        }
    }
    ctx->pc = 0x1E09FCu;
label_1e09fc:
    // 0x1e09fc: 0xc0783b0  jal         func_1E0EC0
    ctx->pc = 0x1E09FCu;
    SET_GPR_U32(ctx, 31, 0x1E0A04u);
    ctx->pc = 0x1E0EC0u;
    if (runtime->hasFunction(0x1E0EC0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A04u; }
        if (ctx->pc != 0x1E0A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EC0_0x1e0ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A04u; }
        if (ctx->pc != 0x1E0A04u) { return; }
    }
    ctx->pc = 0x1E0A04u;
label_1e0a04:
    // 0x1e0a04: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1e0a04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e0a08: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e0a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e0a0c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e0a0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1e0a10: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x1E0A10u;
    SET_GPR_U32(ctx, 31, 0x1E0A18u);
    ctx->pc = 0x1E0A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A10u;
            // 0x1e0a14: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A18u; }
        if (ctx->pc != 0x1E0A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A18u; }
        if (ctx->pc != 0x1E0A18u) { return; }
    }
    ctx->pc = 0x1E0A18u;
label_1e0a18:
    // 0x1e0a18: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e0a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e0a1c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1e0a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e0a20: 0xc04cca0  jal         func_133280
    ctx->pc = 0x1E0A20u;
    SET_GPR_U32(ctx, 31, 0x1E0A28u);
    ctx->pc = 0x1E0A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A20u;
            // 0x1e0a24: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A28u; }
        if (ctx->pc != 0x1E0A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A28u; }
        if (ctx->pc != 0x1E0A28u) { return; }
    }
    ctx->pc = 0x1E0A28u;
label_1e0a28:
    // 0x1e0a28: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x1e0a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e0a2c: 0xc0783ac  jal         func_1E0EB0
    ctx->pc = 0x1E0A2Cu;
    SET_GPR_U32(ctx, 31, 0x1E0A34u);
    ctx->pc = 0x1E0A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A2Cu;
            // 0x1e0a30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A34u; }
        if (ctx->pc != 0x1E0A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A34u; }
        if (ctx->pc != 0x1E0A34u) { return; }
    }
    ctx->pc = 0x1E0A34u;
label_1e0a34:
    // 0x1e0a34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e0a34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e0a38: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e0a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e0a3c: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x1e0a3cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x1e0a40: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x1E0A40u;
    SET_GPR_U32(ctx, 31, 0x1E0A48u);
    ctx->pc = 0x1E0A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A40u;
            // 0x1e0a44: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A48u; }
        if (ctx->pc != 0x1E0A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A48u; }
        if (ctx->pc != 0x1E0A48u) { return; }
    }
    ctx->pc = 0x1E0A48u;
label_1e0a48:
    // 0x1e0a48: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e0a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e0a4c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1e0a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e0a50: 0xc04cca0  jal         func_133280
    ctx->pc = 0x1E0A50u;
    SET_GPR_U32(ctx, 31, 0x1E0A58u);
    ctx->pc = 0x1E0A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A50u;
            // 0x1e0a54: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A58u; }
        if (ctx->pc != 0x1E0A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A58u; }
        if (ctx->pc != 0x1E0A58u) { return; }
    }
    ctx->pc = 0x1E0A58u;
label_1e0a58:
    // 0x1e0a58: 0xc049514  jal         func_125450
    ctx->pc = 0x1E0A58u;
    SET_GPR_U32(ctx, 31, 0x1E0A60u);
    ctx->pc = 0x1E0A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A58u;
            // 0x1e0a5c: 0xc62c0dc0  lwc1        $f12, 0xDC0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A60u; }
        if (ctx->pc != 0x1E0A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A60u; }
        if (ctx->pc != 0x1E0A60u) { return; }
    }
    ctx->pc = 0x1E0A60u;
label_1e0a60:
    // 0x1e0a60: 0xc0474b6  jal         func_11D2D8
    ctx->pc = 0x1E0A60u;
    SET_GPR_U32(ctx, 31, 0x1E0A68u);
    ctx->pc = 0x1E0A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A60u;
            // 0x1e0a64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A68u; }
        if (ctx->pc != 0x1E0A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A68u; }
        if (ctx->pc != 0x1E0A68u) { return; }
    }
    ctx->pc = 0x1E0A68u;
label_1e0a68:
    // 0x1e0a68: 0xc62c0dec  lwc1        $f12, 0xDEC($s1)
    ctx->pc = 0x1e0a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0a6c: 0xc049514  jal         func_125450
    ctx->pc = 0x1E0A6Cu;
    SET_GPR_U32(ctx, 31, 0x1E0A74u);
    ctx->pc = 0x1E0A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A6Cu;
            // 0x1e0a70: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A74u; }
        if (ctx->pc != 0x1E0A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A74u; }
        if (ctx->pc != 0x1E0A74u) { return; }
    }
    ctx->pc = 0x1E0A74u;
label_1e0a74:
    // 0x1e0a74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e0a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a78: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x1E0A78u;
    SET_GPR_U32(ctx, 31, 0x1E0A80u);
    ctx->pc = 0x1E0A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A78u;
            // 0x1e0a7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A80u; }
        if (ctx->pc != 0x1E0A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A80u; }
        if (ctx->pc != 0x1E0A80u) { return; }
    }
    ctx->pc = 0x1E0A80u;
label_1e0a80:
    // 0x1e0a80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e0a80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a84: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e0a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e0a88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0a8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e0a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0a94: 0x0  nop
    ctx->pc = 0x1e0a94u;
    // NOP
    // 0x1e0a98: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1e0a98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1e0a9c: 0xc049514  jal         func_125450
    ctx->pc = 0x1E0A9Cu;
    SET_GPR_U32(ctx, 31, 0x1E0AA4u);
    ctx->pc = 0x1E0AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A9Cu;
            // 0x1e0aa0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AA4u; }
        if (ctx->pc != 0x1E0AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AA4u; }
        if (ctx->pc != 0x1E0AA4u) { return; }
    }
    ctx->pc = 0x1E0AA4u;
label_1e0aa4:
    // 0x1e0aa4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e0aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0aa8: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x1E0AA8u;
    SET_GPR_U32(ctx, 31, 0x1E0AB0u);
    ctx->pc = 0x1E0AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0AA8u;
            // 0x1e0aac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AB0u; }
        if (ctx->pc != 0x1E0AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AB0u; }
        if (ctx->pc != 0x1E0AB0u) { return; }
    }
    ctx->pc = 0x1E0AB0u;
label_1e0ab0:
    // 0x1e0ab0: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x1e0ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x1e0ab4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e0ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ab8: 0xc04960a  jal         func_125828
    ctx->pc = 0x1E0AB8u;
    SET_GPR_U32(ctx, 31, 0x1E0AC0u);
    ctx->pc = 0x1E0ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0AB8u;
            // 0x1e0abc: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AC0u; }
        if (ctx->pc != 0x1E0AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AC0u; }
        if (ctx->pc != 0x1E0AC0u) { return; }
    }
    ctx->pc = 0x1E0AC0u;
label_1e0ac0:
    // 0x1e0ac0: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x1e0ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0ac4: 0xc049514  jal         func_125450
    ctx->pc = 0x1E0AC4u;
    SET_GPR_U32(ctx, 31, 0x1E0ACCu);
    ctx->pc = 0x1E0AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0AC4u;
            // 0x1e0ac8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0ACCu; }
        if (ctx->pc != 0x1E0ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0ACCu; }
        if (ctx->pc != 0x1E0ACCu) { return; }
    }
    ctx->pc = 0x1E0ACCu;
label_1e0acc:
    // 0x1e0acc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e0accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ad0: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x1E0AD0u;
    SET_GPR_U32(ctx, 31, 0x1E0AD8u);
    ctx->pc = 0x1E0AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0AD0u;
            // 0x1e0ad4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AD8u; }
        if (ctx->pc != 0x1E0AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AD8u; }
        if (ctx->pc != 0x1E0AD8u) { return; }
    }
    ctx->pc = 0x1E0AD8u;
label_1e0ad8:
    // 0x1e0ad8: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x1E0AD8u;
    SET_GPR_U32(ctx, 31, 0x1E0AE0u);
    ctx->pc = 0x1E0ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0AD8u;
            // 0x1e0adc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AE0u; }
        if (ctx->pc != 0x1E0AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AE0u; }
        if (ctx->pc != 0x1E0AE0u) { return; }
    }
    ctx->pc = 0x1E0AE0u;
label_1e0ae0:
    // 0x1e0ae0: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1e0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1e0ae4: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x1e0ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1e0ae8: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x1e0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x1e0aec: 0x344370a4  ori         $v1, $v0, 0x70A4
    ctx->pc = 0x1e0aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x1e0af0: 0x4600a900  add.s       $f4, $f21, $f0
    ctx->pc = 0x1e0af0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1e0af4: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1e0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1e0af8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1e0af8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e0afc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e0afcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0b00: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1e0b00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e0b04: 0x0  nop
    ctx->pc = 0x1e0b04u;
    // NOP
    // 0x1e0b08: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1e0b08u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1e0b0c: 0x4614185d  msub.s      $f1, $f3, $f20
    ctx->pc = 0x1e0b0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[20]));
    // 0x1e0b10: 0x46012542  mul.s       $f21, $f4, $f1
    ctx->pc = 0x1e0b10u;
    ctx->f[21] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1e0b14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0b18: 0x0  nop
    ctx->pc = 0x1e0b18u;
    // NOP
    // 0x1e0b1c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x1e0b1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0b20: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0B20u;
    {
        const bool branch_taken_0x1e0b20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0b20) {
            ctx->pc = 0x1E0B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B20u;
            // 0x1e0b24: 0x3c02be80  lui         $v0, 0xBE80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48768 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0B30u;
            goto label_1e0b30;
        }
    }
    ctx->pc = 0x1E0B28u;
    // 0x1e0b28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0B28u;
    {
        const bool branch_taken_0x1e0b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B28u;
            // 0x1e0b2c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b28) {
            ctx->pc = 0x1E0B48u;
            goto label_1e0b48;
        }
    }
    ctx->pc = 0x1E0B30u;
label_1e0b30:
    // 0x1e0b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0b34: 0x0  nop
    ctx->pc = 0x1e0b34u;
    // NOP
    // 0x1e0b38: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1e0b38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0b3c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0B3Cu;
    {
        const bool branch_taken_0x1e0b3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0b3c) {
            ctx->pc = 0x1E0B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B3Cu;
            // 0x1e0b40: 0x3c02460e  lui         $v0, 0x460E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17934 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0B4Cu;
            goto label_1e0b4c;
        }
    }
    ctx->pc = 0x1E0B44u;
    // 0x1e0b44: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1e0b44u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1e0b48:
    // 0x1e0b48: 0x3c02460e  lui         $v0, 0x460E
    ctx->pc = 0x1e0b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17934 << 16));
label_1e0b4c:
    // 0x1e0b4c: 0x34423800  ori         $v0, $v0, 0x3800
    ctx->pc = 0x1e0b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14336);
    // 0x1e0b50: 0xc6200dc0  lwc1        $f0, 0xDC0($s1)
    ctx->pc = 0x1e0b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0b54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0b58: 0x0  nop
    ctx->pc = 0x1e0b58u;
    // NOP
    // 0x1e0b5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e0b5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e0b60: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0b60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e0b64: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x1e0b64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x1e0b68: 0xc0783b8  jal         func_1E0EE0
    ctx->pc = 0x1E0B68u;
    SET_GPR_U32(ctx, 31, 0x1E0B70u);
    ctx->pc = 0x1E0B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B68u;
            // 0x1e0b6c: 0x26240ab0  addiu       $a0, $s1, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EE0u;
    if (runtime->hasFunction(0x1E0EE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B70u; }
        if (ctx->pc != 0x1E0B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EE0_0x1e0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B70u; }
        if (ctx->pc != 0x1E0B70u) { return; }
    }
    ctx->pc = 0x1E0B70u;
label_1e0b70:
    // 0x1e0b70: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x1e0b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
label_1e0b74:
    // 0x1e0b74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e0b78:
    // 0x1e0b78: 0xc0783a8  jal         func_1E0EA0
    ctx->pc = 0x1E0B78u;
    SET_GPR_U32(ctx, 31, 0x1E0B80u);
    ctx->pc = 0x1E0EA0u;
    if (runtime->hasFunction(0x1E0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B80u; }
        if (ctx->pc != 0x1E0B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EA0_0x1e0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B80u; }
        if (ctx->pc != 0x1E0B80u) { return; }
    }
    ctx->pc = 0x1E0B80u;
label_1e0b80:
    // 0x1e0b80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0B80u;
    {
        const bool branch_taken_0x1e0b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0b80) {
            ctx->pc = 0x1E0B94u;
            goto label_1e0b94;
        }
    }
    ctx->pc = 0x1E0B88u;
    // 0x1e0b88: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1e0b88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1e0b8c: 0xc0783a4  jal         func_1E0E90
    ctx->pc = 0x1E0B8Cu;
    SET_GPR_U32(ctx, 31, 0x1E0B94u);
    ctx->pc = 0x1E0B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B8Cu;
            // 0x1e0b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0E90u;
    if (runtime->hasFunction(0x1E0E90u)) {
        auto targetFn = runtime->lookupFunction(0x1E0E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B94u; }
        if (ctx->pc != 0x1E0B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0E90_0x1e0e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B94u; }
        if (ctx->pc != 0x1E0B94u) { return; }
    }
    ctx->pc = 0x1E0B94u;
label_1e0b94:
    // 0x1e0b94: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x1e0b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e0b98:
    // 0x1e0b98: 0x46160836  c.le.s      $f1, $f22
    ctx->pc = 0x1e0b98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0b9c: 0x45030025  bc1tl       . + 4 + (0x25 << 2)
    ctx->pc = 0x1E0B9Cu;
    {
        const bool branch_taken_0x1e0b9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0b9c) {
            ctx->pc = 0x1E0BA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B9Cu;
            // 0x1e0ba0: 0xc6200ddc  lwc1        $f0, 0xDDC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0C34u;
            goto label_1e0c34;
        }
    }
    ctx->pc = 0x1E0BA4u;
    // 0x1e0ba4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e0ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1e0ba8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e0ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1e0bac: 0xc461a770  lwc1        $f1, -0x5890($v1)
    ctx->pc = 0x1e0bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294944624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0bb0: 0x8e240d70  lw          $a0, 0xD70($s1)
    ctx->pc = 0x1e0bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
    // 0x1e0bb4: 0xc440a774  lwc1        $f0, -0x588C($v0)
    ctx->pc = 0x1e0bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0bb8: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x1e0bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e0bbc: 0xc0bd780  jal         func_2F5E00
    ctx->pc = 0x1E0BBCu;
    SET_GPR_U32(ctx, 31, 0x1E0BC4u);
    ctx->pc = 0x1E0BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0BBCu;
            // 0x1e0bc0: 0xe7a000bc  swc1        $f0, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BC4u; }
        if (ctx->pc != 0x1E0BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BC4u; }
        if (ctx->pc != 0x1E0BC4u) { return; }
    }
    ctx->pc = 0x1E0BC4u;
label_1e0bc4:
    // 0x1e0bc4: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x1e0bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x1e0bc8: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x1e0bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0bcc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e0bd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0bd4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1e0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1e0bd8: 0x4601b041  sub.s       $f1, $f22, $f1
    ctx->pc = 0x1e0bd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x1e0bdc: 0xc44300b8  lwc1        $f3, 0xB8($v0)
    ctx->pc = 0x1e0bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0be0: 0xc6200de4  lwc1        $f0, 0xDE4($s1)
    ctx->pc = 0x1e0be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0be4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1e0be4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e0be8: 0x0  nop
    ctx->pc = 0x1e0be8u;
    // NOP
    // 0x1e0bec: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1e0becu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1e0bf0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1e0bf0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e0bf4: 0x4601b81c  madd.s      $f0, $f23, $f1
    ctx->pc = 0x1e0bf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[23], ctx->f[1]));
    // 0x1e0bf8: 0xe6200de4  swc1        $f0, 0xDE4($s1)
    ctx->pc = 0x1e0bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
    // 0x1e0bfc: 0xc6210de8  lwc1        $f1, 0xDE8($s1)
    ctx->pc = 0x1e0bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0c00: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1e0c00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0c04: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0C04u;
    {
        const bool branch_taken_0x1e0c04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0c04) {
            ctx->pc = 0x1E0C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C04u;
            // 0x1e0c08: 0xc6200de4  lwc1        $f0, 0xDE4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0C20u;
            goto label_1e0c20;
        }
    }
    ctx->pc = 0x1E0C0Cu;
    // 0x1e0c0c: 0xc6200de4  lwc1        $f0, 0xDE4($s1)
    ctx->pc = 0x1e0c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0c10: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1e0c10u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e0c14: 0x4601b81c  madd.s      $f0, $f23, $f1
    ctx->pc = 0x1e0c14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[23], ctx->f[1]));
    // 0x1e0c18: 0xe6200de4  swc1        $f0, 0xDE4($s1)
    ctx->pc = 0x1e0c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
    // 0x1e0c1c: 0xc6200de4  lwc1        $f0, 0xDE4($s1)
    ctx->pc = 0x1e0c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e0c20:
    // 0x1e0c20: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1e0c20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0c24: 0x45020036  bc1fl       . + 4 + (0x36 << 2)
    ctx->pc = 0x1E0C24u;
    {
        const bool branch_taken_0x1e0c24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0c24) {
            ctx->pc = 0x1E0C28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C24u;
            // 0x1e0c28: 0xc6220de4  lwc1        $f2, 0xDE4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0D00u;
            goto label_1e0d00;
        }
    }
    ctx->pc = 0x1E0C2Cu;
    // 0x1e0c2c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1E0C2Cu;
    {
        const bool branch_taken_0x1e0c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C2Cu;
            // 0x1e0c30: 0xe6360de4  swc1        $f22, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c2c) {
            ctx->pc = 0x1E0CFCu;
            goto label_1e0cfc;
        }
    }
    ctx->pc = 0x1E0C34u;
label_1e0c34:
    // 0x1e0c34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e0c34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0c38: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0C38u;
    {
        const bool branch_taken_0x1e0c38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0c38) {
            ctx->pc = 0x1E0C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C38u;
            // 0x1e0c3c: 0x8e230db0  lw          $v1, 0xDB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0C48u;
            goto label_1e0c48;
        }
    }
    ctx->pc = 0x1E0C40u;
    // 0x1e0c40: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1E0C40u;
    {
        const bool branch_taken_0x1e0c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C40u;
            // 0x1e0c44: 0xe6200de4  swc1        $f0, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c40) {
            ctx->pc = 0x1E0CFCu;
            goto label_1e0cfc;
        }
    }
    ctx->pc = 0x1E0C48u;
label_1e0c48:
    // 0x1e0c48: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e0c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e0c4c: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E0C4Cu;
    {
        const bool branch_taken_0x1e0c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e0c4c) {
            ctx->pc = 0x1E0C50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C4Cu;
            // 0x1e0c50: 0xc6210de4  lwc1        $f1, 0xDE4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0C94u;
            goto label_1e0c94;
        }
    }
    ctx->pc = 0x1E0C54u;
    // 0x1e0c54: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1e0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1e0c58: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E0C58u;
    {
        const bool branch_taken_0x1e0c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e0c58) {
            ctx->pc = 0x1E0C90u;
            goto label_1e0c90;
        }
    }
    ctx->pc = 0x1E0C60u;
    // 0x1e0c60: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1e0c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e0c64: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E0C64u;
    {
        const bool branch_taken_0x1e0c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e0c64) {
            ctx->pc = 0x1E0C90u;
            goto label_1e0c90;
        }
    }
    ctx->pc = 0x1E0C6Cu;
    // 0x1e0c6c: 0x8e220d70  lw          $v0, 0xD70($s1)
    ctx->pc = 0x1e0c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
    // 0x1e0c70: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x1e0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x1e0c74: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e0c74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e0c78: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E0C78u;
    {
        const bool branch_taken_0x1e0c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0c78) {
            ctx->pc = 0x1E0C7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C78u;
            // 0x1e0c7c: 0xc6210de4  lwc1        $f1, 0xDE4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0CC0u;
            goto label_1e0cc0;
        }
    }
    ctx->pc = 0x1E0C80u;
    // 0x1e0c80: 0x8e220d60  lw          $v0, 0xD60($s1)
    ctx->pc = 0x1e0c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
    // 0x1e0c84: 0x80420005  lb          $v0, 0x5($v0)
    ctx->pc = 0x1e0c84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x1e0c88: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E0C88u;
    {
        const bool branch_taken_0x1e0c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0c88) {
            ctx->pc = 0x1E0CBCu;
            goto label_1e0cbc;
        }
    }
    ctx->pc = 0x1E0C90u;
label_1e0c90:
    // 0x1e0c90: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x1e0c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e0c94:
    // 0x1e0c94: 0xc6220de8  lwc1        $f2, 0xDE8($s1)
    ctx->pc = 0x1e0c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0c98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e0c98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0c9c: 0x0  nop
    ctx->pc = 0x1e0c9cu;
    // NOP
    // 0x1e0ca0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e0ca0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e0ca4: 0x4617105c  madd.s      $f1, $f2, $f23
    ctx->pc = 0x1e0ca4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[23]));
    // 0x1e0ca8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e0ca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0cac: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1E0CACu;
    {
        const bool branch_taken_0x1e0cac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0CACu;
            // 0x1e0cb0: 0xe6210de4  swc1        $f1, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cac) {
            ctx->pc = 0x1E0CFCu;
            goto label_1e0cfc;
        }
    }
    ctx->pc = 0x1E0CB4u;
    // 0x1e0cb4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1E0CB4u;
    {
        const bool branch_taken_0x1e0cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0CB4u;
            // 0x1e0cb8: 0xe6200de4  swc1        $f0, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cb4) {
            ctx->pc = 0x1E0CFCu;
            goto label_1e0cfc;
        }
    }
    ctx->pc = 0x1E0CBCu;
label_1e0cbc:
    // 0x1e0cbc: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x1e0cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e0cc0:
    // 0x1e0cc0: 0xc6220de8  lwc1        $f2, 0xDE8($s1)
    ctx->pc = 0x1e0cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0cc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e0cc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0cc8: 0x0  nop
    ctx->pc = 0x1e0cc8u;
    // NOP
    // 0x1e0ccc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e0cccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e0cd0: 0x4617105c  madd.s      $f1, $f2, $f23
    ctx->pc = 0x1e0cd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[23]));
    // 0x1e0cd4: 0x46160836  c.le.s      $f1, $f22
    ctx->pc = 0x1e0cd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0cd8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0CD8u;
    {
        const bool branch_taken_0x1e0cd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0CD8u;
            // 0x1e0cdc: 0xe6210de4  swc1        $f1, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cd8) {
            ctx->pc = 0x1E0CE8u;
            goto label_1e0ce8;
        }
    }
    ctx->pc = 0x1E0CE0u;
    // 0x1e0ce0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0CE0u;
    {
        const bool branch_taken_0x1e0ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0CE0u;
            // 0x1e0ce4: 0xe6360de4  swc1        $f22, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ce0) {
            ctx->pc = 0x1E0CFCu;
            goto label_1e0cfc;
        }
    }
    ctx->pc = 0x1E0CE8u;
label_1e0ce8:
    // 0x1e0ce8: 0xc6200ddc  lwc1        $f0, 0xDDC($s1)
    ctx->pc = 0x1e0ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0cec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e0cecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0cf0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0CF0u;
    {
        const bool branch_taken_0x1e0cf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0cf0) {
            ctx->pc = 0x1E0CFCu;
            goto label_1e0cfc;
        }
    }
    ctx->pc = 0x1E0CF8u;
    // 0x1e0cf8: 0xe6200de4  swc1        $f0, 0xDE4($s1)
    ctx->pc = 0x1e0cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
label_1e0cfc:
    // 0x1e0cfc: 0xc6220de4  lwc1        $f2, 0xDE4($s1)
    ctx->pc = 0x1e0cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e0d00:
    // 0x1e0d00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e0d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0d04: 0xc6210de0  lwc1        $f1, 0xDE0($s1)
    ctx->pc = 0x1e0d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0d08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0d0c: 0x0  nop
    ctx->pc = 0x1e0d0cu;
    // NOP
    // 0x1e0d10: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1e0d10u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x1e0d14: 0x0  nop
    ctx->pc = 0x1e0d14u;
    // NOP
    // 0x1e0d18: 0x0  nop
    ctx->pc = 0x1e0d18u;
    // NOP
    // 0x1e0d1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e0d1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0d20: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0D20u;
    {
        const bool branch_taken_0x1e0d20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0d20) {
            ctx->pc = 0x1E0D24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D20u;
            // 0x1e0d24: 0xe6210dec  swc1        $f1, 0xDEC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3564), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0D30u;
            goto label_1e0d30;
        }
    }
    ctx->pc = 0x1E0D28u;
    // 0x1e0d28: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1e0d28u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1e0d2c: 0xe6210dec  swc1        $f1, 0xDEC($s1)
    ctx->pc = 0x1e0d2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3564), bits); }
label_1e0d30:
    // 0x1e0d30: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1e0d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e0d34: 0xc62e0de4  lwc1        $f14, 0xDE4($s1)
    ctx->pc = 0x1e0d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e0d38: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e0d38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e0d3c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x1E0D3Cu;
    SET_GPR_U32(ctx, 31, 0x1E0D44u);
    ctx->pc = 0x1E0D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D3Cu;
            // 0x1e0d40: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D44u; }
        if (ctx->pc != 0x1E0D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D44u; }
        if (ctx->pc != 0x1E0D44u) { return; }
    }
    ctx->pc = 0x1E0D44u;
label_1e0d44:
    // 0x1e0d44: 0x26240310  addiu       $a0, $s1, 0x310
    ctx->pc = 0x1e0d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x1e0d48: 0x262507e0  addiu       $a1, $s1, 0x7E0
    ctx->pc = 0x1e0d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
    // 0x1e0d4c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x1E0D4Cu;
    SET_GPR_U32(ctx, 31, 0x1E0D54u);
    ctx->pc = 0x1E0D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D4Cu;
            // 0x1e0d50: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D54u; }
        if (ctx->pc != 0x1E0D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D54u; }
        if (ctx->pc != 0x1E0D54u) { return; }
    }
    ctx->pc = 0x1E0D54u;
label_1e0d54:
    // 0x1e0d54: 0xc62c0dd8  lwc1        $f12, 0xDD8($s1)
    ctx->pc = 0x1e0d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0d58: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1e0d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e0d5c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1e0d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e0d60: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x1E0D60u;
    SET_GPR_U32(ctx, 31, 0x1E0D68u);
    ctx->pc = 0x1E0D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D60u;
            // 0x1e0d64: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D68u; }
        if (ctx->pc != 0x1E0D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D68u; }
        if (ctx->pc != 0x1E0D68u) { return; }
    }
    ctx->pc = 0x1E0D68u;
label_1e0d68:
    // 0x1e0d68: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1e0d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e0d6c: 0x262507e0  addiu       $a1, $s1, 0x7E0
    ctx->pc = 0x1e0d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
    // 0x1e0d70: 0xc04cca0  jal         func_133280
    ctx->pc = 0x1E0D70u;
    SET_GPR_U32(ctx, 31, 0x1E0D78u);
    ctx->pc = 0x1E0D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D70u;
            // 0x1e0d74: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D78u; }
        if (ctx->pc != 0x1E0D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D78u; }
        if (ctx->pc != 0x1E0D78u) { return; }
    }
    ctx->pc = 0x1E0D78u;
label_1e0d78:
    // 0x1e0d78: 0x26240310  addiu       $a0, $s1, 0x310
    ctx->pc = 0x1e0d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x1e0d7c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1e0d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e0d80: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x1E0D80u;
    SET_GPR_U32(ctx, 31, 0x1E0D88u);
    ctx->pc = 0x1E0D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D80u;
            // 0x1e0d84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D88u; }
        if (ctx->pc != 0x1E0D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D88u; }
        if (ctx->pc != 0x1E0D88u) { return; }
    }
    ctx->pc = 0x1E0D88u;
label_1e0d88:
    // 0x1e0d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d90: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x1E0D90u;
    SET_GPR_U32(ctx, 31, 0x1E0D98u);
    ctx->pc = 0x1E0D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D90u;
            // 0x1e0d94: 0x26260310  addiu       $a2, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D98u; }
        if (ctx->pc != 0x1E0D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D98u; }
        if (ctx->pc != 0x1E0D98u) { return; }
    }
    ctx->pc = 0x1E0D98u;
label_1e0d98:
    // 0x1e0d98: 0x8e220db8  lw          $v0, 0xDB8($s1)
    ctx->pc = 0x1e0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3512)));
label_1e0d9c:
    // 0x1e0d9c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e0d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e0da0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0DA0u;
    {
        const bool branch_taken_0x1e0da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0da0) {
            ctx->pc = 0x1E0DA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0DA0u;
            // 0x1e0da4: 0x8e220db8  lw          $v0, 0xDB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3512)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0DBCu;
            goto label_1e0dbc;
        }
    }
    ctx->pc = 0x1E0DA8u;
    // 0x1e0da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0dac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0db0: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x1E0DB0u;
    SET_GPR_U32(ctx, 31, 0x1E0DB8u);
    ctx->pc = 0x1E0DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0DB0u;
            // 0x1e0db4: 0x262605c0  addiu       $a2, $s1, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DB8u; }
        if (ctx->pc != 0x1E0DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DB8u; }
        if (ctx->pc != 0x1E0DB8u) { return; }
    }
    ctx->pc = 0x1E0DB8u;
label_1e0db8:
    // 0x1e0db8: 0x8e220db8  lw          $v0, 0xDB8($s1)
    ctx->pc = 0x1e0db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3512)));
label_1e0dbc:
    // 0x1e0dbc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1e0dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1e0dc0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0DC0u;
    {
        const bool branch_taken_0x1e0dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0dc0) {
            ctx->pc = 0x1E0DC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0DC0u;
            // 0x1e0dc4: 0x8e220db8  lw          $v0, 0xDB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3512)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0DDCu;
            goto label_1e0ddc;
        }
    }
    ctx->pc = 0x1E0DC8u;
    // 0x1e0dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0dcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0dd0: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x1E0DD0u;
    SET_GPR_U32(ctx, 31, 0x1E0DD8u);
    ctx->pc = 0x1E0DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0DD0u;
            // 0x1e0dd4: 0x26260320  addiu       $a2, $s1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DD8u; }
        if (ctx->pc != 0x1E0DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DD8u; }
        if (ctx->pc != 0x1E0DD8u) { return; }
    }
    ctx->pc = 0x1E0DD8u;
label_1e0dd8:
    // 0x1e0dd8: 0x8e220db8  lw          $v0, 0xDB8($s1)
    ctx->pc = 0x1e0dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3512)));
label_1e0ddc:
    // 0x1e0ddc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e0ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e0de0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0DE0u;
    {
        const bool branch_taken_0x1e0de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0de0) {
            ctx->pc = 0x1E0DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0DE0u;
            // 0x1e0de4: 0x8e220db8  lw          $v0, 0xDB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3512)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0DFCu;
            goto label_1e0dfc;
        }
    }
    ctx->pc = 0x1E0DE8u;
    // 0x1e0de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0dec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0df0: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x1E0DF0u;
    SET_GPR_U32(ctx, 31, 0x1E0DF8u);
    ctx->pc = 0x1E0DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0DF0u;
            // 0x1e0df4: 0x26260330  addiu       $a2, $s1, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DF8u; }
        if (ctx->pc != 0x1E0DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DF8u; }
        if (ctx->pc != 0x1E0DF8u) { return; }
    }
    ctx->pc = 0x1E0DF8u;
label_1e0df8:
    // 0x1e0df8: 0x8e220db8  lw          $v0, 0xDB8($s1)
    ctx->pc = 0x1e0df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3512)));
label_1e0dfc:
    // 0x1e0dfc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1e0dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1e0e00: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1E0E00u;
    {
        const bool branch_taken_0x1e0e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0e00) {
            ctx->pc = 0x1E0E04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E00u;
            // 0x1e0e04: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0E38u;
            goto label_1e0e38;
        }
    }
    ctx->pc = 0x1E0E08u;
    // 0x1e0e08: 0x8e220da0  lw          $v0, 0xDA0($s1)
    ctx->pc = 0x1e0e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
    // 0x1e0e0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0e10: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0E10u;
    {
        const bool branch_taken_0x1e0e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0e10) {
            ctx->pc = 0x1E0E34u;
            goto label_1e0e34;
        }
    }
    ctx->pc = 0x1E0E18u;
    // 0x1e0e18: 0x3c02bd4c  lui         $v0, 0xBD4C
    ctx->pc = 0x1e0e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
    // 0x1e0e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e20: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e0e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1e0e24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e0e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e0e2c: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x1E0E2Cu;
    SET_GPR_U32(ctx, 31, 0x1E0E34u);
    ctx->pc = 0x1E0E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E2Cu;
            // 0x1e0e30: 0x262602e0  addiu       $a2, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E34u; }
        if (ctx->pc != 0x1E0E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E34u; }
        if (ctx->pc != 0x1E0E34u) { return; }
    }
    ctx->pc = 0x1E0E34u;
label_1e0e34:
    // 0x1e0e34: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1e0e34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_1e0e38:
    // 0x1e0e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e3c: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x1E0E3Cu;
    SET_GPR_U32(ctx, 31, 0x1E0E44u);
    ctx->pc = 0x1E0E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E3Cu;
            // 0x1e0e40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E44u; }
        if (ctx->pc != 0x1E0E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E44u; }
        if (ctx->pc != 0x1E0E44u) { return; }
    }
    ctx->pc = 0x1E0E44u;
label_1e0e44:
    // 0x1e0e44: 0x8e230db8  lw          $v1, 0xDB8($s1)
    ctx->pc = 0x1e0e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3512)));
    // 0x1e0e48: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1e0e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1e0e4c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0E4Cu;
    {
        const bool branch_taken_0x1e0e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0e4c) {
            ctx->pc = 0x1E0E50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E4Cu;
            // 0x1e0e50: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0E68u;
            goto label_1e0e68;
        }
    }
    ctx->pc = 0x1E0E54u;
    // 0x1e0e54: 0x26260340  addiu       $a2, $s1, 0x340
    ctx->pc = 0x1e0e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x1e0e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e5c: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x1E0E5Cu;
    SET_GPR_U32(ctx, 31, 0x1E0E64u);
    ctx->pc = 0x1E0E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E5Cu;
            // 0x1e0e60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E64u; }
        if (ctx->pc != 0x1E0E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E64u; }
        if (ctx->pc != 0x1E0E64u) { return; }
    }
    ctx->pc = 0x1E0E64u;
label_1e0e64:
    // 0x1e0e64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e0e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e0e68:
    // 0x1e0e68: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1e0e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1e0e6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e0e6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0e70: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1e0e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e0e74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e0e74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0e78: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1e0e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e0e7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e0e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0e80: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e0e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e0e84: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E84u;
            // 0x1e0e88: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0E8Cu;
    // 0x1e0e8c: 0x0  nop
    ctx->pc = 0x1e0e8cu;
    // NOP
}
