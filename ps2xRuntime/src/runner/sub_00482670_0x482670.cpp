#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00482670
// Address: 0x482670 - 0x482800
void sub_00482670_0x482670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482670_0x482670");
#endif

    switch (ctx->pc) {
        case 0x48268cu: goto label_48268c;
        case 0x4826acu: goto label_4826ac;
        case 0x4826f0u: goto label_4826f0;
        case 0x48270cu: goto label_48270c;
        case 0x482730u: goto label_482730;
        case 0x482790u: goto label_482790;
        case 0x48279cu: goto label_48279c;
        case 0x4827a8u: goto label_4827a8;
        case 0x4827b4u: goto label_4827b4;
        case 0x4827c0u: goto label_4827c0;
        case 0x4827ccu: goto label_4827cc;
        case 0x4827e4u: goto label_4827e4;
        default: break;
    }

    ctx->pc = 0x482670u;

    // 0x482670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x482670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x482674: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x482674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x482678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x482678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48267c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x48267cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x482680: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x482680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x482684: 0xc120a38  jal         func_4828E0
    ctx->pc = 0x482684u;
    SET_GPR_U32(ctx, 31, 0x48268Cu);
    ctx->pc = 0x482688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482684u;
            // 0x482688: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4828E0u;
    if (runtime->hasFunction(0x4828E0u)) {
        auto targetFn = runtime->lookupFunction(0x4828E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48268Cu; }
        if (ctx->pc != 0x48268Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004828E0_0x4828e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48268Cu; }
        if (ctx->pc != 0x48268Cu) { return; }
    }
    ctx->pc = 0x48268Cu;
label_48268c:
    // 0x48268c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x48268cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x482690: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x482690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x482694: 0x2463f140  addiu       $v1, $v1, -0xEC0
    ctx->pc = 0x482694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963520));
    // 0x482698: 0x2442f178  addiu       $v0, $v0, -0xE88
    ctx->pc = 0x482698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963576));
    // 0x48269c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x48269cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4826a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4826a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4826a4: 0xc120a34  jal         func_4828D0
    ctx->pc = 0x4826A4u;
    SET_GPR_U32(ctx, 31, 0x4826ACu);
    ctx->pc = 0x4826A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4826A4u;
            // 0x4826a8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4828D0u;
    if (runtime->hasFunction(0x4828D0u)) {
        auto targetFn = runtime->lookupFunction(0x4828D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4826ACu; }
        if (ctx->pc != 0x4826ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004828D0_0x4828d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4826ACu; }
        if (ctx->pc != 0x4826ACu) { return; }
    }
    ctx->pc = 0x4826ACu;
label_4826ac:
    // 0x4826ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4826acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4826b0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4826b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x4826b4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4826b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4826b8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4826b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4826bc: 0x2442f090  addiu       $v0, $v0, -0xF70
    ctx->pc = 0x4826bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963344));
    // 0x4826c0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4826c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4826c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4826c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4826c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4826c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4826cc: 0x2442f0c8  addiu       $v0, $v0, -0xF38
    ctx->pc = 0x4826ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963400));
    // 0x4826d0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4826d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4826d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4826d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4826d8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x4826d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x4826dc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4826dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4826e0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x4826e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x4826e4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x4826e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x4826e8: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4826E8u;
    SET_GPR_U32(ctx, 31, 0x4826F0u);
    ctx->pc = 0x4826ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4826E8u;
            // 0x4826ec: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4826F0u; }
        if (ctx->pc != 0x4826F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4826F0u; }
        if (ctx->pc != 0x4826F0u) { return; }
    }
    ctx->pc = 0x4826F0u;
label_4826f0:
    // 0x4826f0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4826f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4826f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4826f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4826f8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4826F8u;
    {
        const bool branch_taken_0x4826f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4826FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4826F8u;
            // 0x4826fc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4826f8) {
            ctx->pc = 0x482710u;
            goto label_482710;
        }
    }
    ctx->pc = 0x482700u;
    // 0x482700: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x482700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x482704: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x482704u;
    SET_GPR_U32(ctx, 31, 0x48270Cu);
    ctx->pc = 0x482708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482704u;
            // 0x482708: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48270Cu; }
        if (ctx->pc != 0x48270Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48270Cu; }
        if (ctx->pc != 0x48270Cu) { return; }
    }
    ctx->pc = 0x48270Cu;
label_48270c:
    // 0x48270c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48270cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_482710:
    // 0x482710: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x482710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x482714: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x482714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x482718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48271c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48271cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482720: 0x3e00008  jr          $ra
    ctx->pc = 0x482720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482720u;
            // 0x482724: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x482728u;
    // 0x482728: 0x0  nop
    ctx->pc = 0x482728u;
    // NOP
    // 0x48272c: 0x0  nop
    ctx->pc = 0x48272cu;
    // NOP
label_482730:
    // 0x482730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x482730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x482734: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x482734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x482738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x482738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48273c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48273cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x482740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x482740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482744: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x482744u;
    {
        const bool branch_taken_0x482744 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x482748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482744u;
            // 0x482748: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482744) {
            ctx->pc = 0x4827E4u;
            goto label_4827e4;
        }
    }
    ctx->pc = 0x48274Cu;
    // 0x48274c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x48274cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x482750: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x482750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x482754: 0x2463f140  addiu       $v1, $v1, -0xEC0
    ctx->pc = 0x482754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963520));
    // 0x482758: 0x2442f178  addiu       $v0, $v0, -0xE88
    ctx->pc = 0x482758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963576));
    // 0x48275c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x48275cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x482760: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x482760u;
    {
        const bool branch_taken_0x482760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x482764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482760u;
            // 0x482764: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482760) {
            ctx->pc = 0x4827CCu;
            goto label_4827cc;
        }
    }
    ctx->pc = 0x482768u;
    // 0x482768: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x482768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x48276c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x48276cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x482770: 0x2463f0f0  addiu       $v1, $v1, -0xF10
    ctx->pc = 0x482770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
    // 0x482774: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x482774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x482778: 0x2442f128  addiu       $v0, $v0, -0xED8
    ctx->pc = 0x482778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963496));
    // 0x48277c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x48277cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x482780: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x482780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x482784: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x482784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x482788: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x482788u;
    SET_GPR_U32(ctx, 31, 0x482790u);
    ctx->pc = 0x48278Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482788u;
            // 0x48278c: 0x24a52280  addiu       $a1, $a1, 0x2280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482790u; }
        if (ctx->pc != 0x482790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482790u; }
        if (ctx->pc != 0x482790u) { return; }
    }
    ctx->pc = 0x482790u;
label_482790:
    // 0x482790: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x482790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x482794: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x482794u;
    SET_GPR_U32(ctx, 31, 0x48279Cu);
    ctx->pc = 0x482798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482794u;
            // 0x482798: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48279Cu; }
        if (ctx->pc != 0x48279Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48279Cu; }
        if (ctx->pc != 0x48279Cu) { return; }
    }
    ctx->pc = 0x48279Cu;
label_48279c:
    // 0x48279c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x48279cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4827a0: 0xc120a18  jal         func_482860
    ctx->pc = 0x4827A0u;
    SET_GPR_U32(ctx, 31, 0x4827A8u);
    ctx->pc = 0x4827A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4827A0u;
            // 0x4827a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x482860u;
    if (runtime->hasFunction(0x482860u)) {
        auto targetFn = runtime->lookupFunction(0x482860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4827A8u; }
        if (ctx->pc != 0x4827A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00482860_0x482860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4827A8u; }
        if (ctx->pc != 0x4827A8u) { return; }
    }
    ctx->pc = 0x4827A8u;
label_4827a8:
    // 0x4827a8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4827a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4827ac: 0xc120a18  jal         func_482860
    ctx->pc = 0x4827ACu;
    SET_GPR_U32(ctx, 31, 0x4827B4u);
    ctx->pc = 0x4827B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4827ACu;
            // 0x4827b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x482860u;
    if (runtime->hasFunction(0x482860u)) {
        auto targetFn = runtime->lookupFunction(0x482860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4827B4u; }
        if (ctx->pc != 0x4827B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00482860_0x482860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4827B4u; }
        if (ctx->pc != 0x4827B4u) { return; }
    }
    ctx->pc = 0x4827B4u;
label_4827b4:
    // 0x4827b4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4827b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4827b8: 0xc120a00  jal         func_482800
    ctx->pc = 0x4827B8u;
    SET_GPR_U32(ctx, 31, 0x4827C0u);
    ctx->pc = 0x4827BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4827B8u;
            // 0x4827bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x482800u;
    if (runtime->hasFunction(0x482800u)) {
        auto targetFn = runtime->lookupFunction(0x482800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4827C0u; }
        if (ctx->pc != 0x4827C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00482800_0x482800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4827C0u; }
        if (ctx->pc != 0x4827C0u) { return; }
    }
    ctx->pc = 0x4827C0u;
label_4827c0:
    // 0x4827c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4827c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4827c4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4827C4u;
    SET_GPR_U32(ctx, 31, 0x4827CCu);
    ctx->pc = 0x4827C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4827C4u;
            // 0x4827c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4827CCu; }
        if (ctx->pc != 0x4827CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4827CCu; }
        if (ctx->pc != 0x4827CCu) { return; }
    }
    ctx->pc = 0x4827CCu;
label_4827cc:
    // 0x4827cc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4827ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4827d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4827d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4827d4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4827D4u;
    {
        const bool branch_taken_0x4827d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4827d4) {
            ctx->pc = 0x4827D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4827D4u;
            // 0x4827d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4827E8u;
            goto label_4827e8;
        }
    }
    ctx->pc = 0x4827DCu;
    // 0x4827dc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4827DCu;
    SET_GPR_U32(ctx, 31, 0x4827E4u);
    ctx->pc = 0x4827E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4827DCu;
            // 0x4827e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4827E4u; }
        if (ctx->pc != 0x4827E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4827E4u; }
        if (ctx->pc != 0x4827E4u) { return; }
    }
    ctx->pc = 0x4827E4u;
label_4827e4:
    // 0x4827e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4827e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4827e8:
    // 0x4827e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4827e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4827ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4827ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4827f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4827f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4827f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4827F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4827F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4827F4u;
            // 0x4827f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4827FCu;
    // 0x4827fc: 0x0  nop
    ctx->pc = 0x4827fcu;
    // NOP
}
