#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D1380
// Address: 0x4d1380 - 0x4d1520
void sub_004D1380_0x4d1380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D1380_0x4d1380");
#endif

    switch (ctx->pc) {
        case 0x4d139cu: goto label_4d139c;
        case 0x4d13bcu: goto label_4d13bc;
        case 0x4d1414u: goto label_4d1414;
        case 0x4d1434u: goto label_4d1434;
        case 0x4d1450u: goto label_4d1450;
        case 0x4d14b0u: goto label_4d14b0;
        case 0x4d14bcu: goto label_4d14bc;
        case 0x4d14c8u: goto label_4d14c8;
        case 0x4d14d4u: goto label_4d14d4;
        case 0x4d14e0u: goto label_4d14e0;
        case 0x4d14ecu: goto label_4d14ec;
        case 0x4d1504u: goto label_4d1504;
        default: break;
    }

    ctx->pc = 0x4d1380u;

    // 0x4d1380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d1380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d1384: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4d1384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4d1388: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d1388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d138c: 0x34468702  ori         $a2, $v0, 0x8702
    ctx->pc = 0x4d138cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34562);
    // 0x4d1390: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d1390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d1394: 0xc134580  jal         func_4D1600
    ctx->pc = 0x4D1394u;
    SET_GPR_U32(ctx, 31, 0x4D139Cu);
    ctx->pc = 0x4D1398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1394u;
            // 0x4d1398: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D1600u;
    if (runtime->hasFunction(0x4D1600u)) {
        auto targetFn = runtime->lookupFunction(0x4D1600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D139Cu; }
        if (ctx->pc != 0x4D139Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D1600_0x4d1600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D139Cu; }
        if (ctx->pc != 0x4D139Cu) { return; }
    }
    ctx->pc = 0x4D139Cu;
label_4d139c:
    // 0x4d139c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d139cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d13a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d13a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d13a4: 0x24632170  addiu       $v1, $v1, 0x2170
    ctx->pc = 0x4d13a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8560));
    // 0x4d13a8: 0x244221a8  addiu       $v0, $v0, 0x21A8
    ctx->pc = 0x4d13a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8616));
    // 0x4d13ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d13acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d13b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d13b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d13b4: 0xc13457c  jal         func_4D15F0
    ctx->pc = 0x4D13B4u;
    SET_GPR_U32(ctx, 31, 0x4D13BCu);
    ctx->pc = 0x4D13B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D13B4u;
            // 0x4d13b8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D15F0u;
    if (runtime->hasFunction(0x4D15F0u)) {
        auto targetFn = runtime->lookupFunction(0x4D15F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D13BCu; }
        if (ctx->pc != 0x4D13BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D15F0_0x4d15f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D13BCu; }
        if (ctx->pc != 0x4D13BCu) { return; }
    }
    ctx->pc = 0x4D13BCu;
label_4d13bc:
    // 0x4d13bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4d13bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4d13c0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4d13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4d13c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d13c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d13c8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4d13c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4d13cc: 0x244220c0  addiu       $v0, $v0, 0x20C0
    ctx->pc = 0x4d13ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8384));
    // 0x4d13d0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4d13d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4d13d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d13d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4d13d8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d13dc: 0x244220f8  addiu       $v0, $v0, 0x20F8
    ctx->pc = 0x4d13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8440));
    // 0x4d13e0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4d13e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4d13e4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d13e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4d13e8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x4d13e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x4d13ec: 0xc4407bb0  lwc1        $f0, 0x7BB0($v0)
    ctx->pc = 0x4d13ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 31664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d13f0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d13f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4d13f4: 0xc4417bb4  lwc1        $f1, 0x7BB4($v0)
    ctx->pc = 0x4d13f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 31668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d13f8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4d13f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4d13fc: 0xc4607bb8  lwc1        $f0, 0x7BB8($v1)
    ctx->pc = 0x4d13fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 31672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d1400: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d1400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4d1404: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4d1404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4d1408: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x4d1408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4d140c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4D140Cu;
    SET_GPR_U32(ctx, 31, 0x4D1414u);
    ctx->pc = 0x4D1410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D140Cu;
            // 0x4d1410: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1414u; }
        if (ctx->pc != 0x4D1414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1414u; }
        if (ctx->pc != 0x4D1414u) { return; }
    }
    ctx->pc = 0x4D1414u;
label_4d1414:
    // 0x4d1414: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4d1414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4d1418: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d1418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d141c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D141Cu;
    {
        const bool branch_taken_0x4d141c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D141Cu;
            // 0x4d1420: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d141c) {
            ctx->pc = 0x4D1438u;
            goto label_4d1438;
        }
    }
    ctx->pc = 0x4D1424u;
    // 0x4d1424: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4d1424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x4d1428: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4d1428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d142c: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x4D142Cu;
    SET_GPR_U32(ctx, 31, 0x4D1434u);
    ctx->pc = 0x4D1430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D142Cu;
            // 0x4d1430: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1434u; }
        if (ctx->pc != 0x4D1434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1434u; }
        if (ctx->pc != 0x4D1434u) { return; }
    }
    ctx->pc = 0x4D1434u;
label_4d1434:
    // 0x4d1434: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d1434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d1438:
    // 0x4d1438: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4d1438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x4d143c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d143cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1440: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d1440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d1444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d1444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d1448: 0x3e00008  jr          $ra
    ctx->pc = 0x4D1448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D144Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1448u;
            // 0x4d144c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D1450u;
label_4d1450:
    // 0x4d1450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d1450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d1454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d1454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4d1458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d1458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4d145c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d145cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d1460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d1460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1464: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4D1464u;
    {
        const bool branch_taken_0x4d1464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1464u;
            // 0x4d1468: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1464) {
            ctx->pc = 0x4D1504u;
            goto label_4d1504;
        }
    }
    ctx->pc = 0x4D146Cu;
    // 0x4d146c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d146cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d1470: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d1470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d1474: 0x24632170  addiu       $v1, $v1, 0x2170
    ctx->pc = 0x4d1474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8560));
    // 0x4d1478: 0x244221a8  addiu       $v0, $v0, 0x21A8
    ctx->pc = 0x4d1478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8616));
    // 0x4d147c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d147cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d1480: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4D1480u;
    {
        const bool branch_taken_0x4d1480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1480u;
            // 0x4d1484: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1480) {
            ctx->pc = 0x4D14ECu;
            goto label_4d14ec;
        }
    }
    ctx->pc = 0x4D1488u;
    // 0x4d1488: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d1488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d148c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d148cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d1490: 0x24632120  addiu       $v1, $v1, 0x2120
    ctx->pc = 0x4d1490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8480));
    // 0x4d1494: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4d1494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
    // 0x4d1498: 0x24422158  addiu       $v0, $v0, 0x2158
    ctx->pc = 0x4d1498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8536));
    // 0x4d149c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d149cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d14a0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4d14a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4d14a4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4d14a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4d14a8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4D14A8u;
    SET_GPR_U32(ctx, 31, 0x4D14B0u);
    ctx->pc = 0x4D14ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D14A8u;
            // 0x4d14ac: 0x24a50ec0  addiu       $a1, $a1, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D14B0u; }
        if (ctx->pc != 0x4D14B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D14B0u; }
        if (ctx->pc != 0x4D14B0u) { return; }
    }
    ctx->pc = 0x4D14B0u;
label_4d14b0:
    // 0x4d14b0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4d14b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4d14b4: 0xc0aeacc  jal         func_2BAB30
    ctx->pc = 0x4D14B4u;
    SET_GPR_U32(ctx, 31, 0x4D14BCu);
    ctx->pc = 0x4D14B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D14B4u;
            // 0x4d14b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB30u;
    if (runtime->hasFunction(0x2BAB30u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D14BCu; }
        if (ctx->pc != 0x4D14BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB30_0x2bab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D14BCu; }
        if (ctx->pc != 0x4D14BCu) { return; }
    }
    ctx->pc = 0x4D14BCu;
label_4d14bc:
    // 0x4d14bc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4d14bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4d14c0: 0xc134560  jal         func_4D1580
    ctx->pc = 0x4D14C0u;
    SET_GPR_U32(ctx, 31, 0x4D14C8u);
    ctx->pc = 0x4D14C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D14C0u;
            // 0x4d14c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D1580u;
    if (runtime->hasFunction(0x4D1580u)) {
        auto targetFn = runtime->lookupFunction(0x4D1580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D14C8u; }
        if (ctx->pc != 0x4D14C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D1580_0x4d1580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D14C8u; }
        if (ctx->pc != 0x4D14C8u) { return; }
    }
    ctx->pc = 0x4D14C8u;
label_4d14c8:
    // 0x4d14c8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4d14c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4d14cc: 0xc134560  jal         func_4D1580
    ctx->pc = 0x4D14CCu;
    SET_GPR_U32(ctx, 31, 0x4D14D4u);
    ctx->pc = 0x4D14D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D14CCu;
            // 0x4d14d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D1580u;
    if (runtime->hasFunction(0x4D1580u)) {
        auto targetFn = runtime->lookupFunction(0x4D1580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D14D4u; }
        if (ctx->pc != 0x4D14D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D1580_0x4d1580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D14D4u; }
        if (ctx->pc != 0x4D14D4u) { return; }
    }
    ctx->pc = 0x4D14D4u;
label_4d14d4:
    // 0x4d14d4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4d14d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4d14d8: 0xc134548  jal         func_4D1520
    ctx->pc = 0x4D14D8u;
    SET_GPR_U32(ctx, 31, 0x4D14E0u);
    ctx->pc = 0x4D14DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D14D8u;
            // 0x4d14dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D1520u;
    if (runtime->hasFunction(0x4D1520u)) {
        auto targetFn = runtime->lookupFunction(0x4D1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D14E0u; }
        if (ctx->pc != 0x4D14E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D1520_0x4d1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D14E0u; }
        if (ctx->pc != 0x4D14E0u) { return; }
    }
    ctx->pc = 0x4D14E0u;
label_4d14e0:
    // 0x4d14e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d14e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d14e4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4D14E4u;
    SET_GPR_U32(ctx, 31, 0x4D14ECu);
    ctx->pc = 0x4D14E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D14E4u;
            // 0x4d14e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D14ECu; }
        if (ctx->pc != 0x4D14ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D14ECu; }
        if (ctx->pc != 0x4D14ECu) { return; }
    }
    ctx->pc = 0x4D14ECu;
label_4d14ec:
    // 0x4d14ec: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4d14ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4d14f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d14f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4d14f4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D14F4u;
    {
        const bool branch_taken_0x4d14f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d14f4) {
            ctx->pc = 0x4D14F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D14F4u;
            // 0x4d14f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D1508u;
            goto label_4d1508;
        }
    }
    ctx->pc = 0x4D14FCu;
    // 0x4d14fc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4D14FCu;
    SET_GPR_U32(ctx, 31, 0x4D1504u);
    ctx->pc = 0x4D1500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D14FCu;
            // 0x4d1500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1504u; }
        if (ctx->pc != 0x4D1504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1504u; }
        if (ctx->pc != 0x4D1504u) { return; }
    }
    ctx->pc = 0x4D1504u;
label_4d1504:
    // 0x4d1504: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d1504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d1508:
    // 0x4d1508: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d1508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d150c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d150cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d1510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d1510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d1514: 0x3e00008  jr          $ra
    ctx->pc = 0x4D1514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D1518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1514u;
            // 0x4d1518: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D151Cu;
    // 0x4d151c: 0x0  nop
    ctx->pc = 0x4d151cu;
    // NOP
}
