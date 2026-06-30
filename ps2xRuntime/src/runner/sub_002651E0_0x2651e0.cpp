#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002651E0
// Address: 0x2651e0 - 0x265610
void sub_002651E0_0x2651e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002651E0_0x2651e0");
#endif

    switch (ctx->pc) {
        case 0x265238u: goto label_265238;
        case 0x26524cu: goto label_26524c;
        case 0x2652c8u: goto label_2652c8;
        case 0x2652dcu: goto label_2652dc;
        case 0x2653b8u: goto label_2653b8;
        case 0x2653d0u: goto label_2653d0;
        case 0x265498u: goto label_265498;
        default: break;
    }

    ctx->pc = 0x2651e0u;

    // 0x2651e0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2651e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2651e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2651e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2651e8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2651e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2651ec: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2651ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2651f0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2651f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2651f4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2651f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2651f8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2651f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2651fc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2651fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x265200: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x265200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x265204: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x265204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x265208: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x265208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x26520c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26520cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x265210: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x265210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x265214: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x265214u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x265218: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x265218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26521c: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x26521Cu;
    {
        const bool branch_taken_0x26521c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x26521c) {
            ctx->pc = 0x2652A0u;
            goto label_2652a0;
        }
    }
    ctx->pc = 0x265224u;
    // 0x265224: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x265224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x265228: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x265228u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26522c: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x26522Cu;
    {
        const bool branch_taken_0x26522c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x265230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26522Cu;
            // 0x265230: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26522c) {
            ctx->pc = 0x2652A0u;
            goto label_2652a0;
        }
    }
    ctx->pc = 0x265234u;
    // 0x265234: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x265234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_265238:
    // 0x265238: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x265238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26523c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x26523cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x265240: 0x26e600a0  addiu       $a2, $s7, 0xA0
    ctx->pc = 0x265240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 160));
    // 0x265244: 0xc0987fc  jal         func_261FF0
    ctx->pc = 0x265244u;
    SET_GPR_U32(ctx, 31, 0x26524Cu);
    ctx->pc = 0x265248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265244u;
            // 0x265248: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261FF0u;
    if (runtime->hasFunction(0x261FF0u)) {
        auto targetFn = runtime->lookupFunction(0x261FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26524Cu; }
        if (ctx->pc != 0x26524Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261FF0_0x261ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26524Cu; }
        if (ctx->pc != 0x26524Cu) { return; }
    }
    ctx->pc = 0x26524Cu;
label_26524c:
    // 0x26524c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x26524cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x265250: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x265250u;
    {
        const bool branch_taken_0x265250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x265254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265250u;
            // 0x265254: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265250) {
            ctx->pc = 0x265288u;
            goto label_265288;
        }
    }
    ctx->pc = 0x265258u;
    // 0x265258: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x265258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26525c: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x26525cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x265260: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x265260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265264: 0xe6e00020  swc1        $f0, 0x20($s7)
    ctx->pc = 0x265264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 32), bits); }
    // 0x265268: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x265268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26526c: 0xe6e00024  swc1        $f0, 0x24($s7)
    ctx->pc = 0x26526cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 36), bits); }
    // 0x265270: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x265270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265274: 0xe6e00028  swc1        $f0, 0x28($s7)
    ctx->pc = 0x265274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 40), bits); }
    // 0x265278: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x265278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26527c: 0xe6e0002c  swc1        $f0, 0x2C($s7)
    ctx->pc = 0x26527cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 44), bits); }
    // 0x265280: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x265280u;
    {
        const bool branch_taken_0x265280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265280u;
            // 0x265284: 0xaee30000  sw          $v1, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265280) {
            ctx->pc = 0x2655D8u;
            goto label_2655d8;
        }
    }
    ctx->pc = 0x265288u;
label_265288:
    // 0x265288: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x265288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x26528c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26528cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x265290: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x265290u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x265294: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x265294u;
    {
        const bool branch_taken_0x265294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x265298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265294u;
            // 0x265298: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265294) {
            ctx->pc = 0x265238u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_265238;
        }
    }
    ctx->pc = 0x26529Cu;
    // 0x26529c: 0x0  nop
    ctx->pc = 0x26529cu;
    // NOP
label_2652a0:
    // 0x2652a0: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x2652a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2652a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2652a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2652a8: 0x14830029  bne         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2652A8u;
    {
        const bool branch_taken_0x2652a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2652a8) {
            ctx->pc = 0x265350u;
            goto label_265350;
        }
    }
    ctx->pc = 0x2652B0u;
    // 0x2652b0: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x2652b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2652b4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2652b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2652b8: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x2652B8u;
    {
        const bool branch_taken_0x2652b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2652BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2652B8u;
            // 0x2652bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2652b8) {
            ctx->pc = 0x265350u;
            goto label_265350;
        }
    }
    ctx->pc = 0x2652C0u;
    // 0x2652c0: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x2652c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2652c4: 0x0  nop
    ctx->pc = 0x2652c4u;
    // NOP
label_2652c8:
    // 0x2652c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2652c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2652cc: 0x262500a0  addiu       $a1, $s1, 0xA0
    ctx->pc = 0x2652ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x2652d0: 0x26e60020  addiu       $a2, $s7, 0x20
    ctx->pc = 0x2652d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x2652d4: 0xc0987fc  jal         func_261FF0
    ctx->pc = 0x2652D4u;
    SET_GPR_U32(ctx, 31, 0x2652DCu);
    ctx->pc = 0x2652D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2652D4u;
            // 0x2652d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261FF0u;
    if (runtime->hasFunction(0x261FF0u)) {
        auto targetFn = runtime->lookupFunction(0x261FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2652DCu; }
        if (ctx->pc != 0x2652DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261FF0_0x261ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2652DCu; }
        if (ctx->pc != 0x2652DCu) { return; }
    }
    ctx->pc = 0x2652DCu;
label_2652dc:
    // 0x2652dc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2652dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2652e0: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2652E0u;
    {
        const bool branch_taken_0x2652e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2652E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2652E0u;
            // 0x2652e4: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2652e0) {
            ctx->pc = 0x265338u;
            goto label_265338;
        }
    }
    ctx->pc = 0x2652E8u;
    // 0x2652e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2652e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2652ec: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x2652ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x2652f0: 0xc48000e0  lwc1        $f0, 0xE0($a0)
    ctx->pc = 0x2652f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2652f4: 0xe6e000e0  swc1        $f0, 0xE0($s7)
    ctx->pc = 0x2652f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 224), bits); }
    // 0x2652f8: 0xc48000e4  lwc1        $f0, 0xE4($a0)
    ctx->pc = 0x2652f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2652fc: 0xe6e000e4  swc1        $f0, 0xE4($s7)
    ctx->pc = 0x2652fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 228), bits); }
    // 0x265300: 0xc48000e8  lwc1        $f0, 0xE8($a0)
    ctx->pc = 0x265300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265304: 0xe6e000e8  swc1        $f0, 0xE8($s7)
    ctx->pc = 0x265304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 232), bits); }
    // 0x265308: 0xc48000ec  lwc1        $f0, 0xEC($a0)
    ctx->pc = 0x265308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26530c: 0xe6e000ec  swc1        $f0, 0xEC($s7)
    ctx->pc = 0x26530cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 236), bits); }
    // 0x265310: 0xc48000a0  lwc1        $f0, 0xA0($a0)
    ctx->pc = 0x265310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265314: 0xe6e000a0  swc1        $f0, 0xA0($s7)
    ctx->pc = 0x265314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 160), bits); }
    // 0x265318: 0xc48000a4  lwc1        $f0, 0xA4($a0)
    ctx->pc = 0x265318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26531c: 0xe6e000a4  swc1        $f0, 0xA4($s7)
    ctx->pc = 0x26531cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 164), bits); }
    // 0x265320: 0xc48000a8  lwc1        $f0, 0xA8($a0)
    ctx->pc = 0x265320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265324: 0xe6e000a8  swc1        $f0, 0xA8($s7)
    ctx->pc = 0x265324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 168), bits); }
    // 0x265328: 0xc48000ac  lwc1        $f0, 0xAC($a0)
    ctx->pc = 0x265328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26532c: 0xe6e000ac  swc1        $f0, 0xAC($s7)
    ctx->pc = 0x26532cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 172), bits); }
    // 0x265330: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x265330u;
    {
        const bool branch_taken_0x265330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265330u;
            // 0x265334: 0xaee30004  sw          $v1, 0x4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265330) {
            ctx->pc = 0x2655D8u;
            goto label_2655d8;
        }
    }
    ctx->pc = 0x265338u;
label_265338:
    // 0x265338: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x265338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x26533c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26533cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x265340: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x265340u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x265344: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x265344u;
    {
        const bool branch_taken_0x265344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x265348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265344u;
            // 0x265348: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265344) {
            ctx->pc = 0x2652C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2652c8;
        }
    }
    ctx->pc = 0x26534Cu;
    // 0x26534c: 0x0  nop
    ctx->pc = 0x26534cu;
    // NOP
label_265350:
    // 0x265350: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x265350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x265354: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x265354u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x265358: 0x14760003  bne         $v1, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x265358u;
    {
        const bool branch_taken_0x265358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x265358) {
            ctx->pc = 0x265368u;
            goto label_265368;
        }
    }
    ctx->pc = 0x265360u;
    // 0x265360: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x265360u;
    {
        const bool branch_taken_0x265360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265360u;
            // 0x265364: 0x8ee30004  lw          $v1, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265360) {
            ctx->pc = 0x265370u;
            goto label_265370;
        }
    }
    ctx->pc = 0x265368u;
label_265368:
    // 0x265368: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x265368u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26536c: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x26536cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_265370:
    // 0x265370: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x265370u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x265374: 0x147e0003  bne         $v1, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x265374u;
    {
        const bool branch_taken_0x265374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 30));
        if (branch_taken_0x265374) {
            ctx->pc = 0x265384u;
            goto label_265384;
        }
    }
    ctx->pc = 0x26537Cu;
    // 0x26537c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26537Cu;
    {
        const bool branch_taken_0x26537c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26537Cu;
            // 0x265380: 0x3c037f7f  lui         $v1, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26537c) {
            ctx->pc = 0x26538Cu;
            goto label_26538c;
        }
    }
    ctx->pc = 0x265384u;
label_265384:
    // 0x265384: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x265384u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265388: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x265388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
label_26538c:
    // 0x26538c: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x26538cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x265390: 0x3463ffee  ori         $v1, $v1, 0xFFEE
    ctx->pc = 0x265390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
    // 0x265394: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x265394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x265398: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x265398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26539c: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x26539cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x2653a0: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
    ctx->pc = 0x2653A0u;
    {
        const bool branch_taken_0x2653a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2653A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2653A0u;
            // 0x2653a4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2653a0) {
            ctx->pc = 0x2654E8u;
            goto label_2654e8;
        }
    }
    ctx->pc = 0x2653A8u;
    // 0x2653a8: 0x3c130064  lui         $s3, 0x64
    ctx->pc = 0x2653a8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)100 << 16));
    // 0x2653ac: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x2653acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2653b0: 0x267302f0  addiu       $s3, $s3, 0x2F0
    ctx->pc = 0x2653b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 752));
    // 0x2653b4: 0x0  nop
    ctx->pc = 0x2653b4u;
    // NOP
label_2653b8:
    // 0x2653b8: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x2653b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x2653bc: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x2653BCu;
    {
        const bool branch_taken_0x2653bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2653C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2653BCu;
            // 0x2653c0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2653bc) {
            ctx->pc = 0x2654D0u;
            goto label_2654d0;
        }
    }
    ctx->pc = 0x2653C4u;
    // 0x2653c4: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x2653c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
    // 0x2653c8: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x2653c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2653cc: 0x263102f0  addiu       $s1, $s1, 0x2F0
    ctx->pc = 0x2653ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
label_2653d0:
    // 0x2653d0: 0x82620002  lb          $v0, 0x2($s3)
    ctx->pc = 0x2653d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2653d4: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x2653d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2653d8: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x2653d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2653dc: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2653dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2653e0: 0x260600a0  addiu       $a2, $s0, 0xA0
    ctx->pc = 0x2653e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2653e4: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2653e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2653e8: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2653e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2653ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2653ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2653f0: 0x2e21821  addu        $v1, $s7, $v0
    ctx->pc = 0x2653f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2653f4: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2653f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2653f8: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x2653f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x2653fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2653fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x265400: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x265400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x265404: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x265404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265408: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x265408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26540c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26540cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x265410: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x265410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x265414: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x265414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265418: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x265418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x26541c: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x26541cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265420: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x265424: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x265424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x265428: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x265428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26542c: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x26542cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x265430: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x265430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265434: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265434u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x265438: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x265438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x26543c: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x26543cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x265440: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x265440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265444: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x265444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x265448: 0x2e21821  addu        $v1, $s7, $v0
    ctx->pc = 0x265448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x26544c: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x26544cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265450: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x265450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x265454: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265454u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x265458: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x265458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x26545c: 0xc46100a4  lwc1        $f1, 0xA4($v1)
    ctx->pc = 0x26545cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265460: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x265460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265464: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265464u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x265468: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x265468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x26546c: 0xc46100a8  lwc1        $f1, 0xA8($v1)
    ctx->pc = 0x26546cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265470: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x265470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x265474: 0xc60000a8  lwc1        $f0, 0xA8($s0)
    ctx->pc = 0x265474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265478: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265478u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26547c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x26547cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x265480: 0xc46100ac  lwc1        $f1, 0xAC($v1)
    ctx->pc = 0x265480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265484: 0x27a200fc  addiu       $v0, $sp, 0xFC
    ctx->pc = 0x265484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x265488: 0xc60000ac  lwc1        $f0, 0xAC($s0)
    ctx->pc = 0x265488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26548c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26548cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x265490: 0xc09e8e8  jal         func_27A3A0
    ctx->pc = 0x265490u;
    SET_GPR_U32(ctx, 31, 0x265498u);
    ctx->pc = 0x265494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265490u;
            // 0x265494: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A3A0u;
    if (runtime->hasFunction(0x27A3A0u)) {
        auto targetFn = runtime->lookupFunction(0x27A3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265498u; }
        if (ctx->pc != 0x265498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A3A0_0x27a3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265498u; }
        if (ctx->pc != 0x265498u) { return; }
    }
    ctx->pc = 0x265498u;
label_265498:
    // 0x265498: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x265498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26549c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x26549cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2654a0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2654a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2654a4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2654A4u;
    {
        const bool branch_taken_0x2654a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2654a4) {
            ctx->pc = 0x2654B8u;
            goto label_2654b8;
        }
    }
    ctx->pc = 0x2654ACu;
    // 0x2654ac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2654acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2654b0: 0xafb500bc  sw          $s5, 0xBC($sp)
    ctx->pc = 0x2654b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 21));
    // 0x2654b4: 0xafb400b8  sw          $s4, 0xB8($sp)
    ctx->pc = 0x2654b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 20));
label_2654b8:
    // 0x2654b8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2654b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2654bc: 0x29e182a  slt         $v1, $s4, $fp
    ctx->pc = 0x2654bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x2654c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2654c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2654c4: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x2654C4u;
    {
        const bool branch_taken_0x2654c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2654C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2654C4u;
            // 0x2654c8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2654c4) {
            ctx->pc = 0x2653D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2653d0;
        }
    }
    ctx->pc = 0x2654CCu;
    // 0x2654cc: 0x0  nop
    ctx->pc = 0x2654ccu;
    // NOP
label_2654d0:
    // 0x2654d0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2654d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2654d4: 0x2b6182a  slt         $v1, $s5, $s6
    ctx->pc = 0x2654d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2654d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2654d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2654dc: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
    ctx->pc = 0x2654DCu;
    {
        const bool branch_taken_0x2654dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2654E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2654DCu;
            // 0x2654e0: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2654dc) {
            ctx->pc = 0x2653B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2653b8;
        }
    }
    ctx->pc = 0x2654E4u;
    // 0x2654e4: 0x0  nop
    ctx->pc = 0x2654e4u;
    // NOP
label_2654e8:
    // 0x2654e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2654e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2654ec: 0x16c30016  bne         $s6, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2654ECu;
    {
        const bool branch_taken_0x2654ec = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x2654ec) {
            ctx->pc = 0x265548u;
            goto label_265548;
        }
    }
    ctx->pc = 0x2654F4u;
    // 0x2654f4: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x2654f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2654f8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2654f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x2654fc: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x2654fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x265500: 0x248402f0  addiu       $a0, $a0, 0x2F0
    ctx->pc = 0x265500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x265504: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x265504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x265508: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x265508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x26550c: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x26550cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x265510: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x265510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x265514: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x265514u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x265518: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x265518u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x26551c: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x26551cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x265520: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x265520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x265524: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x265524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265528: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x265528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x26552c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x26552cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x265530: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x265530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265534: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x265534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x265538: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x265538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26553c: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x26553cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x265540: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x265540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265544: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x265544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_265548:
    // 0x265548: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x265548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26554c: 0x17c30022  bne         $fp, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x26554Cu;
    {
        const bool branch_taken_0x26554c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x26554c) {
            ctx->pc = 0x2655D8u;
            goto label_2655d8;
        }
    }
    ctx->pc = 0x265554u;
    // 0x265554: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x265554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x265558: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x265558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x26555c: 0x8ee50004  lw          $a1, 0x4($s7)
    ctx->pc = 0x26555cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x265560: 0x248402f0  addiu       $a0, $a0, 0x2F0
    ctx->pc = 0x265560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x265564: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x265564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x265568: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x265568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x26556c: 0xaee40004  sw          $a0, 0x4($s7)
    ctx->pc = 0x26556cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 4));
    // 0x265570: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x265570u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x265574: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x265574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x265578: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x265578u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x26557c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x26557cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x265580: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x265580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x265584: 0xb72021  addu        $a0, $a1, $s7
    ctx->pc = 0x265584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x265588: 0xc46000e0  lwc1        $f0, 0xE0($v1)
    ctx->pc = 0x265588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26558c: 0xe48000e0  swc1        $f0, 0xE0($a0)
    ctx->pc = 0x26558cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x265590: 0xc46000e4  lwc1        $f0, 0xE4($v1)
    ctx->pc = 0x265590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265594: 0xe48000e4  swc1        $f0, 0xE4($a0)
    ctx->pc = 0x265594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
    // 0x265598: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x265598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26559c: 0xe48000e8  swc1        $f0, 0xE8($a0)
    ctx->pc = 0x26559cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
    // 0x2655a0: 0xc46000ec  lwc1        $f0, 0xEC($v1)
    ctx->pc = 0x2655a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2655a4: 0xe48000ec  swc1        $f0, 0xEC($a0)
    ctx->pc = 0x2655a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
    // 0x2655a8: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x2655a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2655ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2655acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2655b0: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x2655b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2655b4: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x2655b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2655b8: 0xe48000a0  swc1        $f0, 0xA0($a0)
    ctx->pc = 0x2655b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x2655bc: 0xc46000a4  lwc1        $f0, 0xA4($v1)
    ctx->pc = 0x2655bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2655c0: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x2655c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x2655c4: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x2655c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2655c8: 0xe48000a8  swc1        $f0, 0xA8($a0)
    ctx->pc = 0x2655c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x2655cc: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x2655ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2655d0: 0xe48000ac  swc1        $f0, 0xAC($a0)
    ctx->pc = 0x2655d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
    // 0x2655d4: 0x0  nop
    ctx->pc = 0x2655d4u;
    // NOP
label_2655d8:
    // 0x2655d8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2655d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2655dc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2655dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2655e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2655e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2655e4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2655e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2655e8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2655e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2655ec: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2655ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2655f0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2655f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2655f4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2655f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2655f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2655f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2655fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2655fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265600: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x265600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265604: 0x3e00008  jr          $ra
    ctx->pc = 0x265604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265604u;
            // 0x265608: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26560Cu;
    // 0x26560c: 0x0  nop
    ctx->pc = 0x26560cu;
    // NOP
}
