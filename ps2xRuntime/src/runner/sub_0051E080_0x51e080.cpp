#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051E080
// Address: 0x51e080 - 0x51e4e0
void sub_0051E080_0x51e080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051E080_0x51e080");
#endif

    switch (ctx->pc) {
        case 0x51e118u: goto label_51e118;
        case 0x51e134u: goto label_51e134;
        case 0x51e140u: goto label_51e140;
        case 0x51e18cu: goto label_51e18c;
        case 0x51e194u: goto label_51e194;
        case 0x51e1a0u: goto label_51e1a0;
        case 0x51e1c8u: goto label_51e1c8;
        case 0x51e1d8u: goto label_51e1d8;
        case 0x51e1e4u: goto label_51e1e4;
        case 0x51e210u: goto label_51e210;
        case 0x51e220u: goto label_51e220;
        case 0x51e230u: goto label_51e230;
        case 0x51e244u: goto label_51e244;
        case 0x51e26cu: goto label_51e26c;
        case 0x51e274u: goto label_51e274;
        case 0x51e28cu: goto label_51e28c;
        case 0x51e2acu: goto label_51e2ac;
        case 0x51e2d8u: goto label_51e2d8;
        case 0x51e2e4u: goto label_51e2e4;
        case 0x51e304u: goto label_51e304;
        case 0x51e31cu: goto label_51e31c;
        case 0x51e338u: goto label_51e338;
        case 0x51e344u: goto label_51e344;
        case 0x51e390u: goto label_51e390;
        case 0x51e398u: goto label_51e398;
        case 0x51e3a4u: goto label_51e3a4;
        case 0x51e3ccu: goto label_51e3cc;
        case 0x51e3dcu: goto label_51e3dc;
        case 0x51e3e8u: goto label_51e3e8;
        case 0x51e414u: goto label_51e414;
        case 0x51e420u: goto label_51e420;
        case 0x51e430u: goto label_51e430;
        case 0x51e474u: goto label_51e474;
        case 0x51e488u: goto label_51e488;
        case 0x51e490u: goto label_51e490;
        case 0x51e4a8u: goto label_51e4a8;
        default: break;
    }

    ctx->pc = 0x51e080u;

    // 0x51e080: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x51e080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x51e084: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x51e084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x51e088: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x51e088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x51e08c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x51e08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x51e090: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x51e090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x51e094: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x51e094u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e098: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x51e098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x51e09c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x51e09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x51e0a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x51e0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x51e0a4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x51e0a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e0a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51e0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x51e0ac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x51e0acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e0b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51e0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x51e0b4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x51e0b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e0b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51e0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x51e0bc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x51e0bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e0c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51e0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51e0c4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x51e0c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e0c8: 0x8c8401c4  lw          $a0, 0x1C4($a0)
    ctx->pc = 0x51e0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
    // 0x51e0cc: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x51e0ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e0d0: 0x10830070  beq         $a0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x51E0D0u;
    {
        const bool branch_taken_0x51e0d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x51E0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51E0D0u;
            // 0x51e0d4: 0xafab00ac  sw          $t3, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51e0d0) {
            ctx->pc = 0x51E294u;
            goto label_51e294;
        }
    }
    ctx->pc = 0x51E0D8u;
    // 0x51e0d8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x51e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x51e0dc: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x51E0DCu;
    {
        const bool branch_taken_0x51e0dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x51e0dc) {
            ctx->pc = 0x51E100u;
            goto label_51e100;
        }
    }
    ctx->pc = 0x51E0E4u;
    // 0x51e0e4: 0x4820072  bltzl       $a0, . + 4 + (0x72 << 2)
    ctx->pc = 0x51E0E4u;
    {
        const bool branch_taken_0x51e0e4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x51e0e4) {
            ctx->pc = 0x51E0E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51E0E4u;
            // 0x51e0e8: 0x92a30220  lbu         $v1, 0x220($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 544)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51E2B0u;
            goto label_51e2b0;
        }
    }
    ctx->pc = 0x51E0ECu;
    // 0x51e0ec: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x51e0ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x51e0f0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x51E0F0u;
    {
        const bool branch_taken_0x51e0f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x51e0f0) {
            ctx->pc = 0x51E100u;
            goto label_51e100;
        }
    }
    ctx->pc = 0x51E0F8u;
    // 0x51e0f8: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x51E0F8u;
    {
        const bool branch_taken_0x51e0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51e0f8) {
            ctx->pc = 0x51E2ACu;
            goto label_51e2ac;
        }
    }
    ctx->pc = 0x51E100u;
label_51e100:
    // 0x51e100: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51e100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x51e104: 0x8e960020  lw          $s6, 0x20($s4)
    ctx->pc = 0x51e104u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x51e108: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x51e108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x51e10c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x51e10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e110: 0xc07698c  jal         func_1DA630
    ctx->pc = 0x51E110u;
    SET_GPR_U32(ctx, 31, 0x51E118u);
    ctx->pc = 0x51E114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E110u;
            // 0x51e114: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E118u; }
        if (ctx->pc != 0x51E118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E118u; }
        if (ctx->pc != 0x51E118u) { return; }
    }
    ctx->pc = 0x51E118u;
label_51e118:
    // 0x51e118: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x51e118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x51e11c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x51E11Cu;
    {
        const bool branch_taken_0x51e11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x51e11c) {
            ctx->pc = 0x51E12Cu;
            goto label_51e12c;
        }
    }
    ctx->pc = 0x51E124u;
    // 0x51e124: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x51E124u;
    {
        const bool branch_taken_0x51e124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51E128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51E124u;
            // 0x51e128: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51e124) {
            ctx->pc = 0x51E1F8u;
            goto label_51e1f8;
        }
    }
    ctx->pc = 0x51E12Cu;
label_51e12c:
    // 0x51e12c: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x51E12Cu;
    SET_GPR_U32(ctx, 31, 0x51E134u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E134u; }
        if (ctx->pc != 0x51E134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E134u; }
        if (ctx->pc != 0x51E134u) { return; }
    }
    ctx->pc = 0x51E134u;
label_51e134:
    // 0x51e134: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51e134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e138: 0xc076984  jal         func_1DA610
    ctx->pc = 0x51E138u;
    SET_GPR_U32(ctx, 31, 0x51E140u);
    ctx->pc = 0x51E13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E138u;
            // 0x51e13c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E140u; }
        if (ctx->pc != 0x51E140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E140u; }
        if (ctx->pc != 0x51E140u) { return; }
    }
    ctx->pc = 0x51E140u;
label_51e140:
    // 0x51e140: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x51e140u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e144: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x51e144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x51e148: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x51e148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x51e14c: 0x26a501d0  addiu       $a1, $s5, 0x1D0
    ctx->pc = 0x51e14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 464));
    // 0x51e150: 0xc442ce80  lwc1        $f2, -0x3180($v0)
    ctx->pc = 0x51e150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x51e154: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x51e154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e158: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x51e158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x51e15c: 0xc441ce88  lwc1        $f1, -0x3178($v0)
    ctx->pc = 0x51e15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x51e160: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x51e160u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x51e164: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x51e164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x51e168: 0xc440ce8c  lwc1        $f0, -0x3174($v0)
    ctx->pc = 0x51e168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x51e16c: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x51e16cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x51e170: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x51e170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x51e174: 0x8c42ce84  lw          $v0, -0x317C($v0)
    ctx->pc = 0x51e174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954628)));
    // 0x51e178: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x51e178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x51e17c: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x51e17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x51e180: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x51e180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x51e184: 0xc04cca0  jal         func_133280
    ctx->pc = 0x51E184u;
    SET_GPR_U32(ctx, 31, 0x51E18Cu);
    ctx->pc = 0x51E188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E184u;
            // 0x51e188: 0xe7a00144  swc1        $f0, 0x144($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E18Cu; }
        if (ctx->pc != 0x51E18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E18Cu; }
        if (ctx->pc != 0x51E18Cu) { return; }
    }
    ctx->pc = 0x51E18Cu;
label_51e18c:
    // 0x51e18c: 0xc076980  jal         func_1DA600
    ctx->pc = 0x51E18Cu;
    SET_GPR_U32(ctx, 31, 0x51E194u);
    ctx->pc = 0x51E190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E18Cu;
            // 0x51e190: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E194u; }
        if (ctx->pc != 0x51E194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E194u; }
        if (ctx->pc != 0x51E194u) { return; }
    }
    ctx->pc = 0x51E194u;
label_51e194:
    // 0x51e194: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x51e194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x51e198: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x51E198u;
    SET_GPR_U32(ctx, 31, 0x51E1A0u);
    ctx->pc = 0x51E19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E198u;
            // 0x51e19c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E1A0u; }
        if (ctx->pc != 0x51E1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E1A0u; }
        if (ctx->pc != 0x51E1A0u) { return; }
    }
    ctx->pc = 0x51E1A0u;
label_51e1a0:
    // 0x51e1a0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x51e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x51e1a4: 0xc461c470  lwc1        $f1, -0x3B90($v1)
    ctx->pc = 0x51e1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x51e1a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x51e1a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x51e1ac: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x51E1ACu;
    {
        const bool branch_taken_0x51e1ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x51e1ac) {
            ctx->pc = 0x51E1B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51E1ACu;
            // 0x51e1b0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51E1C0u;
            goto label_51e1c0;
        }
    }
    ctx->pc = 0x51E1B4u;
    // 0x51e1b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x51E1B4u;
    {
        const bool branch_taken_0x51e1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51E1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51E1B4u;
            // 0x51e1b8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51e1b4) {
            ctx->pc = 0x51E1F8u;
            goto label_51e1f8;
        }
    }
    ctx->pc = 0x51E1BCu;
    // 0x51e1bc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x51e1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_51e1c0:
    // 0x51e1c0: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x51E1C0u;
    SET_GPR_U32(ctx, 31, 0x51E1C8u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E1C8u; }
        if (ctx->pc != 0x51E1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E1C8u; }
        if (ctx->pc != 0x51E1C8u) { return; }
    }
    ctx->pc = 0x51E1C8u;
label_51e1c8:
    // 0x51e1c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x51e1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e1cc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x51e1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x51e1d0: 0xc04cd60  jal         func_133580
    ctx->pc = 0x51E1D0u;
    SET_GPR_U32(ctx, 31, 0x51E1D8u);
    ctx->pc = 0x51E1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E1D0u;
            // 0x51e1d4: 0x26a601d0  addiu       $a2, $s5, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E1D8u; }
        if (ctx->pc != 0x51E1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E1D8u; }
        if (ctx->pc != 0x51E1D8u) { return; }
    }
    ctx->pc = 0x51E1D8u;
label_51e1d8:
    // 0x51e1d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x51e1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e1dc: 0xc04c650  jal         func_131940
    ctx->pc = 0x51E1DCu;
    SET_GPR_U32(ctx, 31, 0x51E1E4u);
    ctx->pc = 0x51E1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E1DCu;
            // 0x51e1e0: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E1E4u; }
        if (ctx->pc != 0x51E1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E1E4u; }
        if (ctx->pc != 0x51E1E4u) { return; }
    }
    ctx->pc = 0x51E1E4u;
label_51e1e4:
    // 0x51e1e4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x51e1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x51e1e8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x51e1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x51e1ec: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x51e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
    // 0x51e1f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x51e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x51e1f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x51e1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_51e1f8:
    // 0x51e1f8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x51e1f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x51e1fc: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x51E1FCu;
    {
        const bool branch_taken_0x51e1fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x51E200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51E1FCu;
            // 0x51e200: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51e1fc) {
            ctx->pc = 0x51E2ACu;
            goto label_51e2ac;
        }
    }
    ctx->pc = 0x51E204u;
    // 0x51e204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x51e204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e208: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x51E208u;
    SET_GPR_U32(ctx, 31, 0x51E210u);
    ctx->pc = 0x51E20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E208u;
            // 0x51e20c: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E210u; }
        if (ctx->pc != 0x51E210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E210u; }
        if (ctx->pc != 0x51E210u) { return; }
    }
    ctx->pc = 0x51E210u;
label_51e210:
    // 0x51e210: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x51e210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x51e214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x51e214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e218: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x51E218u;
    SET_GPR_U32(ctx, 31, 0x51E220u);
    ctx->pc = 0x51E21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E218u;
            // 0x51e21c: 0x24a5c480  addiu       $a1, $a1, -0x3B80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E220u; }
        if (ctx->pc != 0x51E220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E220u; }
        if (ctx->pc != 0x51E220u) { return; }
    }
    ctx->pc = 0x51E220u;
label_51e220:
    // 0x51e220: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x51e220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x51e224: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x51e224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e228: 0xc04cd60  jal         func_133580
    ctx->pc = 0x51E228u;
    SET_GPR_U32(ctx, 31, 0x51E230u);
    ctx->pc = 0x51E22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E228u;
            // 0x51e22c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E230u; }
        if (ctx->pc != 0x51E230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E230u; }
        if (ctx->pc != 0x51E230u) { return; }
    }
    ctx->pc = 0x51E230u;
label_51e230:
    // 0x51e230: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x51e230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x51e234: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51e234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e238: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x51e238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x51e23c: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x51E23Cu;
    SET_GPR_U32(ctx, 31, 0x51E244u);
    ctx->pc = 0x51E240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E23Cu;
            // 0x51e240: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E244u; }
        if (ctx->pc != 0x51E244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E244u; }
        if (ctx->pc != 0x51E244u) { return; }
    }
    ctx->pc = 0x51E244u;
label_51e244:
    // 0x51e244: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x51e244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x51e248: 0xc6ac01cc  lwc1        $f12, 0x1CC($s5)
    ctx->pc = 0x51e248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x51e24c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x51e24cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x51e250: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x51e250u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x51e254: 0x8faa00ac  lw          $t2, 0xAC($sp)
    ctx->pc = 0x51e254u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x51e258: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x51e258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e25c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x51e25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e260: 0x27a80190  addiu       $t0, $sp, 0x190
    ctx->pc = 0x51e260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x51e264: 0xc04cff4  jal         func_133FD0
    ctx->pc = 0x51E264u;
    SET_GPR_U32(ctx, 31, 0x51E26Cu);
    ctx->pc = 0x51E268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E264u;
            // 0x51e268: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E26Cu; }
        if (ctx->pc != 0x51E26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E26Cu; }
        if (ctx->pc != 0x51E26Cu) { return; }
    }
    ctx->pc = 0x51E26Cu;
label_51e26c:
    // 0x51e26c: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x51E26Cu;
    SET_GPR_U32(ctx, 31, 0x51E274u);
    ctx->pc = 0x51E270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E26Cu;
            // 0x51e270: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E274u; }
        if (ctx->pc != 0x51E274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E274u; }
        if (ctx->pc != 0x51E274u) { return; }
    }
    ctx->pc = 0x51E274u;
label_51e274:
    // 0x51e274: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x51e274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x51e278: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x51e278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e27c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x51e27cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e280: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x51e280u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x51e284: 0xc0538d8  jal         func_14E360
    ctx->pc = 0x51E284u;
    SET_GPR_U32(ctx, 31, 0x51E28Cu);
    ctx->pc = 0x51E288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E284u;
            // 0x51e288: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E28Cu; }
        if (ctx->pc != 0x51E28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E28Cu; }
        if (ctx->pc != 0x51E28Cu) { return; }
    }
    ctx->pc = 0x51E28Cu;
label_51e28c:
    // 0x51e28c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x51E28Cu;
    {
        const bool branch_taken_0x51e28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51e28c) {
            ctx->pc = 0x51E2ACu;
            goto label_51e2ac;
        }
    }
    ctx->pc = 0x51E294u;
label_51e294:
    // 0x51e294: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x51e294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x51e298: 0x8ea40210  lw          $a0, 0x210($s5)
    ctx->pc = 0x51e298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 528)));
    // 0x51e29c: 0xc44cc470  lwc1        $f12, -0x3B90($v0)
    ctx->pc = 0x51e29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x51e2a0: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x51e2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x51e2a4: 0xc0e325c  jal         func_38C970
    ctx->pc = 0x51E2A4u;
    SET_GPR_U32(ctx, 31, 0x51E2ACu);
    ctx->pc = 0x51E2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E2A4u;
            // 0x51e2a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C970u;
    if (runtime->hasFunction(0x38C970u)) {
        auto targetFn = runtime->lookupFunction(0x38C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E2ACu; }
        if (ctx->pc != 0x51E2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C970_0x38c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E2ACu; }
        if (ctx->pc != 0x51E2ACu) { return; }
    }
    ctx->pc = 0x51E2ACu;
label_51e2ac:
    // 0x51e2ac: 0x92a30220  lbu         $v1, 0x220($s5)
    ctx->pc = 0x51e2acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 544)));
label_51e2b0:
    // 0x51e2b0: 0x5060007e  beql        $v1, $zero, . + 4 + (0x7E << 2)
    ctx->pc = 0x51E2B0u;
    {
        const bool branch_taken_0x51e2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x51e2b0) {
            ctx->pc = 0x51E2B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51E2B0u;
            // 0x51e2b4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51E4ACu;
            goto label_51e4ac;
        }
    }
    ctx->pc = 0x51E2B8u;
    // 0x51e2b8: 0x8eb30008  lw          $s3, 0x8($s5)
    ctx->pc = 0x51e2b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x51e2bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x51e2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e2c0: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x51e2c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x51e2c4: 0x92620e3d  lbu         $v0, 0xE3D($s3)
    ctx->pc = 0x51e2c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3645)));
    // 0x51e2c8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x51e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x51e2cc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x51e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x51e2d0: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x51E2D0u;
    SET_GPR_U32(ctx, 31, 0x51E2D8u);
    ctx->pc = 0x51E2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E2D0u;
            // 0x51e2d4: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E2D8u; }
        if (ctx->pc != 0x51E2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E2D8u; }
        if (ctx->pc != 0x51E2D8u) { return; }
    }
    ctx->pc = 0x51E2D8u;
label_51e2d8:
    // 0x51e2d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x51e2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e2dc: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x51E2DCu;
    SET_GPR_U32(ctx, 31, 0x51E2E4u);
    ctx->pc = 0x51E2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E2DCu;
            // 0x51e2e0: 0x26650ec0  addiu       $a1, $s3, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E2E4u; }
        if (ctx->pc != 0x51E2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E2E4u; }
        if (ctx->pc != 0x51E2E4u) { return; }
    }
    ctx->pc = 0x51E2E4u;
label_51e2e4:
    // 0x51e2e4: 0x8e620550  lw          $v0, 0x550($s3)
    ctx->pc = 0x51e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1360)));
    // 0x51e2e8: 0x8042010f  lb          $v0, 0x10F($v0)
    ctx->pc = 0x51e2e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 271)));
    // 0x51e2ec: 0x28410013  slti        $at, $v0, 0x13
    ctx->pc = 0x51e2ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x51e2f0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x51E2F0u;
    {
        const bool branch_taken_0x51e2f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51e2f0) {
            ctx->pc = 0x51E304u;
            goto label_51e304;
        }
    }
    ctx->pc = 0x51E2F8u;
    // 0x51e2f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x51e2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e2fc: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x51E2FCu;
    SET_GPR_U32(ctx, 31, 0x51E304u);
    ctx->pc = 0x51E300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E2FCu;
            // 0x51e300: 0x266502c0  addiu       $a1, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E304u; }
        if (ctx->pc != 0x51E304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E304u; }
        if (ctx->pc != 0x51E304u) { return; }
    }
    ctx->pc = 0x51E304u;
label_51e304:
    // 0x51e304: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51e304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x51e308: 0x8e960000  lw          $s6, 0x0($s4)
    ctx->pc = 0x51e308u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x51e30c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x51e30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x51e310: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x51e310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e314: 0xc07698c  jal         func_1DA630
    ctx->pc = 0x51E314u;
    SET_GPR_U32(ctx, 31, 0x51E31Cu);
    ctx->pc = 0x51E318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E314u;
            // 0x51e318: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E31Cu; }
        if (ctx->pc != 0x51E31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E31Cu; }
        if (ctx->pc != 0x51E31Cu) { return; }
    }
    ctx->pc = 0x51E31Cu;
label_51e31c:
    // 0x51e31c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x51e31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x51e320: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x51E320u;
    {
        const bool branch_taken_0x51e320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x51e320) {
            ctx->pc = 0x51E330u;
            goto label_51e330;
        }
    }
    ctx->pc = 0x51E328u;
    // 0x51e328: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x51E328u;
    {
        const bool branch_taken_0x51e328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51E32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51E328u;
            // 0x51e32c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51e328) {
            ctx->pc = 0x51E3FCu;
            goto label_51e3fc;
        }
    }
    ctx->pc = 0x51E330u;
label_51e330:
    // 0x51e330: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x51E330u;
    SET_GPR_U32(ctx, 31, 0x51E338u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E338u; }
        if (ctx->pc != 0x51E338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E338u; }
        if (ctx->pc != 0x51E338u) { return; }
    }
    ctx->pc = 0x51E338u;
label_51e338:
    // 0x51e338: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x51e338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e33c: 0xc076984  jal         func_1DA610
    ctx->pc = 0x51E33Cu;
    SET_GPR_U32(ctx, 31, 0x51E344u);
    ctx->pc = 0x51E340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E33Cu;
            // 0x51e340: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E344u; }
        if (ctx->pc != 0x51E344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E344u; }
        if (ctx->pc != 0x51E344u) { return; }
    }
    ctx->pc = 0x51E344u;
label_51e344:
    // 0x51e344: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x51e344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e348: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x51e348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x51e34c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x51e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x51e350: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x51e350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e354: 0xc442ce80  lwc1        $f2, -0x3180($v0)
    ctx->pc = 0x51e354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x51e358: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x51e358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e35c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x51e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x51e360: 0xc441ce88  lwc1        $f1, -0x3178($v0)
    ctx->pc = 0x51e360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x51e364: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x51e364u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x51e368: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x51e368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x51e36c: 0xc440ce8c  lwc1        $f0, -0x3174($v0)
    ctx->pc = 0x51e36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x51e370: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x51e370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x51e374: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x51e374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x51e378: 0x8c42ce84  lw          $v0, -0x317C($v0)
    ctx->pc = 0x51e378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954628)));
    // 0x51e37c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x51e37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x51e380: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x51e380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x51e384: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x51e384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x51e388: 0xc04cca0  jal         func_133280
    ctx->pc = 0x51E388u;
    SET_GPR_U32(ctx, 31, 0x51E390u);
    ctx->pc = 0x51E38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E388u;
            // 0x51e38c: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E390u; }
        if (ctx->pc != 0x51E390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E390u; }
        if (ctx->pc != 0x51E390u) { return; }
    }
    ctx->pc = 0x51E390u;
label_51e390:
    // 0x51e390: 0xc076980  jal         func_1DA600
    ctx->pc = 0x51E390u;
    SET_GPR_U32(ctx, 31, 0x51E398u);
    ctx->pc = 0x51E394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E390u;
            // 0x51e394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E398u; }
        if (ctx->pc != 0x51E398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E398u; }
        if (ctx->pc != 0x51E398u) { return; }
    }
    ctx->pc = 0x51E398u;
label_51e398:
    // 0x51e398: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x51e398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x51e39c: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x51E39Cu;
    SET_GPR_U32(ctx, 31, 0x51E3A4u);
    ctx->pc = 0x51E3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E39Cu;
            // 0x51e3a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E3A4u; }
        if (ctx->pc != 0x51E3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E3A4u; }
        if (ctx->pc != 0x51E3A4u) { return; }
    }
    ctx->pc = 0x51E3A4u;
label_51e3a4:
    // 0x51e3a4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x51e3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x51e3a8: 0xc461c470  lwc1        $f1, -0x3B90($v1)
    ctx->pc = 0x51e3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x51e3ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x51e3acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x51e3b0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x51E3B0u;
    {
        const bool branch_taken_0x51e3b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x51e3b0) {
            ctx->pc = 0x51E3B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51E3B0u;
            // 0x51e3b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51E3C4u;
            goto label_51e3c4;
        }
    }
    ctx->pc = 0x51E3B8u;
    // 0x51e3b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x51E3B8u;
    {
        const bool branch_taken_0x51e3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51E3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51E3B8u;
            // 0x51e3bc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51e3b8) {
            ctx->pc = 0x51E3FCu;
            goto label_51e3fc;
        }
    }
    ctx->pc = 0x51E3C0u;
    // 0x51e3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51e3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51e3c4:
    // 0x51e3c4: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x51E3C4u;
    SET_GPR_U32(ctx, 31, 0x51E3CCu);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E3CCu; }
        if (ctx->pc != 0x51E3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E3CCu; }
        if (ctx->pc != 0x51E3CCu) { return; }
    }
    ctx->pc = 0x51E3CCu;
label_51e3cc:
    // 0x51e3cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x51e3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e3d0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x51e3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x51e3d4: 0xc04cd60  jal         func_133580
    ctx->pc = 0x51E3D4u;
    SET_GPR_U32(ctx, 31, 0x51E3DCu);
    ctx->pc = 0x51E3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E3D4u;
            // 0x51e3d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E3DCu; }
        if (ctx->pc != 0x51E3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E3DCu; }
        if (ctx->pc != 0x51E3DCu) { return; }
    }
    ctx->pc = 0x51E3DCu;
label_51e3dc:
    // 0x51e3dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x51e3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e3e0: 0xc04c650  jal         func_131940
    ctx->pc = 0x51E3E0u;
    SET_GPR_U32(ctx, 31, 0x51E3E8u);
    ctx->pc = 0x51E3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E3E0u;
            // 0x51e3e4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E3E8u; }
        if (ctx->pc != 0x51E3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E3E8u; }
        if (ctx->pc != 0x51E3E8u) { return; }
    }
    ctx->pc = 0x51E3E8u;
label_51e3e8:
    // 0x51e3e8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x51e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x51e3ec: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x51e3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x51e3f0: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x51e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
    // 0x51e3f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x51e3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x51e3f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x51e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_51e3fc:
    // 0x51e3fc: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x51e3fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x51e400: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x51E400u;
    {
        const bool branch_taken_0x51e400 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51e400) {
            ctx->pc = 0x51E4A8u;
            goto label_51e4a8;
        }
    }
    ctx->pc = 0x51E408u;
    // 0x51e408: 0x26a40230  addiu       $a0, $s5, 0x230
    ctx->pc = 0x51e408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 560));
    // 0x51e40c: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x51E40Cu;
    SET_GPR_U32(ctx, 31, 0x51E414u);
    ctx->pc = 0x51E410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E40Cu;
            // 0x51e410: 0x266507e0  addiu       $a1, $s3, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E414u; }
        if (ctx->pc != 0x51E414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E414u; }
        if (ctx->pc != 0x51E414u) { return; }
    }
    ctx->pc = 0x51E414u;
label_51e414:
    // 0x51e414: 0x266502c0  addiu       $a1, $s3, 0x2C0
    ctx->pc = 0x51e414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
    // 0x51e418: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x51E418u;
    SET_GPR_U32(ctx, 31, 0x51E420u);
    ctx->pc = 0x51E41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E418u;
            // 0x51e41c: 0x26a40230  addiu       $a0, $s5, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E420u; }
        if (ctx->pc != 0x51E420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E420u; }
        if (ctx->pc != 0x51E420u) { return; }
    }
    ctx->pc = 0x51E420u;
label_51e420:
    // 0x51e420: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x51e420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e424: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x51e424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e428: 0xc04cd60  jal         func_133580
    ctx->pc = 0x51E428u;
    SET_GPR_U32(ctx, 31, 0x51E430u);
    ctx->pc = 0x51E42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E428u;
            // 0x51e42c: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E430u; }
        if (ctx->pc != 0x51E430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E430u; }
        if (ctx->pc != 0x51E430u) { return; }
    }
    ctx->pc = 0x51E430u;
label_51e430:
    // 0x51e430: 0x8ea30270  lw          $v1, 0x270($s5)
    ctx->pc = 0x51e430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 624)));
    // 0x51e434: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x51E434u;
    {
        const bool branch_taken_0x51e434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x51e434) {
            ctx->pc = 0x51E438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51E434u;
            // 0x51e438: 0x8ea30274  lw          $v1, 0x274($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 628)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51E44Cu;
            goto label_51e44c;
        }
    }
    ctx->pc = 0x51E43Cu;
    // 0x51e43c: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x51e43cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x51e440: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x51e440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
    // 0x51e444: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x51e444u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
    // 0x51e448: 0x8ea30274  lw          $v1, 0x274($s5)
    ctx->pc = 0x51e448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 628)));
label_51e44c:
    // 0x51e44c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x51E44Cu;
    {
        const bool branch_taken_0x51e44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x51e44c) {
            ctx->pc = 0x51E450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51E44Cu;
            // 0x51e450: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51E464u;
            goto label_51e464;
        }
    }
    ctx->pc = 0x51E454u;
    // 0x51e454: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x51e454u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x51e458: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x51e458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
    // 0x51e45c: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x51e45cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
    // 0x51e460: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x51e460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_51e464:
    // 0x51e464: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51e464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e468: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x51e468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x51e46c: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x51E46Cu;
    SET_GPR_U32(ctx, 31, 0x51E474u);
    ctx->pc = 0x51E470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E46Cu;
            // 0x51e470: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E474u; }
        if (ctx->pc != 0x51E474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E474u; }
        if (ctx->pc != 0x51E474u) { return; }
    }
    ctx->pc = 0x51E474u;
label_51e474:
    // 0x51e474: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x51e474u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x51e478: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51e478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e47c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x51e47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x51e480: 0xc054fd4  jal         func_153F50
    ctx->pc = 0x51E480u;
    SET_GPR_U32(ctx, 31, 0x51E488u);
    ctx->pc = 0x51E484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E480u;
            // 0x51e484: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E488u; }
        if (ctx->pc != 0x51E488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E488u; }
        if (ctx->pc != 0x51E488u) { return; }
    }
    ctx->pc = 0x51E488u;
label_51e488:
    // 0x51e488: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x51E488u;
    SET_GPR_U32(ctx, 31, 0x51E490u);
    ctx->pc = 0x51E48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E488u;
            // 0x51e48c: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E490u; }
        if (ctx->pc != 0x51E490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E490u; }
        if (ctx->pc != 0x51E490u) { return; }
    }
    ctx->pc = 0x51E490u;
label_51e490:
    // 0x51e490: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x51e490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x51e494: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x51e494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e498: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x51e498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x51e49c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x51e49cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x51e4a0: 0xc055234  jal         func_1548D0
    ctx->pc = 0x51E4A0u;
    SET_GPR_U32(ctx, 31, 0x51E4A8u);
    ctx->pc = 0x51E4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E4A0u;
            // 0x51e4a4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E4A8u; }
        if (ctx->pc != 0x51E4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E4A8u; }
        if (ctx->pc != 0x51E4A8u) { return; }
    }
    ctx->pc = 0x51E4A8u;
label_51e4a8:
    // 0x51e4a8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x51e4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_51e4ac:
    // 0x51e4ac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x51e4acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x51e4b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x51e4b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x51e4b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x51e4b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x51e4b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x51e4b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x51e4bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x51e4bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x51e4c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51e4c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x51e4c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51e4c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x51e4c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51e4c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51e4cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51e4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51e4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x51E4D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51E4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51E4D0u;
            // 0x51e4d4: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51E4D8u;
    // 0x51e4d8: 0x0  nop
    ctx->pc = 0x51e4d8u;
    // NOP
    // 0x51e4dc: 0x0  nop
    ctx->pc = 0x51e4dcu;
    // NOP
}
