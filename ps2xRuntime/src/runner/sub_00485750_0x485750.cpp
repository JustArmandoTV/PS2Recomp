#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00485750
// Address: 0x485750 - 0x485940
void sub_00485750_0x485750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485750_0x485750");
#endif

    switch (ctx->pc) {
        case 0x485778u: goto label_485778;
        case 0x485798u: goto label_485798;
        case 0x4857f0u: goto label_4857f0;
        case 0x48580cu: goto label_48580c;
        case 0x485830u: goto label_485830;
        case 0x48584cu: goto label_48584c;
        case 0x485870u: goto label_485870;
        case 0x4858d0u: goto label_4858d0;
        case 0x4858dcu: goto label_4858dc;
        case 0x4858e8u: goto label_4858e8;
        case 0x4858f4u: goto label_4858f4;
        case 0x485900u: goto label_485900;
        case 0x48590cu: goto label_48590c;
        case 0x485924u: goto label_485924;
        default: break;
    }

    ctx->pc = 0x485750u;

    // 0x485750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x485750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x485754: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x485754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x485758: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x485758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x48575c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x48575cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x485760: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x485760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x485764: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x485764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x485768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x485768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48576c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48576cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485770: 0xc121688  jal         func_485A20
    ctx->pc = 0x485770u;
    SET_GPR_U32(ctx, 31, 0x485778u);
    ctx->pc = 0x485774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485770u;
            // 0x485774: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x485A20u;
    if (runtime->hasFunction(0x485A20u)) {
        auto targetFn = runtime->lookupFunction(0x485A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485778u; }
        if (ctx->pc != 0x485778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00485A20_0x485a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485778u; }
        if (ctx->pc != 0x485778u) { return; }
    }
    ctx->pc = 0x485778u;
label_485778:
    // 0x485778: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x485778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x48577c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x48577cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x485780: 0x2463f540  addiu       $v1, $v1, -0xAC0
    ctx->pc = 0x485780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964544));
    // 0x485784: 0x2442f578  addiu       $v0, $v0, -0xA88
    ctx->pc = 0x485784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964600));
    // 0x485788: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x485788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x48578c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x48578cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485790: 0xc121684  jal         func_485A10
    ctx->pc = 0x485790u;
    SET_GPR_U32(ctx, 31, 0x485798u);
    ctx->pc = 0x485794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485790u;
            // 0x485794: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x485A10u;
    if (runtime->hasFunction(0x485A10u)) {
        auto targetFn = runtime->lookupFunction(0x485A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485798u; }
        if (ctx->pc != 0x485798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00485A10_0x485a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485798u; }
        if (ctx->pc != 0x485798u) { return; }
    }
    ctx->pc = 0x485798u;
label_485798:
    // 0x485798: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x485798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x48579c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x48579cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4857a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4857a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4857a4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4857a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4857a8: 0x2442f3e0  addiu       $v0, $v0, -0xC20
    ctx->pc = 0x4857a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964192));
    // 0x4857ac: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4857acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4857b0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4857b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4857b4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4857b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4857b8: 0x2442f418  addiu       $v0, $v0, -0xBE8
    ctx->pc = 0x4857b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964248));
    // 0x4857bc: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4857bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x4857c0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4857c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4857c4: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x4857c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x4857c8: 0xc440fbf0  lwc1        $f0, -0x410($v0)
    ctx->pc = 0x4857c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4857cc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4857ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4857d0: 0xc441fbf4  lwc1        $f1, -0x40C($v0)
    ctx->pc = 0x4857d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4857d4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4857d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x4857d8: 0xc460fbf8  lwc1        $f0, -0x408($v1)
    ctx->pc = 0x4857d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4857dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4857dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4857e0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4857e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4857e4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4857e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x4857e8: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4857E8u;
    SET_GPR_U32(ctx, 31, 0x4857F0u);
    ctx->pc = 0x4857ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4857E8u;
            // 0x4857ec: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4857F0u; }
        if (ctx->pc != 0x4857F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4857F0u; }
        if (ctx->pc != 0x4857F0u) { return; }
    }
    ctx->pc = 0x4857F0u;
label_4857f0:
    // 0x4857f0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4857f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4857f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4857f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4857f8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4857F8u;
    {
        const bool branch_taken_0x4857f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4857FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4857F8u;
            // 0x4857fc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4857f8) {
            ctx->pc = 0x485810u;
            goto label_485810;
        }
    }
    ctx->pc = 0x485800u;
    // 0x485800: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x485800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x485804: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x485804u;
    SET_GPR_U32(ctx, 31, 0x48580Cu);
    ctx->pc = 0x485808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485804u;
            // 0x485808: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48580Cu; }
        if (ctx->pc != 0x48580Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48580Cu; }
        if (ctx->pc != 0x48580Cu) { return; }
    }
    ctx->pc = 0x48580Cu;
label_48580c:
    // 0x48580c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48580cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_485810:
    // 0x485810: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x485810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
    // 0x485814: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x485814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x485818: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x485818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x48581c: 0x23980  sll         $a3, $v0, 6
    ctx->pc = 0x48581cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x485820: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x485820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x485824: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x485824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x485828: 0xc040140  jal         func_100500
    ctx->pc = 0x485828u;
    SET_GPR_U32(ctx, 31, 0x485830u);
    ctx->pc = 0x48582Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485828u;
            // 0x48582c: 0x26320084  addiu       $s2, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485830u; }
        if (ctx->pc != 0x485830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485830u; }
        if (ctx->pc != 0x485830u) { return; }
    }
    ctx->pc = 0x485830u;
label_485830:
    // 0x485830: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x485830u;
    {
        const bool branch_taken_0x485830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x485830) {
            ctx->pc = 0x485834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x485830u;
            // 0x485834: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x485850u;
            goto label_485850;
        }
    }
    ctx->pc = 0x485838u;
    // 0x485838: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x485838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x48583c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x48583cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485840: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x485840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485844: 0xc0b4554  jal         func_2D1550
    ctx->pc = 0x485844u;
    SET_GPR_U32(ctx, 31, 0x48584Cu);
    ctx->pc = 0x485848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485844u;
            // 0x485848: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1550u;
    if (runtime->hasFunction(0x2D1550u)) {
        auto targetFn = runtime->lookupFunction(0x2D1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48584Cu; }
        if (ctx->pc != 0x48584Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1550_0x2d1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48584Cu; }
        if (ctx->pc != 0x48584Cu) { return; }
    }
    ctx->pc = 0x48584Cu;
label_48584c:
    // 0x48584c: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x48584cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_485850:
    // 0x485850: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x485850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485854: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x485854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x485858: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x485858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48585c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48585cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485860: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x485860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x485864: 0x3e00008  jr          $ra
    ctx->pc = 0x485864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x485868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485864u;
            // 0x485868: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48586Cu;
    // 0x48586c: 0x0  nop
    ctx->pc = 0x48586cu;
    // NOP
label_485870:
    // 0x485870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x485870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x485874: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x485874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x485878: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x485878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48587c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48587cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x485880: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x485880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485884: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x485884u;
    {
        const bool branch_taken_0x485884 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x485888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485884u;
            // 0x485888: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485884) {
            ctx->pc = 0x485924u;
            goto label_485924;
        }
    }
    ctx->pc = 0x48588Cu;
    // 0x48588c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x48588cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x485890: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x485890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x485894: 0x2463f540  addiu       $v1, $v1, -0xAC0
    ctx->pc = 0x485894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964544));
    // 0x485898: 0x2442f578  addiu       $v0, $v0, -0xA88
    ctx->pc = 0x485898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964600));
    // 0x48589c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x48589cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4858a0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4858A0u;
    {
        const bool branch_taken_0x4858a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4858A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4858A0u;
            // 0x4858a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4858a0) {
            ctx->pc = 0x48590Cu;
            goto label_48590c;
        }
    }
    ctx->pc = 0x4858A8u;
    // 0x4858a8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4858a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4858ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4858acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4858b0: 0x2463f4f0  addiu       $v1, $v1, -0xB10
    ctx->pc = 0x4858b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964464));
    // 0x4858b4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x4858b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x4858b8: 0x2442f528  addiu       $v0, $v0, -0xAD8
    ctx->pc = 0x4858b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964520));
    // 0x4858bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4858bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4858c0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4858c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4858c4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4858c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4858c8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4858C8u;
    SET_GPR_U32(ctx, 31, 0x4858D0u);
    ctx->pc = 0x4858CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4858C8u;
            // 0x4858cc: 0x24a553a0  addiu       $a1, $a1, 0x53A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4858D0u; }
        if (ctx->pc != 0x4858D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4858D0u; }
        if (ctx->pc != 0x4858D0u) { return; }
    }
    ctx->pc = 0x4858D0u;
label_4858d0:
    // 0x4858d0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4858d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4858d4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x4858D4u;
    SET_GPR_U32(ctx, 31, 0x4858DCu);
    ctx->pc = 0x4858D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4858D4u;
            // 0x4858d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4858DCu; }
        if (ctx->pc != 0x4858DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4858DCu; }
        if (ctx->pc != 0x4858DCu) { return; }
    }
    ctx->pc = 0x4858DCu;
label_4858dc:
    // 0x4858dc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4858dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4858e0: 0xc121668  jal         func_4859A0
    ctx->pc = 0x4858E0u;
    SET_GPR_U32(ctx, 31, 0x4858E8u);
    ctx->pc = 0x4858E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4858E0u;
            // 0x4858e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4859A0u;
    if (runtime->hasFunction(0x4859A0u)) {
        auto targetFn = runtime->lookupFunction(0x4859A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4858E8u; }
        if (ctx->pc != 0x4858E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004859A0_0x4859a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4858E8u; }
        if (ctx->pc != 0x4858E8u) { return; }
    }
    ctx->pc = 0x4858E8u;
label_4858e8:
    // 0x4858e8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4858e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4858ec: 0xc121668  jal         func_4859A0
    ctx->pc = 0x4858ECu;
    SET_GPR_U32(ctx, 31, 0x4858F4u);
    ctx->pc = 0x4858F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4858ECu;
            // 0x4858f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4859A0u;
    if (runtime->hasFunction(0x4859A0u)) {
        auto targetFn = runtime->lookupFunction(0x4859A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4858F4u; }
        if (ctx->pc != 0x4858F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004859A0_0x4859a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4858F4u; }
        if (ctx->pc != 0x4858F4u) { return; }
    }
    ctx->pc = 0x4858F4u;
label_4858f4:
    // 0x4858f4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4858f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4858f8: 0xc121650  jal         func_485940
    ctx->pc = 0x4858F8u;
    SET_GPR_U32(ctx, 31, 0x485900u);
    ctx->pc = 0x4858FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4858F8u;
            // 0x4858fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x485940u;
    if (runtime->hasFunction(0x485940u)) {
        auto targetFn = runtime->lookupFunction(0x485940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485900u; }
        if (ctx->pc != 0x485900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00485940_0x485940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485900u; }
        if (ctx->pc != 0x485900u) { return; }
    }
    ctx->pc = 0x485900u;
label_485900:
    // 0x485900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x485900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485904: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x485904u;
    SET_GPR_U32(ctx, 31, 0x48590Cu);
    ctx->pc = 0x485908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485904u;
            // 0x485908: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48590Cu; }
        if (ctx->pc != 0x48590Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48590Cu; }
        if (ctx->pc != 0x48590Cu) { return; }
    }
    ctx->pc = 0x48590Cu;
label_48590c:
    // 0x48590c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x48590cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x485910: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x485910u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x485914: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x485914u;
    {
        const bool branch_taken_0x485914 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x485914) {
            ctx->pc = 0x485918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x485914u;
            // 0x485918: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x485928u;
            goto label_485928;
        }
    }
    ctx->pc = 0x48591Cu;
    // 0x48591c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x48591Cu;
    SET_GPR_U32(ctx, 31, 0x485924u);
    ctx->pc = 0x485920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48591Cu;
            // 0x485920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485924u; }
        if (ctx->pc != 0x485924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485924u; }
        if (ctx->pc != 0x485924u) { return; }
    }
    ctx->pc = 0x485924u;
label_485924:
    // 0x485924: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x485924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485928:
    // 0x485928: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x485928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48592c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48592cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x485930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x485934: 0x3e00008  jr          $ra
    ctx->pc = 0x485934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x485938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485934u;
            // 0x485938: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48593Cu;
    // 0x48593c: 0x0  nop
    ctx->pc = 0x48593cu;
    // NOP
}
