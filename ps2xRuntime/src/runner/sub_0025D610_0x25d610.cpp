#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025D610
// Address: 0x25d610 - 0x25d820
void sub_0025D610_0x25d610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D610_0x25d610");
#endif

    switch (ctx->pc) {
        case 0x25d650u: goto label_25d650;
        case 0x25d668u: goto label_25d668;
        case 0x25d678u: goto label_25d678;
        case 0x25d688u: goto label_25d688;
        case 0x25d698u: goto label_25d698;
        case 0x25d758u: goto label_25d758;
        case 0x25d7ecu: goto label_25d7ec;
        case 0x25d7fcu: goto label_25d7fc;
        default: break;
    }

    ctx->pc = 0x25d610u;

    // 0x25d610: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x25d610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x25d614: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25d614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25d618: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25d618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x25d61c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25d61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25d620: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25d620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25d624: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25d624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d628: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25d628u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25d62c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25d62cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d630: 0x8c920040  lw          $s2, 0x40($a0)
    ctx->pc = 0x25d630u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x25d634: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25d634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25d638: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x25d638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d63c: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x25d63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x25d640: 0x46006502  mul.s       $f20, $f12, $f0
    ctx->pc = 0x25d640u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x25d644: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x25d644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25d648: 0xc0a3cb4  jal         func_28F2D0
    ctx->pc = 0x25D648u;
    SET_GPR_U32(ctx, 31, 0x25D650u);
    ctx->pc = 0x25D64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D648u;
            // 0x25d64c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F2D0u;
    if (runtime->hasFunction(0x28F2D0u)) {
        auto targetFn = runtime->lookupFunction(0x28F2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D650u; }
        if (ctx->pc != 0x25D650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F2D0_0x28f2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D650u; }
        if (ctx->pc != 0x25D650u) { return; }
    }
    ctx->pc = 0x25D650u;
label_25d650:
    // 0x25d650: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x25d650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25d654: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x25d654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25d658: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x25d658u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x25d65c: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x25d65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x25d660: 0xc0a3cb4  jal         func_28F2D0
    ctx->pc = 0x25D660u;
    SET_GPR_U32(ctx, 31, 0x25D668u);
    ctx->pc = 0x25D664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D660u;
            // 0x25d664: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F2D0u;
    if (runtime->hasFunction(0x28F2D0u)) {
        auto targetFn = runtime->lookupFunction(0x28F2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D668u; }
        if (ctx->pc != 0x25D668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F2D0_0x28f2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D668u; }
        if (ctx->pc != 0x25D668u) { return; }
    }
    ctx->pc = 0x25D668u;
label_25d668:
    // 0x25d668: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x25d668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x25d66c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25d66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d670: 0xc0a45a0  jal         func_291680
    ctx->pc = 0x25D670u;
    SET_GPR_U32(ctx, 31, 0x25D678u);
    ctx->pc = 0x25D674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D670u;
            // 0x25d674: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D678u; }
        if (ctx->pc != 0x25D678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D678u; }
        if (ctx->pc != 0x25D678u) { return; }
    }
    ctx->pc = 0x25D678u;
label_25d678:
    // 0x25d678: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x25d678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x25d67c: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x25d67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x25d680: 0xc0a4628  jal         func_2918A0
    ctx->pc = 0x25D680u;
    SET_GPR_U32(ctx, 31, 0x25D688u);
    ctx->pc = 0x25D684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D680u;
            // 0x25d684: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2918A0u;
    if (runtime->hasFunction(0x2918A0u)) {
        auto targetFn = runtime->lookupFunction(0x2918A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D688u; }
        if (ctx->pc != 0x25D688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002918A0_0x2918a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D688u; }
        if (ctx->pc != 0x25D688u) { return; }
    }
    ctx->pc = 0x25D688u;
label_25d688:
    // 0x25d688: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x25d688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x25d68c: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x25d68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x25d690: 0xc0a45e8  jal         func_2917A0
    ctx->pc = 0x25D690u;
    SET_GPR_U32(ctx, 31, 0x25D698u);
    ctx->pc = 0x25D694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D690u;
            // 0x25d694: 0x26260030  addiu       $a2, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2917A0u;
    if (runtime->hasFunction(0x2917A0u)) {
        auto targetFn = runtime->lookupFunction(0x2917A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D698u; }
        if (ctx->pc != 0x25D698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002917A0_0x2917a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D698u; }
        if (ctx->pc != 0x25D698u) { return; }
    }
    ctx->pc = 0x25D698u;
label_25d698:
    // 0x25d698: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x25d698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d69c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x25d69cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d6a0: 0x262c0070  addiu       $t4, $s1, 0x70
    ctx->pc = 0x25d6a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x25d6a4: 0x260b0100  addiu       $t3, $s0, 0x100
    ctx->pc = 0x25d6a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x25d6a8: 0x27aa0054  addiu       $t2, $sp, 0x54
    ctx->pc = 0x25d6a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x25d6ac: 0x27a90058  addiu       $t1, $sp, 0x58
    ctx->pc = 0x25d6acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x25d6b0: 0x27a80064  addiu       $t0, $sp, 0x64
    ctx->pc = 0x25d6b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x25d6b4: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x25d6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25d6b8: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x25d6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x25d6bc: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x25d6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x25d6c0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x25d6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25d6c4: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x25d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x25d6c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25d6c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x25d6cc: 0xe60000cc  swc1        $f0, 0xCC($s0)
    ctx->pc = 0x25d6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 204), bits); }
    // 0x25d6d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x25d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25d6d4: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x25d6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d6d8: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25d6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x25d6dc: 0xc4400084  lwc1        $f0, 0x84($v0)
    ctx->pc = 0x25d6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d6e0: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x25d6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x25d6e4: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x25d6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d6e8: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x25d6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x25d6ec: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x25d6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d6f0: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x25d6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x25d6f4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x25d6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d6f8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25d6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25d6fc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x25d6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d700: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x25d700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x25d704: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x25d704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d708: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x25d708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x25d70c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x25d70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d710: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x25d710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x25d714: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x25d714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d718: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x25d718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x25d71c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x25d71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d720: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25d720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25d724: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x25d724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d728: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x25d728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x25d72c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x25d72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d730: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x25d730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x25d734: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x25d734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d738: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x25d738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x25d73c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x25d73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d740: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x25d740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x25d744: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x25d744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d748: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25d748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25d74c: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x25d74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d750: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x25d750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x25d754: 0x0  nop
    ctx->pc = 0x25d754u;
    // NOP
label_25d758:
    // 0x25d758: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x25d758u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x25d75c: 0xc5850000  lwc1        $f5, 0x0($t4)
    ctx->pc = 0x25d75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25d760: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x25d760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d764: 0xc5840004  lwc1        $f4, 0x4($t4)
    ctx->pc = 0x25d764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25d768: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x25d768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d76c: 0xc5830008  lwc1        $f3, 0x8($t4)
    ctx->pc = 0x25d76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25d770: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x25d770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d774: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x25d774u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x25d778: 0x258cfff0  addiu       $t4, $t4, -0x10
    ctx->pc = 0x25d778u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967280));
    // 0x25d77c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x25d77cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x25d780: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x25d780u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x25d784: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x25d784u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x25d788: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x25d788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x25d78c: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x25d78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d790: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x25d790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d794: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x25d794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d798: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x25d798u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x25d79c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x25d79cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x25d7a0: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x25d7a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x25d7a4: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x25d7a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x25d7a8: 0xe5600004  swc1        $f0, 0x4($t3)
    ctx->pc = 0x25d7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x25d7ac: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x25d7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d7b0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x25d7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d7b4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25d7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d7b8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x25d7b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x25d7bc: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x25d7bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x25d7c0: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x25d7c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x25d7c4: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x25d7c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x25d7c8: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x25d7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x25d7cc: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x25d7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x25d7d0: 0x5a1ffe1  bgez        $t5, . + 4 + (-0x1F << 2)
    ctx->pc = 0x25D7D0u;
    {
        const bool branch_taken_0x25d7d0 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x25D7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D7D0u;
            // 0x25d7d4: 0x256bfff0  addiu       $t3, $t3, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d7d0) {
            ctx->pc = 0x25D758u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25d758;
        }
    }
    ctx->pc = 0x25D7D8u;
    // 0x25d7d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x25d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25d7dc: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x25d7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x25d7e0: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x25d7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x25d7e4: 0xc0a45e8  jal         func_2917A0
    ctx->pc = 0x25D7E4u;
    SET_GPR_U32(ctx, 31, 0x25D7ECu);
    ctx->pc = 0x25D7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D7E4u;
            // 0x25d7e8: 0x24460080  addiu       $a2, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2917A0u;
    if (runtime->hasFunction(0x2917A0u)) {
        auto targetFn = runtime->lookupFunction(0x2917A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D7ECu; }
        if (ctx->pc != 0x25D7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002917A0_0x2917a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D7ECu; }
        if (ctx->pc != 0x25D7ECu) { return; }
    }
    ctx->pc = 0x25D7ECu;
label_25d7ec:
    // 0x25d7ec: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x25d7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x25d7f0: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x25d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25d7f4: 0xc0a4644  jal         func_291910
    ctx->pc = 0x25D7F4u;
    SET_GPR_U32(ctx, 31, 0x25D7FCu);
    ctx->pc = 0x25D7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D7F4u;
            // 0x25d7f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291910u;
    if (runtime->hasFunction(0x291910u)) {
        auto targetFn = runtime->lookupFunction(0x291910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D7FCu; }
        if (ctx->pc != 0x25D7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291910_0x291910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D7FCu; }
        if (ctx->pc != 0x25D7FCu) { return; }
    }
    ctx->pc = 0x25D7FCu;
label_25d7fc:
    // 0x25d7fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25d7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25d800: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25d800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25d804: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25d804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d808: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25d808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d80c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25d80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d810: 0x3e00008  jr          $ra
    ctx->pc = 0x25D810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D810u;
            // 0x25d814: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D818u;
    // 0x25d818: 0x0  nop
    ctx->pc = 0x25d818u;
    // NOP
    // 0x25d81c: 0x0  nop
    ctx->pc = 0x25d81cu;
    // NOP
}
