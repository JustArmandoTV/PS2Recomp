#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040D390
// Address: 0x40d390 - 0x40d530
void sub_0040D390_0x40d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D390_0x40d390");
#endif

    switch (ctx->pc) {
        case 0x40d3acu: goto label_40d3ac;
        case 0x40d3ccu: goto label_40d3cc;
        case 0x40d424u: goto label_40d424;
        case 0x40d440u: goto label_40d440;
        case 0x40d460u: goto label_40d460;
        case 0x40d4c0u: goto label_40d4c0;
        case 0x40d4ccu: goto label_40d4cc;
        case 0x40d4d8u: goto label_40d4d8;
        case 0x40d4e4u: goto label_40d4e4;
        case 0x40d4f0u: goto label_40d4f0;
        case 0x40d4fcu: goto label_40d4fc;
        case 0x40d514u: goto label_40d514;
        default: break;
    }

    ctx->pc = 0x40d390u;

    // 0x40d390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40d390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40d394: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x40d394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x40d398: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40d398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x40d39c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x40d39cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x40d3a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40d3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x40d3a4: 0xc103584  jal         func_40D610
    ctx->pc = 0x40D3A4u;
    SET_GPR_U32(ctx, 31, 0x40D3ACu);
    ctx->pc = 0x40D3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D3A4u;
            // 0x40d3a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40D610u;
    if (runtime->hasFunction(0x40D610u)) {
        auto targetFn = runtime->lookupFunction(0x40D610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D3ACu; }
        if (ctx->pc != 0x40D3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040D610_0x40d610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D3ACu; }
        if (ctx->pc != 0x40D3ACu) { return; }
    }
    ctx->pc = 0x40D3ACu;
label_40d3ac:
    // 0x40d3ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x40d3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x40d3b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x40d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x40d3b4: 0x2463ae00  addiu       $v1, $v1, -0x5200
    ctx->pc = 0x40d3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946304));
    // 0x40d3b8: 0x2442ae38  addiu       $v0, $v0, -0x51C8
    ctx->pc = 0x40d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946360));
    // 0x40d3bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40d3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x40d3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40d3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d3c4: 0xc103580  jal         func_40D600
    ctx->pc = 0x40D3C4u;
    SET_GPR_U32(ctx, 31, 0x40D3CCu);
    ctx->pc = 0x40D3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D3C4u;
            // 0x40d3c8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40D600u;
    if (runtime->hasFunction(0x40D600u)) {
        auto targetFn = runtime->lookupFunction(0x40D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D3CCu; }
        if (ctx->pc != 0x40D3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040D600_0x40d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D3CCu; }
        if (ctx->pc != 0x40D3CCu) { return; }
    }
    ctx->pc = 0x40D3CCu;
label_40d3cc:
    // 0x40d3cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x40d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x40d3d0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x40d3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x40d3d4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x40d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x40d3d8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x40d3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x40d3dc: 0x2442aca0  addiu       $v0, $v0, -0x5360
    ctx->pc = 0x40d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945952));
    // 0x40d3e0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x40d3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x40d3e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x40d3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x40d3e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x40d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x40d3ec: 0x2442acd8  addiu       $v0, $v0, -0x5328
    ctx->pc = 0x40d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946008));
    // 0x40d3f0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x40d3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x40d3f4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x40d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x40d3f8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x40d3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x40d3fc: 0xc440bc18  lwc1        $f0, -0x43E8($v0)
    ctx->pc = 0x40d3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40d400: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x40d400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x40d404: 0xc441bc1c  lwc1        $f1, -0x43E4($v0)
    ctx->pc = 0x40d404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40d408: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x40d408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x40d40c: 0xc460bc20  lwc1        $f0, -0x43E0($v1)
    ctx->pc = 0x40d40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294949920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40d410: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40d410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x40d414: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x40d414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x40d418: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x40d418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x40d41c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x40D41Cu;
    SET_GPR_U32(ctx, 31, 0x40D424u);
    ctx->pc = 0x40D420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D41Cu;
            // 0x40d420: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D424u; }
        if (ctx->pc != 0x40D424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D424u; }
        if (ctx->pc != 0x40D424u) { return; }
    }
    ctx->pc = 0x40D424u;
label_40d424:
    // 0x40d424: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x40d424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x40d428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40d428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d42c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40D42Cu;
    {
        const bool branch_taken_0x40d42c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D42Cu;
            // 0x40d430: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d42c) {
            ctx->pc = 0x40D444u;
            goto label_40d444;
        }
    }
    ctx->pc = 0x40D434u;
    // 0x40d434: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x40d434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x40d438: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x40D438u;
    SET_GPR_U32(ctx, 31, 0x40D440u);
    ctx->pc = 0x40D43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D438u;
            // 0x40d43c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D440u; }
        if (ctx->pc != 0x40D440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D440u; }
        if (ctx->pc != 0x40D440u) { return; }
    }
    ctx->pc = 0x40D440u;
label_40d440:
    // 0x40d440: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40d440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40d444:
    // 0x40d444: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x40d444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x40d448: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40d448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d44c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40d44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40d450: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40d450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40d454: 0x3e00008  jr          $ra
    ctx->pc = 0x40D454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D454u;
            // 0x40d458: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40D45Cu;
    // 0x40d45c: 0x0  nop
    ctx->pc = 0x40d45cu;
    // NOP
label_40d460:
    // 0x40d460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40d460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40d464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x40d464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x40d468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40d468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40d46c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40d46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x40d470: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40d470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d474: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x40D474u;
    {
        const bool branch_taken_0x40d474 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D474u;
            // 0x40d478: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d474) {
            ctx->pc = 0x40D514u;
            goto label_40d514;
        }
    }
    ctx->pc = 0x40D47Cu;
    // 0x40d47c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x40d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x40d480: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x40d480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x40d484: 0x2463ae00  addiu       $v1, $v1, -0x5200
    ctx->pc = 0x40d484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946304));
    // 0x40d488: 0x2442ae38  addiu       $v0, $v0, -0x51C8
    ctx->pc = 0x40d488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946360));
    // 0x40d48c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40d48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x40d490: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x40D490u;
    {
        const bool branch_taken_0x40d490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D490u;
            // 0x40d494: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d490) {
            ctx->pc = 0x40D4FCu;
            goto label_40d4fc;
        }
    }
    ctx->pc = 0x40D498u;
    // 0x40d498: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x40d498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x40d49c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x40d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x40d4a0: 0x2463adb0  addiu       $v1, $v1, -0x5250
    ctx->pc = 0x40d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946224));
    // 0x40d4a4: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x40d4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x40d4a8: 0x2442ade8  addiu       $v0, $v0, -0x5218
    ctx->pc = 0x40d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946280));
    // 0x40d4ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40d4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x40d4b0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x40d4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x40d4b4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x40d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x40d4b8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x40D4B8u;
    SET_GPR_U32(ctx, 31, 0x40D4C0u);
    ctx->pc = 0x40D4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D4B8u;
            // 0x40d4bc: 0x24a5cfb0  addiu       $a1, $a1, -0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D4C0u; }
        if (ctx->pc != 0x40D4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D4C0u; }
        if (ctx->pc != 0x40D4C0u) { return; }
    }
    ctx->pc = 0x40D4C0u;
label_40d4c0:
    // 0x40d4c0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x40d4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x40d4c4: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x40D4C4u;
    SET_GPR_U32(ctx, 31, 0x40D4CCu);
    ctx->pc = 0x40D4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D4C4u;
            // 0x40d4c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D4CCu; }
        if (ctx->pc != 0x40D4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D4CCu; }
        if (ctx->pc != 0x40D4CCu) { return; }
    }
    ctx->pc = 0x40D4CCu;
label_40d4cc:
    // 0x40d4cc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x40d4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x40d4d0: 0xc103564  jal         func_40D590
    ctx->pc = 0x40D4D0u;
    SET_GPR_U32(ctx, 31, 0x40D4D8u);
    ctx->pc = 0x40D4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D4D0u;
            // 0x40d4d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40D590u;
    if (runtime->hasFunction(0x40D590u)) {
        auto targetFn = runtime->lookupFunction(0x40D590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D4D8u; }
        if (ctx->pc != 0x40D4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040D590_0x40d590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D4D8u; }
        if (ctx->pc != 0x40D4D8u) { return; }
    }
    ctx->pc = 0x40D4D8u;
label_40d4d8:
    // 0x40d4d8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x40d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x40d4dc: 0xc103564  jal         func_40D590
    ctx->pc = 0x40D4DCu;
    SET_GPR_U32(ctx, 31, 0x40D4E4u);
    ctx->pc = 0x40D4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D4DCu;
            // 0x40d4e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40D590u;
    if (runtime->hasFunction(0x40D590u)) {
        auto targetFn = runtime->lookupFunction(0x40D590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D4E4u; }
        if (ctx->pc != 0x40D4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040D590_0x40d590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D4E4u; }
        if (ctx->pc != 0x40D4E4u) { return; }
    }
    ctx->pc = 0x40D4E4u;
label_40d4e4:
    // 0x40d4e4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x40d4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x40d4e8: 0xc10354c  jal         func_40D530
    ctx->pc = 0x40D4E8u;
    SET_GPR_U32(ctx, 31, 0x40D4F0u);
    ctx->pc = 0x40D4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D4E8u;
            // 0x40d4ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40D530u;
    if (runtime->hasFunction(0x40D530u)) {
        auto targetFn = runtime->lookupFunction(0x40D530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D4F0u; }
        if (ctx->pc != 0x40D4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040D530_0x40d530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D4F0u; }
        if (ctx->pc != 0x40D4F0u) { return; }
    }
    ctx->pc = 0x40D4F0u;
label_40d4f0:
    // 0x40d4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40d4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d4f4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x40D4F4u;
    SET_GPR_U32(ctx, 31, 0x40D4FCu);
    ctx->pc = 0x40D4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D4F4u;
            // 0x40d4f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D4FCu; }
        if (ctx->pc != 0x40D4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D4FCu; }
        if (ctx->pc != 0x40D4FCu) { return; }
    }
    ctx->pc = 0x40D4FCu;
label_40d4fc:
    // 0x40d4fc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x40d4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x40d500: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x40d500u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x40d504: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x40D504u;
    {
        const bool branch_taken_0x40d504 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x40d504) {
            ctx->pc = 0x40D508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40D504u;
            // 0x40d508: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40D518u;
            goto label_40d518;
        }
    }
    ctx->pc = 0x40D50Cu;
    // 0x40d50c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x40D50Cu;
    SET_GPR_U32(ctx, 31, 0x40D514u);
    ctx->pc = 0x40D510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D50Cu;
            // 0x40d510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D514u; }
        if (ctx->pc != 0x40D514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D514u; }
        if (ctx->pc != 0x40D514u) { return; }
    }
    ctx->pc = 0x40D514u;
label_40d514:
    // 0x40d514: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40d514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40d518:
    // 0x40d518: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x40d518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40d51c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40d51cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40d520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40d520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40d524: 0x3e00008  jr          $ra
    ctx->pc = 0x40D524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D524u;
            // 0x40d528: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40D52Cu;
    // 0x40d52c: 0x0  nop
    ctx->pc = 0x40d52cu;
    // NOP
}
