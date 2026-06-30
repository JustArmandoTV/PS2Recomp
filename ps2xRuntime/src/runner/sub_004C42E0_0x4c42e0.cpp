#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C42E0
// Address: 0x4c42e0 - 0x4c4480
void sub_004C42E0_0x4c42e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C42E0_0x4c42e0");
#endif

    switch (ctx->pc) {
        case 0x4c42fcu: goto label_4c42fc;
        case 0x4c4304u: goto label_4c4304;
        case 0x4c4370u: goto label_4c4370;
        case 0x4c4390u: goto label_4c4390;
        case 0x4c43b0u: goto label_4c43b0;
        case 0x4c4410u: goto label_4c4410;
        case 0x4c441cu: goto label_4c441c;
        case 0x4c4428u: goto label_4c4428;
        case 0x4c4434u: goto label_4c4434;
        case 0x4c4440u: goto label_4c4440;
        case 0x4c444cu: goto label_4c444c;
        case 0x4c4464u: goto label_4c4464;
        default: break;
    }

    ctx->pc = 0x4c42e0u;

    // 0x4c42e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c42e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c42e4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4c42e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4c42e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c42e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c42ec: 0x3446869f  ori         $a2, $v0, 0x869F
    ctx->pc = 0x4c42ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
    // 0x4c42f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c42f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c42f4: 0xc131154  jal         func_4C4550
    ctx->pc = 0x4C42F4u;
    SET_GPR_U32(ctx, 31, 0x4C42FCu);
    ctx->pc = 0x4C42F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C42F4u;
            // 0x4c42f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C4550u;
    if (runtime->hasFunction(0x4C4550u)) {
        auto targetFn = runtime->lookupFunction(0x4C4550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C42FCu; }
        if (ctx->pc != 0x4C42FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C4550_0x4c4550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C42FCu; }
        if (ctx->pc != 0x4C42FCu) { return; }
    }
    ctx->pc = 0x4C42FCu;
label_4c42fc:
    // 0x4c42fc: 0xc0aed9c  jal         func_2BB670
    ctx->pc = 0x4C42FCu;
    SET_GPR_U32(ctx, 31, 0x4C4304u);
    ctx->pc = 0x4C4300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C42FCu;
            // 0x4c4300: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (runtime->hasFunction(0x2BB670u)) {
        auto targetFn = runtime->lookupFunction(0x2BB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4304u; }
        if (ctx->pc != 0x4C4304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB670_0x2bb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4304u; }
        if (ctx->pc != 0x4C4304u) { return; }
    }
    ctx->pc = 0x4C4304u;
label_4c4304:
    // 0x4c4304: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c4304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c4308: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c4308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c430c: 0x24421680  addiu       $v0, $v0, 0x1680
    ctx->pc = 0x4c430cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5760));
    // 0x4c4310: 0x246316b8  addiu       $v1, $v1, 0x16B8
    ctx->pc = 0x4c4310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5816));
    // 0x4c4314: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c4314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c4318: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4c4318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4c431c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c431cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c4320: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x4c4320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x4c4324: 0x24421520  addiu       $v0, $v0, 0x1520
    ctx->pc = 0x4c4324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5408));
    // 0x4c4328: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c4328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c432c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c432cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c4330: 0x24631558  addiu       $v1, $v1, 0x1558
    ctx->pc = 0x4c4330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5464));
    // 0x4c4334: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4c4334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4c4338: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x4c4338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x4c433c: 0xc44071e0  lwc1        $f0, 0x71E0($v0)
    ctx->pc = 0x4c433cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 29152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4c4340: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4c4340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4c4344: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x4c4344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x4c4348: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4c4348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4c434c: 0xc44171e4  lwc1        $f1, 0x71E4($v0)
    ctx->pc = 0x4c434cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 29156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4c4350: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4c4350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4c4354: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4c4354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4c4358: 0xc44071e8  lwc1        $f0, 0x71E8($v0)
    ctx->pc = 0x4c4358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 29160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4c435c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x4c435cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4c4360: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c4360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4c4364: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4c4364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4c4368: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4C4368u;
    SET_GPR_U32(ctx, 31, 0x4C4370u);
    ctx->pc = 0x4C436Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4368u;
            // 0x4c436c: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4370u; }
        if (ctx->pc != 0x4C4370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4370u; }
        if (ctx->pc != 0x4C4370u) { return; }
    }
    ctx->pc = 0x4C4370u;
label_4c4370:
    // 0x4c4370: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4c4370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4c4374: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c4374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4378: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C4378u;
    {
        const bool branch_taken_0x4c4378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C437Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4378u;
            // 0x4c437c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4378) {
            ctx->pc = 0x4C4394u;
            goto label_4c4394;
        }
    }
    ctx->pc = 0x4C4380u;
    // 0x4c4380: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4c4380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x4c4384: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4c4384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4c4388: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x4C4388u;
    SET_GPR_U32(ctx, 31, 0x4C4390u);
    ctx->pc = 0x4C438Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4388u;
            // 0x4c438c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4390u; }
        if (ctx->pc != 0x4C4390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4390u; }
        if (ctx->pc != 0x4C4390u) { return; }
    }
    ctx->pc = 0x4C4390u;
label_4c4390:
    // 0x4c4390: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c4390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c4394:
    // 0x4c4394: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4c4394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x4c4398: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c4398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c439c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c439cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c43a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c43a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c43a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4C43A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C43A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C43A4u;
            // 0x4c43a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C43ACu;
    // 0x4c43ac: 0x0  nop
    ctx->pc = 0x4c43acu;
    // NOP
label_4c43b0:
    // 0x4c43b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c43b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c43b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c43b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c43b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c43b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4c43bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c43bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c43c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c43c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c43c4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4C43C4u;
    {
        const bool branch_taken_0x4c43c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C43C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C43C4u;
            // 0x4c43c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c43c4) {
            ctx->pc = 0x4C4464u;
            goto label_4c4464;
        }
    }
    ctx->pc = 0x4C43CCu;
    // 0x4c43cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c43ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c43d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c43d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c43d4: 0x24631680  addiu       $v1, $v1, 0x1680
    ctx->pc = 0x4c43d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5760));
    // 0x4c43d8: 0x244216b8  addiu       $v0, $v0, 0x16B8
    ctx->pc = 0x4c43d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5816));
    // 0x4c43dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c43dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c43e0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4C43E0u;
    {
        const bool branch_taken_0x4c43e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C43E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C43E0u;
            // 0x4c43e4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c43e0) {
            ctx->pc = 0x4C444Cu;
            goto label_4c444c;
        }
    }
    ctx->pc = 0x4C43E8u;
    // 0x4c43e8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c43e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c43ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c43f0: 0x24631630  addiu       $v1, $v1, 0x1630
    ctx->pc = 0x4c43f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5680));
    // 0x4c43f4: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4c43f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x4c43f8: 0x24421668  addiu       $v0, $v0, 0x1668
    ctx->pc = 0x4c43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5736));
    // 0x4c43fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c43fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c4400: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4c4400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4c4404: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4c4404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4c4408: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4C4408u;
    SET_GPR_U32(ctx, 31, 0x4C4410u);
    ctx->pc = 0x4C440Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4408u;
            // 0x4c440c: 0x24a53fd0  addiu       $a1, $a1, 0x3FD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4410u; }
        if (ctx->pc != 0x4C4410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4410u; }
        if (ctx->pc != 0x4C4410u) { return; }
    }
    ctx->pc = 0x4C4410u;
label_4c4410:
    // 0x4c4410: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4c4410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4c4414: 0xc0aeba4  jal         func_2BAE90
    ctx->pc = 0x4C4414u;
    SET_GPR_U32(ctx, 31, 0x4C441Cu);
    ctx->pc = 0x4C4418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4414u;
            // 0x4c4418: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAE90u;
    if (runtime->hasFunction(0x2BAE90u)) {
        auto targetFn = runtime->lookupFunction(0x2BAE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C441Cu; }
        if (ctx->pc != 0x4C441Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAE90_0x2bae90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C441Cu; }
        if (ctx->pc != 0x4C441Cu) { return; }
    }
    ctx->pc = 0x4C441Cu;
label_4c441c:
    // 0x4c441c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4c441cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4c4420: 0xc131138  jal         func_4C44E0
    ctx->pc = 0x4C4420u;
    SET_GPR_U32(ctx, 31, 0x4C4428u);
    ctx->pc = 0x4C4424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4420u;
            // 0x4c4424: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C44E0u;
    if (runtime->hasFunction(0x4C44E0u)) {
        auto targetFn = runtime->lookupFunction(0x4C44E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4428u; }
        if (ctx->pc != 0x4C4428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C44E0_0x4c44e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4428u; }
        if (ctx->pc != 0x4C4428u) { return; }
    }
    ctx->pc = 0x4C4428u;
label_4c4428:
    // 0x4c4428: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4c4428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4c442c: 0xc131138  jal         func_4C44E0
    ctx->pc = 0x4C442Cu;
    SET_GPR_U32(ctx, 31, 0x4C4434u);
    ctx->pc = 0x4C4430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C442Cu;
            // 0x4c4430: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C44E0u;
    if (runtime->hasFunction(0x4C44E0u)) {
        auto targetFn = runtime->lookupFunction(0x4C44E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4434u; }
        if (ctx->pc != 0x4C4434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C44E0_0x4c44e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4434u; }
        if (ctx->pc != 0x4C4434u) { return; }
    }
    ctx->pc = 0x4C4434u;
label_4c4434:
    // 0x4c4434: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4c4434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4c4438: 0xc131120  jal         func_4C4480
    ctx->pc = 0x4C4438u;
    SET_GPR_U32(ctx, 31, 0x4C4440u);
    ctx->pc = 0x4C443Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4438u;
            // 0x4c443c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C4480u;
    if (runtime->hasFunction(0x4C4480u)) {
        auto targetFn = runtime->lookupFunction(0x4C4480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4440u; }
        if (ctx->pc != 0x4C4440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C4480_0x4c4480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4440u; }
        if (ctx->pc != 0x4C4440u) { return; }
    }
    ctx->pc = 0x4C4440u;
label_4c4440:
    // 0x4c4440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c4440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4444: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4C4444u;
    SET_GPR_U32(ctx, 31, 0x4C444Cu);
    ctx->pc = 0x4C4448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4444u;
            // 0x4c4448: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C444Cu; }
        if (ctx->pc != 0x4C444Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C444Cu; }
        if (ctx->pc != 0x4C444Cu) { return; }
    }
    ctx->pc = 0x4C444Cu;
label_4c444c:
    // 0x4c444c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4c444cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4c4450: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c4450u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4c4454: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C4454u;
    {
        const bool branch_taken_0x4c4454 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c4454) {
            ctx->pc = 0x4C4458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4454u;
            // 0x4c4458: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C4468u;
            goto label_4c4468;
        }
    }
    ctx->pc = 0x4C445Cu;
    // 0x4c445c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4C445Cu;
    SET_GPR_U32(ctx, 31, 0x4C4464u);
    ctx->pc = 0x4C4460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C445Cu;
            // 0x4c4460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4464u; }
        if (ctx->pc != 0x4C4464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4464u; }
        if (ctx->pc != 0x4C4464u) { return; }
    }
    ctx->pc = 0x4C4464u;
label_4c4464:
    // 0x4c4464: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c4464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c4468:
    // 0x4c4468: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c4468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c446c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c446cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c4470: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c4470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c4474: 0x3e00008  jr          $ra
    ctx->pc = 0x4C4474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4474u;
            // 0x4c4478: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C447Cu;
    // 0x4c447c: 0x0  nop
    ctx->pc = 0x4c447cu;
    // NOP
}
