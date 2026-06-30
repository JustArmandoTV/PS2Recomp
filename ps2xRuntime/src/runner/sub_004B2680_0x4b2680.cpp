#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B2680
// Address: 0x4b2680 - 0x4b2890
void sub_004B2680_0x4b2680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B2680_0x4b2680");
#endif

    switch (ctx->pc) {
        case 0x4b26b8u: goto label_4b26b8;
        case 0x4b26c8u: goto label_4b26c8;
        case 0x4b26e0u: goto label_4b26e0;
        case 0x4b26e8u: goto label_4b26e8;
        case 0x4b26f8u: goto label_4b26f8;
        case 0x4b285cu: goto label_4b285c;
        default: break;
    }

    ctx->pc = 0x4b2680u;

    // 0x4b2680: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4b2680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4b2684: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b2684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4b2688: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4b2688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4b268c: 0x24425a58  addiu       $v0, $v0, 0x5A58
    ctx->pc = 0x4b268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23128));
    // 0x4b2690: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4b2690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4b2694: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b2694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4b2698: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b2698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4b269c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b269cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b26a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4b26a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b26a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b26a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b26a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b26a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b26ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b26acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4b26b0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x4b26b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b26b4: 0xa0800554  sb          $zero, 0x554($a0)
    ctx->pc = 0x4b26b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1364), (uint8_t)GPR_U32(ctx, 0));
label_4b26b8:
    // 0x4b26b8: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x4b26b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x4b26bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b26bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b26c0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4B26C0u;
    SET_GPR_U32(ctx, 31, 0x4B26C8u);
    ctx->pc = 0x4B26C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B26C0u;
            // 0x4b26c4: 0x24060128  addiu       $a2, $zero, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B26C8u; }
        if (ctx->pc != 0x4B26C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B26C8u; }
        if (ctx->pc != 0x4B26C8u) { return; }
    }
    ctx->pc = 0x4B26C8u;
label_4b26c8:
    // 0x4b26c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4b26c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4b26cc: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x4b26ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4b26d0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4B26D0u;
    {
        const bool branch_taken_0x4b26d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B26D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B26D0u;
            // 0x4b26d4: 0x26310128  addiu       $s1, $s1, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b26d0) {
            ctx->pc = 0x4B26B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b26b8;
        }
    }
    ctx->pc = 0x4B26D8u;
    // 0x4b26d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b26d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b26dc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x4b26dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b26e0:
    // 0x4b26e0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4b26e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b26e4: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x4b26e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b26e8:
    // 0x4b26e8: 0x26640254  addiu       $a0, $s3, 0x254
    ctx->pc = 0x4b26e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 596));
    // 0x4b26ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b26ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b26f0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4B26F0u;
    SET_GPR_U32(ctx, 31, 0x4B26F8u);
    ctx->pc = 0x4B26F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B26F0u;
            // 0x4b26f4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B26F8u; }
        if (ctx->pc != 0x4B26F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B26F8u; }
        if (ctx->pc != 0x4B26F8u) { return; }
    }
    ctx->pc = 0x4B26F8u;
label_4b26f8:
    // 0x4b26f8: 0xae60025c  sw          $zero, 0x25C($s3)
    ctx->pc = 0x4b26f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 604), GPR_U32(ctx, 0));
    // 0x4b26fc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4b26fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x4b2700: 0xae600260  sw          $zero, 0x260($s3)
    ctx->pc = 0x4b2700u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 608), GPR_U32(ctx, 0));
    // 0x4b2704: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x4b2704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x4b2708: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4B2708u;
    {
        const bool branch_taken_0x4b2708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B270Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2708u;
            // 0x4b270c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2708) {
            ctx->pc = 0x4B26E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b26e8;
        }
    }
    ctx->pc = 0x4B2710u;
    // 0x4b2710: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4b2710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4b2714: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x4b2714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4b2718: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x4B2718u;
    {
        const bool branch_taken_0x4b2718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B271Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2718u;
            // 0x4b271c: 0x26520080  addiu       $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2718) {
            ctx->pc = 0x4B26E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b26e0;
        }
    }
    ctx->pc = 0x4B2720u;
    // 0x4b2720: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4b2720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4b2724: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b2724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b2728: 0xc4605858  lwc1        $f0, 0x5858($v1)
    ctx->pc = 0x4b2728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 22616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b272c: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x4b272cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4b2730: 0x24425850  addiu       $v0, $v0, 0x5850
    ctx->pc = 0x4b2730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22608));
    // 0x4b2734: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4b2734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4b2738: 0xc4615854  lwc1        $f1, 0x5854($v1)
    ctx->pc = 0x4b2738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 22612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b273c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4b273cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4b2740: 0xc4625850  lwc1        $f2, 0x5850($v1)
    ctx->pc = 0x4b2740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 22608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b2744: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x4b2744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4b2748: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B2748u;
    {
        const bool branch_taken_0x4b2748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B274Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2748u;
            // 0x4b274c: 0x26060004  addiu       $a2, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2748) {
            ctx->pc = 0x4B2758u;
            goto label_4b2758;
        }
    }
    ctx->pc = 0x4B2750u;
    // 0x4b2750: 0x34830001  ori         $v1, $a0, 0x1
    ctx->pc = 0x4b2750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x4b2754: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x4b2754u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_4b2758:
    // 0x4b2758: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x4b2758u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x4b275c: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x4b275cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x4b2760: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x4b2760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x4b2764: 0x92030030  lbu         $v1, 0x30($s0)
    ctx->pc = 0x4b2764u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4b2768: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x4b2768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b276c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x4b276cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b2770: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x4b2770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b2774: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B2774u;
    {
        const bool branch_taken_0x4b2774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2774u;
            // 0x4b2778: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2774) {
            ctx->pc = 0x4B2784u;
            goto label_4b2784;
        }
    }
    ctx->pc = 0x4B277Cu;
    // 0x4b277c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b277cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b2780: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x4b2780u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_4b2784:
    // 0x4b2784: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x4b2784u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x4b2788: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4b2788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x4b278c: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x4b278cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x4b2790: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x4b2790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x4b2794: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x4b2794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x4b2798: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x4b2798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b279c: 0x92030030  lbu         $v1, 0x30($s0)
    ctx->pc = 0x4b279cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4b27a0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B27A0u;
    {
        const bool branch_taken_0x4b27a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B27A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B27A0u;
            // 0x4b27a4: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b27a0) {
            ctx->pc = 0x4B27B0u;
            goto label_4b27b0;
        }
    }
    ctx->pc = 0x4B27A8u;
    // 0x4b27a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b27a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b27ac: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x4b27acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_4b27b0:
    // 0x4b27b0: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x4b27b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x4b27b4: 0x92030030  lbu         $v1, 0x30($s0)
    ctx->pc = 0x4b27b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4b27b8: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x4b27b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b27bc: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x4b27bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b27c0: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x4b27c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b27c4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B27C4u;
    {
        const bool branch_taken_0x4b27c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B27C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B27C4u;
            // 0x4b27c8: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b27c4) {
            ctx->pc = 0x4B27D4u;
            goto label_4b27d4;
        }
    }
    ctx->pc = 0x4B27CCu;
    // 0x4b27cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b27ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b27d0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x4b27d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_4b27d4:
    // 0x4b27d4: 0xe4820018  swc1        $f2, 0x18($a0)
    ctx->pc = 0x4b27d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x4b27d8: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x4b27d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x4b27dc: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x4b27dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x4b27e0: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x4b27e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4b27e4: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x4b27e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b27e8: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x4b27e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b27ec: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x4b27ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b27f0: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x4b27f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x4b27f4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B27F4u;
    {
        const bool branch_taken_0x4b27f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B27F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B27F4u;
            // 0x4b27f8: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b27f4) {
            ctx->pc = 0x4B2804u;
            goto label_4b2804;
        }
    }
    ctx->pc = 0x4B27FCu;
    // 0x4b27fc: 0x34830002  ori         $v1, $a0, 0x2
    ctx->pc = 0x4b27fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x4b2800: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x4b2800u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_4b2804:
    // 0x4b2804: 0xe4a20010  swc1        $f2, 0x10($a1)
    ctx->pc = 0x4b2804u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x4b2808: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4b2808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x4b280c: 0xe4a10014  swc1        $f1, 0x14($a1)
    ctx->pc = 0x4b280cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x4b2810: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x4b2810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x4b2814: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x4b2814u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x4b2818: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x4b2818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b281c: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x4b281cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b2820: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x4b2820u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4b2824: 0xc4420048  lwc1        $f2, 0x48($v0)
    ctx->pc = 0x4b2824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b2828: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x4b2828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x4b282c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B282Cu;
    {
        const bool branch_taken_0x4b282c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B282Cu;
            // 0x4b2830: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b282c) {
            ctx->pc = 0x4B283Cu;
            goto label_4b283c;
        }
    }
    ctx->pc = 0x4B2834u;
    // 0x4b2834: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x4b2834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x4b2838: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x4b2838u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_4b283c:
    // 0x4b283c: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x4b283cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x4b2840: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b2840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4b2844: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x4b2844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x4b2848: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x4b2848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x4b284c: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x4b284cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x4b2850: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x4b2850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x4b2854: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x4B2854u;
    SET_GPR_U32(ctx, 31, 0x4B285Cu);
    ctx->pc = 0x4B2858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2854u;
            // 0x4b2858: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B285Cu; }
        if (ctx->pc != 0x4B285Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B285Cu; }
        if (ctx->pc != 0x4B285Cu) { return; }
    }
    ctx->pc = 0x4B285Cu;
label_4b285c:
    // 0x4b285c: 0xae02055c  sw          $v0, 0x55C($s0)
    ctx->pc = 0x4b285cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1372), GPR_U32(ctx, 2));
    // 0x4b2860: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b2860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2864: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4b2864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b2868: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4b2868u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b286c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b286cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b2870: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b2870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b2874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b2874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b2878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b2878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b287c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B287Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B287Cu;
            // 0x4b2880: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B2884u;
    // 0x4b2884: 0x0  nop
    ctx->pc = 0x4b2884u;
    // NOP
    // 0x4b2888: 0x0  nop
    ctx->pc = 0x4b2888u;
    // NOP
    // 0x4b288c: 0x0  nop
    ctx->pc = 0x4b288cu;
    // NOP
}
