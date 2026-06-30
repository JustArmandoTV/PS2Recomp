#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00135710
// Address: 0x135710 - 0x135a80
void sub_00135710_0x135710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135710_0x135710");
#endif

    switch (ctx->pc) {
        case 0x1357a0u: goto label_1357a0;
        case 0x1357acu: goto label_1357ac;
        case 0x1357b4u: goto label_1357b4;
        case 0x1357d8u: goto label_1357d8;
        case 0x1357e4u: goto label_1357e4;
        case 0x135808u: goto label_135808;
        case 0x135814u: goto label_135814;
        case 0x135838u: goto label_135838;
        case 0x135848u: goto label_135848;
        case 0x135858u: goto label_135858;
        case 0x135864u: goto label_135864;
        case 0x13589cu: goto label_13589c;
        case 0x1358b8u: goto label_1358b8;
        case 0x1358e0u: goto label_1358e0;
        case 0x135908u: goto label_135908;
        case 0x135930u: goto label_135930;
        case 0x135954u: goto label_135954;
        case 0x135970u: goto label_135970;
        case 0x13598cu: goto label_13598c;
        case 0x1359a8u: goto label_1359a8;
        case 0x1359b0u: goto label_1359b0;
        case 0x1359b8u: goto label_1359b8;
        case 0x1359d4u: goto label_1359d4;
        case 0x1359dcu: goto label_1359dc;
        case 0x1359e4u: goto label_1359e4;
        case 0x135a00u: goto label_135a00;
        case 0x135a08u: goto label_135a08;
        case 0x135a10u: goto label_135a10;
        case 0x135a2cu: goto label_135a2c;
        case 0x135a34u: goto label_135a34;
        case 0x135a3cu: goto label_135a3c;
        default: break;
    }

    ctx->pc = 0x135710u;

    // 0x135710: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x135710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x135714: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x135714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x135718: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x135718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x13571c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x13571cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x135720: 0x27be0140  addiu       $fp, $sp, 0x140
    ctx->pc = 0x135720u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x135724: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x135724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x135728: 0x27b701c0  addiu       $s7, $sp, 0x1C0
    ctx->pc = 0x135728u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x13572c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x13572cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x135730: 0x27b600c0  addiu       $s6, $sp, 0xC0
    ctx->pc = 0x135730u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x135734: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x135734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x135738: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x135738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x13573c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13573cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135740: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x135740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x135744: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x135744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x135748: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x135748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13574c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x13574cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x135750: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x135750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x135754: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x135754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135758: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x135758u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x13575c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13575cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x135760: 0x8f8380f0  lw          $v1, -0x7F10($gp)
    ctx->pc = 0x135760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
    // 0x135764: 0x8f8480f4  lw          $a0, -0x7F0C($gp)
    ctx->pc = 0x135764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
    // 0x135768: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x135768u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13576c: 0x86710008  lh          $s1, 0x8($s3)
    ctx->pc = 0x13576cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x135770: 0xc6750084  lwc1        $f21, 0x84($s3)
    ctx->pc = 0x135770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135774: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x135774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x135778: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x135778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13577c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13577cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135780: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x135780u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135784: 0x86550008  lh          $s5, 0x8($s2)
    ctx->pc = 0x135784u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x135788: 0xc6540084  lwc1        $f20, 0x84($s2)
    ctx->pc = 0x135788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13578c: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x13578cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x135790: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x135790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x135794: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x135794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135798: 0xc04e1b0  jal         func_1386C0
    ctx->pc = 0x135798u;
    SET_GPR_U32(ctx, 31, 0x1357A0u);
    ctx->pc = 0x13579Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135798u;
            // 0x13579c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386C0u;
    if (runtime->hasFunction(0x1386C0u)) {
        auto targetFn = runtime->lookupFunction(0x1386C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1357A0u; }
        if (ctx->pc != 0x1357A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001386C0_0x1386c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1357A0u; }
        if (ctx->pc != 0x1357A0u) { return; }
    }
    ctx->pc = 0x1357A0u;
label_1357a0:
    // 0x1357a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1357a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1357a4: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x1357A4u;
    SET_GPR_U32(ctx, 31, 0x1357ACu);
    ctx->pc = 0x1357A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1357A4u;
            // 0x1357a8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1357ACu; }
        if (ctx->pc != 0x1357ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1357ACu; }
        if (ctx->pc != 0x1357ACu) { return; }
    }
    ctx->pc = 0x1357ACu;
label_1357ac:
    // 0x1357ac: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x1357ACu;
    SET_GPR_U32(ctx, 31, 0x1357B4u);
    ctx->pc = 0x1357B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1357ACu;
            // 0x1357b0: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1357B4u; }
        if (ctx->pc != 0x1357B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1357B4u; }
        if (ctx->pc != 0x1357B4u) { return; }
    }
    ctx->pc = 0x1357B4u;
label_1357b4:
    // 0x1357b4: 0x8f8980f8  lw          $t1, -0x7F08($gp)
    ctx->pc = 0x1357b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934776)));
    // 0x1357b8: 0xc78c80fc  lwc1        $f12, -0x7F04($gp)
    ctx->pc = 0x1357b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1357bc: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1357bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1357c0: 0x8f8a80c4  lw          $t2, -0x7F3C($gp)
    ctx->pc = 0x1357c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934724)));
    // 0x1357c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1357c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1357c8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1357c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1357cc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1357ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1357d0: 0xc04d134  jal         func_1344D0
    ctx->pc = 0x1357D0u;
    SET_GPR_U32(ctx, 31, 0x1357D8u);
    ctx->pc = 0x1357D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1357D0u;
            // 0x1357d4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344D0u;
    if (runtime->hasFunction(0x1344D0u)) {
        auto targetFn = runtime->lookupFunction(0x1344D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1357D8u; }
        if (ctx->pc != 0x1357D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001344D0_0x1344d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1357D8u; }
        if (ctx->pc != 0x1357D8u) { return; }
    }
    ctx->pc = 0x1357D8u;
label_1357d8:
    // 0x1357d8: 0xaf8280c4  sw          $v0, -0x7F3C($gp)
    ctx->pc = 0x1357d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934724), GPR_U32(ctx, 2));
    // 0x1357dc: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x1357DCu;
    SET_GPR_U32(ctx, 31, 0x1357E4u);
    ctx->pc = 0x1357E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1357DCu;
            // 0x1357e0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1357E4u; }
        if (ctx->pc != 0x1357E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1357E4u; }
        if (ctx->pc != 0x1357E4u) { return; }
    }
    ctx->pc = 0x1357E4u;
label_1357e4:
    // 0x1357e4: 0x8f8980f8  lw          $t1, -0x7F08($gp)
    ctx->pc = 0x1357e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934776)));
    // 0x1357e8: 0xc78c80fc  lwc1        $f12, -0x7F04($gp)
    ctx->pc = 0x1357e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1357ec: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1357ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1357f0: 0x8f8a80c4  lw          $t2, -0x7F3C($gp)
    ctx->pc = 0x1357f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934724)));
    // 0x1357f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1357f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1357f8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1357f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1357fc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1357fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135800: 0xc04d134  jal         func_1344D0
    ctx->pc = 0x135800u;
    SET_GPR_U32(ctx, 31, 0x135808u);
    ctx->pc = 0x135804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135800u;
            // 0x135804: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344D0u;
    if (runtime->hasFunction(0x1344D0u)) {
        auto targetFn = runtime->lookupFunction(0x1344D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135808u; }
        if (ctx->pc != 0x135808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001344D0_0x1344d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135808u; }
        if (ctx->pc != 0x135808u) { return; }
    }
    ctx->pc = 0x135808u;
label_135808:
    // 0x135808: 0xaf8280c4  sw          $v0, -0x7F3C($gp)
    ctx->pc = 0x135808u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934724), GPR_U32(ctx, 2));
    // 0x13580c: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x13580Cu;
    SET_GPR_U32(ctx, 31, 0x135814u);
    ctx->pc = 0x135810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13580Cu;
            // 0x135810: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135814u; }
        if (ctx->pc != 0x135814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135814u; }
        if (ctx->pc != 0x135814u) { return; }
    }
    ctx->pc = 0x135814u;
label_135814:
    // 0x135814: 0x8f8980f8  lw          $t1, -0x7F08($gp)
    ctx->pc = 0x135814u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934776)));
    // 0x135818: 0xc78c80fc  lwc1        $f12, -0x7F04($gp)
    ctx->pc = 0x135818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13581c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13581cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135820: 0x8f8a80c4  lw          $t2, -0x7F3C($gp)
    ctx->pc = 0x135820u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934724)));
    // 0x135824: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x135824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135828: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x135828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13582c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x13582cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135830: 0xc04d134  jal         func_1344D0
    ctx->pc = 0x135830u;
    SET_GPR_U32(ctx, 31, 0x135838u);
    ctx->pc = 0x135834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135830u;
            // 0x135834: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344D0u;
    if (runtime->hasFunction(0x1344D0u)) {
        auto targetFn = runtime->lookupFunction(0x1344D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135838u; }
        if (ctx->pc != 0x135838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001344D0_0x1344d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135838u; }
        if (ctx->pc != 0x135838u) { return; }
    }
    ctx->pc = 0x135838u;
label_135838:
    // 0x135838: 0xaf8280c4  sw          $v0, -0x7F3C($gp)
    ctx->pc = 0x135838u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934724), GPR_U32(ctx, 2));
    // 0x13583c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x13583cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x135840: 0xc04cce4  jal         func_133390
    ctx->pc = 0x135840u;
    SET_GPR_U32(ctx, 31, 0x135848u);
    ctx->pc = 0x135844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135840u;
            // 0x135844: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135848u; }
        if (ctx->pc != 0x135848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135848u; }
        if (ctx->pc != 0x135848u) { return; }
    }
    ctx->pc = 0x135848u;
label_135848:
    // 0x135848: 0x8f8580d0  lw          $a1, -0x7F30($gp)
    ctx->pc = 0x135848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934736)));
    // 0x13584c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x13584cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x135850: 0xc04cca0  jal         func_133280
    ctx->pc = 0x135850u;
    SET_GPR_U32(ctx, 31, 0x135858u);
    ctx->pc = 0x135854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135850u;
            // 0x135854: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135858u; }
        if (ctx->pc != 0x135858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135858u; }
        if (ctx->pc != 0x135858u) { return; }
    }
    ctx->pc = 0x135858u;
label_135858:
    // 0x135858: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x135858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13585c: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x13585Cu;
    SET_GPR_U32(ctx, 31, 0x135864u);
    ctx->pc = 0x135860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13585Cu;
            // 0x135860: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135864u; }
        if (ctx->pc != 0x135864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135864u; }
        if (ctx->pc != 0x135864u) { return; }
    }
    ctx->pc = 0x135864u;
label_135864:
    // 0x135864: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x135864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x135868: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x135868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x13586c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13586cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x135870: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x135870u;
    {
        const bool branch_taken_0x135870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135870) {
            ctx->pc = 0x135874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135870u;
            // 0x135874: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13587Cu;
            goto label_13587c;
        }
    }
    ctx->pc = 0x135878u;
    // 0x135878: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x135878u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13587c:
    // 0x13587c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x13587cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x135880: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x135880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x135884: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x135884u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x135888: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x135888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13588c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x13588cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x135890: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x135890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135894: 0xc052b4c  jal         func_14AD30
    ctx->pc = 0x135894u;
    SET_GPR_U32(ctx, 31, 0x13589Cu);
    ctx->pc = 0x135898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135894u;
            // 0x135898: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AD30u;
    if (runtime->hasFunction(0x14AD30u)) {
        auto targetFn = runtime->lookupFunction(0x14AD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13589Cu; }
        if (ctx->pc != 0x13589Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014AD30_0x14ad30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13589Cu; }
        if (ctx->pc != 0x13589Cu) { return; }
    }
    ctx->pc = 0x13589Cu;
label_13589c:
    // 0x13589c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13589cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1358a0: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x1358a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1358a4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1358A4u;
    {
        const bool branch_taken_0x1358a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1358a4) {
            ctx->pc = 0x1358A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1358A4u;
            // 0x1358a8: 0x86640004  lh          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1358BCu;
            goto label_1358bc;
        }
    }
    ctx->pc = 0x1358ACu;
    // 0x1358ac: 0x8f8580d0  lw          $a1, -0x7F30($gp)
    ctx->pc = 0x1358acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934736)));
    // 0x1358b0: 0xc04cee8  jal         func_133BA0
    ctx->pc = 0x1358B0u;
    SET_GPR_U32(ctx, 31, 0x1358B8u);
    ctx->pc = 0x1358B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1358B0u;
            // 0x1358b4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133BA0u;
    if (runtime->hasFunction(0x133BA0u)) {
        auto targetFn = runtime->lookupFunction(0x133BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1358B8u; }
        if (ctx->pc != 0x1358B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133BA0_0x133ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1358B8u; }
        if (ctx->pc != 0x1358B8u) { return; }
    }
    ctx->pc = 0x1358B8u;
label_1358b8:
    // 0x1358b8: 0x86640004  lh          $a0, 0x4($s3)
    ctx->pc = 0x1358b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_1358bc:
    // 0x1358bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1358bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1358c0: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1358C0u;
    {
        const bool branch_taken_0x1358c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1358c0) {
            ctx->pc = 0x1358C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1358C0u;
            // 0x1358c4: 0x86440004  lh          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1358E4u;
            goto label_1358e4;
        }
    }
    ctx->pc = 0x1358C8u;
    // 0x1358c8: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x1358c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x1358cc: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x1358ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1358d0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1358d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1358d4: 0x26660030  addiu       $a2, $s3, 0x30
    ctx->pc = 0x1358d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x1358d8: 0xc04cd60  jal         func_133580
    ctx->pc = 0x1358D8u;
    SET_GPR_U32(ctx, 31, 0x1358E0u);
    ctx->pc = 0x1358DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1358D8u;
            // 0x1358dc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1358E0u; }
        if (ctx->pc != 0x1358E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1358E0u; }
        if (ctx->pc != 0x1358E0u) { return; }
    }
    ctx->pc = 0x1358E0u;
label_1358e0:
    // 0x1358e0: 0x86440004  lh          $a0, 0x4($s2)
    ctx->pc = 0x1358e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_1358e4:
    // 0x1358e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1358e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1358e8: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1358E8u;
    {
        const bool branch_taken_0x1358e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1358e8) {
            ctx->pc = 0x1358ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1358E8u;
            // 0x1358ec: 0x86040004  lh          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13590Cu;
            goto label_13590c;
        }
    }
    ctx->pc = 0x1358F0u;
    // 0x1358f0: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x1358f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x1358f4: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x1358f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1358f8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1358f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1358fc: 0x26460030  addiu       $a2, $s2, 0x30
    ctx->pc = 0x1358fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x135900: 0xc04cd60  jal         func_133580
    ctx->pc = 0x135900u;
    SET_GPR_U32(ctx, 31, 0x135908u);
    ctx->pc = 0x135904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135900u;
            // 0x135904: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135908u; }
        if (ctx->pc != 0x135908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135908u; }
        if (ctx->pc != 0x135908u) { return; }
    }
    ctx->pc = 0x135908u;
label_135908:
    // 0x135908: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x135908u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_13590c:
    // 0x13590c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13590cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x135910: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x135910u;
    {
        const bool branch_taken_0x135910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x135910) {
            ctx->pc = 0x135914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135910u;
            // 0x135914: 0x8f8480e4  lw          $a0, -0x7F1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934756)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135934u;
            goto label_135934;
        }
    }
    ctx->pc = 0x135918u;
    // 0x135918: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x135918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x13591c: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x13591cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x135920: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x135920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135924: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x135924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x135928: 0xc04cd60  jal         func_133580
    ctx->pc = 0x135928u;
    SET_GPR_U32(ctx, 31, 0x135930u);
    ctx->pc = 0x13592Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135928u;
            // 0x13592c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135930u; }
        if (ctx->pc != 0x135930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135930u; }
        if (ctx->pc != 0x135930u) { return; }
    }
    ctx->pc = 0x135930u;
label_135930:
    // 0x135930: 0x8f8480e4  lw          $a0, -0x7F1C($gp)
    ctx->pc = 0x135930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934756)));
label_135934:
    // 0x135934: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x135934u;
    {
        const bool branch_taken_0x135934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x135934) {
            ctx->pc = 0x135938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135934u;
            // 0x135938: 0x86040008  lh          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135990u;
            goto label_135990;
        }
    }
    ctx->pc = 0x13593Cu;
    // 0x13593c: 0x8f8580f0  lw          $a1, -0x7F10($gp)
    ctx->pc = 0x13593cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
    // 0x135940: 0xc78c8014  lwc1        $f12, -0x7FEC($gp)
    ctx->pc = 0x135940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x135944: 0x8f8880e8  lw          $t0, -0x7F18($gp)
    ctx->pc = 0x135944u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934760)));
    // 0x135948: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x135948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13594c: 0xc04c54c  jal         func_131530
    ctx->pc = 0x13594Cu;
    SET_GPR_U32(ctx, 31, 0x135954u);
    ctx->pc = 0x135950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13594Cu;
            // 0x135950: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (runtime->hasFunction(0x131530u)) {
        auto targetFn = runtime->lookupFunction(0x131530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135954u; }
        if (ctx->pc != 0x135954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131530_0x131530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135954u; }
        if (ctx->pc != 0x135954u) { return; }
    }
    ctx->pc = 0x135954u;
label_135954:
    // 0x135954: 0x8f8480e4  lw          $a0, -0x7F1C($gp)
    ctx->pc = 0x135954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934756)));
    // 0x135958: 0xc78c8014  lwc1        $f12, -0x7FEC($gp)
    ctx->pc = 0x135958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13595c: 0x8f8580f0  lw          $a1, -0x7F10($gp)
    ctx->pc = 0x13595cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
    // 0x135960: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x135960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135964: 0x8f8880e8  lw          $t0, -0x7F18($gp)
    ctx->pc = 0x135964u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934760)));
    // 0x135968: 0xc04c54c  jal         func_131530
    ctx->pc = 0x135968u;
    SET_GPR_U32(ctx, 31, 0x135970u);
    ctx->pc = 0x13596Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135968u;
            // 0x13596c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (runtime->hasFunction(0x131530u)) {
        auto targetFn = runtime->lookupFunction(0x131530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135970u; }
        if (ctx->pc != 0x135970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131530_0x131530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135970u; }
        if (ctx->pc != 0x135970u) { return; }
    }
    ctx->pc = 0x135970u;
label_135970:
    // 0x135970: 0x8f8480e4  lw          $a0, -0x7F1C($gp)
    ctx->pc = 0x135970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934756)));
    // 0x135974: 0xc78c8014  lwc1        $f12, -0x7FEC($gp)
    ctx->pc = 0x135974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x135978: 0x8f8580f0  lw          $a1, -0x7F10($gp)
    ctx->pc = 0x135978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
    // 0x13597c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x13597cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135980: 0x8f8880e8  lw          $t0, -0x7F18($gp)
    ctx->pc = 0x135980u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934760)));
    // 0x135984: 0xc04c54c  jal         func_131530
    ctx->pc = 0x135984u;
    SET_GPR_U32(ctx, 31, 0x13598Cu);
    ctx->pc = 0x135988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135984u;
            // 0x135988: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (runtime->hasFunction(0x131530u)) {
        auto targetFn = runtime->lookupFunction(0x131530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13598Cu; }
        if (ctx->pc != 0x13598Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131530_0x131530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13598Cu; }
        if (ctx->pc != 0x13598Cu) { return; }
    }
    ctx->pc = 0x13598Cu;
label_13598c:
    // 0x13598c: 0x86040008  lh          $a0, 0x8($s0)
    ctx->pc = 0x13598cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_135990:
    // 0x135990: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x135990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x135994: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x135994u;
    {
        const bool branch_taken_0x135994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x135994) {
            ctx->pc = 0x135998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135994u;
            // 0x135998: 0x8604000a  lh          $a0, 0xA($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1359BCu;
            goto label_1359bc;
        }
    }
    ctx->pc = 0x13599Cu;
    // 0x13599c: 0x8f8480f4  lw          $a0, -0x7F0C($gp)
    ctx->pc = 0x13599cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
    // 0x1359a0: 0xc04e1b8  jal         func_1386E0
    ctx->pc = 0x1359A0u;
    SET_GPR_U32(ctx, 31, 0x1359A8u);
    ctx->pc = 0x1359A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1359A0u;
            // 0x1359a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386E0u;
    if (runtime->hasFunction(0x1386E0u)) {
        auto targetFn = runtime->lookupFunction(0x1386E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1359A8u; }
        if (ctx->pc != 0x1359A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001386E0_0x1386e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1359A8u; }
        if (ctx->pc != 0x1359A8u) { return; }
    }
    ctx->pc = 0x1359A8u;
label_1359a8:
    // 0x1359a8: 0xc04d0b8  jal         func_1342E0
    ctx->pc = 0x1359A8u;
    SET_GPR_U32(ctx, 31, 0x1359B0u);
    ctx->pc = 0x1359ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1359A8u;
            // 0x1359ac: 0x86040008  lh          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1342E0u;
    if (runtime->hasFunction(0x1342E0u)) {
        auto targetFn = runtime->lookupFunction(0x1342E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1359B0u; }
        if (ctx->pc != 0x1359B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001342E0_0x1342e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1359B0u; }
        if (ctx->pc != 0x1359B0u) { return; }
    }
    ctx->pc = 0x1359B0u;
label_1359b0:
    // 0x1359b0: 0xc04e1d4  jal         func_138750
    ctx->pc = 0x1359B0u;
    SET_GPR_U32(ctx, 31, 0x1359B8u);
    ctx->pc = 0x1359B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1359B0u;
            // 0x1359b4: 0x8f8480f4  lw          $a0, -0x7F0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138750u;
    if (runtime->hasFunction(0x138750u)) {
        auto targetFn = runtime->lookupFunction(0x138750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1359B8u; }
        if (ctx->pc != 0x1359B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138750_0x138750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1359B8u; }
        if (ctx->pc != 0x1359B8u) { return; }
    }
    ctx->pc = 0x1359B8u;
label_1359b8:
    // 0x1359b8: 0x8604000a  lh          $a0, 0xA($s0)
    ctx->pc = 0x1359b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_1359bc:
    // 0x1359bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1359bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1359c0: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1359C0u;
    {
        const bool branch_taken_0x1359c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1359c0) {
            ctx->pc = 0x1359C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1359C0u;
            // 0x1359c4: 0x8644000a  lh          $a0, 0xA($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1359E8u;
            goto label_1359e8;
        }
    }
    ctx->pc = 0x1359C8u;
    // 0x1359c8: 0x8f8480f4  lw          $a0, -0x7F0C($gp)
    ctx->pc = 0x1359c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
    // 0x1359cc: 0xc04e1b8  jal         func_1386E0
    ctx->pc = 0x1359CCu;
    SET_GPR_U32(ctx, 31, 0x1359D4u);
    ctx->pc = 0x1359D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1359CCu;
            // 0x1359d0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386E0u;
    if (runtime->hasFunction(0x1386E0u)) {
        auto targetFn = runtime->lookupFunction(0x1386E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1359D4u; }
        if (ctx->pc != 0x1359D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001386E0_0x1386e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1359D4u; }
        if (ctx->pc != 0x1359D4u) { return; }
    }
    ctx->pc = 0x1359D4u;
label_1359d4:
    // 0x1359d4: 0xc04d0b8  jal         func_1342E0
    ctx->pc = 0x1359D4u;
    SET_GPR_U32(ctx, 31, 0x1359DCu);
    ctx->pc = 0x1359D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1359D4u;
            // 0x1359d8: 0x8604000a  lh          $a0, 0xA($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1342E0u;
    if (runtime->hasFunction(0x1342E0u)) {
        auto targetFn = runtime->lookupFunction(0x1342E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1359DCu; }
        if (ctx->pc != 0x1359DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001342E0_0x1342e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1359DCu; }
        if (ctx->pc != 0x1359DCu) { return; }
    }
    ctx->pc = 0x1359DCu;
label_1359dc:
    // 0x1359dc: 0xc04e1d4  jal         func_138750
    ctx->pc = 0x1359DCu;
    SET_GPR_U32(ctx, 31, 0x1359E4u);
    ctx->pc = 0x1359E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1359DCu;
            // 0x1359e0: 0x8f8480f4  lw          $a0, -0x7F0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138750u;
    if (runtime->hasFunction(0x138750u)) {
        auto targetFn = runtime->lookupFunction(0x138750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1359E4u; }
        if (ctx->pc != 0x1359E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138750_0x138750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1359E4u; }
        if (ctx->pc != 0x1359E4u) { return; }
    }
    ctx->pc = 0x1359E4u;
label_1359e4:
    // 0x1359e4: 0x8644000a  lh          $a0, 0xA($s2)
    ctx->pc = 0x1359e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_1359e8:
    // 0x1359e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1359e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1359ec: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1359ECu;
    {
        const bool branch_taken_0x1359ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1359ec) {
            ctx->pc = 0x1359F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1359ECu;
            // 0x1359f0: 0x8664000a  lh          $a0, 0xA($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135A14u;
            goto label_135a14;
        }
    }
    ctx->pc = 0x1359F4u;
    // 0x1359f4: 0x8f8480f4  lw          $a0, -0x7F0C($gp)
    ctx->pc = 0x1359f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
    // 0x1359f8: 0xc04e1b8  jal         func_1386E0
    ctx->pc = 0x1359F8u;
    SET_GPR_U32(ctx, 31, 0x135A00u);
    ctx->pc = 0x1359FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1359F8u;
            // 0x1359fc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386E0u;
    if (runtime->hasFunction(0x1386E0u)) {
        auto targetFn = runtime->lookupFunction(0x1386E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A00u; }
        if (ctx->pc != 0x135A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001386E0_0x1386e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A00u; }
        if (ctx->pc != 0x135A00u) { return; }
    }
    ctx->pc = 0x135A00u;
label_135a00:
    // 0x135a00: 0xc04d0b8  jal         func_1342E0
    ctx->pc = 0x135A00u;
    SET_GPR_U32(ctx, 31, 0x135A08u);
    ctx->pc = 0x135A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135A00u;
            // 0x135a04: 0x8644000a  lh          $a0, 0xA($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1342E0u;
    if (runtime->hasFunction(0x1342E0u)) {
        auto targetFn = runtime->lookupFunction(0x1342E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A08u; }
        if (ctx->pc != 0x135A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001342E0_0x1342e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A08u; }
        if (ctx->pc != 0x135A08u) { return; }
    }
    ctx->pc = 0x135A08u;
label_135a08:
    // 0x135a08: 0xc04e1d4  jal         func_138750
    ctx->pc = 0x135A08u;
    SET_GPR_U32(ctx, 31, 0x135A10u);
    ctx->pc = 0x135A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135A08u;
            // 0x135a0c: 0x8f8480f4  lw          $a0, -0x7F0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138750u;
    if (runtime->hasFunction(0x138750u)) {
        auto targetFn = runtime->lookupFunction(0x138750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A10u; }
        if (ctx->pc != 0x135A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138750_0x138750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A10u; }
        if (ctx->pc != 0x135A10u) { return; }
    }
    ctx->pc = 0x135A10u;
label_135a10:
    // 0x135a10: 0x8664000a  lh          $a0, 0xA($s3)
    ctx->pc = 0x135a10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
label_135a14:
    // 0x135a14: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x135a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x135a18: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x135A18u;
    {
        const bool branch_taken_0x135a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x135a18) {
            ctx->pc = 0x135A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135A18u;
            // 0x135a1c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135A40u;
            goto label_135a40;
        }
    }
    ctx->pc = 0x135A20u;
    // 0x135a20: 0x8f8480f4  lw          $a0, -0x7F0C($gp)
    ctx->pc = 0x135a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
    // 0x135a24: 0xc04e1b8  jal         func_1386E0
    ctx->pc = 0x135A24u;
    SET_GPR_U32(ctx, 31, 0x135A2Cu);
    ctx->pc = 0x135A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135A24u;
            // 0x135a28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386E0u;
    if (runtime->hasFunction(0x1386E0u)) {
        auto targetFn = runtime->lookupFunction(0x1386E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A2Cu; }
        if (ctx->pc != 0x135A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001386E0_0x1386e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A2Cu; }
        if (ctx->pc != 0x135A2Cu) { return; }
    }
    ctx->pc = 0x135A2Cu;
label_135a2c:
    // 0x135a2c: 0xc04d0b8  jal         func_1342E0
    ctx->pc = 0x135A2Cu;
    SET_GPR_U32(ctx, 31, 0x135A34u);
    ctx->pc = 0x135A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135A2Cu;
            // 0x135a30: 0x8664000a  lh          $a0, 0xA($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1342E0u;
    if (runtime->hasFunction(0x1342E0u)) {
        auto targetFn = runtime->lookupFunction(0x1342E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A34u; }
        if (ctx->pc != 0x135A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001342E0_0x1342e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A34u; }
        if (ctx->pc != 0x135A34u) { return; }
    }
    ctx->pc = 0x135A34u;
label_135a34:
    // 0x135a34: 0xc04e1d4  jal         func_138750
    ctx->pc = 0x135A34u;
    SET_GPR_U32(ctx, 31, 0x135A3Cu);
    ctx->pc = 0x135A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135A34u;
            // 0x135a38: 0x8f8480f4  lw          $a0, -0x7F0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138750u;
    if (runtime->hasFunction(0x138750u)) {
        auto targetFn = runtime->lookupFunction(0x138750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A3Cu; }
        if (ctx->pc != 0x135A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138750_0x138750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A3Cu; }
        if (ctx->pc != 0x135A3Cu) { return; }
    }
    ctx->pc = 0x135A3Cu;
label_135a3c:
    // 0x135a3c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x135a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_135a40:
    // 0x135a40: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x135a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135a44: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x135a44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x135a48: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x135a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135a4c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x135a4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x135a50: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x135a50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x135a54: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x135a54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x135a58: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x135a58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x135a5c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x135a5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x135a60: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x135a60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135a64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x135a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135a68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x135a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x135A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135A6Cu;
            // 0x135a70: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135A74u;
    // 0x135a74: 0x0  nop
    ctx->pc = 0x135a74u;
    // NOP
    // 0x135a78: 0x0  nop
    ctx->pc = 0x135a78u;
    // NOP
    // 0x135a7c: 0x0  nop
    ctx->pc = 0x135a7cu;
    // NOP
}
