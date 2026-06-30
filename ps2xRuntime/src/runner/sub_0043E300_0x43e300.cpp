#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043E300
// Address: 0x43e300 - 0x43e4b0
void sub_0043E300_0x43e300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043E300_0x43e300");
#endif

    switch (ctx->pc) {
        case 0x43e31cu: goto label_43e31c;
        case 0x43e33cu: goto label_43e33c;
        case 0x43e39cu: goto label_43e39c;
        case 0x43e3b8u: goto label_43e3b8;
        case 0x43e3e0u: goto label_43e3e0;
        case 0x43e440u: goto label_43e440;
        case 0x43e44cu: goto label_43e44c;
        case 0x43e458u: goto label_43e458;
        case 0x43e464u: goto label_43e464;
        case 0x43e470u: goto label_43e470;
        case 0x43e47cu: goto label_43e47c;
        case 0x43e494u: goto label_43e494;
        default: break;
    }

    ctx->pc = 0x43e300u;

    // 0x43e300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43e300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43e304: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x43e304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x43e308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43e308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x43e30c: 0x34468702  ori         $a2, $v0, 0x8702
    ctx->pc = 0x43e30cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34562);
    // 0x43e310: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43e310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x43e314: 0xc10f964  jal         func_43E590
    ctx->pc = 0x43E314u;
    SET_GPR_U32(ctx, 31, 0x43E31Cu);
    ctx->pc = 0x43E318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E314u;
            // 0x43e318: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43E590u;
    if (runtime->hasFunction(0x43E590u)) {
        auto targetFn = runtime->lookupFunction(0x43E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E31Cu; }
        if (ctx->pc != 0x43E31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043E590_0x43e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E31Cu; }
        if (ctx->pc != 0x43E31Cu) { return; }
    }
    ctx->pc = 0x43E31Cu;
label_43e31c:
    // 0x43e31c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43e31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x43e320: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43e320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x43e324: 0x2463d2b0  addiu       $v1, $v1, -0x2D50
    ctx->pc = 0x43e324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955696));
    // 0x43e328: 0x2442d2e8  addiu       $v0, $v0, -0x2D18
    ctx->pc = 0x43e328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955752));
    // 0x43e32c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43e32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x43e330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43e330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e334: 0xc10f960  jal         func_43E580
    ctx->pc = 0x43E334u;
    SET_GPR_U32(ctx, 31, 0x43E33Cu);
    ctx->pc = 0x43E338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E334u;
            // 0x43e338: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43E580u;
    if (runtime->hasFunction(0x43E580u)) {
        auto targetFn = runtime->lookupFunction(0x43E580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E33Cu; }
        if (ctx->pc != 0x43E33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043E580_0x43e580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E33Cu; }
        if (ctx->pc != 0x43E33Cu) { return; }
    }
    ctx->pc = 0x43E33Cu;
label_43e33c:
    // 0x43e33c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x43e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x43e340: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x43e340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x43e344: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43e344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x43e348: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x43e348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x43e34c: 0x2442d150  addiu       $v0, $v0, -0x2EB0
    ctx->pc = 0x43e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955344));
    // 0x43e350: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x43e350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x43e354: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43e354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x43e358: 0x2442d188  addiu       $v0, $v0, -0x2E78
    ctx->pc = 0x43e358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955400));
    // 0x43e35c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x43e35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x43e360: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x43e360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x43e364: 0xa2000094  sb          $zero, 0x94($s0)
    ctx->pc = 0x43e364u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 0));
    // 0x43e368: 0xc440d188  lwc1        $f0, -0x2E78($v0)
    ctx->pc = 0x43e368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x43e36c: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x43e36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x43e370: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x43e370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x43e374: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x43e374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x43e378: 0xc441d18c  lwc1        $f1, -0x2E74($v0)
    ctx->pc = 0x43e378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x43e37c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x43e37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x43e380: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x43e380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x43e384: 0xc440d190  lwc1        $f0, -0x2E70($v0)
    ctx->pc = 0x43e384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x43e388: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x43e388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x43e38c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x43e390: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x43e390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x43e394: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x43E394u;
    SET_GPR_U32(ctx, 31, 0x43E39Cu);
    ctx->pc = 0x43E398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E394u;
            // 0x43e398: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E39Cu; }
        if (ctx->pc != 0x43E39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E39Cu; }
        if (ctx->pc != 0x43E39Cu) { return; }
    }
    ctx->pc = 0x43E39Cu;
label_43e39c:
    // 0x43e39c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x43e39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x43e3a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43e3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e3a4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43E3A4u;
    {
        const bool branch_taken_0x43e3a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E3A4u;
            // 0x43e3a8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e3a4) {
            ctx->pc = 0x43E3BCu;
            goto label_43e3bc;
        }
    }
    ctx->pc = 0x43E3ACu;
    // 0x43e3ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x43e3acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x43e3b0: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x43E3B0u;
    SET_GPR_U32(ctx, 31, 0x43E3B8u);
    ctx->pc = 0x43E3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E3B0u;
            // 0x43e3b4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E3B8u; }
        if (ctx->pc != 0x43E3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E3B8u; }
        if (ctx->pc != 0x43E3B8u) { return; }
    }
    ctx->pc = 0x43E3B8u;
label_43e3b8:
    // 0x43e3b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43e3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43e3bc:
    // 0x43e3bc: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x43e3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x43e3c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43e3c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e3c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43e3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43e3c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43e3c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43e3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x43E3CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43E3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E3CCu;
            // 0x43e3d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43E3D4u;
    // 0x43e3d4: 0x0  nop
    ctx->pc = 0x43e3d4u;
    // NOP
    // 0x43e3d8: 0x0  nop
    ctx->pc = 0x43e3d8u;
    // NOP
    // 0x43e3dc: 0x0  nop
    ctx->pc = 0x43e3dcu;
    // NOP
label_43e3e0:
    // 0x43e3e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43e3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43e3e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43e3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x43e3e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43e3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43e3ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43e3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x43e3f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43e3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e3f4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x43E3F4u;
    {
        const bool branch_taken_0x43e3f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E3F4u;
            // 0x43e3f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e3f4) {
            ctx->pc = 0x43E494u;
            goto label_43e494;
        }
    }
    ctx->pc = 0x43E3FCu;
    // 0x43e3fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43e3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x43e400: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43e400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x43e404: 0x2463d2b0  addiu       $v1, $v1, -0x2D50
    ctx->pc = 0x43e404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955696));
    // 0x43e408: 0x2442d2e8  addiu       $v0, $v0, -0x2D18
    ctx->pc = 0x43e408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955752));
    // 0x43e40c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x43e410: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x43E410u;
    {
        const bool branch_taken_0x43e410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E410u;
            // 0x43e414: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e410) {
            ctx->pc = 0x43E47Cu;
            goto label_43e47c;
        }
    }
    ctx->pc = 0x43E418u;
    // 0x43e418: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43e418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x43e41c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43e41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x43e420: 0x2463d260  addiu       $v1, $v1, -0x2DA0
    ctx->pc = 0x43e420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955616));
    // 0x43e424: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x43e424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x43e428: 0x2442d298  addiu       $v0, $v0, -0x2D68
    ctx->pc = 0x43e428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955672));
    // 0x43e42c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43e42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x43e430: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x43e430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x43e434: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x43e434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x43e438: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x43E438u;
    SET_GPR_U32(ctx, 31, 0x43E440u);
    ctx->pc = 0x43E43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E438u;
            // 0x43e43c: 0x24a5de90  addiu       $a1, $a1, -0x2170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E440u; }
        if (ctx->pc != 0x43E440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E440u; }
        if (ctx->pc != 0x43E440u) { return; }
    }
    ctx->pc = 0x43E440u;
label_43e440:
    // 0x43e440: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x43e440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x43e444: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x43E444u;
    SET_GPR_U32(ctx, 31, 0x43E44Cu);
    ctx->pc = 0x43E448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E444u;
            // 0x43e448: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E44Cu; }
        if (ctx->pc != 0x43E44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E44Cu; }
        if (ctx->pc != 0x43E44Cu) { return; }
    }
    ctx->pc = 0x43E44Cu;
label_43e44c:
    // 0x43e44c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x43e44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x43e450: 0xc10f944  jal         func_43E510
    ctx->pc = 0x43E450u;
    SET_GPR_U32(ctx, 31, 0x43E458u);
    ctx->pc = 0x43E454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E450u;
            // 0x43e454: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43E510u;
    if (runtime->hasFunction(0x43E510u)) {
        auto targetFn = runtime->lookupFunction(0x43E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E458u; }
        if (ctx->pc != 0x43E458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043E510_0x43e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E458u; }
        if (ctx->pc != 0x43E458u) { return; }
    }
    ctx->pc = 0x43E458u;
label_43e458:
    // 0x43e458: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x43e458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x43e45c: 0xc10f944  jal         func_43E510
    ctx->pc = 0x43E45Cu;
    SET_GPR_U32(ctx, 31, 0x43E464u);
    ctx->pc = 0x43E460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E45Cu;
            // 0x43e460: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43E510u;
    if (runtime->hasFunction(0x43E510u)) {
        auto targetFn = runtime->lookupFunction(0x43E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E464u; }
        if (ctx->pc != 0x43E464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043E510_0x43e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E464u; }
        if (ctx->pc != 0x43E464u) { return; }
    }
    ctx->pc = 0x43E464u;
label_43e464:
    // 0x43e464: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x43e464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x43e468: 0xc10f92c  jal         func_43E4B0
    ctx->pc = 0x43E468u;
    SET_GPR_U32(ctx, 31, 0x43E470u);
    ctx->pc = 0x43E46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E468u;
            // 0x43e46c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43E4B0u;
    if (runtime->hasFunction(0x43E4B0u)) {
        auto targetFn = runtime->lookupFunction(0x43E4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E470u; }
        if (ctx->pc != 0x43E470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043E4B0_0x43e4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E470u; }
        if (ctx->pc != 0x43E470u) { return; }
    }
    ctx->pc = 0x43E470u;
label_43e470:
    // 0x43e470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43e470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e474: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x43E474u;
    SET_GPR_U32(ctx, 31, 0x43E47Cu);
    ctx->pc = 0x43E478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E474u;
            // 0x43e478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E47Cu; }
        if (ctx->pc != 0x43E47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E47Cu; }
        if (ctx->pc != 0x43E47Cu) { return; }
    }
    ctx->pc = 0x43E47Cu;
label_43e47c:
    // 0x43e47c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x43e47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x43e480: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x43e480u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x43e484: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43E484u;
    {
        const bool branch_taken_0x43e484 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x43e484) {
            ctx->pc = 0x43E488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43E484u;
            // 0x43e488: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43E498u;
            goto label_43e498;
        }
    }
    ctx->pc = 0x43E48Cu;
    // 0x43e48c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x43E48Cu;
    SET_GPR_U32(ctx, 31, 0x43E494u);
    ctx->pc = 0x43E490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E48Cu;
            // 0x43e490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E494u; }
        if (ctx->pc != 0x43E494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E494u; }
        if (ctx->pc != 0x43E494u) { return; }
    }
    ctx->pc = 0x43E494u;
label_43e494:
    // 0x43e494: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43e494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43e498:
    // 0x43e498: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43e498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43e49c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43e49cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43e4a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43e4a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43e4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x43E4A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43E4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E4A4u;
            // 0x43e4a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43E4ACu;
    // 0x43e4ac: 0x0  nop
    ctx->pc = 0x43e4acu;
    // NOP
}
