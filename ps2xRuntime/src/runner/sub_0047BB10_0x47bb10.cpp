#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047BB10
// Address: 0x47bb10 - 0x47bd80
void sub_0047BB10_0x47bb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047BB10_0x47bb10");
#endif

    switch (ctx->pc) {
        case 0x47bb60u: goto label_47bb60;
        case 0x47bb6cu: goto label_47bb6c;
        case 0x47bb84u: goto label_47bb84;
        case 0x47bba0u: goto label_47bba0;
        case 0x47bbacu: goto label_47bbac;
        case 0x47bbf8u: goto label_47bbf8;
        case 0x47bc00u: goto label_47bc00;
        case 0x47bc0cu: goto label_47bc0c;
        case 0x47bc30u: goto label_47bc30;
        case 0x47bc40u: goto label_47bc40;
        case 0x47bc4cu: goto label_47bc4c;
        case 0x47bc8cu: goto label_47bc8c;
        case 0x47bd24u: goto label_47bd24;
        case 0x47bd44u: goto label_47bd44;
        default: break;
    }

    ctx->pc = 0x47bb10u;

    // 0x47bb10: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x47bb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x47bb14: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x47bb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x47bb18: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x47bb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x47bb1c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x47bb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x47bb20: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x47bb20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bb24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x47bb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x47bb28: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x47bb28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bb2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47bb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x47bb30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47bb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x47bb34: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x47bb34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bb38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47bb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x47bb3c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x47bb3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bb40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47bb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47bb44: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x47bb44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bb48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47bb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47bb4c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x47bb4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bb50: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x47bb50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bb54: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x47bb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x47bb58: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x47BB58u;
    SET_GPR_U32(ctx, 31, 0x47BB60u);
    ctx->pc = 0x47BB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BB58u;
            // 0x47bb5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BB60u; }
        if (ctx->pc != 0x47BB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BB60u; }
        if (ctx->pc != 0x47BB60u) { return; }
    }
    ctx->pc = 0x47BB60u;
label_47bb60:
    // 0x47bb60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47bb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bb64: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x47BB64u;
    SET_GPR_U32(ctx, 31, 0x47BB6Cu);
    ctx->pc = 0x47BB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BB64u;
            // 0x47bb68: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BB6Cu; }
        if (ctx->pc != 0x47BB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BB6Cu; }
        if (ctx->pc != 0x47BB6Cu) { return; }
    }
    ctx->pc = 0x47BB6Cu;
label_47bb6c:
    // 0x47bb6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x47bb70: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x47bb70u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x47bb74: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x47bb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x47bb78: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x47bb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bb7c: 0xc07698c  jal         func_1DA630
    ctx->pc = 0x47BB7Cu;
    SET_GPR_U32(ctx, 31, 0x47BB84u);
    ctx->pc = 0x47BB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BB7Cu;
            // 0x47bb80: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BB84u; }
        if (ctx->pc != 0x47BB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BB84u; }
        if (ctx->pc != 0x47BB84u) { return; }
    }
    ctx->pc = 0x47BB84u;
label_47bb84:
    // 0x47bb84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x47bb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x47bb88: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47BB88u;
    {
        const bool branch_taken_0x47bb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x47bb88) {
            ctx->pc = 0x47BB98u;
            goto label_47bb98;
        }
    }
    ctx->pc = 0x47BB90u;
    // 0x47bb90: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x47BB90u;
    {
        const bool branch_taken_0x47bb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47BB90u;
            // 0x47bb94: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bb90) {
            ctx->pc = 0x47BC60u;
            goto label_47bc60;
        }
    }
    ctx->pc = 0x47BB98u;
label_47bb98:
    // 0x47bb98: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x47BB98u;
    SET_GPR_U32(ctx, 31, 0x47BBA0u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BBA0u; }
        if (ctx->pc != 0x47BBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BBA0u; }
        if (ctx->pc != 0x47BBA0u) { return; }
    }
    ctx->pc = 0x47BBA0u;
label_47bba0:
    // 0x47bba0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x47bba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bba4: 0xc076984  jal         func_1DA610
    ctx->pc = 0x47BBA4u;
    SET_GPR_U32(ctx, 31, 0x47BBACu);
    ctx->pc = 0x47BBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BBA4u;
            // 0x47bba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BBACu; }
        if (ctx->pc != 0x47BBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BBACu; }
        if (ctx->pc != 0x47BBACu) { return; }
    }
    ctx->pc = 0x47BBACu;
label_47bbac:
    // 0x47bbac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x47bbacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bbb0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x47bbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x47bbb4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x47bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x47bbb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47bbb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bbbc: 0xc44208b0  lwc1        $f2, 0x8B0($v0)
    ctx->pc = 0x47bbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47bbc0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x47bbc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bbc4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x47bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x47bbc8: 0xc44108b8  lwc1        $f1, 0x8B8($v0)
    ctx->pc = 0x47bbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47bbcc: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x47bbccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x47bbd0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x47bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x47bbd4: 0xc44008bc  lwc1        $f0, 0x8BC($v0)
    ctx->pc = 0x47bbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47bbd8: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x47bbd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x47bbdc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x47bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x47bbe0: 0x8c4208b4  lw          $v0, 0x8B4($v0)
    ctx->pc = 0x47bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2228)));
    // 0x47bbe4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x47bbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x47bbe8: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x47bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x47bbec: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x47bbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47bbf0: 0xc04cca0  jal         func_133280
    ctx->pc = 0x47BBF0u;
    SET_GPR_U32(ctx, 31, 0x47BBF8u);
    ctx->pc = 0x47BBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BBF0u;
            // 0x47bbf4: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BBF8u; }
        if (ctx->pc != 0x47BBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BBF8u; }
        if (ctx->pc != 0x47BBF8u) { return; }
    }
    ctx->pc = 0x47BBF8u;
label_47bbf8:
    // 0x47bbf8: 0xc076980  jal         func_1DA600
    ctx->pc = 0x47BBF8u;
    SET_GPR_U32(ctx, 31, 0x47BC00u);
    ctx->pc = 0x47BBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BBF8u;
            // 0x47bbfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BC00u; }
        if (ctx->pc != 0x47BC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BC00u; }
        if (ctx->pc != 0x47BC00u) { return; }
    }
    ctx->pc = 0x47BC00u;
label_47bc00:
    // 0x47bc00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47bc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bc04: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x47BC04u;
    SET_GPR_U32(ctx, 31, 0x47BC0Cu);
    ctx->pc = 0x47BC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BC04u;
            // 0x47bc08: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BC0Cu; }
        if (ctx->pc != 0x47BC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BC0Cu; }
        if (ctx->pc != 0x47BC0Cu) { return; }
    }
    ctx->pc = 0x47BC0Cu;
label_47bc0c:
    // 0x47bc0c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x47bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x47bc10: 0xc441f5d0  lwc1        $f1, -0xA30($v0)
    ctx->pc = 0x47bc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47bc14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x47bc14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47bc18: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x47BC18u;
    {
        const bool branch_taken_0x47bc18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x47bc18) {
            ctx->pc = 0x47BC1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47BC18u;
            // 0x47bc1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47BC28u;
            goto label_47bc28;
        }
    }
    ctx->pc = 0x47BC20u;
    // 0x47bc20: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x47BC20u;
    {
        const bool branch_taken_0x47bc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47BC20u;
            // 0x47bc24: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bc20) {
            ctx->pc = 0x47BC60u;
            goto label_47bc60;
        }
    }
    ctx->pc = 0x47BC28u;
label_47bc28:
    // 0x47bc28: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x47BC28u;
    SET_GPR_U32(ctx, 31, 0x47BC30u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BC30u; }
        if (ctx->pc != 0x47BC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BC30u; }
        if (ctx->pc != 0x47BC30u) { return; }
    }
    ctx->pc = 0x47BC30u;
label_47bc30:
    // 0x47bc30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47bc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bc34: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x47bc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x47bc38: 0xc04cd60  jal         func_133580
    ctx->pc = 0x47BC38u;
    SET_GPR_U32(ctx, 31, 0x47BC40u);
    ctx->pc = 0x47BC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BC38u;
            // 0x47bc3c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BC40u; }
        if (ctx->pc != 0x47BC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BC40u; }
        if (ctx->pc != 0x47BC40u) { return; }
    }
    ctx->pc = 0x47BC40u;
label_47bc40:
    // 0x47bc40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x47bc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bc44: 0xc04c650  jal         func_131940
    ctx->pc = 0x47BC44u;
    SET_GPR_U32(ctx, 31, 0x47BC4Cu);
    ctx->pc = 0x47BC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BC44u;
            // 0x47bc48: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BC4Cu; }
        if (ctx->pc != 0x47BC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BC4Cu; }
        if (ctx->pc != 0x47BC4Cu) { return; }
    }
    ctx->pc = 0x47BC4Cu;
label_47bc4c:
    // 0x47bc4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x47bc50: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x47bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x47bc54: 0x2442e320  addiu       $v0, $v0, -0x1CE0
    ctx->pc = 0x47bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
    // 0x47bc58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47bc5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47bc60:
    // 0x47bc60: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x47bc60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x47bc64: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x47BC64u;
    {
        const bool branch_taken_0x47bc64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x47BC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47BC64u;
            // 0x47bc68: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bc64) {
            ctx->pc = 0x47BC74u;
            goto label_47bc74;
        }
    }
    ctx->pc = 0x47BC6Cu;
    // 0x47bc6c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x47BC6Cu;
    {
        const bool branch_taken_0x47bc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47BC6Cu;
            // 0x47bc70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bc6c) {
            ctx->pc = 0x47BD48u;
            goto label_47bd48;
        }
    }
    ctx->pc = 0x47BC74u;
label_47bc74:
    // 0x47bc74: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x47bc74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x47bc78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x47bc78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bc7c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x47bc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bc80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47bc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bc84: 0xc04cd60  jal         func_133580
    ctx->pc = 0x47BC84u;
    SET_GPR_U32(ctx, 31, 0x47BC8Cu);
    ctx->pc = 0x47BC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BC84u;
            // 0x47bc88: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BC8Cu; }
        if (ctx->pc != 0x47BC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BC8Cu; }
        if (ctx->pc != 0x47BC8Cu) { return; }
    }
    ctx->pc = 0x47BC8Cu;
label_47bc8c:
    // 0x47bc8c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47bc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x47bc90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x47bc94: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x47bc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x47bc98: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x47bc98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x47bc9c: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x47bc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
    // 0x47bca0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47bca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x47bca4: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x47bca4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x47bca8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x47bcac: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x47bcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x47bcb0: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x47bcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
    // 0x47bcb4: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x47bcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x47bcb8: 0x868821  addu        $s1, $a0, $a2
    ctx->pc = 0x47bcb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x47bcbc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47bcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x47bcc0: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x47bcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x47bcc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x47bcc8: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x47bcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
    // 0x47bccc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x47bcccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x47bcd0: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x47bcd0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x47bcd4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x47bcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x47bcd8: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x47bcd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
    // 0x47bcdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47bcdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bce0: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x47bce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
    // 0x47bce4: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x47bce4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x47bce8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47bce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x47bcec: 0x1099821  addu        $s3, $t0, $t1
    ctx->pc = 0x47bcecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x47bcf0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x47bcf4: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x47bcf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x47bcf8: 0xad130000  sw          $s3, 0x0($t0)
    ctx->pc = 0x47bcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 19));
    // 0x47bcfc: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x47bcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x47bd00: 0x8e480028  lw          $t0, 0x28($s2)
    ctx->pc = 0x47bd00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x47bd04: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x47bd04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
    // 0x47bd08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x47bd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x47bd0c: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x47bd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
    // 0x47bd10: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x47bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x47bd14: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x47bd14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
    // 0x47bd18: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x47bd18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x47bd1c: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x47BD1Cu;
    SET_GPR_U32(ctx, 31, 0x47BD24u);
    ctx->pc = 0x47BD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BD1Cu;
            // 0x47bd20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BD24u; }
        if (ctx->pc != 0x47BD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BD24u; }
        if (ctx->pc != 0x47BD24u) { return; }
    }
    ctx->pc = 0x47BD24u;
label_47bd24:
    // 0x47bd24: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x47bd24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x47bd28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47bd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bd2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x47bd2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bd30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x47bd30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bd34: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x47bd34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bd38: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x47bd38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bd3c: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x47BD3Cu;
    SET_GPR_U32(ctx, 31, 0x47BD44u);
    ctx->pc = 0x47BD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BD3Cu;
            // 0x47bd40: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BD44u; }
        if (ctx->pc != 0x47BD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BD44u; }
        if (ctx->pc != 0x47BD44u) { return; }
    }
    ctx->pc = 0x47BD44u;
label_47bd44:
    // 0x47bd44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47bd48:
    // 0x47bd48: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x47bd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x47bd4c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x47bd4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x47bd50: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x47bd50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47bd54: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x47bd54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47bd58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47bd58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47bd5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47bd5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47bd60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47bd60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47bd64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47bd64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47bd68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47bd68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47bd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x47BD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47BD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47BD6Cu;
            // 0x47bd70: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47BD74u;
    // 0x47bd74: 0x0  nop
    ctx->pc = 0x47bd74u;
    // NOP
    // 0x47bd78: 0x0  nop
    ctx->pc = 0x47bd78u;
    // NOP
    // 0x47bd7c: 0x0  nop
    ctx->pc = 0x47bd7cu;
    // NOP
}
