#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CD000
// Address: 0x4cd000 - 0x4cd2b0
void sub_004CD000_0x4cd000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CD000_0x4cd000");
#endif

    switch (ctx->pc) {
        case 0x4cd098u: goto label_4cd098;
        case 0x4cd0b8u: goto label_4cd0b8;
        case 0x4cd0d4u: goto label_4cd0d4;
        case 0x4cd0e0u: goto label_4cd0e0;
        case 0x4cd12cu: goto label_4cd12c;
        case 0x4cd134u: goto label_4cd134;
        case 0x4cd140u: goto label_4cd140;
        case 0x4cd164u: goto label_4cd164;
        case 0x4cd174u: goto label_4cd174;
        case 0x4cd180u: goto label_4cd180;
        case 0x4cd1b4u: goto label_4cd1b4;
        case 0x4cd1e4u: goto label_4cd1e4;
        case 0x4cd1f4u: goto label_4cd1f4;
        case 0x4cd204u: goto label_4cd204;
        case 0x4cd214u: goto label_4cd214;
        case 0x4cd23cu: goto label_4cd23c;
        case 0x4cd254u: goto label_4cd254;
        case 0x4cd25cu: goto label_4cd25c;
        default: break;
    }

    ctx->pc = 0x4cd000u;

    // 0x4cd000: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x4cd000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x4cd004: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4cd004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4cd008: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4cd008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x4cd00c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4cd00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x4cd010: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4cd010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x4cd014: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4cd014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4cd018: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4cd018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4cd01c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4cd01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4cd020: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4cd020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4cd024: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4cd024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4cd028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cd028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4cd02c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cd02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4cd030: 0x8c460cd0  lw          $a2, 0xCD0($v0)
    ctx->pc = 0x4cd030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
    // 0x4cd034: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4cd034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x4cd038: 0x8cd100c4  lw          $s1, 0xC4($a2)
    ctx->pc = 0x4cd038u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x4cd03c: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x4cd03cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x4cd040: 0x24d400c4  addiu       $s4, $a2, 0xC4
    ctx->pc = 0x4cd040u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 196));
    // 0x4cd044: 0x8cd600a8  lw          $s6, 0xA8($a2)
    ctx->pc = 0x4cd044u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x4cd048: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x4cd048u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4cd04c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4cd04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x4cd050: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x4cd050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x4cd054: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x4cd054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x4cd058: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cd058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4cd05c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4cd05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4cd060: 0x8c53e370  lw          $s3, -0x1C90($v0)
    ctx->pc = 0x4cd060u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
    // 0x4cd064: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cd064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4cd068: 0x8c52e378  lw          $s2, -0x1C88($v0)
    ctx->pc = 0x4cd068u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
    // 0x4cd06c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4cd06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4cd070: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4cd070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4cd074: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4cd074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cd078: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x4cd078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x4cd07c: 0x24770010  addiu       $s7, $v1, 0x10
    ctx->pc = 0x4cd07cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4cd080: 0x247e0090  addiu       $fp, $v1, 0x90
    ctx->pc = 0x4cd080u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x4cd084: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x4cd084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4cd088: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x4cd088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4cd08c: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x4cd08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4cd090: 0xc04f3fc  jal         func_13CFF0
    ctx->pc = 0x4CD090u;
    SET_GPR_U32(ctx, 31, 0x4CD098u);
    ctx->pc = 0x4CD094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD090u;
            // 0x4cd094: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD098u; }
        if (ctx->pc != 0x4CD098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD098u; }
        if (ctx->pc != 0x4CD098u) { return; }
    }
    ctx->pc = 0x4CD098u;
label_4cd098:
    // 0x4cd098: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4cd098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x4cd09c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4cd09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4cd0a0: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x4cd0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
    // 0x4cd0a4: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x4cd0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x4cd0a8: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4cd0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x4cd0ac: 0x8c750130  lw          $s5, 0x130($v1)
    ctx->pc = 0x4cd0acu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x4cd0b0: 0xc07698c  jal         func_1DA630
    ctx->pc = 0x4CD0B0u;
    SET_GPR_U32(ctx, 31, 0x4CD0B8u);
    ctx->pc = 0x4CD0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD0B0u;
            // 0x4cd0b4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD0B8u; }
        if (ctx->pc != 0x4CD0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD0B8u; }
        if (ctx->pc != 0x4CD0B8u) { return; }
    }
    ctx->pc = 0x4CD0B8u;
label_4cd0b8:
    // 0x4cd0b8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4cd0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4cd0bc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CD0BCu;
    {
        const bool branch_taken_0x4cd0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4cd0bc) {
            ctx->pc = 0x4CD0CCu;
            goto label_4cd0cc;
        }
    }
    ctx->pc = 0x4CD0C4u;
    // 0x4cd0c4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x4CD0C4u;
    {
        const bool branch_taken_0x4cd0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD0C4u;
            // 0x4cd0c8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd0c4) {
            ctx->pc = 0x4CD194u;
            goto label_4cd194;
        }
    }
    ctx->pc = 0x4CD0CCu;
label_4cd0cc:
    // 0x4cd0cc: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x4CD0CCu;
    SET_GPR_U32(ctx, 31, 0x4CD0D4u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD0D4u; }
        if (ctx->pc != 0x4CD0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD0D4u; }
        if (ctx->pc != 0x4CD0D4u) { return; }
    }
    ctx->pc = 0x4CD0D4u;
label_4cd0d4:
    // 0x4cd0d4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4cd0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd0d8: 0xc076984  jal         func_1DA610
    ctx->pc = 0x4CD0D8u;
    SET_GPR_U32(ctx, 31, 0x4CD0E0u);
    ctx->pc = 0x4CD0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD0D8u;
            // 0x4cd0dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD0E0u; }
        if (ctx->pc != 0x4CD0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD0E0u; }
        if (ctx->pc != 0x4CD0E0u) { return; }
    }
    ctx->pc = 0x4CD0E0u;
label_4cd0e0:
    // 0x4cd0e0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4cd0e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd0e4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4cd0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x4cd0e8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4cd0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4cd0ec: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x4cd0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x4cd0f0: 0xc442c990  lwc1        $f2, -0x3670($v0)
    ctx->pc = 0x4cd0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4cd0f4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4cd0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd0f8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4cd0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4cd0fc: 0xc441c998  lwc1        $f1, -0x3668($v0)
    ctx->pc = 0x4cd0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4cd100: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x4cd100u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x4cd104: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4cd104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4cd108: 0xc440c99c  lwc1        $f0, -0x3664($v0)
    ctx->pc = 0x4cd108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4cd10c: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x4cd10cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x4cd110: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4cd110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4cd114: 0x8c42c994  lw          $v0, -0x366C($v0)
    ctx->pc = 0x4cd114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953364)));
    // 0x4cd118: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x4cd118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x4cd11c: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x4cd11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x4cd120: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x4cd120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4cd124: 0xc04cca0  jal         func_133280
    ctx->pc = 0x4CD124u;
    SET_GPR_U32(ctx, 31, 0x4CD12Cu);
    ctx->pc = 0x4CD128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD124u;
            // 0x4cd128: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD12Cu; }
        if (ctx->pc != 0x4CD12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD12Cu; }
        if (ctx->pc != 0x4CD12Cu) { return; }
    }
    ctx->pc = 0x4CD12Cu;
label_4cd12c:
    // 0x4cd12c: 0xc076980  jal         func_1DA600
    ctx->pc = 0x4CD12Cu;
    SET_GPR_U32(ctx, 31, 0x4CD134u);
    ctx->pc = 0x4CD130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD12Cu;
            // 0x4cd130: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD134u; }
        if (ctx->pc != 0x4CD134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD134u; }
        if (ctx->pc != 0x4CD134u) { return; }
    }
    ctx->pc = 0x4CD134u;
label_4cd134:
    // 0x4cd134: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4cd134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x4cd138: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x4CD138u;
    SET_GPR_U32(ctx, 31, 0x4CD140u);
    ctx->pc = 0x4CD13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD138u;
            // 0x4cd13c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD140u; }
        if (ctx->pc != 0x4CD140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD140u; }
        if (ctx->pc != 0x4CD140u) { return; }
    }
    ctx->pc = 0x4CD140u;
label_4cd140:
    // 0x4cd140: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4cd140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4cd144: 0xc4617550  lwc1        $f1, 0x7550($v1)
    ctx->pc = 0x4cd144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 30032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4cd148: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4cd148u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4cd14c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x4CD14Cu;
    {
        const bool branch_taken_0x4cd14c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4cd14c) {
            ctx->pc = 0x4CD150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD14Cu;
            // 0x4cd150: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CD15Cu;
            goto label_4cd15c;
        }
    }
    ctx->pc = 0x4CD154u;
    // 0x4cd154: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4CD154u;
    {
        const bool branch_taken_0x4cd154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD154u;
            // 0x4cd158: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd154) {
            ctx->pc = 0x4CD194u;
            goto label_4cd194;
        }
    }
    ctx->pc = 0x4CD15Cu;
label_4cd15c:
    // 0x4cd15c: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x4CD15Cu;
    SET_GPR_U32(ctx, 31, 0x4CD164u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD164u; }
        if (ctx->pc != 0x4CD164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD164u; }
        if (ctx->pc != 0x4CD164u) { return; }
    }
    ctx->pc = 0x4CD164u;
label_4cd164:
    // 0x4cd164: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4cd164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd168: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4cd168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x4cd16c: 0xc04cd60  jal         func_133580
    ctx->pc = 0x4CD16Cu;
    SET_GPR_U32(ctx, 31, 0x4CD174u);
    ctx->pc = 0x4CD170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD16Cu;
            // 0x4cd170: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD174u; }
        if (ctx->pc != 0x4CD174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD174u; }
        if (ctx->pc != 0x4CD174u) { return; }
    }
    ctx->pc = 0x4CD174u;
label_4cd174:
    // 0x4cd174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cd174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd178: 0xc04c650  jal         func_131940
    ctx->pc = 0x4CD178u;
    SET_GPR_U32(ctx, 31, 0x4CD180u);
    ctx->pc = 0x4CD17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD178u;
            // 0x4cd17c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD180u; }
        if (ctx->pc != 0x4CD180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD180u; }
        if (ctx->pc != 0x4CD180u) { return; }
    }
    ctx->pc = 0x4CD180u;
label_4cd180:
    // 0x4cd180: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4cd180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x4cd184: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4cd184u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4cd188: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x4cd188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
    // 0x4cd18c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4cd18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4cd190: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4cd190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4cd194:
    // 0x4cd194: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4cd194u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4cd198: 0x50200039  beql        $at, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x4CD198u;
    {
        const bool branch_taken_0x4cd198 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cd198) {
            ctx->pc = 0x4CD19Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD198u;
            // 0x4cd19c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CD280u;
            goto label_4cd280;
        }
    }
    ctx->pc = 0x4CD1A0u;
    // 0x4cd1a0: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x4cd1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x4cd1a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4cd1a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd1a8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4cd1a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd1ac: 0x27a60138  addiu       $a2, $sp, 0x138
    ctx->pc = 0x4cd1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x4cd1b0: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x4cd1b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4cd1b4:
    // 0x4cd1b4: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x4cd1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4cd1b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4cd1b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4cd1bc: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x4cd1bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4cd1c0: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x4cd1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x4cd1c4: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x4cd1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x4cd1c8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4cd1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4cd1cc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4cd1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4cd1d0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4cd1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x4cd1d4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4CD1D4u;
    {
        const bool branch_taken_0x4cd1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CD1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD1D4u;
            // 0x4cd1d8: 0xaca3003c  sw          $v1, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd1d4) {
            ctx->pc = 0x4CD1B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4cd1b4;
        }
    }
    ctx->pc = 0x4CD1DCu;
    // 0x4cd1dc: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x4CD1DCu;
    SET_GPR_U32(ctx, 31, 0x4CD1E4u);
    ctx->pc = 0x4CD1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD1DCu;
            // 0x4cd1e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD1E4u; }
        if (ctx->pc != 0x4CD1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD1E4u; }
        if (ctx->pc != 0x4CD1E4u) { return; }
    }
    ctx->pc = 0x4CD1E4u;
label_4cd1e4:
    // 0x4cd1e4: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x4cd1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x4cd1e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4cd1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd1ec: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x4CD1ECu;
    SET_GPR_U32(ctx, 31, 0x4CD1F4u);
    ctx->pc = 0x4CD1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD1ECu;
            // 0x4cd1f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD1F4u; }
        if (ctx->pc != 0x4CD1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD1F4u; }
        if (ctx->pc != 0x4CD1F4u) { return; }
    }
    ctx->pc = 0x4CD1F4u;
label_4cd1f4:
    // 0x4cd1f4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x4cd1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x4cd1f8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x4cd1f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd1fc: 0xc04cd60  jal         func_133580
    ctx->pc = 0x4CD1FCu;
    SET_GPR_U32(ctx, 31, 0x4CD204u);
    ctx->pc = 0x4CD200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD1FCu;
            // 0x4cd200: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD204u; }
        if (ctx->pc != 0x4CD204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD204u; }
        if (ctx->pc != 0x4CD204u) { return; }
    }
    ctx->pc = 0x4CD204u;
label_4cd204:
    // 0x4cd204: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x4cd204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x4cd208: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4cd208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd20c: 0xc04cd60  jal         func_133580
    ctx->pc = 0x4CD20Cu;
    SET_GPR_U32(ctx, 31, 0x4CD214u);
    ctx->pc = 0x4CD210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD20Cu;
            // 0x4cd210: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD214u; }
        if (ctx->pc != 0x4CD214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD214u; }
        if (ctx->pc != 0x4CD214u) { return; }
    }
    ctx->pc = 0x4CD214u;
label_4cd214:
    // 0x4cd214: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x4cd214u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4cd218: 0xc68c000c  lwc1        $f12, 0xC($s4)
    ctx->pc = 0x4cd218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4cd21c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4cd21cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x4cd220: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4cd220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd224: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4cd224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd228: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4cd228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd22c: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x4cd22cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x4cd230: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x4cd230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
    // 0x4cd234: 0xc04cff4  jal         func_133FD0
    ctx->pc = 0x4CD234u;
    SET_GPR_U32(ctx, 31, 0x4CD23Cu);
    ctx->pc = 0x4CD238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD234u;
            // 0x4cd238: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD23Cu; }
        if (ctx->pc != 0x4CD23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD23Cu; }
        if (ctx->pc != 0x4CD23Cu) { return; }
    }
    ctx->pc = 0x4CD23Cu;
label_4cd23c:
    // 0x4cd23c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cd23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd240: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4cd240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd244: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4cd244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd248: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4cd248u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x4cd24c: 0xc0538d8  jal         func_14E360
    ctx->pc = 0x4CD24Cu;
    SET_GPR_U32(ctx, 31, 0x4CD254u);
    ctx->pc = 0x4CD250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD24Cu;
            // 0x4cd250: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD254u; }
        if (ctx->pc != 0x4CD254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CD254u; }
        if (ctx->pc != 0x4CD254u) { return; }
    }
    ctx->pc = 0x4CD254u;
label_4cd254:
    // 0x4cd254: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4cd254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd258: 0x27a70138  addiu       $a3, $sp, 0x138
    ctx->pc = 0x4cd258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_4cd25c:
    // 0x4cd25c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4cd25cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4cd260: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4cd260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4cd264: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4cd264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cd268: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x4cd268u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4cd26c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x4cd26cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x4cd270: 0xaca4003c  sw          $a0, 0x3C($a1)
    ctx->pc = 0x4cd270u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 4));
    // 0x4cd274: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4CD274u;
    {
        const bool branch_taken_0x4cd274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CD278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD274u;
            // 0x4cd278: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd274) {
            ctx->pc = 0x4CD25Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4cd25c;
        }
    }
    ctx->pc = 0x4CD27Cu;
    // 0x4cd27c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4cd27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4cd280:
    // 0x4cd280: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4cd280u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4cd284: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4cd284u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4cd288: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4cd288u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4cd28c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4cd28cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4cd290: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4cd290u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cd294: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4cd294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cd298: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4cd298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cd29c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cd29cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cd2a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cd2a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4CD2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CD2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CD2A4u;
            // 0x4cd2a8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CD2ACu;
    // 0x4cd2ac: 0x0  nop
    ctx->pc = 0x4cd2acu;
    // NOP
}
