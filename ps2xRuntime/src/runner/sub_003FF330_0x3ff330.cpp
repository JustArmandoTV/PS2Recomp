#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FF330
// Address: 0x3ff330 - 0x3ff920
void sub_003FF330_0x3ff330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FF330_0x3ff330");
#endif

    switch (ctx->pc) {
        case 0x3ff3a4u: goto label_3ff3a4;
        case 0x3ff3c0u: goto label_3ff3c0;
        case 0x3ff3ccu: goto label_3ff3cc;
        case 0x3ff418u: goto label_3ff418;
        case 0x3ff420u: goto label_3ff420;
        case 0x3ff42cu: goto label_3ff42c;
        case 0x3ff450u: goto label_3ff450;
        case 0x3ff460u: goto label_3ff460;
        case 0x3ff46cu: goto label_3ff46c;
        case 0x3ff4d4u: goto label_3ff4d4;
        case 0x3ff4f4u: goto label_3ff4f4;
        case 0x3ff5a4u: goto label_3ff5a4;
        case 0x3ff5d8u: goto label_3ff5d8;
        case 0x3ff5f4u: goto label_3ff5f4;
        case 0x3ff630u: goto label_3ff630;
        case 0x3ff660u: goto label_3ff660;
        case 0x3ff670u: goto label_3ff670;
        case 0x3ff79cu: goto label_3ff79c;
        case 0x3ff7b8u: goto label_3ff7b8;
        case 0x3ff7c4u: goto label_3ff7c4;
        case 0x3ff888u: goto label_3ff888;
        case 0x3ff8d4u: goto label_3ff8d4;
        case 0x3ff8ecu: goto label_3ff8ec;
        default: break;
    }

    ctx->pc = 0x3ff330u;

    // 0x3ff330: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x3ff330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x3ff334: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ff334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3ff338: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3ff338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3ff33c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3ff33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3ff340: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3ff340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3ff344: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x3ff344u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff348: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3ff348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3ff34c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3ff34cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff350: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3ff350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3ff354: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x3ff354u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff358: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ff358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3ff35c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3ff35cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff360: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ff360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3ff364: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3ff364u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff368: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ff368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3ff36c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x3ff36cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff370: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ff370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ff374: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ff374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ff378: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x3ff378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3ff37c: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x3ff37cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ff380: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3ff380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x3ff384: 0x8cd00968  lw          $s0, 0x968($a2)
    ctx->pc = 0x3ff384u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
    // 0x3ff388: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x3ff388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x3ff38c: 0x92a6004c  lbu         $a2, 0x4C($s5)
    ctx->pc = 0x3ff38cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x3ff390: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ff390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3ff394: 0x8c710130  lw          $s1, 0x130($v1)
    ctx->pc = 0x3ff394u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x3ff398: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x3ff398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x3ff39c: 0xc07698c  jal         func_1DA630
    ctx->pc = 0x3FF39Cu;
    SET_GPR_U32(ctx, 31, 0x3FF3A4u);
    ctx->pc = 0x3FF3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF39Cu;
            // 0x3ff3a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF3A4u; }
        if (ctx->pc != 0x3FF3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF3A4u; }
        if (ctx->pc != 0x3FF3A4u) { return; }
    }
    ctx->pc = 0x3FF3A4u;
label_3ff3a4:
    // 0x3ff3a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ff3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ff3a8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FF3A8u;
    {
        const bool branch_taken_0x3ff3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ff3a8) {
            ctx->pc = 0x3FF3B8u;
            goto label_3ff3b8;
        }
    }
    ctx->pc = 0x3FF3B0u;
    // 0x3ff3b0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3FF3B0u;
    {
        const bool branch_taken_0x3ff3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF3B0u;
            // 0x3ff3b4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff3b0) {
            ctx->pc = 0x3FF480u;
            goto label_3ff480;
        }
    }
    ctx->pc = 0x3FF3B8u;
label_3ff3b8:
    // 0x3ff3b8: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x3FF3B8u;
    SET_GPR_U32(ctx, 31, 0x3FF3C0u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF3C0u; }
        if (ctx->pc != 0x3FF3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF3C0u; }
        if (ctx->pc != 0x3FF3C0u) { return; }
    }
    ctx->pc = 0x3FF3C0u;
label_3ff3c0:
    // 0x3ff3c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ff3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff3c4: 0xc076984  jal         func_1DA610
    ctx->pc = 0x3FF3C4u;
    SET_GPR_U32(ctx, 31, 0x3FF3CCu);
    ctx->pc = 0x3FF3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF3C4u;
            // 0x3ff3c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF3CCu; }
        if (ctx->pc != 0x3FF3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF3CCu; }
        if (ctx->pc != 0x3FF3CCu) { return; }
    }
    ctx->pc = 0x3FF3CCu;
label_3ff3cc:
    // 0x3ff3cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ff3ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff3d0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3ff3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3ff3d4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ff3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3ff3d8: 0x26a50100  addiu       $a1, $s5, 0x100
    ctx->pc = 0x3ff3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x3ff3dc: 0xc442fba0  lwc1        $f2, -0x460($v0)
    ctx->pc = 0x3ff3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ff3e0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3ff3e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff3e4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ff3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3ff3e8: 0xc441fba8  lwc1        $f1, -0x458($v0)
    ctx->pc = 0x3ff3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ff3ec: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x3ff3ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x3ff3f0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ff3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3ff3f4: 0xc440fbac  lwc1        $f0, -0x454($v0)
    ctx->pc = 0x3ff3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ff3f8: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x3ff3f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x3ff3fc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ff3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3ff400: 0x8c42fba4  lw          $v0, -0x45C($v0)
    ctx->pc = 0x3ff400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966180)));
    // 0x3ff404: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x3ff404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x3ff408: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x3ff408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x3ff40c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3ff40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ff410: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3FF410u;
    SET_GPR_U32(ctx, 31, 0x3FF418u);
    ctx->pc = 0x3FF414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF410u;
            // 0x3ff414: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF418u; }
        if (ctx->pc != 0x3FF418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF418u; }
        if (ctx->pc != 0x3FF418u) { return; }
    }
    ctx->pc = 0x3FF418u;
label_3ff418:
    // 0x3ff418: 0xc076980  jal         func_1DA600
    ctx->pc = 0x3FF418u;
    SET_GPR_U32(ctx, 31, 0x3FF420u);
    ctx->pc = 0x3FF41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF418u;
            // 0x3ff41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF420u; }
        if (ctx->pc != 0x3FF420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF420u; }
        if (ctx->pc != 0x3FF420u) { return; }
    }
    ctx->pc = 0x3FF420u;
label_3ff420:
    // 0x3ff420: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3ff420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3ff424: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x3FF424u;
    SET_GPR_U32(ctx, 31, 0x3FF42Cu);
    ctx->pc = 0x3FF428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF424u;
            // 0x3ff428: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF42Cu; }
        if (ctx->pc != 0x3FF42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF42Cu; }
        if (ctx->pc != 0x3FF42Cu) { return; }
    }
    ctx->pc = 0x3FF42Cu;
label_3ff42c:
    // 0x3ff42c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3ff42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3ff430: 0xc461b838  lwc1        $f1, -0x47C8($v1)
    ctx->pc = 0x3ff430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294948920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ff434: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3ff434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ff438: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3FF438u;
    {
        const bool branch_taken_0x3ff438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ff438) {
            ctx->pc = 0x3FF43Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF438u;
            // 0x3ff43c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FF448u;
            goto label_3ff448;
        }
    }
    ctx->pc = 0x3FF440u;
    // 0x3ff440: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3FF440u;
    {
        const bool branch_taken_0x3ff440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF440u;
            // 0x3ff444: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff440) {
            ctx->pc = 0x3FF480u;
            goto label_3ff480;
        }
    }
    ctx->pc = 0x3FF448u;
label_3ff448:
    // 0x3ff448: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x3FF448u;
    SET_GPR_U32(ctx, 31, 0x3FF450u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF450u; }
        if (ctx->pc != 0x3FF450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF450u; }
        if (ctx->pc != 0x3FF450u) { return; }
    }
    ctx->pc = 0x3FF450u;
label_3ff450:
    // 0x3ff450: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ff450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff454: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3ff454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3ff458: 0xc04cd60  jal         func_133580
    ctx->pc = 0x3FF458u;
    SET_GPR_U32(ctx, 31, 0x3FF460u);
    ctx->pc = 0x3FF45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF458u;
            // 0x3ff45c: 0x26a60100  addiu       $a2, $s5, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF460u; }
        if (ctx->pc != 0x3FF460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF460u; }
        if (ctx->pc != 0x3FF460u) { return; }
    }
    ctx->pc = 0x3FF460u;
label_3ff460:
    // 0x3ff460: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ff460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff464: 0xc04c650  jal         func_131940
    ctx->pc = 0x3FF464u;
    SET_GPR_U32(ctx, 31, 0x3FF46Cu);
    ctx->pc = 0x3FF468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF464u;
            // 0x3ff468: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF46Cu; }
        if (ctx->pc != 0x3FF46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF46Cu; }
        if (ctx->pc != 0x3FF46Cu) { return; }
    }
    ctx->pc = 0x3FF46Cu;
label_3ff46c:
    // 0x3ff46c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x3ff46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x3ff470: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x3ff470u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ff474: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x3ff474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
    // 0x3ff478: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ff478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ff47c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3ff47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ff480:
    // 0x3ff480: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3ff480u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3ff484: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FF484u;
    {
        const bool branch_taken_0x3ff484 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FF488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF484u;
            // 0x3ff488: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff484) {
            ctx->pc = 0x3FF494u;
            goto label_3ff494;
        }
    }
    ctx->pc = 0x3FF48Cu;
    // 0x3ff48c: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x3FF48Cu;
    {
        const bool branch_taken_0x3ff48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ff48c) {
            ctx->pc = 0x3FF8ECu;
            goto label_3ff8ec;
        }
    }
    ctx->pc = 0x3FF494u;
label_3ff494:
    // 0x3ff494: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x3ff494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x3ff498: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ff498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ff49c: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3FF49Cu;
    {
        const bool branch_taken_0x3ff49c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff49c) {
            ctx->pc = 0x3FF4A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF49Cu;
            // 0x3ff4a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FF4C8u;
            goto label_3ff4c8;
        }
    }
    ctx->pc = 0x3FF4A4u;
    // 0x3ff4a4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3ff4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ff4a8: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FF4A8u;
    {
        const bool branch_taken_0x3ff4a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff4a8) {
            ctx->pc = 0x3FF4C4u;
            goto label_3ff4c4;
        }
    }
    ctx->pc = 0x3FF4B0u;
    // 0x3ff4b0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3ff4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ff4b4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FF4B4u;
    {
        const bool branch_taken_0x3ff4b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff4b4) {
            ctx->pc = 0x3FF4C4u;
            goto label_3ff4c4;
        }
    }
    ctx->pc = 0x3FF4BCu;
    // 0x3ff4bc: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x3FF4BCu;
    {
        const bool branch_taken_0x3ff4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF4BCu;
            // 0x3ff4c0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff4bc) {
            ctx->pc = 0x3FF8F0u;
            goto label_3ff8f0;
        }
    }
    ctx->pc = 0x3FF4C4u;
label_3ff4c4:
    // 0x3ff4c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ff4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ff4c8:
    // 0x3ff4c8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x3ff4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3ff4cc: 0xc04cd60  jal         func_133580
    ctx->pc = 0x3FF4CCu;
    SET_GPR_U32(ctx, 31, 0x3FF4D4u);
    ctx->pc = 0x3FF4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF4CCu;
            // 0x3ff4d0: 0x26a60100  addiu       $a2, $s5, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF4D4u; }
        if (ctx->pc != 0x3FF4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF4D4u; }
        if (ctx->pc != 0x3FF4D4u) { return; }
    }
    ctx->pc = 0x3FF4D4u;
label_3ff4d4:
    // 0x3ff4d4: 0x92a200f8  lbu         $v0, 0xF8($s5)
    ctx->pc = 0x3ff4d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x3ff4d8: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x3FF4D8u;
    {
        const bool branch_taken_0x3ff4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ff4d8) {
            ctx->pc = 0x3FF4DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF4D8u;
            // 0x3ff4dc: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FF5B0u;
            goto label_3ff5b0;
        }
    }
    ctx->pc = 0x3FF4E0u;
    // 0x3ff4e0: 0xc68c001c  lwc1        $f12, 0x1C($s4)
    ctx->pc = 0x3ff4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3ff4e4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x3ff4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3ff4e8: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x3ff4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x3ff4ec: 0xc054bbc  jal         func_152EF0
    ctx->pc = 0x3FF4ECu;
    SET_GPR_U32(ctx, 31, 0x3FF4F4u);
    ctx->pc = 0x3FF4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF4ECu;
            // 0x3ff4f0: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF4F4u; }
        if (ctx->pc != 0x3FF4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF4F4u; }
        if (ctx->pc != 0x3FF4F4u) { return; }
    }
    ctx->pc = 0x3FF4F4u;
label_3ff4f4:
    // 0x3ff4f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ff4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ff4f8: 0x52020026  beql        $s0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3FF4F8u;
    {
        const bool branch_taken_0x3ff4f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ff4f8) {
            ctx->pc = 0x3FF4FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF4F8u;
            // 0x3ff4fc: 0x8ee40010  lw          $a0, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FF594u;
            goto label_3ff594;
        }
    }
    ctx->pc = 0x3FF500u;
    // 0x3ff500: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ff500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ff504: 0x12020022  beq         $s0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3FF504u;
    {
        const bool branch_taken_0x3ff504 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ff504) {
            ctx->pc = 0x3FF590u;
            goto label_3ff590;
        }
    }
    ctx->pc = 0x3FF50Cu;
    // 0x3ff50c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3ff50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ff510: 0x1202001f  beq         $s0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3FF510u;
    {
        const bool branch_taken_0x3ff510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ff510) {
            ctx->pc = 0x3FF590u;
            goto label_3ff590;
        }
    }
    ctx->pc = 0x3FF518u;
    // 0x3ff518: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3ff518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ff51c: 0x1202001c  beq         $s0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3FF51Cu;
    {
        const bool branch_taken_0x3ff51c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ff51c) {
            ctx->pc = 0x3FF590u;
            goto label_3ff590;
        }
    }
    ctx->pc = 0x3FF524u;
    // 0x3ff524: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3ff524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ff528: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3FF528u;
    {
        const bool branch_taken_0x3ff528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ff528) {
            ctx->pc = 0x3FF590u;
            goto label_3ff590;
        }
    }
    ctx->pc = 0x3FF530u;
    // 0x3ff530: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ff530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ff534: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3FF534u;
    {
        const bool branch_taken_0x3ff534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ff534) {
            ctx->pc = 0x3FF590u;
            goto label_3ff590;
        }
    }
    ctx->pc = 0x3FF53Cu;
    // 0x3ff53c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3ff53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3ff540: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3FF540u;
    {
        const bool branch_taken_0x3ff540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ff540) {
            ctx->pc = 0x3FF590u;
            goto label_3ff590;
        }
    }
    ctx->pc = 0x3FF548u;
    // 0x3ff548: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3ff548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3ff54c: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3FF54Cu;
    {
        const bool branch_taken_0x3ff54c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ff54c) {
            ctx->pc = 0x3FF590u;
            goto label_3ff590;
        }
    }
    ctx->pc = 0x3FF554u;
    // 0x3ff554: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3ff554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3ff558: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3FF558u;
    {
        const bool branch_taken_0x3ff558 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ff558) {
            ctx->pc = 0x3FF590u;
            goto label_3ff590;
        }
    }
    ctx->pc = 0x3FF560u;
    // 0x3ff560: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3ff560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3ff564: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3FF564u;
    {
        const bool branch_taken_0x3ff564 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ff564) {
            ctx->pc = 0x3FF590u;
            goto label_3ff590;
        }
    }
    ctx->pc = 0x3FF56Cu;
    // 0x3ff56c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3ff56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3ff570: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FF570u;
    {
        const bool branch_taken_0x3ff570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ff570) {
            ctx->pc = 0x3FF590u;
            goto label_3ff590;
        }
    }
    ctx->pc = 0x3FF578u;
    // 0x3ff578: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3ff578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3ff57c: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FF57Cu;
    {
        const bool branch_taken_0x3ff57c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ff57c) {
            ctx->pc = 0x3FF590u;
            goto label_3ff590;
        }
    }
    ctx->pc = 0x3FF584u;
    // 0x3ff584: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3ff584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ff588: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FF588u;
    {
        const bool branch_taken_0x3ff588 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ff588) {
            ctx->pc = 0x3FF58Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF588u;
            // 0x3ff58c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FF5A8u;
            goto label_3ff5a8;
        }
    }
    ctx->pc = 0x3FF590u;
label_3ff590:
    // 0x3ff590: 0x8ee40010  lw          $a0, 0x10($s7)
    ctx->pc = 0x3ff590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_3ff594:
    // 0x3ff594: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x3ff594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3ff598: 0x8ee60014  lw          $a2, 0x14($s7)
    ctx->pc = 0x3ff598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x3ff59c: 0xc054bbc  jal         func_152EF0
    ctx->pc = 0x3FF59Cu;
    SET_GPR_U32(ctx, 31, 0x3FF5A4u);
    ctx->pc = 0x3FF5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF59Cu;
            // 0x3ff5a0: 0xc68c001c  lwc1        $f12, 0x1C($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF5A4u; }
        if (ctx->pc != 0x3FF5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF5A4u; }
        if (ctx->pc != 0x3FF5A4u) { return; }
    }
    ctx->pc = 0x3FF5A4u;
label_3ff5a4:
    // 0x3ff5a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ff5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ff5a8:
    // 0x3ff5a8: 0xa2a200f8  sb          $v0, 0xF8($s5)
    ctx->pc = 0x3ff5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 248), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ff5ac: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3ff5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ff5b0:
    // 0x3ff5b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ff5b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff5b4: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x3ff5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3ff5b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ff5b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff5bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ff5bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff5c0: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x3ff5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x3ff5c4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3ff5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3ff5c8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x3ff5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x3ff5cc: 0x8ea300e0  lw          $v1, 0xE0($s5)
    ctx->pc = 0x3ff5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
    // 0x3ff5d0: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x3ff5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3ff5d4: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x3ff5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_3ff5d8:
    // 0x3ff5d8: 0x8ea300e0  lw          $v1, 0xE0($s5)
    ctx->pc = 0x3ff5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
    // 0x3ff5dc: 0x8ea200e4  lw          $v0, 0xE4($s5)
    ctx->pc = 0x3ff5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 228)));
    // 0x3ff5e0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3ff5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3ff5e4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3ff5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3ff5e8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x3ff5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3ff5ec: 0xc04a508  jal         func_129420
    ctx->pc = 0x3FF5ECu;
    SET_GPR_U32(ctx, 31, 0x3FF5F4u);
    ctx->pc = 0x3FF5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF5ECu;
            // 0x3ff5f0: 0x240600e0  addiu       $a2, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF5F4u; }
        if (ctx->pc != 0x3FF5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF5F4u; }
        if (ctx->pc != 0x3FF5F4u) { return; }
    }
    ctx->pc = 0x3FF5F4u;
label_3ff5f4:
    // 0x3ff5f4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x3ff5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x3ff5f8: 0x8ea300c0  lw          $v1, 0xC0($s5)
    ctx->pc = 0x3ff5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
    // 0x3ff5fc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3ff5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ff600: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x3ff600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3ff604: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3ff604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x3ff608: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x3ff608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3ff60c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ff60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ff610: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3ff610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff614: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x3ff614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3ff618: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3ff618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ff61c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x3ff61cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x3ff620: 0x0  nop
    ctx->pc = 0x3ff620u;
    // NOP
    // 0x3ff624: 0x0  nop
    ctx->pc = 0x3ff624u;
    // NOP
    // 0x3ff628: 0xc0748d4  jal         func_1D2350
    ctx->pc = 0x3FF628u;
    SET_GPR_U32(ctx, 31, 0x3FF630u);
    ctx->pc = 0x3FF62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF628u;
            // 0x3ff62c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2350u;
    if (runtime->hasFunction(0x1D2350u)) {
        auto targetFn = runtime->lookupFunction(0x1D2350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF630u; }
        if (ctx->pc != 0x3FF630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2350_0x1d2350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF630u; }
        if (ctx->pc != 0x3FF630u) { return; }
    }
    ctx->pc = 0x3FF630u;
label_3ff630:
    // 0x3ff630: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3ff630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3ff634: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3ff634u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3ff638: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x3ff638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3ff63c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x3ff63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x3ff640: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3ff640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3ff644: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x3ff644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3ff648: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x3FF648u;
    {
        const bool branch_taken_0x3ff648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FF64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF648u;
            // 0x3ff64c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff648) {
            ctx->pc = 0x3FF5D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ff5d8;
        }
    }
    ctx->pc = 0x3FF650u;
    // 0x3ff650: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x3ff650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x3ff654: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3ff654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff658: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x3FF658u;
    SET_GPR_U32(ctx, 31, 0x3FF660u);
    ctx->pc = 0x3FF65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF658u;
            // 0x3ff65c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF660u; }
        if (ctx->pc != 0x3FF660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF660u; }
        if (ctx->pc != 0x3FF660u) { return; }
    }
    ctx->pc = 0x3FF660u;
label_3ff660:
    // 0x3ff660: 0x8ea200c0  lw          $v0, 0xC0($s5)
    ctx->pc = 0x3ff660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
    // 0x3ff664: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ff664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff668: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3ff668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ff66c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ff66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ff670:
    // 0x3ff670: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3ff670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ff674: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3ff674u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ff678: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x3FF678u;
    {
        const bool branch_taken_0x3ff678 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ff678) {
            ctx->pc = 0x3FF6A0u;
            goto label_3ff6a0;
        }
    }
    ctx->pc = 0x3FF680u;
    // 0x3ff680: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3ff680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3ff684: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3ff684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3ff688: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x3ff688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x3ff68c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3ff68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3ff690: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x3ff690u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3ff694: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x3FF694u;
    {
        const bool branch_taken_0x3ff694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FF698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF694u;
            // 0x3ff698: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff694) {
            ctx->pc = 0x3FF670u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ff670;
        }
    }
    ctx->pc = 0x3FF69Cu;
    // 0x3ff69c: 0x0  nop
    ctx->pc = 0x3ff69cu;
    // NOP
label_3ff6a0:
    // 0x3ff6a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ff6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ff6a4: 0x52030026  beql        $s0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3FF6A4u;
    {
        const bool branch_taken_0x3ff6a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff6a4) {
            ctx->pc = 0x3FF6A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF6A4u;
            // 0x3ff6a8: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FF740u;
            goto label_3ff740;
        }
    }
    ctx->pc = 0x3FF6ACu;
    // 0x3ff6ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ff6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ff6b0: 0x12030022  beq         $s0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3FF6B0u;
    {
        const bool branch_taken_0x3ff6b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff6b0) {
            ctx->pc = 0x3FF73Cu;
            goto label_3ff73c;
        }
    }
    ctx->pc = 0x3FF6B8u;
    // 0x3ff6b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ff6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ff6bc: 0x1203001f  beq         $s0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3FF6BCu;
    {
        const bool branch_taken_0x3ff6bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff6bc) {
            ctx->pc = 0x3FF73Cu;
            goto label_3ff73c;
        }
    }
    ctx->pc = 0x3FF6C4u;
    // 0x3ff6c4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3ff6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ff6c8: 0x1203001c  beq         $s0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3FF6C8u;
    {
        const bool branch_taken_0x3ff6c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff6c8) {
            ctx->pc = 0x3FF73Cu;
            goto label_3ff73c;
        }
    }
    ctx->pc = 0x3FF6D0u;
    // 0x3ff6d0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3ff6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ff6d4: 0x12030019  beq         $s0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3FF6D4u;
    {
        const bool branch_taken_0x3ff6d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff6d4) {
            ctx->pc = 0x3FF73Cu;
            goto label_3ff73c;
        }
    }
    ctx->pc = 0x3FF6DCu;
    // 0x3ff6dc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3ff6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ff6e0: 0x12030016  beq         $s0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3FF6E0u;
    {
        const bool branch_taken_0x3ff6e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff6e0) {
            ctx->pc = 0x3FF73Cu;
            goto label_3ff73c;
        }
    }
    ctx->pc = 0x3FF6E8u;
    // 0x3ff6e8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3ff6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3ff6ec: 0x12030013  beq         $s0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3FF6ECu;
    {
        const bool branch_taken_0x3ff6ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff6ec) {
            ctx->pc = 0x3FF73Cu;
            goto label_3ff73c;
        }
    }
    ctx->pc = 0x3FF6F4u;
    // 0x3ff6f4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3ff6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3ff6f8: 0x12030010  beq         $s0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3FF6F8u;
    {
        const bool branch_taken_0x3ff6f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff6f8) {
            ctx->pc = 0x3FF73Cu;
            goto label_3ff73c;
        }
    }
    ctx->pc = 0x3FF700u;
    // 0x3ff700: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3ff700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3ff704: 0x1203000d  beq         $s0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3FF704u;
    {
        const bool branch_taken_0x3ff704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff704) {
            ctx->pc = 0x3FF73Cu;
            goto label_3ff73c;
        }
    }
    ctx->pc = 0x3FF70Cu;
    // 0x3ff70c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3ff70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3ff710: 0x1203000a  beq         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3FF710u;
    {
        const bool branch_taken_0x3ff710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff710) {
            ctx->pc = 0x3FF73Cu;
            goto label_3ff73c;
        }
    }
    ctx->pc = 0x3FF718u;
    // 0x3ff718: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x3ff718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3ff71c: 0x12030007  beq         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FF71Cu;
    {
        const bool branch_taken_0x3ff71c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff71c) {
            ctx->pc = 0x3FF73Cu;
            goto label_3ff73c;
        }
    }
    ctx->pc = 0x3FF724u;
    // 0x3ff724: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3ff724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3ff728: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FF728u;
    {
        const bool branch_taken_0x3ff728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff728) {
            ctx->pc = 0x3FF73Cu;
            goto label_3ff73c;
        }
    }
    ctx->pc = 0x3FF730u;
    // 0x3ff730: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3ff730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ff734: 0x56030012  bnel        $s0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3FF734u;
    {
        const bool branch_taken_0x3ff734 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ff734) {
            ctx->pc = 0x3FF738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF734u;
            // 0x3ff738: 0x8e860000  lw          $a2, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FF780u;
            goto label_3ff780;
        }
    }
    ctx->pc = 0x3FF73Cu;
label_3ff73c:
    // 0x3ff73c: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x3ff73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
label_3ff740:
    // 0x3ff740: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3ff740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ff744: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3FF744u;
    {
        const bool branch_taken_0x3ff744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ff744) {
            ctx->pc = 0x3FF77Cu;
            goto label_3ff77c;
        }
    }
    ctx->pc = 0x3FF74Cu;
    // 0x3ff74c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3ff74cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3ff750: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x3ff750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x3ff754: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3ff754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3ff758: 0xc441fffc  lwc1        $f1, -0x4($v0)
    ctx->pc = 0x3ff758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ff75c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ff75cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ff760: 0x0  nop
    ctx->pc = 0x3ff760u;
    // NOP
    // 0x3ff764: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ff764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ff768: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3FF768u;
    {
        const bool branch_taken_0x3ff768 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ff768) {
            ctx->pc = 0x3FF77Cu;
            goto label_3ff77c;
        }
    }
    ctx->pc = 0x3FF770u;
    // 0x3ff770: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x3ff770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x3ff774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ff774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ff778: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3ff778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3ff77c:
    // 0x3ff77c: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x3ff77cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ff780:
    // 0x3ff780: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3ff780u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x3ff784: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3ff784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff788: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3ff788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff78c: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x3ff78cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3ff790: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x3ff790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
    // 0x3ff794: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x3FF794u;
    SET_GPR_U32(ctx, 31, 0x3FF79Cu);
    ctx->pc = 0x3FF798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF794u;
            // 0x3ff798: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF79Cu; }
        if (ctx->pc != 0x3FF79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF79Cu; }
        if (ctx->pc != 0x3FF79Cu) { return; }
    }
    ctx->pc = 0x3FF79Cu;
label_3ff79c:
    // 0x3ff79c: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x3ff79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3ff7a0: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3ff7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3ff7a4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3ff7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff7a8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3ff7a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff7ac: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3ff7acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x3ff7b0: 0xc054c2c  jal         func_1530B0
    ctx->pc = 0x3FF7B0u;
    SET_GPR_U32(ctx, 31, 0x3FF7B8u);
    ctx->pc = 0x3FF7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF7B0u;
            // 0x3ff7b4: 0x34480480  ori         $t0, $v0, 0x480 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1152);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF7B8u; }
        if (ctx->pc != 0x3FF7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF7B8u; }
        if (ctx->pc != 0x3FF7B8u) { return; }
    }
    ctx->pc = 0x3FF7B8u;
label_3ff7b8:
    // 0x3ff7b8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x3ff7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3ff7bc: 0xc0747e8  jal         func_1D1FA0
    ctx->pc = 0x3FF7BCu;
    SET_GPR_U32(ctx, 31, 0x3FF7C4u);
    ctx->pc = 0x3FF7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF7BCu;
            // 0x3ff7c0: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1FA0u;
    if (runtime->hasFunction(0x1D1FA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D1FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF7C4u; }
        if (ctx->pc != 0x3FF7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1FA0_0x1d1fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF7C4u; }
        if (ctx->pc != 0x3FF7C4u) { return; }
    }
    ctx->pc = 0x3FF7C4u;
label_3ff7c4:
    // 0x3ff7c4: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x3ff7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3ff7c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ff7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ff7cc: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x3ff7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
    // 0x3ff7d0: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x3ff7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3ff7d4: 0x8ea400e4  lw          $a0, 0xE4($s5)
    ctx->pc = 0x3ff7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 228)));
    // 0x3ff7d8: 0x12050022  beq         $s0, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3FF7D8u;
    {
        const bool branch_taken_0x3ff7d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x3FF7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF7D8u;
            // 0x3ff7dc: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff7d8) {
            ctx->pc = 0x3FF864u;
            goto label_3ff864;
        }
    }
    ctx->pc = 0x3FF7E0u;
    // 0x3ff7e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ff7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ff7e4: 0x52030020  beql        $s0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3FF7E4u;
    {
        const bool branch_taken_0x3ff7e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff7e4) {
            ctx->pc = 0x3FF7E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF7E4u;
            // 0x3ff7e8: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FF868u;
            goto label_3ff868;
        }
    }
    ctx->pc = 0x3FF7ECu;
    // 0x3ff7ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ff7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ff7f0: 0x1203001c  beq         $s0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3FF7F0u;
    {
        const bool branch_taken_0x3ff7f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff7f0) {
            ctx->pc = 0x3FF864u;
            goto label_3ff864;
        }
    }
    ctx->pc = 0x3FF7F8u;
    // 0x3ff7f8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3ff7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ff7fc: 0x12030019  beq         $s0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3FF7FCu;
    {
        const bool branch_taken_0x3ff7fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff7fc) {
            ctx->pc = 0x3FF864u;
            goto label_3ff864;
        }
    }
    ctx->pc = 0x3FF804u;
    // 0x3ff804: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3ff804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ff808: 0x12030016  beq         $s0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3FF808u;
    {
        const bool branch_taken_0x3ff808 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff808) {
            ctx->pc = 0x3FF864u;
            goto label_3ff864;
        }
    }
    ctx->pc = 0x3FF810u;
    // 0x3ff810: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3ff810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ff814: 0x12030013  beq         $s0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3FF814u;
    {
        const bool branch_taken_0x3ff814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff814) {
            ctx->pc = 0x3FF864u;
            goto label_3ff864;
        }
    }
    ctx->pc = 0x3FF81Cu;
    // 0x3ff81c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3ff81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3ff820: 0x12030010  beq         $s0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3FF820u;
    {
        const bool branch_taken_0x3ff820 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff820) {
            ctx->pc = 0x3FF864u;
            goto label_3ff864;
        }
    }
    ctx->pc = 0x3FF828u;
    // 0x3ff828: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3ff828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3ff82c: 0x1203000d  beq         $s0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3FF82Cu;
    {
        const bool branch_taken_0x3ff82c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff82c) {
            ctx->pc = 0x3FF864u;
            goto label_3ff864;
        }
    }
    ctx->pc = 0x3FF834u;
    // 0x3ff834: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3ff834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3ff838: 0x1203000a  beq         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3FF838u;
    {
        const bool branch_taken_0x3ff838 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff838) {
            ctx->pc = 0x3FF864u;
            goto label_3ff864;
        }
    }
    ctx->pc = 0x3FF840u;
    // 0x3ff840: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3ff840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3ff844: 0x12030007  beq         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FF844u;
    {
        const bool branch_taken_0x3ff844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff844) {
            ctx->pc = 0x3FF864u;
            goto label_3ff864;
        }
    }
    ctx->pc = 0x3FF84Cu;
    // 0x3ff84c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x3ff84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3ff850: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FF850u;
    {
        const bool branch_taken_0x3ff850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff850) {
            ctx->pc = 0x3FF864u;
            goto label_3ff864;
        }
    }
    ctx->pc = 0x3FF858u;
    // 0x3ff858: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3ff858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ff85c: 0x16030023  bne         $s0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3FF85Cu;
    {
        const bool branch_taken_0x3ff85c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ff85c) {
            ctx->pc = 0x3FF8ECu;
            goto label_3ff8ec;
        }
    }
    ctx->pc = 0x3FF864u;
label_3ff864:
    // 0x3ff864: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x3ff864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
label_3ff868:
    // 0x3ff868: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3ff868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ff86c: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3FF86Cu;
    {
        const bool branch_taken_0x3ff86c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ff86c) {
            ctx->pc = 0x3FF8ECu;
            goto label_3ff8ec;
        }
    }
    ctx->pc = 0x3FF874u;
    // 0x3ff874: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x3ff874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3ff878: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3ff878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff87c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3ff87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x3ff880: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x3FF880u;
    SET_GPR_U32(ctx, 31, 0x3FF888u);
    ctx->pc = 0x3FF884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF880u;
            // 0x3ff884: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF888u; }
        if (ctx->pc != 0x3FF888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF888u; }
        if (ctx->pc != 0x3FF888u) { return; }
    }
    ctx->pc = 0x3FF888u;
label_3ff888:
    // 0x3ff888: 0x8ea300c0  lw          $v1, 0xC0($s5)
    ctx->pc = 0x3ff888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
    // 0x3ff88c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x3ff88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x3ff890: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3ff890u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3ff894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ff894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ff898: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x3ff898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ff89c: 0xc441fffc  lwc1        $f1, -0x4($v0)
    ctx->pc = 0x3ff89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ff8a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ff8a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ff8a4: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x3FF8A4u;
    {
        const bool branch_taken_0x3ff8a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ff8a4) {
            ctx->pc = 0x3FF8A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF8A4u;
            // 0x3ff8a8: 0x8ee60000  lw          $a2, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FF8B8u;
            goto label_3ff8b8;
        }
    }
    ctx->pc = 0x3FF8ACu;
    // 0x3ff8ac: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x3ff8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x3ff8b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3ff8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3ff8b4: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x3ff8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3ff8b8:
    // 0x3ff8b8: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3ff8b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x3ff8bc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3ff8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff8c0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3ff8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff8c4: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x3ff8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3ff8c8: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x3ff8c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
    // 0x3ff8cc: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x3FF8CCu;
    SET_GPR_U32(ctx, 31, 0x3FF8D4u);
    ctx->pc = 0x3FF8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF8CCu;
            // 0x3ff8d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF8D4u; }
        if (ctx->pc != 0x3FF8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF8D4u; }
        if (ctx->pc != 0x3FF8D4u) { return; }
    }
    ctx->pc = 0x3FF8D4u;
label_3ff8d4:
    // 0x3ff8d4: 0x8ee40010  lw          $a0, 0x10($s7)
    ctx->pc = 0x3ff8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x3ff8d8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3ff8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff8dc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3ff8dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff8e0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3ff8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x3ff8e4: 0xc054c2c  jal         func_1530B0
    ctx->pc = 0x3FF8E4u;
    SET_GPR_U32(ctx, 31, 0x3FF8ECu);
    ctx->pc = 0x3FF8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF8E4u;
            // 0x3ff8e8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF8ECu; }
        if (ctx->pc != 0x3FF8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF8ECu; }
        if (ctx->pc != 0x3FF8ECu) { return; }
    }
    ctx->pc = 0x3FF8ECu;
label_3ff8ec:
    // 0x3ff8ec: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3ff8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3ff8f0:
    // 0x3ff8f0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3ff8f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ff8f4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3ff8f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ff8f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3ff8f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ff8fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3ff8fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ff900: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ff900u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ff904: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ff904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ff908: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ff908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ff90c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ff90cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ff910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ff910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ff914: 0x3e00008  jr          $ra
    ctx->pc = 0x3FF914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FF918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF914u;
            // 0x3ff918: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FF91Cu;
    // 0x3ff91c: 0x0  nop
    ctx->pc = 0x3ff91cu;
    // NOP
}
