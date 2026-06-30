#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001580E0
// Address: 0x1580e0 - 0x1588c0
void sub_001580E0_0x1580e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001580E0_0x1580e0");
#endif

    switch (ctx->pc) {
        case 0x15814cu: goto label_15814c;
        case 0x1581b0u: goto label_1581b0;
        case 0x15821cu: goto label_15821c;
        case 0x158288u: goto label_158288;
        case 0x1582c8u: goto label_1582c8;
        case 0x1582f4u: goto label_1582f4;
        case 0x158370u: goto label_158370;
        case 0x158380u: goto label_158380;
        case 0x158390u: goto label_158390;
        case 0x1583a0u: goto label_1583a0;
        case 0x1583c4u: goto label_1583c4;
        case 0x158440u: goto label_158440;
        case 0x158450u: goto label_158450;
        case 0x158460u: goto label_158460;
        case 0x158470u: goto label_158470;
        case 0x1584e8u: goto label_1584e8;
        case 0x1584f8u: goto label_1584f8;
        case 0x158508u: goto label_158508;
        case 0x158518u: goto label_158518;
        case 0x158540u: goto label_158540;
        case 0x158568u: goto label_158568;
        case 0x158590u: goto label_158590;
        case 0x1585bcu: goto label_1585bc;
        case 0x158638u: goto label_158638;
        case 0x158648u: goto label_158648;
        case 0x158658u: goto label_158658;
        case 0x158668u: goto label_158668;
        case 0x1586e0u: goto label_1586e0;
        case 0x1586f0u: goto label_1586f0;
        case 0x158700u: goto label_158700;
        case 0x158710u: goto label_158710;
        default: break;
    }

    ctx->pc = 0x1580e0u;

    // 0x1580e0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1580e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1580e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1580e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1580e8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1580e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1580ec: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1580ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1580f0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1580f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1580f4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1580f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1580f8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1580f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1580fc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1580fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158100: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x158100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x158104: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x158104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x158108: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x158108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15810c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15810cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x158110: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x158110u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x158114: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x158114u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x158118: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x158118u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x15811c: 0x8c930004  lw          $s3, 0x4($a0)
    ctx->pc = 0x15811cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x158120: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x158120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158124: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x158124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x158128: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x158128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x15812c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x15812cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x158130: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x158130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158134: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x158134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x158138: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x158138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15813c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x15813cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x158140: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x158140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158144: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x158144u;
    SET_GPR_U32(ctx, 31, 0x15814Cu);
    ctx->pc = 0x158148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158144u;
            // 0x158148: 0xe7a000fc  swc1        $f0, 0xFC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15814Cu; }
        if (ctx->pc != 0x15814Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15814Cu; }
        if (ctx->pc != 0x15814Cu) { return; }
    }
    ctx->pc = 0x15814Cu;
label_15814c:
    // 0x15814c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x15814cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x158150: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x158150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x158154: 0x5083003a  beql        $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x158154u;
    {
        const bool branch_taken_0x158154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158154) {
            ctx->pc = 0x158158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158154u;
            // 0x158158: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158240u;
            goto label_158240;
        }
    }
    ctx->pc = 0x15815Cu;
    // 0x15815c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x15815cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x158160: 0x5083002b  beql        $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x158160u;
    {
        const bool branch_taken_0x158160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158160) {
            ctx->pc = 0x158164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158160u;
            // 0x158164: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158210u;
            goto label_158210;
        }
    }
    ctx->pc = 0x158168u;
    // 0x158168: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x158168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15816c: 0x50830019  beql        $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x15816Cu;
    {
        const bool branch_taken_0x15816c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15816c) {
            ctx->pc = 0x158170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15816Cu;
            // 0x158170: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1581D4u;
            goto label_1581d4;
        }
    }
    ctx->pc = 0x158174u;
    // 0x158174: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x158174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x158178: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x158178u;
    {
        const bool branch_taken_0x158178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158178) {
            ctx->pc = 0x15817Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158178u;
            // 0x15817c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1581A4u;
            goto label_1581a4;
        }
    }
    ctx->pc = 0x158180u;
    // 0x158180: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x158180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158184: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x158184u;
    {
        const bool branch_taken_0x158184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158184) {
            ctx->pc = 0x158188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158184u;
            // 0x158188: 0xc6000024  lwc1        $f0, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x158194u;
            goto label_158194;
        }
    }
    ctx->pc = 0x15818Cu;
    // 0x15818c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x15818Cu;
    {
        const bool branch_taken_0x15818c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15818Cu;
            // 0x158190: 0x8e83000c  lw          $v1, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15818c) {
            ctx->pc = 0x15827Cu;
            goto label_15827c;
        }
    }
    ctx->pc = 0x158194u;
label_158194:
    // 0x158194: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x158194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x158198: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x158198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15819c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x15819Cu;
    {
        const bool branch_taken_0x15819c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1581A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15819Cu;
            // 0x1581a0: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15819c) {
            ctx->pc = 0x158278u;
            goto label_158278;
        }
    }
    ctx->pc = 0x1581A4u;
label_1581a4:
    // 0x1581a4: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x1581a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1581a8: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x1581A8u;
    SET_GPR_U32(ctx, 31, 0x1581B0u);
    ctx->pc = 0x1581ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1581A8u;
            // 0x1581ac: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1581B0u; }
        if (ctx->pc != 0x1581B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1581B0u; }
        if (ctx->pc != 0x1581B0u) { return; }
    }
    ctx->pc = 0x1581B0u;
label_1581b0:
    // 0x1581b0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1581b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1581b4: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x1581b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x1581b8: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1581b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1581bc: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x1581bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
    // 0x1581c0: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x1581c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1581c4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1581c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1581c8: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x1581c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1581cc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1581CCu;
    {
        const bool branch_taken_0x1581cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1581D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1581CCu;
            // 0x1581d0: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1581cc) {
            ctx->pc = 0x158278u;
            goto label_158278;
        }
    }
    ctx->pc = 0x1581D4u;
label_1581d4:
    // 0x1581d4: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1581d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x1581d8: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1581d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1581dc: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x1581dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x1581e0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1581e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1581e4: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x1581e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x1581e8: 0x8e160024  lw          $s6, 0x24($s0)
    ctx->pc = 0x1581e8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1581ec: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1581ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1581f0: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x1581f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x1581f4: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1581f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1581f8: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x1581f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
    // 0x1581fc: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x1581fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158200: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x158200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x158204: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x158204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158208: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x158208u;
    {
        const bool branch_taken_0x158208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15820Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158208u;
            // 0x15820c: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158208) {
            ctx->pc = 0x158278u;
            goto label_158278;
        }
    }
    ctx->pc = 0x158210u;
label_158210:
    // 0x158210: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x158210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x158214: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x158214u;
    SET_GPR_U32(ctx, 31, 0x15821Cu);
    ctx->pc = 0x158218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158214u;
            // 0x158218: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15821Cu; }
        if (ctx->pc != 0x15821Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15821Cu; }
        if (ctx->pc != 0x15821Cu) { return; }
    }
    ctx->pc = 0x15821Cu;
label_15821c:
    // 0x15821c: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x15821cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158220: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x158220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x158224: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x158224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158228: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x158228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x15822c: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x15822cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158230: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x158230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x158234: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x158234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158238: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x158238u;
    {
        const bool branch_taken_0x158238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15823Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158238u;
            // 0x15823c: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158238) {
            ctx->pc = 0x158278u;
            goto label_158278;
        }
    }
    ctx->pc = 0x158240u;
label_158240:
    // 0x158240: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x158240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x158244: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x158244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x158248: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x158248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x15824c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x15824cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x158250: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x158250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x158254: 0x8e160024  lw          $s6, 0x24($s0)
    ctx->pc = 0x158254u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x158258: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x158258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15825c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x15825cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x158260: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x158260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158264: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x158264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x158268: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x158268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15826c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x15826cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x158270: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x158270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158274: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x158274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_158278:
    // 0x158278: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x158278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_15827c:
    // 0x15827c: 0x1860012a  blez        $v1, . + 4 + (0x12A << 2)
    ctx->pc = 0x15827Cu;
    {
        const bool branch_taken_0x15827c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x158280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15827Cu;
            // 0x158280: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15827c) {
            ctx->pc = 0x158728u;
            goto label_158728;
        }
    }
    ctx->pc = 0x158284u;
    // 0x158284: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x158284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158288:
    // 0x158288: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x158288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15828c: 0x709021  addu        $s2, $v1, $s0
    ctx->pc = 0x15828cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x158290: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x158290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158294: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x158294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158298: 0x4501011d  bc1t        . + 4 + (0x11D << 2)
    ctx->pc = 0x158298u;
    {
        const bool branch_taken_0x158298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158298) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x1582A0u;
    // 0x1582a0: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1582a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1582a4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1582a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1582a8: 0x45010119  bc1t        . + 4 + (0x119 << 2)
    ctx->pc = 0x1582A8u;
    {
        const bool branch_taken_0x1582a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1582a8) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x1582B0u;
    // 0x1582b0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1582b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1582b4: 0xc64c0014  lwc1        $f12, 0x14($s2)
    ctx->pc = 0x1582b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1582b8: 0xc64d0018  lwc1        $f13, 0x18($s2)
    ctx->pc = 0x1582b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1582bc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1582bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1582c0: 0xc04d03c  jal         func_1340F0
    ctx->pc = 0x1582C0u;
    SET_GPR_U32(ctx, 31, 0x1582C8u);
    ctx->pc = 0x1582C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1582C0u;
            // 0x1582c4: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1340F0u;
    if (runtime->hasFunction(0x1340F0u)) {
        auto targetFn = runtime->lookupFunction(0x1340F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1582C8u; }
        if (ctx->pc != 0x1582C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001340F0_0x1340f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1582C8u; }
        if (ctx->pc != 0x1582C8u) { return; }
    }
    ctx->pc = 0x1582C8u;
label_1582c8:
    // 0x1582c8: 0x10400111  beqz        $v0, . + 4 + (0x111 << 2)
    ctx->pc = 0x1582C8u;
    {
        const bool branch_taken_0x1582c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1582c8) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x1582D0u;
    // 0x1582d0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1582d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1582d4: 0x3c0400e0  lui         $a0, 0xE0
    ctx->pc = 0x1582d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)224 << 16));
    // 0x1582d8: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x1582d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1582dc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1582DCu;
    {
        const bool branch_taken_0x1582dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1582dc) {
            ctx->pc = 0x158300u;
            goto label_158300;
        }
    }
    ctx->pc = 0x1582E4u;
    // 0x1582e4: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x1582e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1582e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1582e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1582ec: 0xc055fe0  jal         func_157F80
    ctx->pc = 0x1582ECu;
    SET_GPR_U32(ctx, 31, 0x1582F4u);
    ctx->pc = 0x1582F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1582ECu;
            // 0x1582f0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157F80u;
    if (runtime->hasFunction(0x157F80u)) {
        auto targetFn = runtime->lookupFunction(0x157F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1582F4u; }
        if (ctx->pc != 0x1582F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157F80_0x157f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1582F4u; }
        if (ctx->pc != 0x1582F4u) { return; }
    }
    ctx->pc = 0x1582F4u;
label_1582f4:
    // 0x1582f4: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x1582F4u;
    {
        const bool branch_taken_0x1582f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1582f4) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x1582FCu;
    // 0x1582fc: 0x0  nop
    ctx->pc = 0x1582fcu;
    // NOP
label_158300:
    // 0x158300: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x158300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x158304: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x158304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x158308: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x158308u;
    {
        const bool branch_taken_0x158308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x158308) {
            ctx->pc = 0x1583A8u;
            goto label_1583a8;
        }
    }
    ctx->pc = 0x158310u;
    // 0x158310: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x158310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x158314: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x158314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x158318: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x158318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15831c: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x15831cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x158320: 0x30c60e77  andi        $a2, $a2, 0xE77
    ctx->pc = 0x158320u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3703);
    // 0x158324: 0x10c3001c  beq         $a2, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x158324u;
    {
        const bool branch_taken_0x158324 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x158328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158324u;
            // 0x158328: 0xc7ac00e0  lwc1        $f12, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158324) {
            ctx->pc = 0x158398u;
            goto label_158398;
        }
    }
    ctx->pc = 0x15832Cu;
    // 0x15832c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x15832cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x158330: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x158330u;
    {
        const bool branch_taken_0x158330 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x158330) {
            ctx->pc = 0x158388u;
            goto label_158388;
        }
    }
    ctx->pc = 0x158338u;
    // 0x158338: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x158338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15833c: 0x10c3000e  beq         $a2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x15833Cu;
    {
        const bool branch_taken_0x15833c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x15833c) {
            ctx->pc = 0x158378u;
            goto label_158378;
        }
    }
    ctx->pc = 0x158344u;
    // 0x158344: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x158344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158348: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x158348u;
    {
        const bool branch_taken_0x158348 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x158348) {
            ctx->pc = 0x158368u;
            goto label_158368;
        }
    }
    ctx->pc = 0x158350u;
    // 0x158350: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158354: 0x10c300ee  beq         $a2, $v1, . + 4 + (0xEE << 2)
    ctx->pc = 0x158354u;
    {
        const bool branch_taken_0x158354 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x158354) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x15835Cu;
    // 0x15835c: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x15835Cu;
    {
        const bool branch_taken_0x15835c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15835c) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158364u;
    // 0x158364: 0x0  nop
    ctx->pc = 0x158364u;
    // NOP
label_158368:
    // 0x158368: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x158368u;
    SET_GPR_U32(ctx, 31, 0x158370u);
    ctx->pc = 0x15836Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158368u;
            // 0x15836c: 0x27a600fc  addiu       $a2, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158370u; }
        if (ctx->pc != 0x158370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158370u; }
        if (ctx->pc != 0x158370u) { return; }
    }
    ctx->pc = 0x158370u;
label_158370:
    // 0x158370: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x158370u;
    {
        const bool branch_taken_0x158370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158370) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158378u;
label_158378:
    // 0x158378: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x158378u;
    SET_GPR_U32(ctx, 31, 0x158380u);
    ctx->pc = 0x15837Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158378u;
            // 0x15837c: 0x27a600fc  addiu       $a2, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158380u; }
        if (ctx->pc != 0x158380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158380u; }
        if (ctx->pc != 0x158380u) { return; }
    }
    ctx->pc = 0x158380u;
label_158380:
    // 0x158380: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x158380u;
    {
        const bool branch_taken_0x158380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158380) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158388u;
label_158388:
    // 0x158388: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x158388u;
    SET_GPR_U32(ctx, 31, 0x158390u);
    ctx->pc = 0x15838Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158388u;
            // 0x15838c: 0x27a600fc  addiu       $a2, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158390u; }
        if (ctx->pc != 0x158390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158390u; }
        if (ctx->pc != 0x158390u) { return; }
    }
    ctx->pc = 0x158390u;
label_158390:
    // 0x158390: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x158390u;
    {
        const bool branch_taken_0x158390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158390) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158398u;
label_158398:
    // 0x158398: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x158398u;
    SET_GPR_U32(ctx, 31, 0x1583A0u);
    ctx->pc = 0x15839Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158398u;
            // 0x15839c: 0x27a600fc  addiu       $a2, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1583A0u; }
        if (ctx->pc != 0x1583A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1583A0u; }
        if (ctx->pc != 0x1583A0u) { return; }
    }
    ctx->pc = 0x1583A0u;
label_1583a0:
    // 0x1583a0: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x1583A0u;
    {
        const bool branch_taken_0x1583a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1583a0) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x1583A8u;
label_1583a8:
    // 0x1583a8: 0x30640700  andi        $a0, $v1, 0x700
    ctx->pc = 0x1583a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1792);
    // 0x1583ac: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1583ACu;
    {
        const bool branch_taken_0x1583ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1583ac) {
            ctx->pc = 0x1583D0u;
            goto label_1583d0;
        }
    }
    ctx->pc = 0x1583B4u;
    // 0x1583b4: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x1583b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1583b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1583b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1583bc: 0xc04d4d4  jal         func_135350
    ctx->pc = 0x1583BCu;
    SET_GPR_U32(ctx, 31, 0x1583C4u);
    ctx->pc = 0x1583C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1583BCu;
            // 0x1583c0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135350u;
    if (runtime->hasFunction(0x135350u)) {
        auto targetFn = runtime->lookupFunction(0x135350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1583C4u; }
        if (ctx->pc != 0x1583C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135350_0x135350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1583C4u; }
        if (ctx->pc != 0x1583C4u) { return; }
    }
    ctx->pc = 0x1583C4u;
label_1583c4:
    // 0x1583c4: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x1583C4u;
    {
        const bool branch_taken_0x1583c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1583c4) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x1583CCu;
    // 0x1583cc: 0x0  nop
    ctx->pc = 0x1583ccu;
    // NOP
label_1583d0:
    // 0x1583d0: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1583d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x1583d4: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x1583d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1583d8: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1583D8u;
    {
        const bool branch_taken_0x1583d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1583d8) {
            ctx->pc = 0x158478u;
            goto label_158478;
        }
    }
    ctx->pc = 0x1583E0u;
    // 0x1583e0: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1583e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1583e4: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x1583e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1583e8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1583e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1583ec: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x1583ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1583f0: 0x30c60e77  andi        $a2, $a2, 0xE77
    ctx->pc = 0x1583f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3703);
    // 0x1583f4: 0x10c3001c  beq         $a2, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1583F4u;
    {
        const bool branch_taken_0x1583f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1583F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1583F4u;
            // 0x1583f8: 0xc7ac00e0  lwc1        $f12, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583f4) {
            ctx->pc = 0x158468u;
            goto label_158468;
        }
    }
    ctx->pc = 0x1583FCu;
    // 0x1583fc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1583fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x158400: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x158400u;
    {
        const bool branch_taken_0x158400 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x158400) {
            ctx->pc = 0x158458u;
            goto label_158458;
        }
    }
    ctx->pc = 0x158408u;
    // 0x158408: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x158408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15840c: 0x10c3000e  beq         $a2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x15840Cu;
    {
        const bool branch_taken_0x15840c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x15840c) {
            ctx->pc = 0x158448u;
            goto label_158448;
        }
    }
    ctx->pc = 0x158414u;
    // 0x158414: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x158414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158418: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x158418u;
    {
        const bool branch_taken_0x158418 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x158418) {
            ctx->pc = 0x158438u;
            goto label_158438;
        }
    }
    ctx->pc = 0x158420u;
    // 0x158420: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158424: 0x10c300ba  beq         $a2, $v1, . + 4 + (0xBA << 2)
    ctx->pc = 0x158424u;
    {
        const bool branch_taken_0x158424 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x158424) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x15842Cu;
    // 0x15842c: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x15842Cu;
    {
        const bool branch_taken_0x15842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15842c) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158434u;
    // 0x158434: 0x0  nop
    ctx->pc = 0x158434u;
    // NOP
label_158438:
    // 0x158438: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x158438u;
    SET_GPR_U32(ctx, 31, 0x158440u);
    ctx->pc = 0x15843Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158438u;
            // 0x15843c: 0x27a600f8  addiu       $a2, $sp, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158440u; }
        if (ctx->pc != 0x158440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158440u; }
        if (ctx->pc != 0x158440u) { return; }
    }
    ctx->pc = 0x158440u;
label_158440:
    // 0x158440: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x158440u;
    {
        const bool branch_taken_0x158440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158440) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158448u;
label_158448:
    // 0x158448: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x158448u;
    SET_GPR_U32(ctx, 31, 0x158450u);
    ctx->pc = 0x15844Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158448u;
            // 0x15844c: 0x27a600f8  addiu       $a2, $sp, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158450u; }
        if (ctx->pc != 0x158450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158450u; }
        if (ctx->pc != 0x158450u) { return; }
    }
    ctx->pc = 0x158450u;
label_158450:
    // 0x158450: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x158450u;
    {
        const bool branch_taken_0x158450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158450) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158458u;
label_158458:
    // 0x158458: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x158458u;
    SET_GPR_U32(ctx, 31, 0x158460u);
    ctx->pc = 0x15845Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158458u;
            // 0x15845c: 0x27a600f8  addiu       $a2, $sp, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158460u; }
        if (ctx->pc != 0x158460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158460u; }
        if (ctx->pc != 0x158460u) { return; }
    }
    ctx->pc = 0x158460u;
label_158460:
    // 0x158460: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x158460u;
    {
        const bool branch_taken_0x158460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158460) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158468u;
label_158468:
    // 0x158468: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x158468u;
    SET_GPR_U32(ctx, 31, 0x158470u);
    ctx->pc = 0x15846Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158468u;
            // 0x15846c: 0x27a600f8  addiu       $a2, $sp, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158470u; }
        if (ctx->pc != 0x158470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158470u; }
        if (ctx->pc != 0x158470u) { return; }
    }
    ctx->pc = 0x158470u;
label_158470:
    // 0x158470: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x158470u;
    {
        const bool branch_taken_0x158470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158470) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158478u;
label_158478:
    // 0x158478: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x158478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x15847c: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x15847cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x158480: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x158480u;
    {
        const bool branch_taken_0x158480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x158480) {
            ctx->pc = 0x158520u;
            goto label_158520;
        }
    }
    ctx->pc = 0x158488u;
    // 0x158488: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x158488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x15848c: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x15848cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x158490: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x158490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x158494: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x158494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x158498: 0x30c60e77  andi        $a2, $a2, 0xE77
    ctx->pc = 0x158498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3703);
    // 0x15849c: 0x10c3001c  beq         $a2, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x15849Cu;
    {
        const bool branch_taken_0x15849c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1584A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15849Cu;
            // 0x1584a0: 0xc7ac00e0  lwc1        $f12, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15849c) {
            ctx->pc = 0x158510u;
            goto label_158510;
        }
    }
    ctx->pc = 0x1584A4u;
    // 0x1584a4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1584a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1584a8: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1584A8u;
    {
        const bool branch_taken_0x1584a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1584a8) {
            ctx->pc = 0x158500u;
            goto label_158500;
        }
    }
    ctx->pc = 0x1584B0u;
    // 0x1584b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1584b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1584b4: 0x10c3000e  beq         $a2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1584B4u;
    {
        const bool branch_taken_0x1584b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1584b4) {
            ctx->pc = 0x1584F0u;
            goto label_1584f0;
        }
    }
    ctx->pc = 0x1584BCu;
    // 0x1584bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1584bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1584c0: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1584C0u;
    {
        const bool branch_taken_0x1584c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1584c0) {
            ctx->pc = 0x1584E0u;
            goto label_1584e0;
        }
    }
    ctx->pc = 0x1584C8u;
    // 0x1584c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1584c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1584cc: 0x10c30090  beq         $a2, $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x1584CCu;
    {
        const bool branch_taken_0x1584cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1584cc) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x1584D4u;
    // 0x1584d4: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x1584D4u;
    {
        const bool branch_taken_0x1584d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1584d4) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x1584DCu;
    // 0x1584dc: 0x0  nop
    ctx->pc = 0x1584dcu;
    // NOP
label_1584e0:
    // 0x1584e0: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x1584E0u;
    SET_GPR_U32(ctx, 31, 0x1584E8u);
    ctx->pc = 0x1584E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1584E0u;
            // 0x1584e4: 0x27a600f4  addiu       $a2, $sp, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584E8u; }
        if (ctx->pc != 0x1584E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584E8u; }
        if (ctx->pc != 0x1584E8u) { return; }
    }
    ctx->pc = 0x1584E8u;
label_1584e8:
    // 0x1584e8: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1584E8u;
    {
        const bool branch_taken_0x1584e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1584e8) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x1584F0u;
label_1584f0:
    // 0x1584f0: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x1584F0u;
    SET_GPR_U32(ctx, 31, 0x1584F8u);
    ctx->pc = 0x1584F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1584F0u;
            // 0x1584f4: 0x27a600f4  addiu       $a2, $sp, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584F8u; }
        if (ctx->pc != 0x1584F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584F8u; }
        if (ctx->pc != 0x1584F8u) { return; }
    }
    ctx->pc = 0x1584F8u;
label_1584f8:
    // 0x1584f8: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x1584F8u;
    {
        const bool branch_taken_0x1584f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1584f8) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158500u;
label_158500:
    // 0x158500: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x158500u;
    SET_GPR_U32(ctx, 31, 0x158508u);
    ctx->pc = 0x158504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158500u;
            // 0x158504: 0x27a600f4  addiu       $a2, $sp, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158508u; }
        if (ctx->pc != 0x158508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158508u; }
        if (ctx->pc != 0x158508u) { return; }
    }
    ctx->pc = 0x158508u;
label_158508:
    // 0x158508: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x158508u;
    {
        const bool branch_taken_0x158508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158508) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158510u;
label_158510:
    // 0x158510: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x158510u;
    SET_GPR_U32(ctx, 31, 0x158518u);
    ctx->pc = 0x158514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158510u;
            // 0x158514: 0x27a600f4  addiu       $a2, $sp, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158518u; }
        if (ctx->pc != 0x158518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158518u; }
        if (ctx->pc != 0x158518u) { return; }
    }
    ctx->pc = 0x158518u;
label_158518:
    // 0x158518: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x158518u;
    {
        const bool branch_taken_0x158518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158518) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158520u;
label_158520:
    // 0x158520: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x158520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x158524: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x158524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x158528: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x158528u;
    {
        const bool branch_taken_0x158528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x158528) {
            ctx->pc = 0x158548u;
            goto label_158548;
        }
    }
    ctx->pc = 0x158530u;
    // 0x158530: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x158530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x158534: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x158534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158538: 0xc055f88  jal         func_157E20
    ctx->pc = 0x158538u;
    SET_GPR_U32(ctx, 31, 0x158540u);
    ctx->pc = 0x15853Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158538u;
            // 0x15853c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157E20u;
    if (runtime->hasFunction(0x157E20u)) {
        auto targetFn = runtime->lookupFunction(0x157E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158540u; }
        if (ctx->pc != 0x158540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157E20_0x157e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158540u; }
        if (ctx->pc != 0x158540u) { return; }
    }
    ctx->pc = 0x158540u;
label_158540:
    // 0x158540: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x158540u;
    {
        const bool branch_taken_0x158540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158540) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158548u;
label_158548:
    // 0x158548: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x158548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x15854c: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x15854cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x158550: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x158550u;
    {
        const bool branch_taken_0x158550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x158550) {
            ctx->pc = 0x158570u;
            goto label_158570;
        }
    }
    ctx->pc = 0x158558u;
    // 0x158558: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x158558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15855c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15855cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158560: 0xc055f24  jal         func_157C90
    ctx->pc = 0x158560u;
    SET_GPR_U32(ctx, 31, 0x158568u);
    ctx->pc = 0x158564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158560u;
            // 0x158564: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157C90u;
    if (runtime->hasFunction(0x157C90u)) {
        auto targetFn = runtime->lookupFunction(0x157C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158568u; }
        if (ctx->pc != 0x158568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157C90_0x157c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158568u; }
        if (ctx->pc != 0x158568u) { return; }
    }
    ctx->pc = 0x158568u;
label_158568:
    // 0x158568: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x158568u;
    {
        const bool branch_taken_0x158568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158568) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158570u;
label_158570:
    // 0x158570: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x158570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x158574: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x158574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x158578: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x158578u;
    {
        const bool branch_taken_0x158578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x158578) {
            ctx->pc = 0x158598u;
            goto label_158598;
        }
    }
    ctx->pc = 0x158580u;
    // 0x158580: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x158580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x158584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x158584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158588: 0xc055f24  jal         func_157C90
    ctx->pc = 0x158588u;
    SET_GPR_U32(ctx, 31, 0x158590u);
    ctx->pc = 0x15858Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158588u;
            // 0x15858c: 0x27a500ec  addiu       $a1, $sp, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157C90u;
    if (runtime->hasFunction(0x157C90u)) {
        auto targetFn = runtime->lookupFunction(0x157C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158590u; }
        if (ctx->pc != 0x158590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157C90_0x157c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158590u; }
        if (ctx->pc != 0x158590u) { return; }
    }
    ctx->pc = 0x158590u;
label_158590:
    // 0x158590: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x158590u;
    {
        const bool branch_taken_0x158590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158590) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158598u;
label_158598:
    // 0x158598: 0x30647800  andi        $a0, $v1, 0x7800
    ctx->pc = 0x158598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30720);
    // 0x15859c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x15859Cu;
    {
        const bool branch_taken_0x15859c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15859c) {
            ctx->pc = 0x1585C8u;
            goto label_1585c8;
        }
    }
    ctx->pc = 0x1585A4u;
    // 0x1585a4: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x1585a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1585a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1585a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1585ac: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1585acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1585b0: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1585b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1585b4: 0xc04d280  jal         func_134A00
    ctx->pc = 0x1585B4u;
    SET_GPR_U32(ctx, 31, 0x1585BCu);
    ctx->pc = 0x1585B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1585B4u;
            // 0x1585b8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134A00u;
    if (runtime->hasFunction(0x134A00u)) {
        auto targetFn = runtime->lookupFunction(0x134A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1585BCu; }
        if (ctx->pc != 0x1585BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134A00_0x134a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1585BCu; }
        if (ctx->pc != 0x1585BCu) { return; }
    }
    ctx->pc = 0x1585BCu;
label_1585bc:
    // 0x1585bc: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1585BCu;
    {
        const bool branch_taken_0x1585bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1585bc) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x1585C4u;
    // 0x1585c4: 0x0  nop
    ctx->pc = 0x1585c4u;
    // NOP
label_1585c8:
    // 0x1585c8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1585c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1585cc: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x1585ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1585d0: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1585D0u;
    {
        const bool branch_taken_0x1585d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1585d0) {
            ctx->pc = 0x158670u;
            goto label_158670;
        }
    }
    ctx->pc = 0x1585D8u;
    // 0x1585d8: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1585d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1585dc: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x1585dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1585e0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1585e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1585e4: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x1585e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1585e8: 0x30c60e77  andi        $a2, $a2, 0xE77
    ctx->pc = 0x1585e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3703);
    // 0x1585ec: 0x10c3001c  beq         $a2, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1585ECu;
    {
        const bool branch_taken_0x1585ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1585F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1585ECu;
            // 0x1585f0: 0xc7ac00e0  lwc1        $f12, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585ec) {
            ctx->pc = 0x158660u;
            goto label_158660;
        }
    }
    ctx->pc = 0x1585F4u;
    // 0x1585f4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1585f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1585f8: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1585F8u;
    {
        const bool branch_taken_0x1585f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1585f8) {
            ctx->pc = 0x158650u;
            goto label_158650;
        }
    }
    ctx->pc = 0x158600u;
    // 0x158600: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x158600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x158604: 0x10c3000e  beq         $a2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x158604u;
    {
        const bool branch_taken_0x158604 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x158604) {
            ctx->pc = 0x158640u;
            goto label_158640;
        }
    }
    ctx->pc = 0x15860Cu;
    // 0x15860c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158610: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x158610u;
    {
        const bool branch_taken_0x158610 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x158610) {
            ctx->pc = 0x158630u;
            goto label_158630;
        }
    }
    ctx->pc = 0x158618u;
    // 0x158618: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15861c: 0x10c3003c  beq         $a2, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x15861Cu;
    {
        const bool branch_taken_0x15861c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x15861c) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158624u;
    // 0x158624: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x158624u;
    {
        const bool branch_taken_0x158624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158624) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x15862Cu;
    // 0x15862c: 0x0  nop
    ctx->pc = 0x15862cu;
    // NOP
label_158630:
    // 0x158630: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x158630u;
    SET_GPR_U32(ctx, 31, 0x158638u);
    ctx->pc = 0x158634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158630u;
            // 0x158634: 0x27a600e8  addiu       $a2, $sp, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158638u; }
        if (ctx->pc != 0x158638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158638u; }
        if (ctx->pc != 0x158638u) { return; }
    }
    ctx->pc = 0x158638u;
label_158638:
    // 0x158638: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x158638u;
    {
        const bool branch_taken_0x158638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158638) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158640u;
label_158640:
    // 0x158640: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x158640u;
    SET_GPR_U32(ctx, 31, 0x158648u);
    ctx->pc = 0x158644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158640u;
            // 0x158644: 0x27a600e8  addiu       $a2, $sp, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158648u; }
        if (ctx->pc != 0x158648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158648u; }
        if (ctx->pc != 0x158648u) { return; }
    }
    ctx->pc = 0x158648u;
label_158648:
    // 0x158648: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x158648u;
    {
        const bool branch_taken_0x158648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158648) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158650u;
label_158650:
    // 0x158650: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x158650u;
    SET_GPR_U32(ctx, 31, 0x158658u);
    ctx->pc = 0x158654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158650u;
            // 0x158654: 0x27a600e8  addiu       $a2, $sp, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158658u; }
        if (ctx->pc != 0x158658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158658u; }
        if (ctx->pc != 0x158658u) { return; }
    }
    ctx->pc = 0x158658u;
label_158658:
    // 0x158658: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x158658u;
    {
        const bool branch_taken_0x158658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158658) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158660u;
label_158660:
    // 0x158660: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x158660u;
    SET_GPR_U32(ctx, 31, 0x158668u);
    ctx->pc = 0x158664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158660u;
            // 0x158664: 0x27a600e8  addiu       $a2, $sp, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158668u; }
        if (ctx->pc != 0x158668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158668u; }
        if (ctx->pc != 0x158668u) { return; }
    }
    ctx->pc = 0x158668u;
label_158668:
    // 0x158668: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x158668u;
    {
        const bool branch_taken_0x158668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158668) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158670u;
label_158670:
    // 0x158670: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x158670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x158674: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x158674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x158678: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x158678u;
    {
        const bool branch_taken_0x158678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158678) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158680u;
    // 0x158680: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x158680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x158684: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x158684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x158688: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x158688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15868c: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x15868cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x158690: 0x30c60e77  andi        $a2, $a2, 0xE77
    ctx->pc = 0x158690u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3703);
    // 0x158694: 0x10c3001c  beq         $a2, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x158694u;
    {
        const bool branch_taken_0x158694 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x158698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158694u;
            // 0x158698: 0xc7ac00e0  lwc1        $f12, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158694) {
            ctx->pc = 0x158708u;
            goto label_158708;
        }
    }
    ctx->pc = 0x15869Cu;
    // 0x15869c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x15869cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1586a0: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1586A0u;
    {
        const bool branch_taken_0x1586a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1586a0) {
            ctx->pc = 0x1586F8u;
            goto label_1586f8;
        }
    }
    ctx->pc = 0x1586A8u;
    // 0x1586a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1586a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1586ac: 0x10c3000e  beq         $a2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1586ACu;
    {
        const bool branch_taken_0x1586ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1586ac) {
            ctx->pc = 0x1586E8u;
            goto label_1586e8;
        }
    }
    ctx->pc = 0x1586B4u;
    // 0x1586b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1586b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1586b8: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1586B8u;
    {
        const bool branch_taken_0x1586b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1586b8) {
            ctx->pc = 0x1586D8u;
            goto label_1586d8;
        }
    }
    ctx->pc = 0x1586C0u;
    // 0x1586c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1586c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1586c4: 0x10c30012  beq         $a2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1586C4u;
    {
        const bool branch_taken_0x1586c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1586c4) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x1586CCu;
    // 0x1586cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1586CCu;
    {
        const bool branch_taken_0x1586cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1586cc) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x1586D4u;
    // 0x1586d4: 0x0  nop
    ctx->pc = 0x1586d4u;
    // NOP
label_1586d8:
    // 0x1586d8: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x1586D8u;
    SET_GPR_U32(ctx, 31, 0x1586E0u);
    ctx->pc = 0x1586DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1586D8u;
            // 0x1586dc: 0x27a600e4  addiu       $a2, $sp, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1586E0u; }
        if (ctx->pc != 0x1586E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1586E0u; }
        if (ctx->pc != 0x1586E0u) { return; }
    }
    ctx->pc = 0x1586E0u;
label_1586e0:
    // 0x1586e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1586E0u;
    {
        const bool branch_taken_0x1586e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1586e0) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x1586E8u;
label_1586e8:
    // 0x1586e8: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x1586E8u;
    SET_GPR_U32(ctx, 31, 0x1586F0u);
    ctx->pc = 0x1586ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1586E8u;
            // 0x1586ec: 0x27a600e4  addiu       $a2, $sp, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1586F0u; }
        if (ctx->pc != 0x1586F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1586F0u; }
        if (ctx->pc != 0x1586F0u) { return; }
    }
    ctx->pc = 0x1586F0u;
label_1586f0:
    // 0x1586f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1586F0u;
    {
        const bool branch_taken_0x1586f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1586f0) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x1586F8u;
label_1586f8:
    // 0x1586f8: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x1586F8u;
    SET_GPR_U32(ctx, 31, 0x158700u);
    ctx->pc = 0x1586FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1586F8u;
            // 0x1586fc: 0x27a600e4  addiu       $a2, $sp, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158700u; }
        if (ctx->pc != 0x158700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158700u; }
        if (ctx->pc != 0x158700u) { return; }
    }
    ctx->pc = 0x158700u;
label_158700:
    // 0x158700: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x158700u;
    {
        const bool branch_taken_0x158700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158700) {
            ctx->pc = 0x158710u;
            goto label_158710;
        }
    }
    ctx->pc = 0x158708u;
label_158708:
    // 0x158708: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x158708u;
    SET_GPR_U32(ctx, 31, 0x158710u);
    ctx->pc = 0x15870Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158708u;
            // 0x15870c: 0x27a600e4  addiu       $a2, $sp, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158710u; }
        if (ctx->pc != 0x158710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158710u; }
        if (ctx->pc != 0x158710u) { return; }
    }
    ctx->pc = 0x158710u;
label_158710:
    // 0x158710: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x158710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x158714: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x158714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x158718: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x158718u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15871c: 0x1460feda  bnez        $v1, . + 4 + (-0x126 << 2)
    ctx->pc = 0x15871Cu;
    {
        const bool branch_taken_0x15871c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15871Cu;
            // 0x158720: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15871c) {
            ctx->pc = 0x158288u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_158288;
        }
    }
    ctx->pc = 0x158724u;
    // 0x158724: 0x0  nop
    ctx->pc = 0x158724u;
    // NOP
label_158728:
    // 0x158728: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x158728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15872c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x15872cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158730: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x158730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x158734: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x158734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158738: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x158738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x15873c: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x15873cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158740: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x158740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x158744: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x158744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158748: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x158748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x15874c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x15874cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158750: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x158750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x158754: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x158754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158758: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x158758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x15875c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x15875cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158760: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x158760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x158764: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x158764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x158768: 0x5083003d  beql        $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x158768u;
    {
        const bool branch_taken_0x158768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158768) {
            ctx->pc = 0x15876Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158768u;
            // 0x15876c: 0x8fa300a0  lw          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158860u;
            goto label_158860;
        }
    }
    ctx->pc = 0x158770u;
    // 0x158770: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x158770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x158774: 0x5083002c  beql        $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x158774u;
    {
        const bool branch_taken_0x158774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158774) {
            ctx->pc = 0x158778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158774u;
            // 0x158778: 0xc7a000b0  lwc1        $f0, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x158828u;
            goto label_158828;
        }
    }
    ctx->pc = 0x15877Cu;
    // 0x15877c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15877cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x158780: 0x5083001b  beql        $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x158780u;
    {
        const bool branch_taken_0x158780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158780) {
            ctx->pc = 0x158784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158780u;
            // 0x158784: 0x8fa300a0  lw          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1587F0u;
            goto label_1587f0;
        }
    }
    ctx->pc = 0x158788u;
    // 0x158788: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x158788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15878c: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15878Cu;
    {
        const bool branch_taken_0x15878c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15878c) {
            ctx->pc = 0x158790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15878Cu;
            // 0x158790: 0xc7a000b0  lwc1        $f0, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1587B8u;
            goto label_1587b8;
        }
    }
    ctx->pc = 0x158794u;
    // 0x158794: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x158794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158798: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x158798u;
    {
        const bool branch_taken_0x158798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158798) {
            ctx->pc = 0x15879Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158798u;
            // 0x15879c: 0xc7a000f8  lwc1        $f0, 0xF8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1587A8u;
            goto label_1587a8;
        }
    }
    ctx->pc = 0x1587A0u;
    // 0x1587a0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1587A0u;
    {
        const bool branch_taken_0x1587a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1587A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1587A0u;
            // 0x1587a4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587a0) {
            ctx->pc = 0x158898u;
            goto label_158898;
        }
    }
    ctx->pc = 0x1587A8u;
label_1587a8:
    // 0x1587a8: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x1587a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
    // 0x1587ac: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x1587acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1587b0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1587B0u;
    {
        const bool branch_taken_0x1587b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1587B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1587B0u;
            // 0x1587b4: 0xe6600028  swc1        $f0, 0x28($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587b0) {
            ctx->pc = 0x158894u;
            goto label_158894;
        }
    }
    ctx->pc = 0x1587B8u;
label_1587b8:
    // 0x1587b8: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x1587b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
    // 0x1587bc: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1587bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1587c0: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x1587c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x1587c4: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1587c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1587c8: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x1587c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x1587cc: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1587ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1587d0: 0xae630030  sw          $v1, 0x30($s3)
    ctx->pc = 0x1587d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
    // 0x1587d4: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x1587d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1587d8: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x1587d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x1587dc: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1587dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1587e0: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x1587e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x1587e4: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x1587e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1587e8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1587E8u;
    {
        const bool branch_taken_0x1587e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1587ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1587E8u;
            // 0x1587ec: 0xe660003c  swc1        $f0, 0x3C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587e8) {
            ctx->pc = 0x158894u;
            goto label_158894;
        }
    }
    ctx->pc = 0x1587F0u;
label_1587f0:
    // 0x1587f0: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x1587f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
    // 0x1587f4: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x1587f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1587f8: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x1587f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
    // 0x1587fc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1587fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x158800: 0xae630030  sw          $v1, 0x30($s3)
    ctx->pc = 0x158800u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
    // 0x158804: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x158804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x158808: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x158808u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x15880c: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x15880cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x158810: 0xae630038  sw          $v1, 0x38($s3)
    ctx->pc = 0x158810u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
    // 0x158814: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x158814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158818: 0xe660003c  swc1        $f0, 0x3C($s3)
    ctx->pc = 0x158818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
    // 0x15881c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x15881cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158820: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x158820u;
    {
        const bool branch_taken_0x158820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158820u;
            // 0x158824: 0xe6600040  swc1        $f0, 0x40($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158820) {
            ctx->pc = 0x158894u;
            goto label_158894;
        }
    }
    ctx->pc = 0x158828u;
label_158828:
    // 0x158828: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x158828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
    // 0x15882c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x15882cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158830: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x158830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x158834: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x158834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158838: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x158838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x15883c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x15883cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158840: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x158840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x158844: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x158844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158848: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x158848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x15884c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x15884cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158850: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x158850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x158854: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x158854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158858: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x158858u;
    {
        const bool branch_taken_0x158858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15885Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158858u;
            // 0x15885c: 0xe660003c  swc1        $f0, 0x3C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158858) {
            ctx->pc = 0x158894u;
            goto label_158894;
        }
    }
    ctx->pc = 0x158860u;
label_158860:
    // 0x158860: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x158860u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
    // 0x158864: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x158864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x158868: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x158868u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
    // 0x15886c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x15886cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x158870: 0xae630030  sw          $v1, 0x30($s3)
    ctx->pc = 0x158870u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
    // 0x158874: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x158874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158878: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x158878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x15887c: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x15887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158880: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x158880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x158884: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x158884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158888: 0xe660003c  swc1        $f0, 0x3C($s3)
    ctx->pc = 0x158888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
    // 0x15888c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x15888cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158890: 0xe6600040  swc1        $f0, 0x40($s3)
    ctx->pc = 0x158890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
label_158894:
    // 0x158894: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x158894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_158898:
    // 0x158898: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x158898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15889c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x15889cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1588a0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1588a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1588a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1588a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1588a8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1588a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1588ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1588acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1588b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1588b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1588b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1588b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1588b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1588B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1588BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1588B8u;
            // 0x1588bc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1588C0u;
}
