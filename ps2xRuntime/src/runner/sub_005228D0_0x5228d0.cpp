#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005228D0
// Address: 0x5228d0 - 0x522a70
void sub_005228D0_0x5228d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005228D0_0x5228d0");
#endif

    switch (ctx->pc) {
        case 0x5228ecu: goto label_5228ec;
        case 0x52290cu: goto label_52290c;
        case 0x522964u: goto label_522964;
        case 0x522984u: goto label_522984;
        case 0x5229a0u: goto label_5229a0;
        case 0x522a00u: goto label_522a00;
        case 0x522a0cu: goto label_522a0c;
        case 0x522a18u: goto label_522a18;
        case 0x522a24u: goto label_522a24;
        case 0x522a30u: goto label_522a30;
        case 0x522a3cu: goto label_522a3c;
        case 0x522a54u: goto label_522a54;
        default: break;
    }

    ctx->pc = 0x5228d0u;

    // 0x5228d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5228d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5228d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x5228d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x5228d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5228d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x5228dc: 0x34468702  ori         $a2, $v0, 0x8702
    ctx->pc = 0x5228dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34562);
    // 0x5228e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5228e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5228e4: 0xc148ad4  jal         func_522B50
    ctx->pc = 0x5228E4u;
    SET_GPR_U32(ctx, 31, 0x5228ECu);
    ctx->pc = 0x5228E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5228E4u;
            // 0x5228e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522B50u;
    if (runtime->hasFunction(0x522B50u)) {
        auto targetFn = runtime->lookupFunction(0x522B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5228ECu; }
        if (ctx->pc != 0x5228ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522B50_0x522b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5228ECu; }
        if (ctx->pc != 0x5228ECu) { return; }
    }
    ctx->pc = 0x5228ECu;
label_5228ec:
    // 0x5228ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5228ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x5228f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5228f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5228f4: 0x24636010  addiu       $v1, $v1, 0x6010
    ctx->pc = 0x5228f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24592));
    // 0x5228f8: 0x24426048  addiu       $v0, $v0, 0x6048
    ctx->pc = 0x5228f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24648));
    // 0x5228fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5228fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x522900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x522900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x522904: 0xc148ad0  jal         func_522B40
    ctx->pc = 0x522904u;
    SET_GPR_U32(ctx, 31, 0x52290Cu);
    ctx->pc = 0x522908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522904u;
            // 0x522908: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522B40u;
    if (runtime->hasFunction(0x522B40u)) {
        auto targetFn = runtime->lookupFunction(0x522B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52290Cu; }
        if (ctx->pc != 0x52290Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522B40_0x522b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52290Cu; }
        if (ctx->pc != 0x52290Cu) { return; }
    }
    ctx->pc = 0x52290Cu;
label_52290c:
    // 0x52290c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x52290cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x522910: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x522910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x522914: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x522914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x522918: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x522918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x52291c: 0x24425f60  addiu       $v0, $v0, 0x5F60
    ctx->pc = 0x52291cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24416));
    // 0x522920: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x522920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x522924: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x522924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x522928: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x522928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52292c: 0x24425f98  addiu       $v0, $v0, 0x5F98
    ctx->pc = 0x52292cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24472));
    // 0x522930: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x522930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x522934: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x522934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x522938: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x522938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x52293c: 0xc4407d40  lwc1        $f0, 0x7D40($v0)
    ctx->pc = 0x52293cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x522940: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x522940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x522944: 0xc4417d44  lwc1        $f1, 0x7D44($v0)
    ctx->pc = 0x522944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x522948: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x522948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x52294c: 0xc4607d48  lwc1        $f0, 0x7D48($v1)
    ctx->pc = 0x52294cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x522950: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x522950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x522954: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x522954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x522958: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x522958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x52295c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x52295Cu;
    SET_GPR_U32(ctx, 31, 0x522964u);
    ctx->pc = 0x522960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52295Cu;
            // 0x522960: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522964u; }
        if (ctx->pc != 0x522964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522964u; }
        if (ctx->pc != 0x522964u) { return; }
    }
    ctx->pc = 0x522964u;
label_522964:
    // 0x522964: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x522964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x522968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x522968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52296c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x52296Cu;
    {
        const bool branch_taken_0x52296c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x522970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52296Cu;
            // 0x522970: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52296c) {
            ctx->pc = 0x522988u;
            goto label_522988;
        }
    }
    ctx->pc = 0x522974u;
    // 0x522974: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x522974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x522978: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x522978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x52297c: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x52297Cu;
    SET_GPR_U32(ctx, 31, 0x522984u);
    ctx->pc = 0x522980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52297Cu;
            // 0x522980: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522984u; }
        if (ctx->pc != 0x522984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522984u; }
        if (ctx->pc != 0x522984u) { return; }
    }
    ctx->pc = 0x522984u;
label_522984:
    // 0x522984: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x522984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_522988:
    // 0x522988: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x522988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x52298c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x52298cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x522990: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x522990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x522994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x522994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x522998: 0x3e00008  jr          $ra
    ctx->pc = 0x522998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52299Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522998u;
            // 0x52299c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5229A0u;
label_5229a0:
    // 0x5229a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5229a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5229a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5229a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x5229a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5229a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x5229ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5229acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5229b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5229b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5229b4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x5229B4u;
    {
        const bool branch_taken_0x5229b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5229B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5229B4u;
            // 0x5229b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5229b4) {
            ctx->pc = 0x522A54u;
            goto label_522a54;
        }
    }
    ctx->pc = 0x5229BCu;
    // 0x5229bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5229bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x5229c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5229c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5229c4: 0x24636010  addiu       $v1, $v1, 0x6010
    ctx->pc = 0x5229c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24592));
    // 0x5229c8: 0x24426048  addiu       $v0, $v0, 0x6048
    ctx->pc = 0x5229c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24648));
    // 0x5229cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5229ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5229d0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x5229D0u;
    {
        const bool branch_taken_0x5229d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5229D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5229D0u;
            // 0x5229d4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5229d0) {
            ctx->pc = 0x522A3Cu;
            goto label_522a3c;
        }
    }
    ctx->pc = 0x5229D8u;
    // 0x5229d8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5229d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x5229dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5229dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5229e0: 0x24635fc0  addiu       $v1, $v1, 0x5FC0
    ctx->pc = 0x5229e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24512));
    // 0x5229e4: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x5229e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
    // 0x5229e8: 0x24425ff8  addiu       $v0, $v0, 0x5FF8
    ctx->pc = 0x5229e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24568));
    // 0x5229ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5229ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5229f0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x5229f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x5229f4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x5229f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x5229f8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x5229F8u;
    SET_GPR_U32(ctx, 31, 0x522A00u);
    ctx->pc = 0x5229FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5229F8u;
            // 0x5229fc: 0x24a52560  addiu       $a1, $a1, 0x2560 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522A00u; }
        if (ctx->pc != 0x522A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522A00u; }
        if (ctx->pc != 0x522A00u) { return; }
    }
    ctx->pc = 0x522A00u;
label_522a00:
    // 0x522a00: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x522a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x522a04: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x522A04u;
    SET_GPR_U32(ctx, 31, 0x522A0Cu);
    ctx->pc = 0x522A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522A04u;
            // 0x522a08: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522A0Cu; }
        if (ctx->pc != 0x522A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522A0Cu; }
        if (ctx->pc != 0x522A0Cu) { return; }
    }
    ctx->pc = 0x522A0Cu;
label_522a0c:
    // 0x522a0c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x522a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x522a10: 0xc148ab4  jal         func_522AD0
    ctx->pc = 0x522A10u;
    SET_GPR_U32(ctx, 31, 0x522A18u);
    ctx->pc = 0x522A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522A10u;
            // 0x522a14: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522AD0u;
    if (runtime->hasFunction(0x522AD0u)) {
        auto targetFn = runtime->lookupFunction(0x522AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522A18u; }
        if (ctx->pc != 0x522A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522AD0_0x522ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522A18u; }
        if (ctx->pc != 0x522A18u) { return; }
    }
    ctx->pc = 0x522A18u;
label_522a18:
    // 0x522a18: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x522a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x522a1c: 0xc148ab4  jal         func_522AD0
    ctx->pc = 0x522A1Cu;
    SET_GPR_U32(ctx, 31, 0x522A24u);
    ctx->pc = 0x522A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522A1Cu;
            // 0x522a20: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522AD0u;
    if (runtime->hasFunction(0x522AD0u)) {
        auto targetFn = runtime->lookupFunction(0x522AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522A24u; }
        if (ctx->pc != 0x522A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522AD0_0x522ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522A24u; }
        if (ctx->pc != 0x522A24u) { return; }
    }
    ctx->pc = 0x522A24u;
label_522a24:
    // 0x522a24: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x522a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x522a28: 0xc148a9c  jal         func_522A70
    ctx->pc = 0x522A28u;
    SET_GPR_U32(ctx, 31, 0x522A30u);
    ctx->pc = 0x522A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522A28u;
            // 0x522a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522A70u;
    if (runtime->hasFunction(0x522A70u)) {
        auto targetFn = runtime->lookupFunction(0x522A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522A30u; }
        if (ctx->pc != 0x522A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522A70_0x522a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522A30u; }
        if (ctx->pc != 0x522A30u) { return; }
    }
    ctx->pc = 0x522A30u;
label_522a30:
    // 0x522a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x522a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x522a34: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x522A34u;
    SET_GPR_U32(ctx, 31, 0x522A3Cu);
    ctx->pc = 0x522A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522A34u;
            // 0x522a38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522A3Cu; }
        if (ctx->pc != 0x522A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522A3Cu; }
        if (ctx->pc != 0x522A3Cu) { return; }
    }
    ctx->pc = 0x522A3Cu;
label_522a3c:
    // 0x522a3c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x522a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x522a40: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x522a40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x522a44: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x522A44u;
    {
        const bool branch_taken_0x522a44 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x522a44) {
            ctx->pc = 0x522A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x522A44u;
            // 0x522a48: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x522A58u;
            goto label_522a58;
        }
    }
    ctx->pc = 0x522A4Cu;
    // 0x522a4c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x522A4Cu;
    SET_GPR_U32(ctx, 31, 0x522A54u);
    ctx->pc = 0x522A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522A4Cu;
            // 0x522a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522A54u; }
        if (ctx->pc != 0x522A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522A54u; }
        if (ctx->pc != 0x522A54u) { return; }
    }
    ctx->pc = 0x522A54u;
label_522a54:
    // 0x522a54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x522a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_522a58:
    // 0x522a58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x522a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x522a5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x522a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x522a60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x522a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x522a64: 0x3e00008  jr          $ra
    ctx->pc = 0x522A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x522A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522A64u;
            // 0x522a68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x522A6Cu;
    // 0x522a6c: 0x0  nop
    ctx->pc = 0x522a6cu;
    // NOP
}
