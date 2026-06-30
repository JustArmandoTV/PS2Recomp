#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00153110
// Address: 0x153110 - 0x153f50
void sub_00153110_0x153110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153110_0x153110");
#endif

    switch (ctx->pc) {
        case 0x153178u: goto label_153178;
        case 0x1531acu: goto label_1531ac;
        case 0x153c58u: goto label_153c58;
        default: break;
    }

    ctx->pc = 0x153110u;

    // 0x153110: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x153110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x153114: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x153114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x153118: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x153118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15311c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15311cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x153120: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x153120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x153124: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x153124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x153128: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x153128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15312c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15312cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x153130: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x153130u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x153134: 0x8c718454  lw          $s1, -0x7BAC($v1)
    ctx->pc = 0x153134u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935636)));
    // 0x153138: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x153138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x15313c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x15313cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x153140: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x153140u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x153144: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x153144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x153148: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x153148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x15314c: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x15314Cu;
    {
        const bool branch_taken_0x15314c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x153150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15314Cu;
            // 0x153150: 0x26300070  addiu       $s0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15314c) {
            ctx->pc = 0x15319Cu;
            goto label_15319c;
        }
    }
    ctx->pc = 0x153154u;
    // 0x153154: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x153154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x153158: 0x50a30004  beql        $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x153158u;
    {
        const bool branch_taken_0x153158 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x153158) {
            ctx->pc = 0x15315Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153158u;
            // 0x15315c: 0x8cc50004  lw          $a1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15316Cu;
            goto label_15316c;
        }
    }
    ctx->pc = 0x153160u;
    // 0x153160: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x153160u;
    {
        const bool branch_taken_0x153160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153160u;
            // 0x153164: 0x8e46001c  lw          $a2, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153160) {
            ctx->pc = 0x1531B4u;
            goto label_1531b4;
        }
    }
    ctx->pc = 0x153168u;
    // 0x153168: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x153168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_15316c:
    // 0x15316c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15316cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153170: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x153170u;
    SET_GPR_U32(ctx, 31, 0x153178u);
    ctx->pc = 0x153174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153170u;
            // 0x153174: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153178u; }
        if (ctx->pc != 0x153178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153178u; }
        if (ctx->pc != 0x153178u) { return; }
    }
    ctx->pc = 0x153178u;
label_153178:
    // 0x153178: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x153178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x15317c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x15317cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x153180: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x153180u;
    {
        const bool branch_taken_0x153180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x153180) {
            ctx->pc = 0x153184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153180u;
            // 0x153184: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1531B0u;
            goto label_1531b0;
        }
    }
    ctx->pc = 0x153188u;
    // 0x153188: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x153188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x15318c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x15318cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x153190: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x153190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153194: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x153194u;
    {
        const bool branch_taken_0x153194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153194) {
            ctx->pc = 0x1531B0u;
            goto label_1531b0;
        }
    }
    ctx->pc = 0x15319Cu;
label_15319c:
    // 0x15319c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x15319cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1531a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1531a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1531a4: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x1531A4u;
    SET_GPR_U32(ctx, 31, 0x1531ACu);
    ctx->pc = 0x1531A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1531A4u;
            // 0x1531a8: 0x240600e0  addiu       $a2, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1531ACu; }
        if (ctx->pc != 0x1531ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1531ACu; }
        if (ctx->pc != 0x1531ACu) { return; }
    }
    ctx->pc = 0x1531ACu;
label_1531ac:
    // 0x1531ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1531acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1531b0:
    // 0x1531b0: 0x8e46001c  lw          $a2, 0x1C($s2)
    ctx->pc = 0x1531b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1531b4:
    // 0x1531b4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1531b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1531b8: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x1531b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x1531bc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1531bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1531c0: 0xac668450  sw          $a2, -0x7BB0($v1)
    ctx->pc = 0x1531c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935632), GPR_U32(ctx, 6));
    // 0x1531c4: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x1531c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1531c8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1531c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1531cc: 0x50600089  beql        $v1, $zero, . + 4 + (0x89 << 2)
    ctx->pc = 0x1531CCu;
    {
        const bool branch_taken_0x1531cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1531cc) {
            ctx->pc = 0x1531D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1531CCu;
            // 0x1531d0: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1533F4u;
            goto label_1533f4;
        }
    }
    ctx->pc = 0x1531D4u;
    // 0x1531d4: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x1531d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1531d8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1531d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1531dc: 0x5460003f  bnel        $v1, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x1531DCu;
    {
        const bool branch_taken_0x1531dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1531dc) {
            ctx->pc = 0x1531E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1531DCu;
            // 0x1531e0: 0x8e45001c  lw          $a1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1532DCu;
            goto label_1532dc;
        }
    }
    ctx->pc = 0x1531E4u;
    // 0x1531e4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1531e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1531e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1531e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1531ec: 0x8c667b00  lw          $a2, 0x7B00($v1)
    ctx->pc = 0x1531ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31488)));
    // 0x1531f0: 0x10c5002a  beq         $a2, $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1531F0u;
    {
        const bool branch_taken_0x1531f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1531f0) {
            ctx->pc = 0x15329Cu;
            goto label_15329c;
        }
    }
    ctx->pc = 0x1531F8u;
    // 0x1531f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1531f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1531fc: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1531FCu;
    {
        const bool branch_taken_0x1531fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1531fc) {
            ctx->pc = 0x15324Cu;
            goto label_15324c;
        }
    }
    ctx->pc = 0x153204u;
    // 0x153204: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153208: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x153208u;
    {
        const bool branch_taken_0x153208 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x153208) {
            ctx->pc = 0x153218u;
            goto label_153218;
        }
    }
    ctx->pc = 0x153210u;
    // 0x153210: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x153210u;
    {
        const bool branch_taken_0x153210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153210) {
            ctx->pc = 0x1532D8u;
            goto label_1532d8;
        }
    }
    ctx->pc = 0x153218u;
label_153218:
    // 0x153218: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x153218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x15321c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x15321cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x153220: 0xc4607b04  lwc1        $f0, 0x7B04($v1)
    ctx->pc = 0x153220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 31492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153224: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x153224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x153228: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x153228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x15322c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x15322cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x153230: 0xc4a07b08  lwc1        $f0, 0x7B08($a1)
    ctx->pc = 0x153230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 31496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153234: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x153234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x153238: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x153238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x15323c: 0xc4607b0c  lwc1        $f0, 0x7B0C($v1)
    ctx->pc = 0x15323cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 31500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153240: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x153240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x153244: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x153244u;
    {
        const bool branch_taken_0x153244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153244u;
            // 0x153248: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153244) {
            ctx->pc = 0x1532D8u;
            goto label_1532d8;
        }
    }
    ctx->pc = 0x15324Cu;
label_15324c:
    // 0x15324c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15324cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x153250: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x153250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x153254: 0xc4617b04  lwc1        $f1, 0x7B04($v1)
    ctx->pc = 0x153254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 31492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153258: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x153258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15325c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15325cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153260: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x153260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x153264: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x153264u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x153268: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x153268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x15326c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x15326cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x153270: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x153270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153274: 0xc4a17b08  lwc1        $f1, 0x7B08($a1)
    ctx->pc = 0x153274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 31496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153278: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x153278u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15327c: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x15327cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x153280: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x153280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x153284: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x153284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153288: 0xc4617b0c  lwc1        $f1, 0x7B0C($v1)
    ctx->pc = 0x153288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 31500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15328c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x15328cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x153290: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x153290u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x153294: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x153294u;
    {
        const bool branch_taken_0x153294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153294u;
            // 0x153298: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153294) {
            ctx->pc = 0x1532D8u;
            goto label_1532d8;
        }
    }
    ctx->pc = 0x15329Cu;
label_15329c:
    // 0x15329c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15329cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1532a0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1532a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x1532a4: 0xc4607b04  lwc1        $f0, 0x7B04($v1)
    ctx->pc = 0x1532a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 31492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1532a8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1532a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1532ac: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1532acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1532b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1532b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1532b4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1532b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1532b8: 0xc4a07b08  lwc1        $f0, 0x7B08($a1)
    ctx->pc = 0x1532b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 31496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1532bc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1532bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1532c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1532c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1532c4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1532c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1532c8: 0xc4607b0c  lwc1        $f0, 0x7B0C($v1)
    ctx->pc = 0x1532c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 31500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1532cc: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1532ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1532d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1532d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1532d4: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1532d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1532d8:
    // 0x1532d8: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x1532d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1532dc:
    // 0x1532dc: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1532dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1532e0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1532e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1532e4: 0x14a30042  bne         $a1, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1532E4u;
    {
        const bool branch_taken_0x1532e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1532e4) {
            ctx->pc = 0x1533F0u;
            goto label_1533f0;
        }
    }
    ctx->pc = 0x1532ECu;
    // 0x1532ec: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1532ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1532f0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1532f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1532f4: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1532F4u;
    {
        const bool branch_taken_0x1532f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1532f4) {
            ctx->pc = 0x1533F0u;
            goto label_1533f0;
        }
    }
    ctx->pc = 0x1532FCu;
    // 0x1532fc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1532fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x153300: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x153300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153304: 0x8c667b00  lw          $a2, 0x7B00($v1)
    ctx->pc = 0x153304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31488)));
    // 0x153308: 0x10c5002a  beq         $a2, $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x153308u;
    {
        const bool branch_taken_0x153308 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x153308) {
            ctx->pc = 0x1533B4u;
            goto label_1533b4;
        }
    }
    ctx->pc = 0x153310u;
    // 0x153310: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x153310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153314: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x153314u;
    {
        const bool branch_taken_0x153314 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x153314) {
            ctx->pc = 0x153364u;
            goto label_153364;
        }
    }
    ctx->pc = 0x15331Cu;
    // 0x15331c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15331cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153320: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x153320u;
    {
        const bool branch_taken_0x153320 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x153320) {
            ctx->pc = 0x153330u;
            goto label_153330;
        }
    }
    ctx->pc = 0x153328u;
    // 0x153328: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x153328u;
    {
        const bool branch_taken_0x153328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153328) {
            ctx->pc = 0x1533F0u;
            goto label_1533f0;
        }
    }
    ctx->pc = 0x153330u;
label_153330:
    // 0x153330: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x153330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x153334: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x153334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x153338: 0xc4607b04  lwc1        $f0, 0x7B04($v1)
    ctx->pc = 0x153338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 31492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15333c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x15333cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x153340: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x153340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x153344: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x153344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x153348: 0xc4a07b08  lwc1        $f0, 0x7B08($a1)
    ctx->pc = 0x153348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 31496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15334c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x15334cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x153350: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x153350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x153354: 0xc4607b0c  lwc1        $f0, 0x7B0C($v1)
    ctx->pc = 0x153354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 31500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153358: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x153358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x15335c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x15335Cu;
    {
        const bool branch_taken_0x15335c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15335Cu;
            // 0x153360: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15335c) {
            ctx->pc = 0x1533F0u;
            goto label_1533f0;
        }
    }
    ctx->pc = 0x153364u;
label_153364:
    // 0x153364: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x153364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x153368: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x153368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x15336c: 0xc4617b04  lwc1        $f1, 0x7B04($v1)
    ctx->pc = 0x15336cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 31492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153370: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x153370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153374: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x153374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153378: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x153378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x15337c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x15337cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x153380: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x153380u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x153384: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x153384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x153388: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x153388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15338c: 0xc4a17b08  lwc1        $f1, 0x7B08($a1)
    ctx->pc = 0x15338cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 31496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153390: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x153390u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x153394: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x153394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x153398: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x153398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15339c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x15339cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1533a0: 0xc4617b0c  lwc1        $f1, 0x7B0C($v1)
    ctx->pc = 0x1533a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 31500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1533a4: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1533a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1533a8: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x1533a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x1533ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1533ACu;
    {
        const bool branch_taken_0x1533ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1533B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1533ACu;
            // 0x1533b0: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533ac) {
            ctx->pc = 0x1533F0u;
            goto label_1533f0;
        }
    }
    ctx->pc = 0x1533B4u;
label_1533b4:
    // 0x1533b4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1533b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1533b8: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1533b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x1533bc: 0xc4607b04  lwc1        $f0, 0x7B04($v1)
    ctx->pc = 0x1533bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 31492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1533c0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1533c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1533c4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1533c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1533c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1533c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1533cc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1533ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1533d0: 0xc4a07b08  lwc1        $f0, 0x7B08($a1)
    ctx->pc = 0x1533d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 31496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1533d4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1533d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1533d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1533d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1533dc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1533dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1533e0: 0xc4607b0c  lwc1        $f0, 0x7B0C($v1)
    ctx->pc = 0x1533e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 31500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1533e4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1533e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1533e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1533e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1533ec: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1533ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1533f0:
    // 0x1533f0: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x1533f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1533f4:
    // 0x1533f4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1533f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1533f8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1533F8u;
    {
        const bool branch_taken_0x1533f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1533FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1533F8u;
            // 0x1533fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533f8) {
            ctx->pc = 0x153424u;
            goto label_153424;
        }
    }
    ctx->pc = 0x153400u;
    // 0x153400: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x153400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x153404: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x153404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x153408: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x153408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x15340c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x15340Cu;
    {
        const bool branch_taken_0x15340c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15340c) {
            ctx->pc = 0x153444u;
            goto label_153444;
        }
    }
    ctx->pc = 0x153414u;
    // 0x153414: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x153414u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x153418: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x153418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15341c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15341Cu;
    {
        const bool branch_taken_0x15341c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15341Cu;
            // 0x153420: 0x26737b00  addiu       $s3, $s3, 0x7B00 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 31488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15341c) {
            ctx->pc = 0x153444u;
            goto label_153444;
        }
    }
    ctx->pc = 0x153424u;
label_153424:
    // 0x153424: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x153424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x153428: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x153428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x15342c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x15342cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x153430: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x153430u;
    {
        const bool branch_taken_0x153430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153430) {
            ctx->pc = 0x153444u;
            goto label_153444;
        }
    }
    ctx->pc = 0x153438u;
    // 0x153438: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x153438u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x15343c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15343cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153440: 0x26737b10  addiu       $s3, $s3, 0x7B10
    ctx->pc = 0x153440u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 31504));
label_153444:
    // 0x153444: 0x50c0006f  beql        $a2, $zero, . + 4 + (0x6F << 2)
    ctx->pc = 0x153444u;
    {
        const bool branch_taken_0x153444 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x153444) {
            ctx->pc = 0x153448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153444u;
            // 0x153448: 0x8e450034  lw          $a1, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153604u;
            goto label_153604;
        }
    }
    ctx->pc = 0x15344Cu;
    // 0x15344c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x15344cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x153450: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x153450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153454: 0x50a30026  beql        $a1, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x153454u;
    {
        const bool branch_taken_0x153454 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x153454) {
            ctx->pc = 0x153458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153454u;
            // 0x153458: 0xc6210010  lwc1        $f1, 0x10($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1534F0u;
            goto label_1534f0;
        }
    }
    ctx->pc = 0x15345Cu;
    // 0x15345c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15345cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153460: 0x50a30011  beql        $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x153460u;
    {
        const bool branch_taken_0x153460 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x153460) {
            ctx->pc = 0x153464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153460u;
            // 0x153464: 0xc6200010  lwc1        $f0, 0x10($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1534A8u;
            goto label_1534a8;
        }
    }
    ctx->pc = 0x153468u;
    // 0x153468: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15346c: 0x50a30004  beql        $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15346Cu;
    {
        const bool branch_taken_0x15346c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15346c) {
            ctx->pc = 0x153470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15346Cu;
            // 0x153470: 0xc6600004  lwc1        $f0, 0x4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x153480u;
            goto label_153480;
        }
    }
    ctx->pc = 0x153474u;
    // 0x153474: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x153474u;
    {
        const bool branch_taken_0x153474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153474u;
            // 0x153478: 0x8e45001c  lw          $a1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153474) {
            ctx->pc = 0x153520u;
            goto label_153520;
        }
    }
    ctx->pc = 0x15347Cu;
    // 0x15347c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x15347cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_153480:
    // 0x153480: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x153480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x153484: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x153484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x153488: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x153488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15348c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x15348cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x153490: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x153490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x153494: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x153494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153498: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x153498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x15349c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x15349Cu;
    {
        const bool branch_taken_0x15349c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1534A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15349Cu;
            // 0x1534a0: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15349c) {
            ctx->pc = 0x15351Cu;
            goto label_15351c;
        }
    }
    ctx->pc = 0x1534A4u;
    // 0x1534a4: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1534a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1534a8:
    // 0x1534a8: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1534a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1534ac: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1534acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1534b0: 0x0  nop
    ctx->pc = 0x1534b0u;
    // NOP
    // 0x1534b4: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1534b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1534b8: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x1534b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x1534bc: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1534bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1534c0: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1534c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1534c4: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1534c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1534c8: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1534c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1534cc: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x1534ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x1534d0: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1534d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1534d4: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1534d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1534d8: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x1534d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1534dc: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1534dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1534e0: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x1534e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x1534e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1534E4u;
    {
        const bool branch_taken_0x1534e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1534E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1534E4u;
            // 0x1534e8: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534e4) {
            ctx->pc = 0x15351Cu;
            goto label_15351c;
        }
    }
    ctx->pc = 0x1534ECu;
    // 0x1534ec: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1534ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1534f0:
    // 0x1534f0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1534f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1534f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1534f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1534f8: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1534f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1534fc: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1534fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153500: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x153500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153504: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x153504u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x153508: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x153508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x15350c: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x15350cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153510: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x153510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153514: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x153514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x153518: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x153518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_15351c:
    // 0x15351c: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x15351cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_153520:
    // 0x153520: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x153520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x153524: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x153524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153528: 0x14a30035  bne         $a1, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x153528u;
    {
        const bool branch_taken_0x153528 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x153528) {
            ctx->pc = 0x153600u;
            goto label_153600;
        }
    }
    ctx->pc = 0x153530u;
    // 0x153530: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x153530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x153534: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x153534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153538: 0x50a30026  beql        $a1, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x153538u;
    {
        const bool branch_taken_0x153538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x153538) {
            ctx->pc = 0x15353Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153538u;
            // 0x15353c: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1535D4u;
            goto label_1535d4;
        }
    }
    ctx->pc = 0x153540u;
    // 0x153540: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x153540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153544: 0x50a30011  beql        $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x153544u;
    {
        const bool branch_taken_0x153544 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x153544) {
            ctx->pc = 0x153548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153544u;
            // 0x153548: 0xc6000010  lwc1        $f0, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x15358Cu;
            goto label_15358c;
        }
    }
    ctx->pc = 0x15354Cu;
    // 0x15354c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15354cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153550: 0x50a30004  beql        $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x153550u;
    {
        const bool branch_taken_0x153550 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x153550) {
            ctx->pc = 0x153554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153550u;
            // 0x153554: 0xc6600004  lwc1        $f0, 0x4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x153564u;
            goto label_153564;
        }
    }
    ctx->pc = 0x153558u;
    // 0x153558: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x153558u;
    {
        const bool branch_taken_0x153558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153558) {
            ctx->pc = 0x153600u;
            goto label_153600;
        }
    }
    ctx->pc = 0x153560u;
    // 0x153560: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x153560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_153564:
    // 0x153564: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x153564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x153568: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x153568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x15356c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x15356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153570: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x153570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x153574: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x153574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x153578: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x153578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15357c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x15357cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x153580: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x153580u;
    {
        const bool branch_taken_0x153580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153580u;
            // 0x153584: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153580) {
            ctx->pc = 0x153600u;
            goto label_153600;
        }
    }
    ctx->pc = 0x153588u;
    // 0x153588: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x153588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15358c:
    // 0x15358c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x15358cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153590: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x153590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153594: 0x0  nop
    ctx->pc = 0x153594u;
    // NOP
    // 0x153598: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x153598u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15359c: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x15359cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x1535a0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1535a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1535a4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1535a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1535a8: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1535a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1535ac: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1535acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1535b0: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x1535b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x1535b4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1535b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1535b8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1535b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1535bc: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x1535bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1535c0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1535c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1535c4: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x1535c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x1535c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1535C8u;
    {
        const bool branch_taken_0x1535c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1535CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1535C8u;
            // 0x1535cc: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535c8) {
            ctx->pc = 0x153600u;
            goto label_153600;
        }
    }
    ctx->pc = 0x1535D0u;
    // 0x1535d0: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1535d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1535d4:
    // 0x1535d4: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1535d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1535d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1535d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1535dc: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1535dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1535e0: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1535e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1535e4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1535e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1535e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1535e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1535ec: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1535ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1535f0: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1535f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1535f4: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1535f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1535f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1535f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1535fc: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1535fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_153600:
    // 0x153600: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x153600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_153604:
    // 0x153604: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x153604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x153608: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x153608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x15360c: 0x506000a5  beql        $v1, $zero, . + 4 + (0xA5 << 2)
    ctx->pc = 0x15360Cu;
    {
        const bool branch_taken_0x15360c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15360c) {
            ctx->pc = 0x153610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15360Cu;
            // 0x153610: 0x8f838388  lw          $v1, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1538A4u;
            goto label_1538a4;
        }
    }
    ctx->pc = 0x153614u;
    // 0x153614: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x153614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x153618: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x153618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x15361c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15361Cu;
    {
        const bool branch_taken_0x15361c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15361c) {
            ctx->pc = 0x153620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15361Cu;
            // 0x153620: 0x8f858378  lw          $a1, -0x7C88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935416)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153630u;
            goto label_153630;
        }
    }
    ctx->pc = 0x153624u;
    // 0x153624: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x153624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x153628: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x153628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x15362c: 0x8f858378  lw          $a1, -0x7C88($gp)
    ctx->pc = 0x15362cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935416)));
label_153630:
    // 0x153630: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x153630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153634: 0x50a3002c  beql        $a1, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x153634u;
    {
        const bool branch_taken_0x153634 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x153634) {
            ctx->pc = 0x153638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153634u;
            // 0x153638: 0xc621001c  lwc1        $f1, 0x1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1536E8u;
            goto label_1536e8;
        }
    }
    ctx->pc = 0x15363Cu;
    // 0x15363c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15363cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153640: 0x50a30015  beql        $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x153640u;
    {
        const bool branch_taken_0x153640 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x153640) {
            ctx->pc = 0x153644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153640u;
            // 0x153644: 0xc620001c  lwc1        $f0, 0x1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x153698u;
            goto label_153698;
        }
    }
    ctx->pc = 0x153648u;
    // 0x153648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15364c: 0x50a30004  beql        $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15364Cu;
    {
        const bool branch_taken_0x15364c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15364c) {
            ctx->pc = 0x153650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15364Cu;
            // 0x153650: 0xc780837c  lwc1        $f0, -0x7C84($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x153660u;
            goto label_153660;
        }
    }
    ctx->pc = 0x153654u;
    // 0x153654: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x153654u;
    {
        const bool branch_taken_0x153654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153654u;
            // 0x153658: 0xc621001c  lwc1        $f1, 0x1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153654) {
            ctx->pc = 0x15371Cu;
            goto label_15371c;
        }
    }
    ctx->pc = 0x15365Cu;
    // 0x15365c: 0xc780837c  lwc1        $f0, -0x7C84($gp)
    ctx->pc = 0x15365cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_153660:
    // 0x153660: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x153660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
    // 0x153664: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x153664u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153668: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x153668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x15366c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15366cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x153670: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x153670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x153674: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x153674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x153678: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x153678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15367c: 0x14a30026  bne         $a1, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x15367Cu;
    {
        const bool branch_taken_0x15367c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x15367c) {
            ctx->pc = 0x153718u;
            goto label_153718;
        }
    }
    ctx->pc = 0x153684u;
    // 0x153684: 0xc780837c  lwc1        $f0, -0x7C84($gp)
    ctx->pc = 0x153684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153688: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x153688u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15368c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x15368Cu;
    {
        const bool branch_taken_0x15368c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15368Cu;
            // 0x153690: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15368c) {
            ctx->pc = 0x153718u;
            goto label_153718;
        }
    }
    ctx->pc = 0x153694u;
    // 0x153694: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x153694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_153698:
    // 0x153698: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x153698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
    // 0x15369c: 0xc781837c  lwc1        $f1, -0x7C84($gp)
    ctx->pc = 0x15369cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1536a0: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1536a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1536a4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1536a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1536a8: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1536a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1536ac: 0x0  nop
    ctx->pc = 0x1536acu;
    // NOP
    // 0x1536b0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1536b0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1536b4: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x1536b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x1536b8: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x1536b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x1536bc: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x1536bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1536c0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1536c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1536c4: 0x14a30014  bne         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1536C4u;
    {
        const bool branch_taken_0x1536c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1536c4) {
            ctx->pc = 0x153718u;
            goto label_153718;
        }
    }
    ctx->pc = 0x1536CCu;
    // 0x1536cc: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1536ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1536d0: 0xc781837c  lwc1        $f1, -0x7C84($gp)
    ctx->pc = 0x1536d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1536d4: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1536d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1536d8: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x1536d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x1536dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1536DCu;
    {
        const bool branch_taken_0x1536dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1536E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1536DCu;
            // 0x1536e0: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536dc) {
            ctx->pc = 0x153718u;
            goto label_153718;
        }
    }
    ctx->pc = 0x1536E4u;
    // 0x1536e4: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1536e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1536e8:
    // 0x1536e8: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1536e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1536ec: 0xc780837c  lwc1        $f0, -0x7C84($gp)
    ctx->pc = 0x1536ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1536f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1536f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1536f4: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x1536f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x1536f8: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x1536f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1536fc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1536fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153700: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x153700u;
    {
        const bool branch_taken_0x153700 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x153700) {
            ctx->pc = 0x153718u;
            goto label_153718;
        }
    }
    ctx->pc = 0x153708u;
    // 0x153708: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x153708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15370c: 0xc780837c  lwc1        $f0, -0x7C84($gp)
    ctx->pc = 0x15370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153710: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x153710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x153714: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x153714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_153718:
    // 0x153718: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x153718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15371c:
    // 0x15371c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x15371cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x153720: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153724: 0x0  nop
    ctx->pc = 0x153724u;
    // NOP
    // 0x153728: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x153728u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15372c: 0x45030025  bc1tl       . + 4 + (0x25 << 2)
    ctx->pc = 0x15372Cu;
    {
        const bool branch_taken_0x15372c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15372c) {
            ctx->pc = 0x153730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15372Cu;
            // 0x153730: 0x8e250040  lw          $a1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1537C4u;
            goto label_1537c4;
        }
    }
    ctx->pc = 0x153734u;
    // 0x153734: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x153734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x153738: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x153738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x15373c: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x15373cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x153740: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x153740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x153744: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x153744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x153748: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x153748u;
    {
        const bool branch_taken_0x153748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15374Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153748u;
            // 0x15374c: 0x26260050  addiu       $a2, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153748) {
            ctx->pc = 0x153764u;
            goto label_153764;
        }
    }
    ctx->pc = 0x153750u;
    // 0x153750: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x153750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x153754: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x153754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x153758: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x153758u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x15375c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x15375cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x153760: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x153760u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_153764:
    // 0x153764: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x153764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x153768: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x153768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
    // 0x15376c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x15376cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x153770: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x153770u;
    {
        const bool branch_taken_0x153770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153770) {
            ctx->pc = 0x153774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153770u;
            // 0x153774: 0x8e45001c  lw          $a1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1537DCu;
            goto label_1537dc;
        }
    }
    ctx->pc = 0x153778u;
    // 0x153778: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x153778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15377c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x15377cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x153780: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x153780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153784: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x153784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153788: 0x0  nop
    ctx->pc = 0x153788u;
    // NOP
    // 0x15378c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x15378cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x153790: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x153790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x153794: 0xc6220038  lwc1        $f2, 0x38($s1)
    ctx->pc = 0x153794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153798: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x153798u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15379c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x15379Cu;
    {
        const bool branch_taken_0x15379c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15379c) {
            ctx->pc = 0x1537D8u;
            goto label_1537d8;
        }
    }
    ctx->pc = 0x1537A4u;
    // 0x1537a4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1537a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1537a8: 0x0  nop
    ctx->pc = 0x1537a8u;
    // NOP
    // 0x1537ac: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1537acu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1537b0: 0x0  nop
    ctx->pc = 0x1537b0u;
    // NOP
    // 0x1537b4: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1537b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1537b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1537B8u;
    {
        const bool branch_taken_0x1537b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1537BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1537B8u;
            // 0x1537bc: 0xe6210038  swc1        $f1, 0x38($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537b8) {
            ctx->pc = 0x1537D8u;
            goto label_1537d8;
        }
    }
    ctx->pc = 0x1537C0u;
    // 0x1537c0: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x1537c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1537c4:
    // 0x1537c4: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x1537c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
    // 0x1537c8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1537c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1537cc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1537CCu;
    {
        const bool branch_taken_0x1537cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1537cc) {
            ctx->pc = 0x1537D8u;
            goto label_1537d8;
        }
    }
    ctx->pc = 0x1537D4u;
    // 0x1537d4: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1537d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_1537d8:
    // 0x1537d8: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x1537d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1537dc:
    // 0x1537dc: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1537dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1537e0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1537e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1537e4: 0x14a3002e  bne         $a1, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1537E4u;
    {
        const bool branch_taken_0x1537e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1537e4) {
            ctx->pc = 0x1538A0u;
            goto label_1538a0;
        }
    }
    ctx->pc = 0x1537ECu;
    // 0x1537ec: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1537ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1537f0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1537f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1537f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1537f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1537f8: 0x0  nop
    ctx->pc = 0x1537f8u;
    // NOP
    // 0x1537fc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1537fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153800: 0x45030022  bc1tl       . + 4 + (0x22 << 2)
    ctx->pc = 0x153800u;
    {
        const bool branch_taken_0x153800 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x153800) {
            ctx->pc = 0x153804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153800u;
            // 0x153804: 0x8e050040  lw          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15388Cu;
            goto label_15388c;
        }
    }
    ctx->pc = 0x153808u;
    // 0x153808: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x153808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x15380c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x15380cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x153810: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x153810u;
    {
        const bool branch_taken_0x153810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153810u;
            // 0x153814: 0x26060050  addiu       $a2, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153810) {
            ctx->pc = 0x15382Cu;
            goto label_15382c;
        }
    }
    ctx->pc = 0x153818u;
    // 0x153818: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x153818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x15381c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x15381cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x153820: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x153820u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x153824: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x153824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x153828: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x153828u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_15382c:
    // 0x15382c: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x15382cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x153830: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x153830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
    // 0x153834: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x153834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x153838: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x153838u;
    {
        const bool branch_taken_0x153838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153838) {
            ctx->pc = 0x1538A0u;
            goto label_1538a0;
        }
    }
    ctx->pc = 0x153840u;
    // 0x153840: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x153840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153844: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x153844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x153848: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x153848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15384c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15384cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153850: 0x0  nop
    ctx->pc = 0x153850u;
    // NOP
    // 0x153854: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x153854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x153858: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x153858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x15385c: 0xc6020038  lwc1        $f2, 0x38($s0)
    ctx->pc = 0x15385cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153860: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x153860u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153864: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x153864u;
    {
        const bool branch_taken_0x153864 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x153864) {
            ctx->pc = 0x1538A0u;
            goto label_1538a0;
        }
    }
    ctx->pc = 0x15386Cu;
    // 0x15386c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x15386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153870: 0x0  nop
    ctx->pc = 0x153870u;
    // NOP
    // 0x153874: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x153874u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x153878: 0x0  nop
    ctx->pc = 0x153878u;
    // NOP
    // 0x15387c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x15387cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x153880: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x153880u;
    {
        const bool branch_taken_0x153880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153880u;
            // 0x153884: 0xe6010038  swc1        $f1, 0x38($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153880) {
            ctx->pc = 0x1538A0u;
            goto label_1538a0;
        }
    }
    ctx->pc = 0x153888u;
    // 0x153888: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x153888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_15388c:
    // 0x15388c: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x15388cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
    // 0x153890: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x153890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x153894: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x153894u;
    {
        const bool branch_taken_0x153894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153894) {
            ctx->pc = 0x1538A0u;
            goto label_1538a0;
        }
    }
    ctx->pc = 0x15389Cu;
    // 0x15389c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x15389cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_1538a0:
    // 0x1538a0: 0x8f838388  lw          $v1, -0x7C78($gp)
    ctx->pc = 0x1538a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1538a4:
    // 0x1538a4: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1538A4u;
    {
        const bool branch_taken_0x1538a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1538a4) {
            ctx->pc = 0x1538A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1538A4u;
            // 0x1538a8: 0x8f838380  lw          $v1, -0x7C80($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1538E0u;
            goto label_1538e0;
        }
    }
    ctx->pc = 0x1538ACu;
    // 0x1538ac: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x1538acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1538b0: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1538b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1538b4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1538b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1538b8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1538B8u;
    {
        const bool branch_taken_0x1538b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1538b8) {
            ctx->pc = 0x1538BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1538B8u;
            // 0x1538bc: 0xaf808380  sw          $zero, -0x7C80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1538D8u;
            goto label_1538d8;
        }
    }
    ctx->pc = 0x1538C0u;
    // 0x1538c0: 0x8f838378  lw          $v1, -0x7C88($gp)
    ctx->pc = 0x1538c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935416)));
    // 0x1538c4: 0xc780837c  lwc1        $f0, -0x7C84($gp)
    ctx->pc = 0x1538c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1538c8: 0xaf838380  sw          $v1, -0x7C80($gp)
    ctx->pc = 0x1538c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935424), GPR_U32(ctx, 3));
    // 0x1538cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1538CCu;
    {
        const bool branch_taken_0x1538cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1538D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1538CCu;
            // 0x1538d0: 0xe7808384  swc1        $f0, -0x7C7C($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294935428), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1538cc) {
            ctx->pc = 0x1538DCu;
            goto label_1538dc;
        }
    }
    ctx->pc = 0x1538D4u;
    // 0x1538d4: 0xaf808380  sw          $zero, -0x7C80($gp)
    ctx->pc = 0x1538d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935424), GPR_U32(ctx, 0));
label_1538d8:
    // 0x1538d8: 0xaf808384  sw          $zero, -0x7C7C($gp)
    ctx->pc = 0x1538d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935428), GPR_U32(ctx, 0));
label_1538dc:
    // 0x1538dc: 0x8f838380  lw          $v1, -0x7C80($gp)
    ctx->pc = 0x1538dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935424)));
label_1538e0:
    // 0x1538e0: 0x5060008d  beql        $v1, $zero, . + 4 + (0x8D << 2)
    ctx->pc = 0x1538E0u;
    {
        const bool branch_taken_0x1538e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1538e0) {
            ctx->pc = 0x1538E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1538E0u;
            // 0x1538e4: 0x8e450034  lw          $a1, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153B18u;
            goto label_153b18;
        }
    }
    ctx->pc = 0x1538E8u;
    // 0x1538e8: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x1538e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1538ec: 0x2407f00f  addiu       $a3, $zero, -0xFF1
    ctx->pc = 0x1538ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x1538f0: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x1538f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1538f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1538f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1538f8: 0x30680ff0  andi        $t0, $v1, 0xFF0
    ctx->pc = 0x1538f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4080);
    // 0x1538fc: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1538fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x153900: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x153900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x153904: 0x81902  srl         $v1, $t0, 4
    ctx->pc = 0x153904u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 4));
    // 0x153908: 0x30c80ff0  andi        $t0, $a2, 0xFF0
    ctx->pc = 0x153908u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4080);
    // 0x15390c: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x15390cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x153910: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x153910u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x153914: 0xae06003c  sw          $a2, 0x3C($s0)
    ctx->pc = 0x153914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 6));
    // 0x153918: 0x8f868380  lw          $a2, -0x7C80($gp)
    ctx->pc = 0x153918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935424)));
    // 0x15391c: 0x10c50058  beq         $a2, $a1, . + 4 + (0x58 << 2)
    ctx->pc = 0x15391Cu;
    {
        const bool branch_taken_0x15391c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x153920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15391Cu;
            // 0x153920: 0x84102  srl         $t0, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15391c) {
            ctx->pc = 0x153A80u;
            goto label_153a80;
        }
    }
    ctx->pc = 0x153924u;
    // 0x153924: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x153924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153928: 0x50c5001d  beql        $a2, $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x153928u;
    {
        const bool branch_taken_0x153928 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x153928) {
            ctx->pc = 0x15392Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153928u;
            // 0x15392c: 0xc7808384  lwc1        $f0, -0x7C7C($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1539A0u;
            goto label_1539a0;
        }
    }
    ctx->pc = 0x153930u;
    // 0x153930: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153934: 0x50c50004  beql        $a2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x153934u;
    {
        const bool branch_taken_0x153934 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x153934) {
            ctx->pc = 0x153938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153934u;
            // 0x153938: 0xc7818384  lwc1        $f1, -0x7C7C($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x153948u;
            goto label_153948;
        }
    }
    ctx->pc = 0x15393Cu;
    // 0x15393c: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x15393Cu;
    {
        const bool branch_taken_0x15393c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15393Cu;
            // 0x153940: 0x32900  sll         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15393c) {
            ctx->pc = 0x153AFCu;
            goto label_153afc;
        }
    }
    ctx->pc = 0x153944u;
    // 0x153944: 0xc7818384  lwc1        $f1, -0x7C7C($gp)
    ctx->pc = 0x153944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_153948:
    // 0x153948: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x153948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
    // 0x15394c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x15394cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153950: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x153950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x153954: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153954u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153958: 0x0  nop
    ctx->pc = 0x153958u;
    // NOP
    // 0x15395c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x15395cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x153960: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x153960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153964: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x153964u;
    {
        const bool branch_taken_0x153964 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x153964) {
            ctx->pc = 0x153968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153964u;
            // 0x153968: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x153980u;
            goto label_153980;
        }
    }
    ctx->pc = 0x15396Cu;
    // 0x15396c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15396cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x153970: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x153970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x153974: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x153974u;
    {
        const bool branch_taken_0x153974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153974) {
            ctx->pc = 0x153994u;
            goto label_153994;
        }
    }
    ctx->pc = 0x15397Cu;
    // 0x15397c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15397cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_153980:
    // 0x153980: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x153980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x153984: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x153984u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x153988: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x153988u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15398c: 0x0  nop
    ctx->pc = 0x15398cu;
    // NOP
    // 0x153990: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x153990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_153994:
    // 0x153994: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x153994u;
    {
        const bool branch_taken_0x153994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153994) {
            ctx->pc = 0x153AF8u;
            goto label_153af8;
        }
    }
    ctx->pc = 0x15399Cu;
    // 0x15399c: 0xc7808384  lwc1        $f0, -0x7C7C($gp)
    ctx->pc = 0x15399cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1539a0:
    // 0x1539a0: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x1539a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
    // 0x1539a4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1539a4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1539a8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1539A8u;
    {
        const bool branch_taken_0x1539a8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1539ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1539A8u;
            // 0x1539ac: 0x46000882  mul.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1539a8) {
            ctx->pc = 0x1539BCu;
            goto label_1539bc;
        }
    }
    ctx->pc = 0x1539B0u;
    // 0x1539b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1539b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1539b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1539B4u;
    {
        const bool branch_taken_0x1539b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1539B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1539B4u;
            // 0x1539b8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1539b4) {
            ctx->pc = 0x1539D8u;
            goto label_1539d8;
        }
    }
    ctx->pc = 0x1539BCu;
label_1539bc:
    // 0x1539bc: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x1539bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1539c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1539c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1539c4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1539c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1539c8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1539c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1539cc: 0x0  nop
    ctx->pc = 0x1539ccu;
    // NOP
    // 0x1539d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1539d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1539d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1539d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1539d8:
    // 0x1539d8: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x1539d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1539dc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1539dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1539e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1539e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1539e4: 0x0  nop
    ctx->pc = 0x1539e4u;
    // NOP
    // 0x1539e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1539e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1539ec: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1539ECu;
    {
        const bool branch_taken_0x1539ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1539ec) {
            ctx->pc = 0x1539F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1539ECu;
            // 0x1539f0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x153A08u;
            goto label_153a08;
        }
    }
    ctx->pc = 0x1539F4u;
    // 0x1539f4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1539f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1539f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1539f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1539fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1539FCu;
    {
        const bool branch_taken_0x1539fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1539fc) {
            ctx->pc = 0x153A1Cu;
            goto label_153a1c;
        }
    }
    ctx->pc = 0x153A04u;
    // 0x153a04: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x153a04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_153a08:
    // 0x153a08: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x153a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x153a0c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x153a0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x153a10: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x153a10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x153a14: 0x0  nop
    ctx->pc = 0x153a14u;
    // NOP
    // 0x153a18: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x153a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_153a1c:
    // 0x153a1c: 0x5020005  bltzl       $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x153A1Cu;
    {
        const bool branch_taken_0x153a1c = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x153a1c) {
            ctx->pc = 0x153A20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153A1Cu;
            // 0x153a20: 0x83042  srl         $a2, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153A34u;
            goto label_153a34;
        }
    }
    ctx->pc = 0x153A24u;
    // 0x153a24: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x153a24u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153a28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x153A28u;
    {
        const bool branch_taken_0x153a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153A28u;
            // 0x153a2c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153a28) {
            ctx->pc = 0x153A4Cu;
            goto label_153a4c;
        }
    }
    ctx->pc = 0x153A30u;
    // 0x153a30: 0x83042  srl         $a2, $t0, 1
    ctx->pc = 0x153a30u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
label_153a34:
    // 0x153a34: 0x31050001  andi        $a1, $t0, 0x1
    ctx->pc = 0x153a34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x153a38: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x153a38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x153a3c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x153a3cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153a40: 0x0  nop
    ctx->pc = 0x153a40u;
    // NOP
    // 0x153a44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x153a44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x153a48: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x153a48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_153a4c:
    // 0x153a4c: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x153a4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x153a50: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x153a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x153a54: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153a54u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153a58: 0x0  nop
    ctx->pc = 0x153a58u;
    // NOP
    // 0x153a5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x153a5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153a60: 0x45010001  bc1t        . + 4 + (0x1 << 2)
    ctx->pc = 0x153A60u;
    {
        const bool branch_taken_0x153a60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x153a60) {
            ctx->pc = 0x153A68u;
            goto label_153a68;
        }
    }
    ctx->pc = 0x153A68u;
label_153a68:
    // 0x153a68: 0x2c610100  sltiu       $at, $v1, 0x100
    ctx->pc = 0x153a68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x153a6c: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x153A6Cu;
    {
        const bool branch_taken_0x153a6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x153a6c) {
            ctx->pc = 0x153AF8u;
            goto label_153af8;
        }
    }
    ctx->pc = 0x153A74u;
    // 0x153a74: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x153a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x153a78: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x153A78u;
    {
        const bool branch_taken_0x153a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153a78) {
            ctx->pc = 0x153AF8u;
            goto label_153af8;
        }
    }
    ctx->pc = 0x153A80u;
label_153a80:
    // 0x153a80: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x153A80u;
    {
        const bool branch_taken_0x153a80 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x153a80) {
            ctx->pc = 0x153A84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153A80u;
            // 0x153a84: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153A98u;
            goto label_153a98;
        }
    }
    ctx->pc = 0x153A88u;
    // 0x153a88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153a88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153a8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x153A8Cu;
    {
        const bool branch_taken_0x153a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153A8Cu;
            // 0x153a90: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153a8c) {
            ctx->pc = 0x153AB0u;
            goto label_153ab0;
        }
    }
    ctx->pc = 0x153A94u;
    // 0x153a94: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x153a94u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_153a98:
    // 0x153a98: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x153a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x153a9c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x153a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x153aa0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153aa0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153aa4: 0x0  nop
    ctx->pc = 0x153aa4u;
    // NOP
    // 0x153aa8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x153aa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x153aac: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x153aacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_153ab0:
    // 0x153ab0: 0xc7818384  lwc1        $f1, -0x7C7C($gp)
    ctx->pc = 0x153ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153ab4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x153ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x153ab8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153ab8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153abc: 0x0  nop
    ctx->pc = 0x153abcu;
    // NOP
    // 0x153ac0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x153ac0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x153ac4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x153ac4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153ac8: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x153AC8u;
    {
        const bool branch_taken_0x153ac8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x153ac8) {
            ctx->pc = 0x153ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153AC8u;
            // 0x153acc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x153AE4u;
            goto label_153ae4;
        }
    }
    ctx->pc = 0x153AD0u;
    // 0x153ad0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x153ad0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x153ad4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x153ad4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x153ad8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x153AD8u;
    {
        const bool branch_taken_0x153ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153ad8) {
            ctx->pc = 0x153AF8u;
            goto label_153af8;
        }
    }
    ctx->pc = 0x153AE0u;
    // 0x153ae0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x153ae0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_153ae4:
    // 0x153ae4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x153ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x153ae8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x153ae8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x153aec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x153aecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x153af0: 0x0  nop
    ctx->pc = 0x153af0u;
    // NOP
    // 0x153af4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x153af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_153af8:
    // 0x153af8: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x153af8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_153afc:
    // 0x153afc: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x153afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x153b00: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x153b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x153b04: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x153b04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x153b08: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x153b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x153b0c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x153b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x153b10: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x153b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x153b14: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x153b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_153b18:
    // 0x153b18: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x153b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x153b1c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x153b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x153b20: 0x5060003d  beql        $v1, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x153B20u;
    {
        const bool branch_taken_0x153b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153b20) {
            ctx->pc = 0x153B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153B20u;
            // 0x153b24: 0x8e450034  lw          $a1, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153C18u;
            goto label_153c18;
        }
    }
    ctx->pc = 0x153B28u;
    // 0x153b28: 0x8f858370  lw          $a1, -0x7C90($gp)
    ctx->pc = 0x153b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935408)));
    // 0x153b2c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x153b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153b30: 0x50a3002c  beql        $a1, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x153B30u;
    {
        const bool branch_taken_0x153b30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x153b30) {
            ctx->pc = 0x153B34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153B30u;
            // 0x153b34: 0xc621000c  lwc1        $f1, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x153BE4u;
            goto label_153be4;
        }
    }
    ctx->pc = 0x153B38u;
    // 0x153b38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x153b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153b3c: 0x50a30015  beql        $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x153B3Cu;
    {
        const bool branch_taken_0x153b3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x153b3c) {
            ctx->pc = 0x153B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153B3Cu;
            // 0x153b40: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x153B94u;
            goto label_153b94;
        }
    }
    ctx->pc = 0x153B44u;
    // 0x153b44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153b48: 0x50a30004  beql        $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x153B48u;
    {
        const bool branch_taken_0x153b48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x153b48) {
            ctx->pc = 0x153B4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153B48u;
            // 0x153b4c: 0xc7808374  lwc1        $f0, -0x7C8C($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x153B5Cu;
            goto label_153b5c;
        }
    }
    ctx->pc = 0x153B50u;
    // 0x153b50: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x153B50u;
    {
        const bool branch_taken_0x153b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153b50) {
            ctx->pc = 0x153C14u;
            goto label_153c14;
        }
    }
    ctx->pc = 0x153B58u;
    // 0x153b58: 0xc7808374  lwc1        $f0, -0x7C8C($gp)
    ctx->pc = 0x153b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_153b5c:
    // 0x153b5c: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x153b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
    // 0x153b60: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x153b60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153b64: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x153b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x153b68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x153b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x153b6c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x153b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x153b70: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x153b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x153b74: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x153b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153b78: 0x14a30026  bne         $a1, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x153B78u;
    {
        const bool branch_taken_0x153b78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x153b78) {
            ctx->pc = 0x153C14u;
            goto label_153c14;
        }
    }
    ctx->pc = 0x153B80u;
    // 0x153b80: 0xc7808374  lwc1        $f0, -0x7C8C($gp)
    ctx->pc = 0x153b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153b84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x153b84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x153b88: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x153B88u;
    {
        const bool branch_taken_0x153b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153B88u;
            // 0x153b8c: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b88) {
            ctx->pc = 0x153C14u;
            goto label_153c14;
        }
    }
    ctx->pc = 0x153B90u;
    // 0x153b90: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x153b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_153b94:
    // 0x153b94: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x153b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
    // 0x153b98: 0xc7818374  lwc1        $f1, -0x7C8C($gp)
    ctx->pc = 0x153b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153b9c: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x153b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x153ba0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x153ba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153ba4: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x153ba4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x153ba8: 0x0  nop
    ctx->pc = 0x153ba8u;
    // NOP
    // 0x153bac: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x153bacu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x153bb0: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x153bb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x153bb4: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x153bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x153bb8: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x153bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x153bbc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x153bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153bc0: 0x14a30014  bne         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x153BC0u;
    {
        const bool branch_taken_0x153bc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x153bc0) {
            ctx->pc = 0x153C14u;
            goto label_153c14;
        }
    }
    ctx->pc = 0x153BC8u;
    // 0x153bc8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x153bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153bcc: 0xc7818374  lwc1        $f1, -0x7C8C($gp)
    ctx->pc = 0x153bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153bd0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x153bd0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x153bd4: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x153bd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x153bd8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x153BD8u;
    {
        const bool branch_taken_0x153bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153BD8u;
            // 0x153bdc: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153bd8) {
            ctx->pc = 0x153C14u;
            goto label_153c14;
        }
    }
    ctx->pc = 0x153BE0u;
    // 0x153be0: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x153be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_153be4:
    // 0x153be4: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x153be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x153be8: 0xc7808374  lwc1        $f0, -0x7C8C($gp)
    ctx->pc = 0x153be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153bec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x153becu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x153bf0: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x153bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x153bf4: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x153bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x153bf8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x153bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153bfc: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x153BFCu;
    {
        const bool branch_taken_0x153bfc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x153bfc) {
            ctx->pc = 0x153C14u;
            goto label_153c14;
        }
    }
    ctx->pc = 0x153C04u;
    // 0x153c04: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x153c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153c08: 0xc7808374  lwc1        $f0, -0x7C8C($gp)
    ctx->pc = 0x153c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153c0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x153c0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x153c10: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x153c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_153c14:
    // 0x153c14: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x153c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_153c18:
    // 0x153c18: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x153c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x153c1c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x153c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x153c20: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x153C20u;
    {
        const bool branch_taken_0x153c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153c20) {
            ctx->pc = 0x153D48u;
            goto label_153d48;
        }
    }
    ctx->pc = 0x153C28u;
    // 0x153c28: 0x18800047  blez        $a0, . + 4 + (0x47 << 2)
    ctx->pc = 0x153C28u;
    {
        const bool branch_taken_0x153c28 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x153C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153C28u;
            // 0x153c2c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c28) {
            ctx->pc = 0x153D48u;
            goto label_153d48;
        }
    }
    ctx->pc = 0x153C30u;
    // 0x153c30: 0x3c0c006c  lui         $t4, 0x6C
    ctx->pc = 0x153c30u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)108 << 16));
    // 0x153c34: 0x3c05dfff  lui         $a1, 0xDFFF
    ctx->pc = 0x153c34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57343 << 16));
    // 0x153c38: 0x220682d  daddu       $t5, $s1, $zero
    ctx->pc = 0x153c38u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153c3c: 0x258c7b20  addiu       $t4, $t4, 0x7B20
    ctx->pc = 0x153c3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 31520));
    // 0x153c40: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x153c40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153c44: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x153c44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153c48: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x153c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153c4c: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x153c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x153c50: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x153c50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153c54: 0x34a7ffff  ori         $a3, $a1, 0xFFFF
    ctx->pc = 0x153c54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_153c58:
    // 0x153c58: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x153c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x153c5c: 0x25ae0050  addiu       $t6, $t5, 0x50
    ctx->pc = 0x153c5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 80));
    // 0x153c60: 0x10aa0017  beq         $a1, $t2, . + 4 + (0x17 << 2)
    ctx->pc = 0x153C60u;
    {
        const bool branch_taken_0x153c60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        ctx->pc = 0x153C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153C60u;
            // 0x153c64: 0x25cb0008  addiu       $t3, $t6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c60) {
            ctx->pc = 0x153CC0u;
            goto label_153cc0;
        }
    }
    ctx->pc = 0x153C68u;
    // 0x153c68: 0x10a9000b  beq         $a1, $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x153C68u;
    {
        const bool branch_taken_0x153c68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        if (branch_taken_0x153c68) {
            ctx->pc = 0x153C98u;
            goto label_153c98;
        }
    }
    ctx->pc = 0x153C70u;
    // 0x153c70: 0x10a80003  beq         $a1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153C70u;
    {
        const bool branch_taken_0x153c70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        if (branch_taken_0x153c70) {
            ctx->pc = 0x153C80u;
            goto label_153c80;
        }
    }
    ctx->pc = 0x153C78u;
    // 0x153c78: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x153C78u;
    {
        const bool branch_taken_0x153c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153c78) {
            ctx->pc = 0x153CE0u;
            goto label_153ce0;
        }
    }
    ctx->pc = 0x153C80u;
label_153c80:
    // 0x153c80: 0xc5800004  lwc1        $f0, 0x4($t4)
    ctx->pc = 0x153c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153c84: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x153c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x153c88: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x153c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153c8c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x153C8Cu;
    {
        const bool branch_taken_0x153c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153C8Cu;
            // 0x153c90: 0xe5600004  swc1        $f0, 0x4($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c8c) {
            ctx->pc = 0x153CE0u;
            goto label_153ce0;
        }
    }
    ctx->pc = 0x153C94u;
    // 0x153c94: 0x0  nop
    ctx->pc = 0x153c94u;
    // NOP
label_153c98:
    // 0x153c98: 0xc5820004  lwc1        $f2, 0x4($t4)
    ctx->pc = 0x153c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153c9c: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x153c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153ca0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x153ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x153ca4: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x153ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x153ca8: 0xc5820008  lwc1        $f2, 0x8($t4)
    ctx->pc = 0x153ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153cac: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x153cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153cb0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x153cb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x153cb4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x153CB4u;
    {
        const bool branch_taken_0x153cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153CB4u;
            // 0x153cb8: 0xe5600004  swc1        $f0, 0x4($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153cb4) {
            ctx->pc = 0x153CE0u;
            goto label_153ce0;
        }
    }
    ctx->pc = 0x153CBCu;
    // 0x153cbc: 0x0  nop
    ctx->pc = 0x153cbcu;
    // NOP
label_153cc0:
    // 0x153cc0: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x153cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153cc4: 0xc5800004  lwc1        $f0, 0x4($t4)
    ctx->pc = 0x153cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153cc8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x153cc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x153ccc: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x153cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x153cd0: 0xc5620004  lwc1        $f2, 0x4($t3)
    ctx->pc = 0x153cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153cd4: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x153cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153cd8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x153cd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x153cdc: 0xe5600004  swc1        $f0, 0x4($t3)
    ctx->pc = 0x153cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
label_153ce0:
    // 0x153ce0: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x153ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x153ce4: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x153CE4u;
    {
        const bool branch_taken_0x153ce4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x153ce4) {
            ctx->pc = 0x153D30u;
            goto label_153d30;
        }
    }
    ctx->pc = 0x153CECu;
    // 0x153cec: 0xc5c00008  lwc1        $f0, 0x8($t6)
    ctx->pc = 0x153cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153cf0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x153cf0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153cf4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x153CF4u;
    {
        const bool branch_taken_0x153cf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153cf4) {
            ctx->pc = 0x153D10u;
            goto label_153d10;
        }
    }
    ctx->pc = 0x153CFCu;
    // 0x153cfc: 0xc5c0000c  lwc1        $f0, 0xC($t6)
    ctx->pc = 0x153cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153d00: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x153d00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153d04: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x153D04u;
    {
        const bool branch_taken_0x153d04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x153d04) {
            ctx->pc = 0x153D20u;
            goto label_153d20;
        }
    }
    ctx->pc = 0x153D0Cu;
    // 0x153d0c: 0x0  nop
    ctx->pc = 0x153d0cu;
    // NOP
label_153d10:
    // 0x153d10: 0x8dc50000  lw          $a1, 0x0($t6)
    ctx->pc = 0x153d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x153d14: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x153d14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x153d18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x153D18u;
    {
        const bool branch_taken_0x153d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153D18u;
            // 0x153d1c: 0xadc50000  sw          $a1, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d18) {
            ctx->pc = 0x153D30u;
            goto label_153d30;
        }
    }
    ctx->pc = 0x153D20u;
label_153d20:
    // 0x153d20: 0x8dc50000  lw          $a1, 0x0($t6)
    ctx->pc = 0x153d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x153d24: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x153d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x153d28: 0xadc50000  sw          $a1, 0x0($t6)
    ctx->pc = 0x153d28u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
    // 0x153d2c: 0x0  nop
    ctx->pc = 0x153d2cu;
    // NOP
label_153d30:
    // 0x153d30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x153d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x153d34: 0x64282a  slt         $a1, $v1, $a0
    ctx->pc = 0x153d34u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x153d38: 0x25ad0070  addiu       $t5, $t5, 0x70
    ctx->pc = 0x153d38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 112));
    // 0x153d3c: 0x14a0ffc6  bnez        $a1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x153D3Cu;
    {
        const bool branch_taken_0x153d3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x153D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153D3Cu;
            // 0x153d40: 0x258c000c  addiu       $t4, $t4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d3c) {
            ctx->pc = 0x153C58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_153c58;
        }
    }
    ctx->pc = 0x153D44u;
    // 0x153d44: 0x0  nop
    ctx->pc = 0x153d44u;
    // NOP
label_153d48:
    // 0x153d48: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x153d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x153d4c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x153d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x153d50: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x153d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x153d54: 0x50600027  beql        $v1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x153D54u;
    {
        const bool branch_taken_0x153d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153d54) {
            ctx->pc = 0x153D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153D54u;
            // 0x153d58: 0x8e440034  lw          $a0, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153DF4u;
            goto label_153df4;
        }
    }
    ctx->pc = 0x153D5Cu;
    // 0x153d5c: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x153d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x153d60: 0x30830400  andi        $v1, $a0, 0x400
    ctx->pc = 0x153d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
    // 0x153d64: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x153D64u;
    {
        const bool branch_taken_0x153d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x153D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153D64u;
            // 0x153d68: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d64) {
            ctx->pc = 0x153D9Cu;
            goto label_153d9c;
        }
    }
    ctx->pc = 0x153D6Cu;
    // 0x153d6c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x153d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x153d70: 0x8c637b40  lw          $v1, 0x7B40($v1)
    ctx->pc = 0x153d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31552)));
    // 0x153d74: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x153D74u;
    {
        const bool branch_taken_0x153d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x153d74) {
            ctx->pc = 0x153D90u;
            goto label_153d90;
        }
    }
    ctx->pc = 0x153D7Cu;
    // 0x153d7c: 0x240380ff  addiu       $v1, $zero, -0x7F01
    ctx->pc = 0x153d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934783));
    // 0x153d80: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x153d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x153d84: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x153d84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x153d88: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x153d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x153d8c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x153d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_153d90:
    // 0x153d90: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x153d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x153d94: 0x24637b50  addiu       $v1, $v1, 0x7B50
    ctx->pc = 0x153d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31568));
    // 0x153d98: 0xaf8381e0  sw          $v1, -0x7E20($gp)
    ctx->pc = 0x153d98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935008), GPR_U32(ctx, 3));
label_153d9c:
    // 0x153d9c: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x153d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x153da0: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x153da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x153da4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x153da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153da8: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x153DA8u;
    {
        const bool branch_taken_0x153da8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x153da8) {
            ctx->pc = 0x153DF0u;
            goto label_153df0;
        }
    }
    ctx->pc = 0x153DB0u;
    // 0x153db0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x153db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x153db4: 0x30830400  andi        $v1, $a0, 0x400
    ctx->pc = 0x153db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
    // 0x153db8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x153DB8u;
    {
        const bool branch_taken_0x153db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x153DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153DB8u;
            // 0x153dbc: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153db8) {
            ctx->pc = 0x153DF0u;
            goto label_153df0;
        }
    }
    ctx->pc = 0x153DC0u;
    // 0x153dc0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x153dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x153dc4: 0x8c637b40  lw          $v1, 0x7B40($v1)
    ctx->pc = 0x153dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31552)));
    // 0x153dc8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x153DC8u;
    {
        const bool branch_taken_0x153dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x153dc8) {
            ctx->pc = 0x153DE4u;
            goto label_153de4;
        }
    }
    ctx->pc = 0x153DD0u;
    // 0x153dd0: 0x240380ff  addiu       $v1, $zero, -0x7F01
    ctx->pc = 0x153dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934783));
    // 0x153dd4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x153dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x153dd8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x153dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x153ddc: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x153ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x153de0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x153de0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_153de4:
    // 0x153de4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x153de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x153de8: 0x24637b50  addiu       $v1, $v1, 0x7B50
    ctx->pc = 0x153de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31568));
    // 0x153dec: 0xaf8381e0  sw          $v1, -0x7E20($gp)
    ctx->pc = 0x153decu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935008), GPR_U32(ctx, 3));
label_153df0:
    // 0x153df0: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x153df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_153df4:
    // 0x153df4: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x153df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x153df8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x153df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x153dfc: 0x5060002d  beql        $v1, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x153DFCu;
    {
        const bool branch_taken_0x153dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153dfc) {
            ctx->pc = 0x153E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153DFCu;
            // 0x153e00: 0x8e440034  lw          $a0, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153EB4u;
            goto label_153eb4;
        }
    }
    ctx->pc = 0x153E04u;
    // 0x153e04: 0x8f84838c  lw          $a0, -0x7C74($gp)
    ctx->pc = 0x153e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x153e08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x153e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153e0c: 0x5083001e  beql        $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x153E0Cu;
    {
        const bool branch_taken_0x153e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x153e0c) {
            ctx->pc = 0x153E10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153E0Cu;
            // 0x153e10: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153E88u;
            goto label_153e88;
        }
    }
    ctx->pc = 0x153E14u;
    // 0x153e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153e18: 0x5083000f  beql        $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x153E18u;
    {
        const bool branch_taken_0x153e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x153e18) {
            ctx->pc = 0x153E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153E18u;
            // 0x153e1c: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153E58u;
            goto label_153e58;
        }
    }
    ctx->pc = 0x153E20u;
    // 0x153e20: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x153E20u;
    {
        const bool branch_taken_0x153e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x153e20) {
            ctx->pc = 0x153E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153E20u;
            // 0x153e24: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153E34u;
            goto label_153e34;
        }
    }
    ctx->pc = 0x153E28u;
    // 0x153e28: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x153E28u;
    {
        const bool branch_taken_0x153e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153e28) {
            ctx->pc = 0x153EB0u;
            goto label_153eb0;
        }
    }
    ctx->pc = 0x153E30u;
    // 0x153e30: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x153e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_153e34:
    // 0x153e34: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x153e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x153e38: 0xae250048  sw          $a1, 0x48($s1)
    ctx->pc = 0x153e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 5));
    // 0x153e3c: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x153e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x153e40: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x153e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153e44: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x153E44u;
    {
        const bool branch_taken_0x153e44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x153e44) {
            ctx->pc = 0x153EB0u;
            goto label_153eb0;
        }
    }
    ctx->pc = 0x153E4Cu;
    // 0x153e4c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x153E4Cu;
    {
        const bool branch_taken_0x153e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153E4Cu;
            // 0x153e50: 0xae050048  sw          $a1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e4c) {
            ctx->pc = 0x153EB0u;
            goto label_153eb0;
        }
    }
    ctx->pc = 0x153E54u;
    // 0x153e54: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x153e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_153e58:
    // 0x153e58: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x153e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x153e5c: 0xae250048  sw          $a1, 0x48($s1)
    ctx->pc = 0x153e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 5));
    // 0x153e60: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x153e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x153e64: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x153e64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x153e68: 0xae240044  sw          $a0, 0x44($s1)
    ctx->pc = 0x153e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 4));
    // 0x153e6c: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x153e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x153e70: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x153e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153e74: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x153E74u;
    {
        const bool branch_taken_0x153e74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x153e74) {
            ctx->pc = 0x153EB0u;
            goto label_153eb0;
        }
    }
    ctx->pc = 0x153E7Cu;
    // 0x153e7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x153E7Cu;
    {
        const bool branch_taken_0x153e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153E7Cu;
            // 0x153e80: 0xae050048  sw          $a1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e7c) {
            ctx->pc = 0x153EB0u;
            goto label_153eb0;
        }
    }
    ctx->pc = 0x153E84u;
    // 0x153e84: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x153e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_153e88:
    // 0x153e88: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x153e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x153e8c: 0xae250048  sw          $a1, 0x48($s1)
    ctx->pc = 0x153e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 5));
    // 0x153e90: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x153e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x153e94: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x153e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x153e98: 0xae240044  sw          $a0, 0x44($s1)
    ctx->pc = 0x153e98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 4));
    // 0x153e9c: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x153e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x153ea0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x153ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153ea4: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x153EA4u;
    {
        const bool branch_taken_0x153ea4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x153ea4) {
            ctx->pc = 0x153EB0u;
            goto label_153eb0;
        }
    }
    ctx->pc = 0x153EACu;
    // 0x153eac: 0xae050048  sw          $a1, 0x48($s0)
    ctx->pc = 0x153eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 5));
label_153eb0:
    // 0x153eb0: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x153eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_153eb4:
    // 0x153eb4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x153eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x153eb8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x153eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x153ebc: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x153EBCu;
    {
        const bool branch_taken_0x153ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153ebc) {
            ctx->pc = 0x153EC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153EBCu;
            // 0x153ec0: 0x8e440034  lw          $a0, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153F0Cu;
            goto label_153f0c;
        }
    }
    ctx->pc = 0x153EC4u;
    // 0x153ec4: 0x8e260048  lw          $a2, 0x48($s1)
    ctx->pc = 0x153ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x153ec8: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x153ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x153ecc: 0x8f858398  lw          $a1, -0x7C68($gp)
    ctx->pc = 0x153eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935448)));
    // 0x153ed0: 0x8f84839c  lw          $a0, -0x7C64($gp)
    ctx->pc = 0x153ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935452)));
    // 0x153ed4: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x153ed4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x153ed8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x153ed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x153edc: 0xae240048  sw          $a0, 0x48($s1)
    ctx->pc = 0x153edcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 4));
    // 0x153ee0: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x153ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x153ee4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x153ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153ee8: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x153EE8u;
    {
        const bool branch_taken_0x153ee8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x153ee8) {
            ctx->pc = 0x153F08u;
            goto label_153f08;
        }
    }
    ctx->pc = 0x153EF0u;
    // 0x153ef0: 0x8e250048  lw          $a1, 0x48($s1)
    ctx->pc = 0x153ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x153ef4: 0x8f848398  lw          $a0, -0x7C68($gp)
    ctx->pc = 0x153ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935448)));
    // 0x153ef8: 0x8f83839c  lw          $v1, -0x7C64($gp)
    ctx->pc = 0x153ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935452)));
    // 0x153efc: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x153efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x153f00: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x153f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x153f04: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x153f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_153f08:
    // 0x153f08: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x153f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_153f0c:
    // 0x153f0c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x153f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x153f10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x153f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x153f14: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x153F14u;
    {
        const bool branch_taken_0x153f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153f14) {
            ctx->pc = 0x153F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153F14u;
            // 0x153f18: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153F30u;
            goto label_153f30;
        }
    }
    ctx->pc = 0x153F1Cu;
    // 0x153f1c: 0x8f848390  lw          $a0, -0x7C70($gp)
    ctx->pc = 0x153f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
    // 0x153f20: 0x8f838394  lw          $v1, -0x7C6C($gp)
    ctx->pc = 0x153f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935444)));
    // 0x153f24: 0xaf8481e4  sw          $a0, -0x7E1C($gp)
    ctx->pc = 0x153f24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935012), GPR_U32(ctx, 4));
    // 0x153f28: 0xaf8381e8  sw          $v1, -0x7E18($gp)
    ctx->pc = 0x153f28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935016), GPR_U32(ctx, 3));
    // 0x153f2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x153f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_153f30:
    // 0x153f30: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x153f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x153f34: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x153f34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x153f38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x153f38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153f3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x153f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153f40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x153f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153f44: 0x3e00008  jr          $ra
    ctx->pc = 0x153F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153F44u;
            // 0x153f48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x153F4Cu;
    // 0x153f4c: 0x0  nop
    ctx->pc = 0x153f4cu;
    // NOP
}
