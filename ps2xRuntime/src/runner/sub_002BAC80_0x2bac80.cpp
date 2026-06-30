#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BAC80
// Address: 0x2bac80 - 0x2badc0
void sub_002BAC80_0x2bac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAC80_0x2bac80");
#endif

    switch (ctx->pc) {
        case 0x2bac9cu: goto label_2bac9c;
        case 0x2baca4u: goto label_2baca4;
        case 0x2bacf0u: goto label_2bacf0;
        case 0x2bad50u: goto label_2bad50;
        case 0x2bad5cu: goto label_2bad5c;
        case 0x2bad68u: goto label_2bad68;
        case 0x2bad74u: goto label_2bad74;
        case 0x2bad80u: goto label_2bad80;
        case 0x2bad8cu: goto label_2bad8c;
        case 0x2bada4u: goto label_2bada4;
        default: break;
    }

    ctx->pc = 0x2bac80u;

    // 0x2bac80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bac80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bac84: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2bac84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2bac88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bac88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bac8c: 0x3446869f  ori         $a2, $v0, 0x869F
    ctx->pc = 0x2bac8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
    // 0x2bac90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bac90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bac94: 0xc0aeda0  jal         func_2BB680
    ctx->pc = 0x2BAC94u;
    SET_GPR_U32(ctx, 31, 0x2BAC9Cu);
    ctx->pc = 0x2BAC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAC94u;
            // 0x2bac98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB680u;
    if (runtime->hasFunction(0x2BB680u)) {
        auto targetFn = runtime->lookupFunction(0x2BB680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAC9Cu; }
        if (ctx->pc != 0x2BAC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB680_0x2bb680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAC9Cu; }
        if (ctx->pc != 0x2BAC9Cu) { return; }
    }
    ctx->pc = 0x2BAC9Cu;
label_2bac9c:
    // 0x2bac9c: 0xc0aed9c  jal         func_2BB670
    ctx->pc = 0x2BAC9Cu;
    SET_GPR_U32(ctx, 31, 0x2BACA4u);
    ctx->pc = 0x2BACA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAC9Cu;
            // 0x2baca0: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (runtime->hasFunction(0x2BB670u)) {
        auto targetFn = runtime->lookupFunction(0x2BB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BACA4u; }
        if (ctx->pc != 0x2BACA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB670_0x2bb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BACA4u; }
        if (ctx->pc != 0x2BACA4u) { return; }
    }
    ctx->pc = 0x2BACA4u;
label_2baca4:
    // 0x2baca4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2baca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2baca8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2baca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bacac: 0x244223e0  addiu       $v0, $v0, 0x23E0
    ctx->pc = 0x2bacacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9184));
    // 0x2bacb0: 0x24632418  addiu       $v1, $v1, 0x2418
    ctx->pc = 0x2bacb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9240));
    // 0x2bacb4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bacb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2bacb8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bacb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bacbc: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2bacbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2bacc0: 0x24422390  addiu       $v0, $v0, 0x2390
    ctx->pc = 0x2bacc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9104));
    // 0x2bacc4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bacc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bacc8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bacc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2baccc: 0x246323c8  addiu       $v1, $v1, 0x23C8
    ctx->pc = 0x2bacccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9160));
    // 0x2bacd0: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2bacd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2bacd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bacd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bacd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bacd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bacdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bacdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bace0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BACE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BACE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BACE0u;
            // 0x2bace4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BACE8u;
    // 0x2bace8: 0x0  nop
    ctx->pc = 0x2bace8u;
    // NOP
    // 0x2bacec: 0x0  nop
    ctx->pc = 0x2bacecu;
    // NOP
label_2bacf0:
    // 0x2bacf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bacf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bacf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bacf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bacf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bacf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bacfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bacfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bad00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bad00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bad04: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2BAD04u;
    {
        const bool branch_taken_0x2bad04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAD04u;
            // 0x2bad08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad04) {
            ctx->pc = 0x2BADA4u;
            goto label_2bada4;
        }
    }
    ctx->pc = 0x2BAD0Cu;
    // 0x2bad0c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bad10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bad10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bad14: 0x246323e0  addiu       $v1, $v1, 0x23E0
    ctx->pc = 0x2bad14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9184));
    // 0x2bad18: 0x24422418  addiu       $v0, $v0, 0x2418
    ctx->pc = 0x2bad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9240));
    // 0x2bad1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bad1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2bad20: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BAD20u;
    {
        const bool branch_taken_0x2bad20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAD20u;
            // 0x2bad24: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad20) {
            ctx->pc = 0x2BAD8Cu;
            goto label_2bad8c;
        }
    }
    ctx->pc = 0x2BAD28u;
    // 0x2bad28: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bad28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bad2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bad30: 0x24632340  addiu       $v1, $v1, 0x2340
    ctx->pc = 0x2bad30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9024));
    // 0x2bad34: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bad34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2bad38: 0x24422378  addiu       $v0, $v0, 0x2378
    ctx->pc = 0x2bad38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9080));
    // 0x2bad3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2bad40: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2bad40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2bad44: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2bad44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2bad48: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2BAD48u;
    SET_GPR_U32(ctx, 31, 0x2BAD50u);
    ctx->pc = 0x2BAD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAD48u;
            // 0x2bad4c: 0x24a5af30  addiu       $a1, $a1, -0x50D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD50u; }
        if (ctx->pc != 0x2BAD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD50u; }
        if (ctx->pc != 0x2BAD50u) { return; }
    }
    ctx->pc = 0x2BAD50u;
label_2bad50:
    // 0x2bad50: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2bad50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2bad54: 0xc0aeba4  jal         func_2BAE90
    ctx->pc = 0x2BAD54u;
    SET_GPR_U32(ctx, 31, 0x2BAD5Cu);
    ctx->pc = 0x2BAD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAD54u;
            // 0x2bad58: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAE90u;
    if (runtime->hasFunction(0x2BAE90u)) {
        auto targetFn = runtime->lookupFunction(0x2BAE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD5Cu; }
        if (ctx->pc != 0x2BAD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAE90_0x2bae90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD5Cu; }
        if (ctx->pc != 0x2BAD5Cu) { return; }
    }
    ctx->pc = 0x2BAD5Cu;
label_2bad5c:
    // 0x2bad5c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2bad5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2bad60: 0xc0aeb88  jal         func_2BAE20
    ctx->pc = 0x2BAD60u;
    SET_GPR_U32(ctx, 31, 0x2BAD68u);
    ctx->pc = 0x2BAD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAD60u;
            // 0x2bad64: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAE20u;
    if (runtime->hasFunction(0x2BAE20u)) {
        auto targetFn = runtime->lookupFunction(0x2BAE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD68u; }
        if (ctx->pc != 0x2BAD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAE20_0x2bae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD68u; }
        if (ctx->pc != 0x2BAD68u) { return; }
    }
    ctx->pc = 0x2BAD68u;
label_2bad68:
    // 0x2bad68: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2bad68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2bad6c: 0xc0aeb88  jal         func_2BAE20
    ctx->pc = 0x2BAD6Cu;
    SET_GPR_U32(ctx, 31, 0x2BAD74u);
    ctx->pc = 0x2BAD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAD6Cu;
            // 0x2bad70: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAE20u;
    if (runtime->hasFunction(0x2BAE20u)) {
        auto targetFn = runtime->lookupFunction(0x2BAE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD74u; }
        if (ctx->pc != 0x2BAD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAE20_0x2bae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD74u; }
        if (ctx->pc != 0x2BAD74u) { return; }
    }
    ctx->pc = 0x2BAD74u;
label_2bad74:
    // 0x2bad74: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2bad74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2bad78: 0xc0aeb70  jal         func_2BADC0
    ctx->pc = 0x2BAD78u;
    SET_GPR_U32(ctx, 31, 0x2BAD80u);
    ctx->pc = 0x2BAD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAD78u;
            // 0x2bad7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BADC0u;
    if (runtime->hasFunction(0x2BADC0u)) {
        auto targetFn = runtime->lookupFunction(0x2BADC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD80u; }
        if (ctx->pc != 0x2BAD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BADC0_0x2badc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD80u; }
        if (ctx->pc != 0x2BAD80u) { return; }
    }
    ctx->pc = 0x2BAD80u;
label_2bad80:
    // 0x2bad80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bad80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bad84: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2BAD84u;
    SET_GPR_U32(ctx, 31, 0x2BAD8Cu);
    ctx->pc = 0x2BAD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAD84u;
            // 0x2bad88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD8Cu; }
        if (ctx->pc != 0x2BAD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD8Cu; }
        if (ctx->pc != 0x2BAD8Cu) { return; }
    }
    ctx->pc = 0x2BAD8Cu;
label_2bad8c:
    // 0x2bad8c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2bad8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2bad90: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bad90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bad94: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BAD94u;
    {
        const bool branch_taken_0x2bad94 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bad94) {
            ctx->pc = 0x2BAD98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAD94u;
            // 0x2bad98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BADA8u;
            goto label_2bada8;
        }
    }
    ctx->pc = 0x2BAD9Cu;
    // 0x2bad9c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BAD9Cu;
    SET_GPR_U32(ctx, 31, 0x2BADA4u);
    ctx->pc = 0x2BADA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAD9Cu;
            // 0x2bada0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BADA4u; }
        if (ctx->pc != 0x2BADA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BADA4u; }
        if (ctx->pc != 0x2BADA4u) { return; }
    }
    ctx->pc = 0x2BADA4u;
label_2bada4:
    // 0x2bada4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bada4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bada8:
    // 0x2bada8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bada8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2badac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2badacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2badb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2badb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2badb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BADB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BADB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BADB4u;
            // 0x2badb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BADBCu;
    // 0x2badbc: 0x0  nop
    ctx->pc = 0x2badbcu;
    // NOP
}
