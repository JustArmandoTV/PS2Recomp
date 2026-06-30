#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D44F0
// Address: 0x4d44f0 - 0x4d4690
void sub_004D44F0_0x4d44f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D44F0_0x4d44f0");
#endif

    switch (ctx->pc) {
        case 0x4d450cu: goto label_4d450c;
        case 0x4d452cu: goto label_4d452c;
        case 0x4d4584u: goto label_4d4584;
        case 0x4d45a4u: goto label_4d45a4;
        case 0x4d45c0u: goto label_4d45c0;
        case 0x4d4620u: goto label_4d4620;
        case 0x4d462cu: goto label_4d462c;
        case 0x4d4638u: goto label_4d4638;
        case 0x4d4644u: goto label_4d4644;
        case 0x4d4650u: goto label_4d4650;
        case 0x4d465cu: goto label_4d465c;
        case 0x4d4674u: goto label_4d4674;
        default: break;
    }

    ctx->pc = 0x4d44f0u;

    // 0x4d44f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d44f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d44f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4d44f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4d44f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d44f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d44fc: 0x34468702  ori         $a2, $v0, 0x8702
    ctx->pc = 0x4d44fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34562);
    // 0x4d4500: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d4500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d4504: 0xc1351dc  jal         func_4D4770
    ctx->pc = 0x4D4504u;
    SET_GPR_U32(ctx, 31, 0x4D450Cu);
    ctx->pc = 0x4D4508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4504u;
            // 0x4d4508: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D4770u;
    if (runtime->hasFunction(0x4D4770u)) {
        auto targetFn = runtime->lookupFunction(0x4D4770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D450Cu; }
        if (ctx->pc != 0x4D450Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D4770_0x4d4770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D450Cu; }
        if (ctx->pc != 0x4D450Cu) { return; }
    }
    ctx->pc = 0x4D450Cu;
label_4d450c:
    // 0x4d450c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d450cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d4510: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d4510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d4514: 0x246324c0  addiu       $v1, $v1, 0x24C0
    ctx->pc = 0x4d4514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9408));
    // 0x4d4518: 0x244224f8  addiu       $v0, $v0, 0x24F8
    ctx->pc = 0x4d4518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9464));
    // 0x4d451c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d451cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d4520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d4520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4524: 0xc1351d8  jal         func_4D4760
    ctx->pc = 0x4D4524u;
    SET_GPR_U32(ctx, 31, 0x4D452Cu);
    ctx->pc = 0x4D4528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4524u;
            // 0x4d4528: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D4760u;
    if (runtime->hasFunction(0x4D4760u)) {
        auto targetFn = runtime->lookupFunction(0x4D4760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D452Cu; }
        if (ctx->pc != 0x4D452Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D4760_0x4d4760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D452Cu; }
        if (ctx->pc != 0x4D452Cu) { return; }
    }
    ctx->pc = 0x4D452Cu;
label_4d452c:
    // 0x4d452c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4d452cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4d4530: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4d4530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4d4534: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d4534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d4538: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4d4538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4d453c: 0x24422410  addiu       $v0, $v0, 0x2410
    ctx->pc = 0x4d453cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9232));
    // 0x4d4540: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4d4540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4d4544: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d4544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4d4548: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d4548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d454c: 0x24422448  addiu       $v0, $v0, 0x2448
    ctx->pc = 0x4d454cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9288));
    // 0x4d4550: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4d4550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4d4554: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d4554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4d4558: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x4d4558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x4d455c: 0xc4407d40  lwc1        $f0, 0x7D40($v0)
    ctx->pc = 0x4d455cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d4560: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d4560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4d4564: 0xc4417d44  lwc1        $f1, 0x7D44($v0)
    ctx->pc = 0x4d4564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d4568: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4d4568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4d456c: 0xc4607d48  lwc1        $f0, 0x7D48($v1)
    ctx->pc = 0x4d456cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d4570: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d4570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4d4574: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4d4574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4d4578: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x4d4578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4d457c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4D457Cu;
    SET_GPR_U32(ctx, 31, 0x4D4584u);
    ctx->pc = 0x4D4580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D457Cu;
            // 0x4d4580: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4584u; }
        if (ctx->pc != 0x4D4584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4584u; }
        if (ctx->pc != 0x4D4584u) { return; }
    }
    ctx->pc = 0x4D4584u;
label_4d4584:
    // 0x4d4584: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4d4584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4d4588: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d4588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d458c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D458Cu;
    {
        const bool branch_taken_0x4d458c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D4590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D458Cu;
            // 0x4d4590: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d458c) {
            ctx->pc = 0x4D45A8u;
            goto label_4d45a8;
        }
    }
    ctx->pc = 0x4D4594u;
    // 0x4d4594: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4d4594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x4d4598: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4d4598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d459c: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x4D459Cu;
    SET_GPR_U32(ctx, 31, 0x4D45A4u);
    ctx->pc = 0x4D45A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D459Cu;
            // 0x4d45a0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D45A4u; }
        if (ctx->pc != 0x4D45A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D45A4u; }
        if (ctx->pc != 0x4D45A4u) { return; }
    }
    ctx->pc = 0x4D45A4u;
label_4d45a4:
    // 0x4d45a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d45a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d45a8:
    // 0x4d45a8: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4d45a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x4d45ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d45acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d45b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d45b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d45b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d45b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d45b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4D45B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D45BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D45B8u;
            // 0x4d45bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D45C0u;
label_4d45c0:
    // 0x4d45c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d45c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d45c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d45c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4d45c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d45c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4d45cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d45ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d45d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d45d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d45d4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4D45D4u;
    {
        const bool branch_taken_0x4d45d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D45D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D45D4u;
            // 0x4d45d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d45d4) {
            ctx->pc = 0x4D4674u;
            goto label_4d4674;
        }
    }
    ctx->pc = 0x4D45DCu;
    // 0x4d45dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d45dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d45e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d45e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d45e4: 0x246324c0  addiu       $v1, $v1, 0x24C0
    ctx->pc = 0x4d45e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9408));
    // 0x4d45e8: 0x244224f8  addiu       $v0, $v0, 0x24F8
    ctx->pc = 0x4d45e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9464));
    // 0x4d45ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d45ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d45f0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4D45F0u;
    {
        const bool branch_taken_0x4d45f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D45F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D45F0u;
            // 0x4d45f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d45f0) {
            ctx->pc = 0x4D465Cu;
            goto label_4d465c;
        }
    }
    ctx->pc = 0x4D45F8u;
    // 0x4d45f8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d45f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d45fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d45fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d4600: 0x24632470  addiu       $v1, $v1, 0x2470
    ctx->pc = 0x4d4600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9328));
    // 0x4d4604: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4d4604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
    // 0x4d4608: 0x244224a8  addiu       $v0, $v0, 0x24A8
    ctx->pc = 0x4d4608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9384));
    // 0x4d460c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d460cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d4610: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4d4610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4d4614: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4d4614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4d4618: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4D4618u;
    SET_GPR_U32(ctx, 31, 0x4D4620u);
    ctx->pc = 0x4D461Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4618u;
            // 0x4d461c: 0x24a541b0  addiu       $a1, $a1, 0x41B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4620u; }
        if (ctx->pc != 0x4D4620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4620u; }
        if (ctx->pc != 0x4D4620u) { return; }
    }
    ctx->pc = 0x4D4620u;
label_4d4620:
    // 0x4d4620: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4d4620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4d4624: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x4D4624u;
    SET_GPR_U32(ctx, 31, 0x4D462Cu);
    ctx->pc = 0x4D4628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4624u;
            // 0x4d4628: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D462Cu; }
        if (ctx->pc != 0x4D462Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D462Cu; }
        if (ctx->pc != 0x4D462Cu) { return; }
    }
    ctx->pc = 0x4D462Cu;
label_4d462c:
    // 0x4d462c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4d462cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4d4630: 0xc1351bc  jal         func_4D46F0
    ctx->pc = 0x4D4630u;
    SET_GPR_U32(ctx, 31, 0x4D4638u);
    ctx->pc = 0x4D4634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4630u;
            // 0x4d4634: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D46F0u;
    if (runtime->hasFunction(0x4D46F0u)) {
        auto targetFn = runtime->lookupFunction(0x4D46F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4638u; }
        if (ctx->pc != 0x4D4638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D46F0_0x4d46f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4638u; }
        if (ctx->pc != 0x4D4638u) { return; }
    }
    ctx->pc = 0x4D4638u;
label_4d4638:
    // 0x4d4638: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4d4638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4d463c: 0xc1351bc  jal         func_4D46F0
    ctx->pc = 0x4D463Cu;
    SET_GPR_U32(ctx, 31, 0x4D4644u);
    ctx->pc = 0x4D4640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D463Cu;
            // 0x4d4640: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D46F0u;
    if (runtime->hasFunction(0x4D46F0u)) {
        auto targetFn = runtime->lookupFunction(0x4D46F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4644u; }
        if (ctx->pc != 0x4D4644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D46F0_0x4d46f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4644u; }
        if (ctx->pc != 0x4D4644u) { return; }
    }
    ctx->pc = 0x4D4644u;
label_4d4644:
    // 0x4d4644: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4d4644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4d4648: 0xc1351a4  jal         func_4D4690
    ctx->pc = 0x4D4648u;
    SET_GPR_U32(ctx, 31, 0x4D4650u);
    ctx->pc = 0x4D464Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4648u;
            // 0x4d464c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D4690u;
    if (runtime->hasFunction(0x4D4690u)) {
        auto targetFn = runtime->lookupFunction(0x4D4690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4650u; }
        if (ctx->pc != 0x4D4650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D4690_0x4d4690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4650u; }
        if (ctx->pc != 0x4D4650u) { return; }
    }
    ctx->pc = 0x4D4650u;
label_4d4650:
    // 0x4d4650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d4650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4654: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4D4654u;
    SET_GPR_U32(ctx, 31, 0x4D465Cu);
    ctx->pc = 0x4D4658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4654u;
            // 0x4d4658: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D465Cu; }
        if (ctx->pc != 0x4D465Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D465Cu; }
        if (ctx->pc != 0x4D465Cu) { return; }
    }
    ctx->pc = 0x4D465Cu;
label_4d465c:
    // 0x4d465c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4d465cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4d4660: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d4660u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4d4664: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D4664u;
    {
        const bool branch_taken_0x4d4664 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d4664) {
            ctx->pc = 0x4D4668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4664u;
            // 0x4d4668: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D4678u;
            goto label_4d4678;
        }
    }
    ctx->pc = 0x4D466Cu;
    // 0x4d466c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4D466Cu;
    SET_GPR_U32(ctx, 31, 0x4D4674u);
    ctx->pc = 0x4D4670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D466Cu;
            // 0x4d4670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4674u; }
        if (ctx->pc != 0x4D4674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4674u; }
        if (ctx->pc != 0x4D4674u) { return; }
    }
    ctx->pc = 0x4D4674u;
label_4d4674:
    // 0x4d4674: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d4674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d4678:
    // 0x4d4678: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d4678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d467c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d467cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d4680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d4680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d4684: 0x3e00008  jr          $ra
    ctx->pc = 0x4D4684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D4688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4684u;
            // 0x4d4688: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D468Cu;
    // 0x4d468c: 0x0  nop
    ctx->pc = 0x4d468cu;
    // NOP
}
