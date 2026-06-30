#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CD2B0
// Address: 0x4cd2b0 - 0x4cd7d0
void sub_004CD2B0_0x4cd2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CD2B0_0x4cd2b0");
#endif

    switch (ctx->pc) {
        case 0x4cd340u: goto label_4cd340;
        case 0x4cd360u: goto label_4cd360;
        case 0x4cd37cu: goto label_4cd37c;
        case 0x4cd388u: goto label_4cd388;
        case 0x4cd3d4u: goto label_4cd3d4;
        case 0x4cd3dcu: goto label_4cd3dc;
        case 0x4cd3e8u: goto label_4cd3e8;
        case 0x4cd40cu: goto label_4cd40c;
        case 0x4cd41cu: goto label_4cd41c;
        case 0x4cd428u: goto label_4cd428;
        case 0x4cd45cu: goto label_4cd45c;
        case 0x4cd48cu: goto label_4cd48c;
        case 0x4cd49cu: goto label_4cd49c;
        case 0x4cd4acu: goto label_4cd4ac;
        case 0x4cd4bcu: goto label_4cd4bc;
        case 0x4cd4e4u: goto label_4cd4e4;
        case 0x4cd4f8u: goto label_4cd4f8;
        case 0x4cd510u: goto label_4cd510;
        case 0x4cd518u: goto label_4cd518;
        case 0x4cd61cu: goto label_4cd61c;
        case 0x4cd644u: goto label_4cd644;
        case 0x4cd654u: goto label_4cd654;
        case 0x4cd6b8u: goto label_4cd6b8;
        case 0x4cd6ccu: goto label_4cd6cc;
        case 0x4cd6dcu: goto label_4cd6dc;
        case 0x4cd6f4u: goto label_4cd6f4;
        case 0x4cd704u: goto label_4cd704;
        case 0x4cd728u: goto label_4cd728;
        case 0x4cd748u: goto label_4cd748;
        case 0x4cd75cu: goto label_4cd75c;
        case 0x4cd774u: goto label_4cd774;
        case 0x4cd7a0u: goto label_4cd7a0;
        default: break;
    }

    ctx->pc = 0x4cd2b0u;

label_4cd2b0:
    // 0x4cd2b0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x4cd2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x4cd2b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4cd2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4cd2b8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4cd2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x4cd2bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4cd2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x4cd2c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4cd2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4cd2c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4cd2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4cd2c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4cd2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4cd2cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4cd2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4cd2d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4cd2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4cd2d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cd2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4cd2d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cd2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4cd2dc: 0x8c460cd0  lw          $a2, 0xCD0($v0)
    ctx->pc = 0x4cd2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
    // 0x4cd2e0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4cd2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x4cd2e4: 0x8cd100a4  lw          $s1, 0xA4($a2)
    ctx->pc = 0x4cd2e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
    // 0x4cd2e8: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x4cd2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x4cd2ec: 0x24d400a4  addiu       $s4, $a2, 0xA4
    ctx->pc = 0x4cd2ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 164));
    // 0x4cd2f0: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x4cd2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4cd2f4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4cd2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x4cd2f8: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x4cd2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x4cd2fc: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x4cd2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x4cd300: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cd300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4cd304: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4cd304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4cd308: 0x8c53e370  lw          $s3, -0x1C90($v0)
    ctx->pc = 0x4cd308u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
    // 0x4cd30c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cd30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4cd310: 0x8c52e378  lw          $s2, -0x1C88($v0)
    ctx->pc = 0x4cd310u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
    // 0x4cd314: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4cd314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4cd318: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4cd318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4cd31c: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x4cd31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x4cd320: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4cd320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cd324: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x4cd324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4cd328: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4cd328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x4cd32c: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x4cd32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4cd330: 0x24760010  addiu       $s6, $v1, 0x10
    ctx->pc = 0x4cd330u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4cd334: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x4cd334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4cd338: 0xc04f3fc  jal         func_13CFF0
    ctx->pc = 0x4CD338u;
    SET_GPR_U32(ctx, 31, 0x4CD340u);
    ctx->pc = 0x4CD33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD338u;
            // 0x4cd33c: 0x24770090  addiu       $s7, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD340u; }
        if (ctx->pc != 0x4CD340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD340u; }
        if (ctx->pc != 0x4CD340u) { return; }
    }
    ctx->pc = 0x4CD340u;
label_4cd340:
    // 0x4cd340: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4cd340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x4cd344: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4cd344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4cd348: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x4cd348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
    // 0x4cd34c: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x4cd34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x4cd350: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4cd350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x4cd354: 0x8c750130  lw          $s5, 0x130($v1)
    ctx->pc = 0x4cd354u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x4cd358: 0xc07698c  jal         func_1DA630
    ctx->pc = 0x4CD358u;
    SET_GPR_U32(ctx, 31, 0x4CD360u);
    ctx->pc = 0x4CD35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD358u;
            // 0x4cd35c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD360u; }
        if (ctx->pc != 0x4CD360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD360u; }
        if (ctx->pc != 0x4CD360u) { return; }
    }
    ctx->pc = 0x4CD360u;
label_4cd360:
    // 0x4cd360: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4cd360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4cd364: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CD364u;
    {
        const bool branch_taken_0x4cd364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4cd364) {
            ctx->pc = 0x4CD374u;
            goto label_4cd374;
        }
    }
    ctx->pc = 0x4CD36Cu;
    // 0x4cd36c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x4CD36Cu;
    {
        const bool branch_taken_0x4cd36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD36Cu;
            // 0x4cd370: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd36c) {
            ctx->pc = 0x4CD43Cu;
            goto label_4cd43c;
        }
    }
    ctx->pc = 0x4CD374u;
label_4cd374:
    // 0x4cd374: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x4CD374u;
    SET_GPR_U32(ctx, 31, 0x4CD37Cu);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD37Cu; }
        if (ctx->pc != 0x4CD37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD37Cu; }
        if (ctx->pc != 0x4CD37Cu) { return; }
    }
    ctx->pc = 0x4CD37Cu;
label_4cd37c:
    // 0x4cd37c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4cd37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd380: 0xc076984  jal         func_1DA610
    ctx->pc = 0x4CD380u;
    SET_GPR_U32(ctx, 31, 0x4CD388u);
    ctx->pc = 0x4CD384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD380u;
            // 0x4cd384: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD388u; }
        if (ctx->pc != 0x4CD388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD388u; }
        if (ctx->pc != 0x4CD388u) { return; }
    }
    ctx->pc = 0x4CD388u;
label_4cd388:
    // 0x4cd388: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4cd388u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd38c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4cd38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x4cd390: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4cd390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4cd394: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x4cd394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x4cd398: 0xc442c990  lwc1        $f2, -0x3670($v0)
    ctx->pc = 0x4cd398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4cd39c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4cd39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd3a0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4cd3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4cd3a4: 0xc441c998  lwc1        $f1, -0x3668($v0)
    ctx->pc = 0x4cd3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4cd3a8: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x4cd3a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x4cd3ac: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4cd3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4cd3b0: 0xc440c99c  lwc1        $f0, -0x3664($v0)
    ctx->pc = 0x4cd3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4cd3b4: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x4cd3b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x4cd3b8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4cd3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4cd3bc: 0x8c42c994  lw          $v0, -0x366C($v0)
    ctx->pc = 0x4cd3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953364)));
    // 0x4cd3c0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x4cd3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x4cd3c4: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x4cd3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x4cd3c8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x4cd3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4cd3cc: 0xc04cca0  jal         func_133280
    ctx->pc = 0x4CD3CCu;
    SET_GPR_U32(ctx, 31, 0x4CD3D4u);
    ctx->pc = 0x4CD3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD3CCu;
            // 0x4cd3d0: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD3D4u; }
        if (ctx->pc != 0x4CD3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD3D4u; }
        if (ctx->pc != 0x4CD3D4u) { return; }
    }
    ctx->pc = 0x4CD3D4u;
label_4cd3d4:
    // 0x4cd3d4: 0xc076980  jal         func_1DA600
    ctx->pc = 0x4CD3D4u;
    SET_GPR_U32(ctx, 31, 0x4CD3DCu);
    ctx->pc = 0x4CD3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD3D4u;
            // 0x4cd3d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD3DCu; }
        if (ctx->pc != 0x4CD3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD3DCu; }
        if (ctx->pc != 0x4CD3DCu) { return; }
    }
    ctx->pc = 0x4CD3DCu;
label_4cd3dc:
    // 0x4cd3dc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4cd3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x4cd3e0: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x4CD3E0u;
    SET_GPR_U32(ctx, 31, 0x4CD3E8u);
    ctx->pc = 0x4CD3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD3E0u;
            // 0x4cd3e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD3E8u; }
        if (ctx->pc != 0x4CD3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD3E8u; }
        if (ctx->pc != 0x4CD3E8u) { return; }
    }
    ctx->pc = 0x4CD3E8u;
label_4cd3e8:
    // 0x4cd3e8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4cd3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4cd3ec: 0xc4617550  lwc1        $f1, 0x7550($v1)
    ctx->pc = 0x4cd3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 30032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4cd3f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4cd3f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4cd3f4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x4CD3F4u;
    {
        const bool branch_taken_0x4cd3f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4cd3f4) {
            ctx->pc = 0x4CD3F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD3F4u;
            // 0x4cd3f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CD404u;
            goto label_4cd404;
        }
    }
    ctx->pc = 0x4CD3FCu;
    // 0x4cd3fc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4CD3FCu;
    {
        const bool branch_taken_0x4cd3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD3FCu;
            // 0x4cd400: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd3fc) {
            ctx->pc = 0x4CD43Cu;
            goto label_4cd43c;
        }
    }
    ctx->pc = 0x4CD404u;
label_4cd404:
    // 0x4cd404: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x4CD404u;
    SET_GPR_U32(ctx, 31, 0x4CD40Cu);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD40Cu; }
        if (ctx->pc != 0x4CD40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD40Cu; }
        if (ctx->pc != 0x4CD40Cu) { return; }
    }
    ctx->pc = 0x4CD40Cu;
label_4cd40c:
    // 0x4cd40c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4cd40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd410: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4cd410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x4cd414: 0xc04cd60  jal         func_133580
    ctx->pc = 0x4CD414u;
    SET_GPR_U32(ctx, 31, 0x4CD41Cu);
    ctx->pc = 0x4CD418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD414u;
            // 0x4cd418: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD41Cu; }
        if (ctx->pc != 0x4CD41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD41Cu; }
        if (ctx->pc != 0x4CD41Cu) { return; }
    }
    ctx->pc = 0x4CD41Cu;
label_4cd41c:
    // 0x4cd41c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cd41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd420: 0xc04c650  jal         func_131940
    ctx->pc = 0x4CD420u;
    SET_GPR_U32(ctx, 31, 0x4CD428u);
    ctx->pc = 0x4CD424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD420u;
            // 0x4cd424: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD428u; }
        if (ctx->pc != 0x4CD428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD428u; }
        if (ctx->pc != 0x4CD428u) { return; }
    }
    ctx->pc = 0x4CD428u;
label_4cd428:
    // 0x4cd428: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4cd428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x4cd42c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4cd42cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4cd430: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x4cd430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
    // 0x4cd434: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4cd434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4cd438: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4cd438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4cd43c:
    // 0x4cd43c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4cd43cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4cd440: 0x5020003e  beql        $at, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x4CD440u;
    {
        const bool branch_taken_0x4cd440 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cd440) {
            ctx->pc = 0x4CD444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD440u;
            // 0x4cd444: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CD53Cu;
            goto label_4cd53c;
        }
    }
    ctx->pc = 0x4CD448u;
    // 0x4cd448: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x4cd448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x4cd44c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4cd44cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd450: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4cd450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd454: 0x27a60128  addiu       $a2, $sp, 0x128
    ctx->pc = 0x4cd454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x4cd458: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x4cd458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4cd45c:
    // 0x4cd45c: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x4cd45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4cd460: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4cd460u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4cd464: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x4cd464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4cd468: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x4cd468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x4cd46c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x4cd46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x4cd470: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4cd470u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4cd474: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4cd474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4cd478: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4cd478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x4cd47c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4CD47Cu;
    {
        const bool branch_taken_0x4cd47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CD480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD47Cu;
            // 0x4cd480: 0xaca3003c  sw          $v1, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd47c) {
            ctx->pc = 0x4CD45Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4cd45c;
        }
    }
    ctx->pc = 0x4CD484u;
    // 0x4cd484: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x4CD484u;
    SET_GPR_U32(ctx, 31, 0x4CD48Cu);
    ctx->pc = 0x4CD488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD484u;
            // 0x4cd488: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD48Cu; }
        if (ctx->pc != 0x4CD48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD48Cu; }
        if (ctx->pc != 0x4CD48Cu) { return; }
    }
    ctx->pc = 0x4CD48Cu;
label_4cd48c:
    // 0x4cd48c: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x4cd48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x4cd490: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4cd490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd494: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x4CD494u;
    SET_GPR_U32(ctx, 31, 0x4CD49Cu);
    ctx->pc = 0x4CD498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD494u;
            // 0x4cd498: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD49Cu; }
        if (ctx->pc != 0x4CD49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD49Cu; }
        if (ctx->pc != 0x4CD49Cu) { return; }
    }
    ctx->pc = 0x4CD49Cu;
label_4cd49c:
    // 0x4cd49c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4cd49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x4cd4a0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4cd4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd4a4: 0xc04cd60  jal         func_133580
    ctx->pc = 0x4CD4A4u;
    SET_GPR_U32(ctx, 31, 0x4CD4ACu);
    ctx->pc = 0x4CD4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD4A4u;
            // 0x4cd4a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD4ACu; }
        if (ctx->pc != 0x4CD4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD4ACu; }
        if (ctx->pc != 0x4CD4ACu) { return; }
    }
    ctx->pc = 0x4CD4ACu;
label_4cd4ac:
    // 0x4cd4ac: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4cd4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x4cd4b0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4cd4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd4b4: 0xc04cd60  jal         func_133580
    ctx->pc = 0x4CD4B4u;
    SET_GPR_U32(ctx, 31, 0x4CD4BCu);
    ctx->pc = 0x4CD4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD4B4u;
            // 0x4cd4b8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD4BCu; }
        if (ctx->pc != 0x4CD4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD4BCu; }
        if (ctx->pc != 0x4CD4BCu) { return; }
    }
    ctx->pc = 0x4CD4BCu;
label_4cd4bc:
    // 0x4cd4bc: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x4cd4bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4cd4c0: 0xc68c000c  lwc1        $f12, 0xC($s4)
    ctx->pc = 0x4cd4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4cd4c4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4cd4c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x4cd4c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4cd4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd4cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4cd4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd4d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4cd4d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd4d4: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x4cd4d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x4cd4d8: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x4cd4d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
    // 0x4cd4dc: 0xc04cff4  jal         func_133FD0
    ctx->pc = 0x4CD4DCu;
    SET_GPR_U32(ctx, 31, 0x4CD4E4u);
    ctx->pc = 0x4CD4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD4DCu;
            // 0x4cd4e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD4E4u; }
        if (ctx->pc != 0x4CD4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD4E4u; }
        if (ctx->pc != 0x4CD4E4u) { return; }
    }
    ctx->pc = 0x4CD4E4u;
label_4cd4e4:
    // 0x4cd4e4: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x4cd4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x4cd4e8: 0xc68c001c  lwc1        $f12, 0x1C($s4)
    ctx->pc = 0x4cd4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4cd4ec: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x4cd4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x4cd4f0: 0xc054bbc  jal         func_152EF0
    ctx->pc = 0x4CD4F0u;
    SET_GPR_U32(ctx, 31, 0x4CD4F8u);
    ctx->pc = 0x4CD4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD4F0u;
            // 0x4cd4f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD4F8u; }
        if (ctx->pc != 0x4CD4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD4F8u; }
        if (ctx->pc != 0x4CD4F8u) { return; }
    }
    ctx->pc = 0x4CD4F8u;
label_4cd4f8:
    // 0x4cd4f8: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x4cd4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x4cd4fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4cd4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd500: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4cd500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd504: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4cd504u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x4cd508: 0xc054c2c  jal         func_1530B0
    ctx->pc = 0x4CD508u;
    SET_GPR_U32(ctx, 31, 0x4CD510u);
    ctx->pc = 0x4CD50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD508u;
            // 0x4cd50c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD510u; }
        if (ctx->pc != 0x4CD510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD510u; }
        if (ctx->pc != 0x4CD510u) { return; }
    }
    ctx->pc = 0x4CD510u;
label_4cd510:
    // 0x4cd510: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4cd510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd514: 0x27a70128  addiu       $a3, $sp, 0x128
    ctx->pc = 0x4cd514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_4cd518:
    // 0x4cd518: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4cd518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4cd51c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4cd51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4cd520: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4cd520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cd524: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x4cd524u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4cd528: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x4cd528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x4cd52c: 0xaca4003c  sw          $a0, 0x3C($a1)
    ctx->pc = 0x4cd52cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 4));
    // 0x4cd530: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4CD530u;
    {
        const bool branch_taken_0x4cd530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CD534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD530u;
            // 0x4cd534: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd530) {
            ctx->pc = 0x4CD518u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4cd518;
        }
    }
    ctx->pc = 0x4CD538u;
    // 0x4cd538: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4cd538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4cd53c:
    // 0x4cd53c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4cd53cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4cd540: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4cd540u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4cd544: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4cd544u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4cd548: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4cd548u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cd54c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4cd54cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cd550: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4cd550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cd554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cd554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cd558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cd558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd55c: 0x3e00008  jr          $ra
    ctx->pc = 0x4CD55Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CD560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD55Cu;
            // 0x4cd560: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CD564u;
    // 0x4cd564: 0x0  nop
    ctx->pc = 0x4cd564u;
    // NOP
    // 0x4cd568: 0x0  nop
    ctx->pc = 0x4cd568u;
    // NOP
    // 0x4cd56c: 0x0  nop
    ctx->pc = 0x4cd56cu;
    // NOP
    // 0x4cd570: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4cd570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x4cd574: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x4cd574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4cd578: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4cd578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4cd57c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4cd57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4cd580: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4cd580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4cd584: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4cd584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4cd588: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4cd588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4cd58c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cd58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4cd590: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cd590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4cd594: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x4cd594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x4cd598: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4cd598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cd59c: 0x10670080  beq         $v1, $a3, . + 4 + (0x80 << 2)
    ctx->pc = 0x4CD59Cu;
    {
        const bool branch_taken_0x4cd59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x4CD5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD59Cu;
            // 0x4cd5a0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd59c) {
            ctx->pc = 0x4CD7A0u;
            goto label_4cd7a0;
        }
    }
    ctx->pc = 0x4CD5A4u;
    // 0x4cd5a4: 0x92830010  lbu         $v1, 0x10($s4)
    ctx->pc = 0x4cd5a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x4cd5a8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x4cd5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4cd5ac: 0x5466007d  bnel        $v1, $a2, . + 4 + (0x7D << 2)
    ctx->pc = 0x4CD5ACu;
    {
        const bool branch_taken_0x4cd5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x4cd5ac) {
            ctx->pc = 0x4CD5B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD5ACu;
            // 0x4cd5b0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CD7A4u;
            goto label_4cd7a4;
        }
    }
    ctx->pc = 0x4CD5B4u;
    // 0x4cd5b4: 0x8e850058  lw          $a1, 0x58($s4)
    ctx->pc = 0x4cd5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x4cd5b8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4cd5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4cd5bc: 0x50a3006f  beql        $a1, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x4CD5BCu;
    {
        const bool branch_taken_0x4cd5bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cd5bc) {
            ctx->pc = 0x4CD5C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD5BCu;
            // 0x4cd5c0: 0x3c033eed  lui         $v1, 0x3EED (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CD77Cu;
            goto label_4cd77c;
        }
    }
    ctx->pc = 0x4CD5C4u;
    // 0x4cd5c4: 0x10a60025  beq         $a1, $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x4CD5C4u;
    {
        const bool branch_taken_0x4cd5c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x4cd5c4) {
            ctx->pc = 0x4CD65Cu;
            goto label_4cd65c;
        }
    }
    ctx->pc = 0x4CD5CCu;
    // 0x4cd5cc: 0x10a7001f  beq         $a1, $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x4CD5CCu;
    {
        const bool branch_taken_0x4cd5cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x4cd5cc) {
            ctx->pc = 0x4CD64Cu;
            goto label_4cd64c;
        }
    }
    ctx->pc = 0x4CD5D4u;
    // 0x4cd5d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4cd5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4cd5d8: 0x10a70012  beq         $a1, $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x4CD5D8u;
    {
        const bool branch_taken_0x4cd5d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x4cd5d8) {
            ctx->pc = 0x4CD624u;
            goto label_4cd624;
        }
    }
    ctx->pc = 0x4CD5E0u;
    // 0x4cd5e0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CD5E0u;
    {
        const bool branch_taken_0x4cd5e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cd5e0) {
            ctx->pc = 0x4CD5F0u;
            goto label_4cd5f0;
        }
    }
    ctx->pc = 0x4CD5E8u;
    // 0x4cd5e8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x4CD5E8u;
    {
        const bool branch_taken_0x4cd5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cd5e8) {
            ctx->pc = 0x4CD7A0u;
            goto label_4cd7a0;
        }
    }
    ctx->pc = 0x4CD5F0u;
label_4cd5f0:
    // 0x4cd5f0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4cd5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x4cd5f4: 0x8e85005c  lw          $a1, 0x5C($s4)
    ctx->pc = 0x4cd5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x4cd5f8: 0x8c66d130  lw          $a2, -0x2ED0($v1)
    ctx->pc = 0x4cd5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
    // 0x4cd5fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4cd5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cd600: 0x8cc50130  lw          $a1, 0x130($a2)
    ctx->pc = 0x4cd600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x4cd604: 0xa72804  sllv        $a1, $a3, $a1
    ctx->pc = 0x4cd604u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x4cd608: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4cd608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4cd60c: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x4CD60Cu;
    {
        const bool branch_taken_0x4cd60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cd60c) {
            ctx->pc = 0x4CD7A0u;
            goto label_4cd7a0;
        }
    }
    ctx->pc = 0x4CD614u;
    // 0x4cd614: 0xc1334ac  jal         func_4CD2B0
    ctx->pc = 0x4CD614u;
    SET_GPR_U32(ctx, 31, 0x4CD61Cu);
    ctx->pc = 0x4CD2B0u;
    goto label_4cd2b0;
    ctx->pc = 0x4CD61Cu;
label_4cd61c:
    // 0x4cd61c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x4CD61Cu;
    {
        const bool branch_taken_0x4cd61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cd61c) {
            ctx->pc = 0x4CD7A0u;
            goto label_4cd7a0;
        }
    }
    ctx->pc = 0x4CD624u;
label_4cd624:
    // 0x4cd624: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4cd624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x4cd628: 0x8e850220  lw          $a1, 0x220($s4)
    ctx->pc = 0x4cd628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 544)));
    // 0x4cd62c: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x4cd62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
    // 0x4cd630: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x4cd630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x4cd634: 0x14a3005a  bne         $a1, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x4CD634u;
    {
        const bool branch_taken_0x4cd634 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x4cd634) {
            ctx->pc = 0x4CD7A0u;
            goto label_4cd7a0;
        }
    }
    ctx->pc = 0x4CD63Cu;
    // 0x4cd63c: 0xc133400  jal         func_4CD000
    ctx->pc = 0x4CD63Cu;
    SET_GPR_U32(ctx, 31, 0x4CD644u);
    ctx->pc = 0x4CD000u;
    if (runtime->hasFunction(0x4CD000u)) {
        auto targetFn = runtime->lookupFunction(0x4CD000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD644u; }
        if (ctx->pc != 0x4CD644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CD000_0x4cd000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD644u; }
        if (ctx->pc != 0x4CD644u) { return; }
    }
    ctx->pc = 0x4CD644u;
label_4cd644:
    // 0x4cd644: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x4CD644u;
    {
        const bool branch_taken_0x4cd644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cd644) {
            ctx->pc = 0x4CD7A0u;
            goto label_4cd7a0;
        }
    }
    ctx->pc = 0x4CD64Cu;
label_4cd64c:
    // 0x4cd64c: 0xc133340  jal         func_4CCD00
    ctx->pc = 0x4CD64Cu;
    SET_GPR_U32(ctx, 31, 0x4CD654u);
    ctx->pc = 0x4CCD00u;
    if (runtime->hasFunction(0x4CCD00u)) {
        auto targetFn = runtime->lookupFunction(0x4CCD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD654u; }
        if (ctx->pc != 0x4CD654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CCD00_0x4ccd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD654u; }
        if (ctx->pc != 0x4CD654u) { return; }
    }
    ctx->pc = 0x4CD654u;
label_4cd654:
    // 0x4cd654: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x4CD654u;
    {
        const bool branch_taken_0x4cd654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cd654) {
            ctx->pc = 0x4CD7A0u;
            goto label_4cd7a0;
        }
    }
    ctx->pc = 0x4CD65Cu;
label_4cd65c:
    // 0x4cd65c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4cd65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4cd660: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4cd660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x4cd664: 0x8c470cd0  lw          $a3, 0xCD0($v0)
    ctx->pc = 0x4cd664u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
    // 0x4cd668: 0xc68c0070  lwc1        $f12, 0x70($s4)
    ctx->pc = 0x4cd668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4cd66c: 0x8c64d130  lw          $a0, -0x2ED0($v1)
    ctx->pc = 0x4cd66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
    // 0x4cd670: 0xc68d0074  lwc1        $f13, 0x74($s4)
    ctx->pc = 0x4cd670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4cd674: 0xc68e0078  lwc1        $f14, 0x78($s4)
    ctx->pc = 0x4cd674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4cd678: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4cd678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x4cd67c: 0x8cf10154  lw          $s1, 0x154($a3)
    ctx->pc = 0x4cd67cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 340)));
    // 0x4cd680: 0x8c45d120  lw          $a1, -0x2EE0($v0)
    ctx->pc = 0x4cd680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x4cd684: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4cd684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4cd688: 0x8c73e370  lw          $s3, -0x1C90($v1)
    ctx->pc = 0x4cd688u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
    // 0x4cd68c: 0x24f00154  addiu       $s0, $a3, 0x154
    ctx->pc = 0x4cd68cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 340));
    // 0x4cd690: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x4cd690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x4cd694: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cd694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4cd698: 0x8c52e378  lw          $s2, -0x1C88($v0)
    ctx->pc = 0x4cd698u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
    // 0x4cd69c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x4cd69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4cd6a0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4cd6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4cd6a4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4cd6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4cd6a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4cd6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4cd6ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4cd6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cd6b0: 0xc04f3fc  jal         func_13CFF0
    ctx->pc = 0x4CD6B0u;
    SET_GPR_U32(ctx, 31, 0x4CD6B8u);
    ctx->pc = 0x4CD6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD6B0u;
            // 0x4cd6b4: 0x24550010  addiu       $s5, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD6B8u; }
        if (ctx->pc != 0x4CD6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD6B8u; }
        if (ctx->pc != 0x4CD6B8u) { return; }
    }
    ctx->pc = 0x4CD6B8u;
label_4cd6b8:
    // 0x4cd6b8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4cd6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4cd6bc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CD6BCu;
    {
        const bool branch_taken_0x4cd6bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cd6bc) {
            ctx->pc = 0x4CD6C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD6BCu;
            // 0x4cd6c0: 0x8e250028  lw          $a1, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CD6D0u;
            goto label_4cd6d0;
        }
    }
    ctx->pc = 0x4CD6C4u;
    // 0x4cd6c4: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x4CD6C4u;
    SET_GPR_U32(ctx, 31, 0x4CD6CCu);
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD6CCu; }
        if (ctx->pc != 0x4CD6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD6CCu; }
        if (ctx->pc != 0x4CD6CCu) { return; }
    }
    ctx->pc = 0x4CD6CCu;
label_4cd6cc:
    // 0x4cd6cc: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x4cd6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_4cd6d0:
    // 0x4cd6d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4cd6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd6d4: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x4CD6D4u;
    SET_GPR_U32(ctx, 31, 0x4CD6DCu);
    ctx->pc = 0x4CD6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD6D4u;
            // 0x4cd6d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD6DCu; }
        if (ctx->pc != 0x4CD6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD6DCu; }
        if (ctx->pc != 0x4CD6DCu) { return; }
    }
    ctx->pc = 0x4CD6DCu;
label_4cd6dc:
    // 0x4cd6dc: 0xc68c020c  lwc1        $f12, 0x20C($s4)
    ctx->pc = 0x4cd6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4cd6e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4cd6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4cd6e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4cd6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd6e8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4cd6e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4cd6ec: 0xc04ce50  jal         func_133940
    ctx->pc = 0x4CD6ECu;
    SET_GPR_U32(ctx, 31, 0x4CD6F4u);
    ctx->pc = 0x4CD6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD6ECu;
            // 0x4cd6f0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD6F4u; }
        if (ctx->pc != 0x4CD6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD6F4u; }
        if (ctx->pc != 0x4CD6F4u) { return; }
    }
    ctx->pc = 0x4CD6F4u;
label_4cd6f4:
    // 0x4cd6f4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4cd6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4cd6f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4cd6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd6fc: 0xc04cd60  jal         func_133580
    ctx->pc = 0x4CD6FCu;
    SET_GPR_U32(ctx, 31, 0x4CD704u);
    ctx->pc = 0x4CD700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD6FCu;
            // 0x4cd700: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD704u; }
        if (ctx->pc != 0x4CD704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD704u; }
        if (ctx->pc != 0x4CD704u) { return; }
    }
    ctx->pc = 0x4CD704u;
label_4cd704:
    // 0x4cd704: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x4cd704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x4cd708: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4cd708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4cd70c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4cd70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x4cd710: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4cd710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd714: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4cd714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4cd718: 0x0  nop
    ctx->pc = 0x4cd718u;
    // NOP
    // 0x4cd71c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4cd71cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4cd720: 0xc04ce50  jal         func_133940
    ctx->pc = 0x4CD720u;
    SET_GPR_U32(ctx, 31, 0x4CD728u);
    ctx->pc = 0x4CD724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD720u;
            // 0x4cd724: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD728u; }
        if (ctx->pc != 0x4CD728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD728u; }
        if (ctx->pc != 0x4CD728u) { return; }
    }
    ctx->pc = 0x4CD728u;
label_4cd728:
    // 0x4cd728: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x4cd728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4cd72c: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4cd72cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x4cd730: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4cd730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd734: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4cd734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd738: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x4cd738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4cd73c: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4cd73cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
    // 0x4cd740: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x4CD740u;
    SET_GPR_U32(ctx, 31, 0x4CD748u);
    ctx->pc = 0x4CD744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD740u;
            // 0x4cd744: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD748u; }
        if (ctx->pc != 0x4CD748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD748u; }
        if (ctx->pc != 0x4CD748u) { return; }
    }
    ctx->pc = 0x4CD748u;
label_4cd748:
    // 0x4cd748: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4cd748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4cd74c: 0xc68c0214  lwc1        $f12, 0x214($s4)
    ctx->pc = 0x4cd74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4cd750: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x4cd750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4cd754: 0xc054bbc  jal         func_152EF0
    ctx->pc = 0x4CD754u;
    SET_GPR_U32(ctx, 31, 0x4CD75Cu);
    ctx->pc = 0x4CD758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD754u;
            // 0x4cd758: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD75Cu; }
        if (ctx->pc != 0x4CD75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD75Cu; }
        if (ctx->pc != 0x4CD75Cu) { return; }
    }
    ctx->pc = 0x4CD75Cu;
label_4cd75c:
    // 0x4cd75c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4cd75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4cd760: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4cd760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd764: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4cd764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd768: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4cd768u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x4cd76c: 0xc054c2c  jal         func_1530B0
    ctx->pc = 0x4CD76Cu;
    SET_GPR_U32(ctx, 31, 0x4CD774u);
    ctx->pc = 0x4CD770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD76Cu;
            // 0x4cd770: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD774u; }
        if (ctx->pc != 0x4CD774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD774u; }
        if (ctx->pc != 0x4CD774u) { return; }
    }
    ctx->pc = 0x4CD774u;
label_4cd774:
    // 0x4cd774: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4CD774u;
    {
        const bool branch_taken_0x4cd774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cd774) {
            ctx->pc = 0x4CD7A0u;
            goto label_4cd7a0;
        }
    }
    ctx->pc = 0x4CD77Cu;
label_4cd77c:
    // 0x4cd77c: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x4cd77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
    // 0x4cd780: 0xc6810230  lwc1        $f1, 0x230($s4)
    ctx->pc = 0x4cd780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4cd784: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4cd784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4cd788: 0x0  nop
    ctx->pc = 0x4cd788u;
    // NOP
    // 0x4cd78c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4cd78cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4cd790: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x4CD790u;
    {
        const bool branch_taken_0x4cd790 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4cd790) {
            ctx->pc = 0x4CD7A0u;
            goto label_4cd7a0;
        }
    }
    ctx->pc = 0x4CD798u;
    // 0x4cd798: 0xc13329c  jal         func_4CCA70
    ctx->pc = 0x4CD798u;
    SET_GPR_U32(ctx, 31, 0x4CD7A0u);
    ctx->pc = 0x4CCA70u;
    if (runtime->hasFunction(0x4CCA70u)) {
        auto targetFn = runtime->lookupFunction(0x4CCA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD7A0u; }
        if (ctx->pc != 0x4CD7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CCA70_0x4cca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD7A0u; }
        if (ctx->pc != 0x4CD7A0u) { return; }
    }
    ctx->pc = 0x4CD7A0u;
label_4cd7a0:
    // 0x4cd7a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4cd7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4cd7a4:
    // 0x4cd7a4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4cd7a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4cd7a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4cd7a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cd7ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4cd7acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cd7b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4cd7b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cd7b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cd7b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cd7b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cd7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4CD7BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CD7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD7BCu;
            // 0x4cd7c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CD7C4u;
    // 0x4cd7c4: 0x0  nop
    ctx->pc = 0x4cd7c4u;
    // NOP
    // 0x4cd7c8: 0x0  nop
    ctx->pc = 0x4cd7c8u;
    // NOP
    // 0x4cd7cc: 0x0  nop
    ctx->pc = 0x4cd7ccu;
    // NOP
}
