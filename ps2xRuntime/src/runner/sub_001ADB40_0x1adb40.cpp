#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ADB40
// Address: 0x1adb40 - 0x1adc60
void sub_001ADB40_0x1adb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADB40_0x1adb40");
#endif

    switch (ctx->pc) {
        case 0x1adb68u: goto label_1adb68;
        case 0x1adba8u: goto label_1adba8;
        default: break;
    }

    ctx->pc = 0x1adb40u;

    // 0x1adb40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1adb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1adb44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1adb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1adb48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1adb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1adb4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1adb4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1adb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1adb54: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1adb54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1adb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1adb5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1adb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1adb60: 0xc06c012  jal         func_1B0048
    ctx->pc = 0x1ADB60u;
    SET_GPR_U32(ctx, 31, 0x1ADB68u);
    ctx->pc = 0x1ADB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADB60u;
            // 0x1adb64: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0048u;
    if (runtime->hasFunction(0x1B0048u)) {
        auto targetFn = runtime->lookupFunction(0x1B0048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADB68u; }
        if (ctx->pc != 0x1ADB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0048_0x1b0048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADB68u; }
        if (ctx->pc != 0x1ADB68u) { return; }
    }
    ctx->pc = 0x1ADB68u;
label_1adb68:
    // 0x1adb68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1adb68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb6c: 0x52000035  beql        $s0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x1ADB6Cu;
    {
        const bool branch_taken_0x1adb6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adb6c) {
            ctx->pc = 0x1ADB70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADB6Cu;
            // 0x1adb70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ADC44u;
            goto label_1adc44;
        }
    }
    ctx->pc = 0x1ADB74u;
    // 0x1adb74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1adb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1adb78: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x1ADB78u;
    {
        const bool branch_taken_0x1adb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adb78) {
            ctx->pc = 0x1ADB7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADB78u;
            // 0x1adb7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ADC44u;
            goto label_1adc44;
        }
    }
    ctx->pc = 0x1ADB80u;
    // 0x1adb80: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1adb80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1adb84: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1adb84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1adb88: 0x26030038  addiu       $v1, $s0, 0x38
    ctx->pc = 0x1adb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1adb8c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1adb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1adb90: 0x28c20201  slti        $v0, $a2, 0x201
    ctx->pc = 0x1adb90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x1adb94: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1adb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb98: 0xe2300a  movz        $a2, $a3, $v0
    ctx->pc = 0x1adb98u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x1adb9c: 0x26720d88  addiu       $s2, $s3, 0xD88
    ctx->pc = 0x1adb9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 3464));
    // 0x1adba0: 0xc064080  jal         func_190200
    ctx->pc = 0x1ADBA0u;
    SET_GPR_U32(ctx, 31, 0x1ADBA8u);
    ctx->pc = 0x1ADBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADBA0u;
            // 0x1adba4: 0xac660200  sw          $a2, 0x200($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 512), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190200u;
    if (runtime->hasFunction(0x190200u)) {
        auto targetFn = runtime->lookupFunction(0x190200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADBA8u; }
        if (ctx->pc != 0x1ADBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190200_0x190200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADBA8u; }
        if (ctx->pc != 0x1ADBA8u) { return; }
    }
    ctx->pc = 0x1ADBA8u;
label_1adba8:
    // 0x1adba8: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1adba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1adbac: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1adbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1adbb0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1adbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1adbb4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1adbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1adbb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1adbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1adbbc: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADBBCu;
    {
        const bool branch_taken_0x1adbbc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ADBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADBBCu;
            // 0x1adbc0: 0x711821  addu        $v1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adbbc) {
            ctx->pc = 0x1ADBD0u;
            goto label_1adbd0;
        }
    }
    ctx->pc = 0x1ADBC4u;
    // 0x1adbc4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1adbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1adbc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1ADBC8u;
    {
        const bool branch_taken_0x1adbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADBC8u;
            // 0x1adbcc: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adbc8) {
            ctx->pc = 0x1ADBE0u;
            goto label_1adbe0;
        }
    }
    ctx->pc = 0x1ADBD0u;
label_1adbd0:
    // 0x1adbd0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1adbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1adbd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1adbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1adbd8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1adbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1adbdc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1adbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1adbe0:
    // 0x1adbe0: 0x6a420043  ldl         $v0, 0x43($s2)
    ctx->pc = 0x1adbe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1adbe4: 0x6e42003c  ldr         $v0, 0x3C($s2)
    ctx->pc = 0x1adbe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1adbe8: 0x6a43004b  ldl         $v1, 0x4B($s2)
    ctx->pc = 0x1adbe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1adbec: 0x6e430044  ldr         $v1, 0x44($s2)
    ctx->pc = 0x1adbecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1adbf0: 0x6a440053  ldl         $a0, 0x53($s2)
    ctx->pc = 0x1adbf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1adbf4: 0x6e44004c  ldr         $a0, 0x4C($s2)
    ctx->pc = 0x1adbf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1adbf8: 0x6a45005b  ldl         $a1, 0x5B($s2)
    ctx->pc = 0x1adbf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1adbfc: 0x6e450054  ldr         $a1, 0x54($s2)
    ctx->pc = 0x1adbfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1adc00: 0xb2020013  sdl         $v0, 0x13($s0)
    ctx->pc = 0x1adc00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adc04: 0xb602000c  sdr         $v0, 0xC($s0)
    ctx->pc = 0x1adc04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adc08: 0xb203001b  sdl         $v1, 0x1B($s0)
    ctx->pc = 0x1adc08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adc0c: 0xb6030014  sdr         $v1, 0x14($s0)
    ctx->pc = 0x1adc0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adc10: 0xb2040023  sdl         $a0, 0x23($s0)
    ctx->pc = 0x1adc10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adc14: 0xb604001c  sdr         $a0, 0x1C($s0)
    ctx->pc = 0x1adc14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adc18: 0xb205002b  sdl         $a1, 0x2B($s0)
    ctx->pc = 0x1adc18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adc1c: 0xb6050024  sdr         $a1, 0x24($s0)
    ctx->pc = 0x1adc1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adc20: 0x6a420063  ldl         $v0, 0x63($s2)
    ctx->pc = 0x1adc20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1adc24: 0x6e42005c  ldr         $v0, 0x5C($s2)
    ctx->pc = 0x1adc24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1adc28: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x1adc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x1adc2c: 0xb2020033  sdl         $v0, 0x33($s0)
    ctx->pc = 0x1adc2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adc30: 0xb602002c  sdr         $v0, 0x2C($s0)
    ctx->pc = 0x1adc30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adc34: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x1adc34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x1adc38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1adc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1adc3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1adc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1adc40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1adc40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1adc44:
    // 0x1adc44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1adc44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1adc48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1adc48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adc4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1adc4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1adc50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1adc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adc54: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADC54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC54u;
            // 0x1adc58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ADC5Cu;
    // 0x1adc5c: 0x0  nop
    ctx->pc = 0x1adc5cu;
    // NOP
}
