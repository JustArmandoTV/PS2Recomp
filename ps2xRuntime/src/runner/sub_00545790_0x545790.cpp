#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00545790
// Address: 0x545790 - 0x5458d0
void sub_00545790_0x545790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00545790_0x545790");
#endif

    switch (ctx->pc) {
        case 0x5457acu: goto label_5457ac;
        case 0x5457ccu: goto label_5457cc;
        case 0x545800u: goto label_545800;
        case 0x545860u: goto label_545860;
        case 0x54586cu: goto label_54586c;
        case 0x545878u: goto label_545878;
        case 0x545884u: goto label_545884;
        case 0x545890u: goto label_545890;
        case 0x54589cu: goto label_54589c;
        case 0x5458b4u: goto label_5458b4;
        default: break;
    }

    ctx->pc = 0x545790u;

    // 0x545790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x545790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x545794: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x545794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x545798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x545798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x54579c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x54579cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x5457a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5457a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5457a4: 0xc15166c  jal         func_5459B0
    ctx->pc = 0x5457A4u;
    SET_GPR_U32(ctx, 31, 0x5457ACu);
    ctx->pc = 0x5457A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5457A4u;
            // 0x5457a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5459B0u;
    if (runtime->hasFunction(0x5459B0u)) {
        auto targetFn = runtime->lookupFunction(0x5459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5457ACu; }
        if (ctx->pc != 0x5457ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005459B0_0x5459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5457ACu; }
        if (ctx->pc != 0x5457ACu) { return; }
    }
    ctx->pc = 0x5457ACu;
label_5457ac:
    // 0x5457ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5457acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x5457b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5457b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5457b4: 0x24637820  addiu       $v1, $v1, 0x7820
    ctx->pc = 0x5457b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30752));
    // 0x5457b8: 0x24427858  addiu       $v0, $v0, 0x7858
    ctx->pc = 0x5457b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30808));
    // 0x5457bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5457bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5457c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5457c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5457c4: 0xc151668  jal         func_5459A0
    ctx->pc = 0x5457C4u;
    SET_GPR_U32(ctx, 31, 0x5457CCu);
    ctx->pc = 0x5457C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5457C4u;
            // 0x5457c8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5459A0u;
    if (runtime->hasFunction(0x5459A0u)) {
        auto targetFn = runtime->lookupFunction(0x5459A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5457CCu; }
        if (ctx->pc != 0x5457CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005459A0_0x5459a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5457CCu; }
        if (ctx->pc != 0x5457CCu) { return; }
    }
    ctx->pc = 0x5457CCu;
label_5457cc:
    // 0x5457cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x5457ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x5457d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5457d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5457d4: 0x244276c0  addiu       $v0, $v0, 0x76C0
    ctx->pc = 0x5457d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30400));
    // 0x5457d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x5457d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x5457dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5457dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5457e0: 0x244276f8  addiu       $v0, $v0, 0x76F8
    ctx->pc = 0x5457e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30456));
    // 0x5457e4: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x5457e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x5457e8: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x5457e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x5457ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5457ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5457f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5457f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5457f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5457f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5457f8: 0x3e00008  jr          $ra
    ctx->pc = 0x5457F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5457FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5457F8u;
            // 0x5457fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x545800u;
label_545800:
    // 0x545800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x545800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x545804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x545804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x545808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x545808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x54580c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x54580cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x545810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x545810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x545814: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x545814u;
    {
        const bool branch_taken_0x545814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x545818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545814u;
            // 0x545818: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x545814) {
            ctx->pc = 0x5458B4u;
            goto label_5458b4;
        }
    }
    ctx->pc = 0x54581Cu;
    // 0x54581c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x54581cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x545820: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x545820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x545824: 0x24637820  addiu       $v1, $v1, 0x7820
    ctx->pc = 0x545824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30752));
    // 0x545828: 0x24427858  addiu       $v0, $v0, 0x7858
    ctx->pc = 0x545828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30808));
    // 0x54582c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x54582cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x545830: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x545830u;
    {
        const bool branch_taken_0x545830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x545834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545830u;
            // 0x545834: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x545830) {
            ctx->pc = 0x54589Cu;
            goto label_54589c;
        }
    }
    ctx->pc = 0x545838u;
    // 0x545838: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x545838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x54583c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x54583cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x545840: 0x246377d0  addiu       $v1, $v1, 0x77D0
    ctx->pc = 0x545840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30672));
    // 0x545844: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x545844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x545848: 0x24427808  addiu       $v0, $v0, 0x7808
    ctx->pc = 0x545848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30728));
    // 0x54584c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x54584cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x545850: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x545850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x545854: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x545854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x545858: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x545858u;
    SET_GPR_U32(ctx, 31, 0x545860u);
    ctx->pc = 0x54585Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545858u;
            // 0x54585c: 0x24a55460  addiu       $a1, $a1, 0x5460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545860u; }
        if (ctx->pc != 0x545860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545860u; }
        if (ctx->pc != 0x545860u) { return; }
    }
    ctx->pc = 0x545860u;
label_545860:
    // 0x545860: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x545860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x545864: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x545864u;
    SET_GPR_U32(ctx, 31, 0x54586Cu);
    ctx->pc = 0x545868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545864u;
            // 0x545868: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54586Cu; }
        if (ctx->pc != 0x54586Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54586Cu; }
        if (ctx->pc != 0x54586Cu) { return; }
    }
    ctx->pc = 0x54586Cu;
label_54586c:
    // 0x54586c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x54586cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x545870: 0xc15164c  jal         func_545930
    ctx->pc = 0x545870u;
    SET_GPR_U32(ctx, 31, 0x545878u);
    ctx->pc = 0x545874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545870u;
            // 0x545874: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x545930u;
    if (runtime->hasFunction(0x545930u)) {
        auto targetFn = runtime->lookupFunction(0x545930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545878u; }
        if (ctx->pc != 0x545878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00545930_0x545930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545878u; }
        if (ctx->pc != 0x545878u) { return; }
    }
    ctx->pc = 0x545878u;
label_545878:
    // 0x545878: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x545878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x54587c: 0xc15164c  jal         func_545930
    ctx->pc = 0x54587Cu;
    SET_GPR_U32(ctx, 31, 0x545884u);
    ctx->pc = 0x545880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54587Cu;
            // 0x545880: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x545930u;
    if (runtime->hasFunction(0x545930u)) {
        auto targetFn = runtime->lookupFunction(0x545930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545884u; }
        if (ctx->pc != 0x545884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00545930_0x545930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545884u; }
        if (ctx->pc != 0x545884u) { return; }
    }
    ctx->pc = 0x545884u;
label_545884:
    // 0x545884: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x545884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x545888: 0xc151634  jal         func_5458D0
    ctx->pc = 0x545888u;
    SET_GPR_U32(ctx, 31, 0x545890u);
    ctx->pc = 0x54588Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545888u;
            // 0x54588c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5458D0u;
    if (runtime->hasFunction(0x5458D0u)) {
        auto targetFn = runtime->lookupFunction(0x5458D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545890u; }
        if (ctx->pc != 0x545890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005458D0_0x5458d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545890u; }
        if (ctx->pc != 0x545890u) { return; }
    }
    ctx->pc = 0x545890u;
label_545890:
    // 0x545890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x545890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x545894: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x545894u;
    SET_GPR_U32(ctx, 31, 0x54589Cu);
    ctx->pc = 0x545898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545894u;
            // 0x545898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54589Cu; }
        if (ctx->pc != 0x54589Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54589Cu; }
        if (ctx->pc != 0x54589Cu) { return; }
    }
    ctx->pc = 0x54589Cu;
label_54589c:
    // 0x54589c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x54589cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x5458a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5458a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x5458a4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5458A4u;
    {
        const bool branch_taken_0x5458a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5458a4) {
            ctx->pc = 0x5458A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5458A4u;
            // 0x5458a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5458B8u;
            goto label_5458b8;
        }
    }
    ctx->pc = 0x5458ACu;
    // 0x5458ac: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x5458ACu;
    SET_GPR_U32(ctx, 31, 0x5458B4u);
    ctx->pc = 0x5458B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5458ACu;
            // 0x5458b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5458B4u; }
        if (ctx->pc != 0x5458B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5458B4u; }
        if (ctx->pc != 0x5458B4u) { return; }
    }
    ctx->pc = 0x5458B4u;
label_5458b4:
    // 0x5458b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5458b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5458b8:
    // 0x5458b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5458b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5458bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5458bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5458c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5458c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5458c4: 0x3e00008  jr          $ra
    ctx->pc = 0x5458C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5458C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5458C4u;
            // 0x5458c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5458CCu;
    // 0x5458cc: 0x0  nop
    ctx->pc = 0x5458ccu;
    // NOP
}
