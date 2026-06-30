#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049FF80
// Address: 0x49ff80 - 0x4a00d0
void sub_0049FF80_0x49ff80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049FF80_0x49ff80");
#endif

    switch (ctx->pc) {
        case 0x49ff9cu: goto label_49ff9c;
        case 0x49ffa4u: goto label_49ffa4;
        case 0x4a0000u: goto label_4a0000;
        case 0x4a0060u: goto label_4a0060;
        case 0x4a006cu: goto label_4a006c;
        case 0x4a0078u: goto label_4a0078;
        case 0x4a0084u: goto label_4a0084;
        case 0x4a0090u: goto label_4a0090;
        case 0x4a009cu: goto label_4a009c;
        case 0x4a00b4u: goto label_4a00b4;
        default: break;
    }

    ctx->pc = 0x49ff80u;

    // 0x49ff80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49ff80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49ff84: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x49ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x49ff88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49ff88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49ff8c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x49ff8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x49ff90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49ff90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x49ff94: 0xc128068  jal         func_4A01A0
    ctx->pc = 0x49FF94u;
    SET_GPR_U32(ctx, 31, 0x49FF9Cu);
    ctx->pc = 0x49FF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FF94u;
            // 0x49ff98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A01A0u;
    if (runtime->hasFunction(0x4A01A0u)) {
        auto targetFn = runtime->lookupFunction(0x4A01A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FF9Cu; }
        if (ctx->pc != 0x49FF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A01A0_0x4a01a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FF9Cu; }
        if (ctx->pc != 0x49FF9Cu) { return; }
    }
    ctx->pc = 0x49FF9Cu;
label_49ff9c:
    // 0x49ff9c: 0xc0aed9c  jal         func_2BB670
    ctx->pc = 0x49FF9Cu;
    SET_GPR_U32(ctx, 31, 0x49FFA4u);
    ctx->pc = 0x49FFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FF9Cu;
            // 0x49ffa0: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (runtime->hasFunction(0x2BB670u)) {
        auto targetFn = runtime->lookupFunction(0x2BB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FFA4u; }
        if (ctx->pc != 0x49FFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB670_0x2bb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FFA4u; }
        if (ctx->pc != 0x49FFA4u) { return; }
    }
    ctx->pc = 0x49FFA4u;
label_49ffa4:
    // 0x49ffa4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49ffa8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49ffa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x49ffac: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x49ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x49ffb0: 0x24630138  addiu       $v1, $v1, 0x138
    ctx->pc = 0x49ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 312));
    // 0x49ffb4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49ffb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x49ffb8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49ffbc: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x49ffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x49ffc0: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x49ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x49ffc4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x49ffc8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x49ffcc: 0x24630088  addiu       $v1, $v1, 0x88
    ctx->pc = 0x49ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
    // 0x49ffd0: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x49ffd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x49ffd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49ffd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ffd8: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x49ffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x49ffdc: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x49ffdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x49ffe0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x49ffe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x49ffe4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49ffe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49ffe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49ffe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ffec: 0x3e00008  jr          $ra
    ctx->pc = 0x49FFECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49FFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49FFECu;
            // 0x49fff0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49FFF4u;
    // 0x49fff4: 0x0  nop
    ctx->pc = 0x49fff4u;
    // NOP
    // 0x49fff8: 0x0  nop
    ctx->pc = 0x49fff8u;
    // NOP
    // 0x49fffc: 0x0  nop
    ctx->pc = 0x49fffcu;
    // NOP
label_4a0000:
    // 0x4a0000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a0000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a0004: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a0004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4a0008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a0008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a000c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a000cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4a0010: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a0010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0014: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4A0014u;
    {
        const bool branch_taken_0x4a0014 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0014u;
            // 0x4a0018: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0014) {
            ctx->pc = 0x4A00B4u;
            goto label_4a00b4;
        }
    }
    ctx->pc = 0x4A001Cu;
    // 0x4a001c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4a001cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4a0020: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4a0020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4a0024: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x4a0024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x4a0028: 0x24420138  addiu       $v0, $v0, 0x138
    ctx->pc = 0x4a0028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 312));
    // 0x4a002c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a002cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a0030: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4A0030u;
    {
        const bool branch_taken_0x4a0030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0030u;
            // 0x4a0034: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0030) {
            ctx->pc = 0x4A009Cu;
            goto label_4a009c;
        }
    }
    ctx->pc = 0x4A0038u;
    // 0x4a0038: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4a0038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4a003c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4a003cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4a0040: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x4a0040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x4a0044: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x4a0044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x4a0048: 0x244200e8  addiu       $v0, $v0, 0xE8
    ctx->pc = 0x4a0048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x4a004c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a004cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a0050: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4a0050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4a0054: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4a0054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4a0058: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4A0058u;
    SET_GPR_U32(ctx, 31, 0x4A0060u);
    ctx->pc = 0x4A005Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0058u;
            // 0x4a005c: 0x24a5f460  addiu       $a1, $a1, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0060u; }
        if (ctx->pc != 0x4A0060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0060u; }
        if (ctx->pc != 0x4A0060u) { return; }
    }
    ctx->pc = 0x4A0060u;
label_4a0060:
    // 0x4a0060: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4a0060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4a0064: 0xc0b1208  jal         func_2C4820
    ctx->pc = 0x4A0064u;
    SET_GPR_U32(ctx, 31, 0x4A006Cu);
    ctx->pc = 0x4A0068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0064u;
            // 0x4a0068: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4820u;
    if (runtime->hasFunction(0x2C4820u)) {
        auto targetFn = runtime->lookupFunction(0x2C4820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A006Cu; }
        if (ctx->pc != 0x4A006Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4820_0x2c4820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A006Cu; }
        if (ctx->pc != 0x4A006Cu) { return; }
    }
    ctx->pc = 0x4A006Cu;
label_4a006c:
    // 0x4a006c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4a006cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4a0070: 0xc12804c  jal         func_4A0130
    ctx->pc = 0x4A0070u;
    SET_GPR_U32(ctx, 31, 0x4A0078u);
    ctx->pc = 0x4A0074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0070u;
            // 0x4a0074: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A0130u;
    if (runtime->hasFunction(0x4A0130u)) {
        auto targetFn = runtime->lookupFunction(0x4A0130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0078u; }
        if (ctx->pc != 0x4A0078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A0130_0x4a0130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0078u; }
        if (ctx->pc != 0x4A0078u) { return; }
    }
    ctx->pc = 0x4A0078u;
label_4a0078:
    // 0x4a0078: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4a0078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4a007c: 0xc12804c  jal         func_4A0130
    ctx->pc = 0x4A007Cu;
    SET_GPR_U32(ctx, 31, 0x4A0084u);
    ctx->pc = 0x4A0080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A007Cu;
            // 0x4a0080: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A0130u;
    if (runtime->hasFunction(0x4A0130u)) {
        auto targetFn = runtime->lookupFunction(0x4A0130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0084u; }
        if (ctx->pc != 0x4A0084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A0130_0x4a0130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0084u; }
        if (ctx->pc != 0x4A0084u) { return; }
    }
    ctx->pc = 0x4A0084u;
label_4a0084:
    // 0x4a0084: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4a0084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4a0088: 0xc128034  jal         func_4A00D0
    ctx->pc = 0x4A0088u;
    SET_GPR_U32(ctx, 31, 0x4A0090u);
    ctx->pc = 0x4A008Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0088u;
            // 0x4a008c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A00D0u;
    if (runtime->hasFunction(0x4A00D0u)) {
        auto targetFn = runtime->lookupFunction(0x4A00D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0090u; }
        if (ctx->pc != 0x4A0090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A00D0_0x4a00d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0090u; }
        if (ctx->pc != 0x4A0090u) { return; }
    }
    ctx->pc = 0x4A0090u;
label_4a0090:
    // 0x4a0090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a0090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0094: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4A0094u;
    SET_GPR_U32(ctx, 31, 0x4A009Cu);
    ctx->pc = 0x4A0098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0094u;
            // 0x4a0098: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A009Cu; }
        if (ctx->pc != 0x4A009Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A009Cu; }
        if (ctx->pc != 0x4A009Cu) { return; }
    }
    ctx->pc = 0x4A009Cu;
label_4a009c:
    // 0x4a009c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4a009cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4a00a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4a00a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4a00a4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A00A4u;
    {
        const bool branch_taken_0x4a00a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4a00a4) {
            ctx->pc = 0x4A00A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A00A4u;
            // 0x4a00a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A00B8u;
            goto label_4a00b8;
        }
    }
    ctx->pc = 0x4A00ACu;
    // 0x4a00ac: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4A00ACu;
    SET_GPR_U32(ctx, 31, 0x4A00B4u);
    ctx->pc = 0x4A00B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A00ACu;
            // 0x4a00b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A00B4u; }
        if (ctx->pc != 0x4A00B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A00B4u; }
        if (ctx->pc != 0x4A00B4u) { return; }
    }
    ctx->pc = 0x4A00B4u;
label_4a00b4:
    // 0x4a00b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a00b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a00b8:
    // 0x4a00b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a00b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a00bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a00bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a00c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a00c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a00c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A00C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A00C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A00C4u;
            // 0x4a00c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A00CCu;
    // 0x4a00cc: 0x0  nop
    ctx->pc = 0x4a00ccu;
    // NOP
}
