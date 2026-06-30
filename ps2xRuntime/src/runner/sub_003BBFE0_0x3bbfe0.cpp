#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BBFE0
// Address: 0x3bbfe0 - 0x3bc0e0
void sub_003BBFE0_0x3bbfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BBFE0_0x3bbfe0");
#endif

    switch (ctx->pc) {
        case 0x3bbfe0u: goto label_3bbfe0;
        case 0x3bbfe4u: goto label_3bbfe4;
        case 0x3bbfe8u: goto label_3bbfe8;
        case 0x3bbfecu: goto label_3bbfec;
        case 0x3bbff0u: goto label_3bbff0;
        case 0x3bbff4u: goto label_3bbff4;
        case 0x3bbff8u: goto label_3bbff8;
        case 0x3bbffcu: goto label_3bbffc;
        case 0x3bc000u: goto label_3bc000;
        case 0x3bc004u: goto label_3bc004;
        case 0x3bc008u: goto label_3bc008;
        case 0x3bc00cu: goto label_3bc00c;
        case 0x3bc010u: goto label_3bc010;
        case 0x3bc014u: goto label_3bc014;
        case 0x3bc018u: goto label_3bc018;
        case 0x3bc01cu: goto label_3bc01c;
        case 0x3bc020u: goto label_3bc020;
        case 0x3bc024u: goto label_3bc024;
        case 0x3bc028u: goto label_3bc028;
        case 0x3bc02cu: goto label_3bc02c;
        case 0x3bc030u: goto label_3bc030;
        case 0x3bc034u: goto label_3bc034;
        case 0x3bc038u: goto label_3bc038;
        case 0x3bc03cu: goto label_3bc03c;
        case 0x3bc040u: goto label_3bc040;
        case 0x3bc044u: goto label_3bc044;
        case 0x3bc048u: goto label_3bc048;
        case 0x3bc04cu: goto label_3bc04c;
        case 0x3bc050u: goto label_3bc050;
        case 0x3bc054u: goto label_3bc054;
        case 0x3bc058u: goto label_3bc058;
        case 0x3bc05cu: goto label_3bc05c;
        case 0x3bc060u: goto label_3bc060;
        case 0x3bc064u: goto label_3bc064;
        case 0x3bc068u: goto label_3bc068;
        case 0x3bc06cu: goto label_3bc06c;
        case 0x3bc070u: goto label_3bc070;
        case 0x3bc074u: goto label_3bc074;
        case 0x3bc078u: goto label_3bc078;
        case 0x3bc07cu: goto label_3bc07c;
        case 0x3bc080u: goto label_3bc080;
        case 0x3bc084u: goto label_3bc084;
        case 0x3bc088u: goto label_3bc088;
        case 0x3bc08cu: goto label_3bc08c;
        case 0x3bc090u: goto label_3bc090;
        case 0x3bc094u: goto label_3bc094;
        case 0x3bc098u: goto label_3bc098;
        case 0x3bc09cu: goto label_3bc09c;
        case 0x3bc0a0u: goto label_3bc0a0;
        case 0x3bc0a4u: goto label_3bc0a4;
        case 0x3bc0a8u: goto label_3bc0a8;
        case 0x3bc0acu: goto label_3bc0ac;
        case 0x3bc0b0u: goto label_3bc0b0;
        case 0x3bc0b4u: goto label_3bc0b4;
        case 0x3bc0b8u: goto label_3bc0b8;
        case 0x3bc0bcu: goto label_3bc0bc;
        case 0x3bc0c0u: goto label_3bc0c0;
        case 0x3bc0c4u: goto label_3bc0c4;
        case 0x3bc0c8u: goto label_3bc0c8;
        case 0x3bc0ccu: goto label_3bc0cc;
        case 0x3bc0d0u: goto label_3bc0d0;
        case 0x3bc0d4u: goto label_3bc0d4;
        case 0x3bc0d8u: goto label_3bc0d8;
        case 0x3bc0dcu: goto label_3bc0dc;
        default: break;
    }

    ctx->pc = 0x3bbfe0u;

label_3bbfe0:
    // 0x3bbfe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3bbfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3bbfe4:
    // 0x3bbfe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bbfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3bbfe8:
    // 0x3bbfe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bbfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3bbfec:
    // 0x3bbfec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bbfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3bbff0:
    // 0x3bbff0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bbff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bbff4:
    // 0x3bbff4: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x3bbff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_3bbff8:
    // 0x3bbff8: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_3bbffc:
    if (ctx->pc == 0x3BBFFCu) {
        ctx->pc = 0x3BBFFCu;
            // 0x3bbffc: 0x8e050044  lw          $a1, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->pc = 0x3BC000u;
        goto label_3bc000;
    }
    ctx->pc = 0x3BBFF8u;
    {
        const bool branch_taken_0x3bbff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bbff8) {
            ctx->pc = 0x3BBFFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBFF8u;
            // 0x3bbffc: 0x8e050044  lw          $a1, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BC018u;
            goto label_3bc018;
        }
    }
    ctx->pc = 0x3BC000u;
label_3bc000:
    // 0x3bc000: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3bc000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bc004:
    // 0x3bc004: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3bc004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3bc008:
    // 0x3bc008: 0x320f809  jalr        $t9
label_3bc00c:
    if (ctx->pc == 0x3BC00Cu) {
        ctx->pc = 0x3BC00Cu;
            // 0x3bc00c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BC010u;
        goto label_3bc010;
    }
    ctx->pc = 0x3BC008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BC010u);
        ctx->pc = 0x3BC00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC008u;
            // 0x3bc00c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BC010u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BC010u; }
            if (ctx->pc != 0x3BC010u) { return; }
        }
        }
    }
    ctx->pc = 0x3BC010u;
label_3bc010:
    // 0x3bc010: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x3bc010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_3bc014:
    // 0x3bc014: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x3bc014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_3bc018:
    // 0x3bc018: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_3bc01c:
    if (ctx->pc == 0x3BC01Cu) {
        ctx->pc = 0x3BC01Cu;
            // 0x3bc01c: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->pc = 0x3BC020u;
        goto label_3bc020;
    }
    ctx->pc = 0x3BC018u;
    {
        const bool branch_taken_0x3bc018 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc018) {
            ctx->pc = 0x3BC01Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC018u;
            // 0x3bc01c: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BC038u;
            goto label_3bc038;
        }
    }
    ctx->pc = 0x3BC020u;
label_3bc020:
    // 0x3bc020: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3bc020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3bc024:
    // 0x3bc024: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3bc024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3bc028:
    // 0x3bc028: 0xc057b7c  jal         func_15EDF0
label_3bc02c:
    if (ctx->pc == 0x3BC02Cu) {
        ctx->pc = 0x3BC02Cu;
            // 0x3bc02c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3BC030u;
        goto label_3bc030;
    }
    ctx->pc = 0x3BC028u;
    SET_GPR_U32(ctx, 31, 0x3BC030u);
    ctx->pc = 0x3BC02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC028u;
            // 0x3bc02c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC030u; }
        if (ctx->pc != 0x3BC030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC030u; }
        if (ctx->pc != 0x3BC030u) { return; }
    }
    ctx->pc = 0x3BC030u;
label_3bc030:
    // 0x3bc030: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x3bc030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_3bc034:
    // 0x3bc034: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x3bc034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_3bc038:
    // 0x3bc038: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_3bc03c:
    if (ctx->pc == 0x3BC03Cu) {
        ctx->pc = 0x3BC03Cu;
            // 0x3bc03c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3BC040u;
        goto label_3bc040;
    }
    ctx->pc = 0x3BC038u;
    {
        const bool branch_taken_0x3bc038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc038) {
            ctx->pc = 0x3BC03Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC038u;
            // 0x3bc03c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BC068u;
            goto label_3bc068;
        }
    }
    ctx->pc = 0x3BC040u;
label_3bc040:
    // 0x3bc040: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x3bc040u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_3bc044:
    // 0x3bc044: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3bc044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3bc048:
    // 0x3bc048: 0x34630180  ori         $v1, $v1, 0x180
    ctx->pc = 0x3bc048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)384);
label_3bc04c:
    // 0x3bc04c: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x3bc04cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_3bc050:
    // 0x3bc050: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3bc050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3bc054:
    // 0x3bc054: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x3bc054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_3bc058:
    // 0x3bc058: 0xc057b7c  jal         func_15EDF0
label_3bc05c:
    if (ctx->pc == 0x3BC05Cu) {
        ctx->pc = 0x3BC05Cu;
            // 0x3bc05c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3BC060u;
        goto label_3bc060;
    }
    ctx->pc = 0x3BC058u;
    SET_GPR_U32(ctx, 31, 0x3BC060u);
    ctx->pc = 0x3BC05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC058u;
            // 0x3bc05c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC060u; }
        if (ctx->pc != 0x3BC060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC060u; }
        if (ctx->pc != 0x3BC060u) { return; }
    }
    ctx->pc = 0x3BC060u;
label_3bc060:
    // 0x3bc060: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x3bc060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_3bc064:
    // 0x3bc064: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3bc064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bc068:
    // 0x3bc068: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3bc068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bc06c:
    // 0x3bc06c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x3bc06cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3bc070:
    // 0x3bc070: 0x8e230e38  lw          $v1, 0xE38($s1)
    ctx->pc = 0x3bc070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
label_3bc074:
    // 0x3bc074: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3bc078:
    if (ctx->pc == 0x3BC078u) {
        ctx->pc = 0x3BC078u;
            // 0x3bc078: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3BC07Cu;
        goto label_3bc07c;
    }
    ctx->pc = 0x3BC074u;
    {
        const bool branch_taken_0x3bc074 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3BC078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC074u;
            // 0x3bc078: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc074) {
            ctx->pc = 0x3BC08Cu;
            goto label_3bc08c;
        }
    }
    ctx->pc = 0x3BC07Cu;
label_3bc07c:
    // 0x3bc07c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3bc07cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3bc080:
    // 0x3bc080: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3bc084:
    if (ctx->pc == 0x3BC084u) {
        ctx->pc = 0x3BC088u;
        goto label_3bc088;
    }
    ctx->pc = 0x3BC080u;
    {
        const bool branch_taken_0x3bc080 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc080) {
            ctx->pc = 0x3BC08Cu;
            goto label_3bc08c;
        }
    }
    ctx->pc = 0x3BC088u;
label_3bc088:
    // 0x3bc088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bc088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bc08c:
    // 0x3bc08c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3bc090:
    if (ctx->pc == 0x3BC090u) {
        ctx->pc = 0x3BC094u;
        goto label_3bc094;
    }
    ctx->pc = 0x3BC08Cu;
    {
        const bool branch_taken_0x3bc08c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc08c) {
            ctx->pc = 0x3BC0A8u;
            goto label_3bc0a8;
        }
    }
    ctx->pc = 0x3BC094u;
label_3bc094:
    // 0x3bc094: 0xc075eb4  jal         func_1D7AD0
label_3bc098:
    if (ctx->pc == 0x3BC098u) {
        ctx->pc = 0x3BC098u;
            // 0x3bc098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BC09Cu;
        goto label_3bc09c;
    }
    ctx->pc = 0x3BC094u;
    SET_GPR_U32(ctx, 31, 0x3BC09Cu);
    ctx->pc = 0x3BC098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC094u;
            // 0x3bc098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC09Cu; }
        if (ctx->pc != 0x3BC09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC09Cu; }
        if (ctx->pc != 0x3BC09Cu) { return; }
    }
    ctx->pc = 0x3BC09Cu;
label_3bc09c:
    // 0x3bc09c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3bc0a0:
    if (ctx->pc == 0x3BC0A0u) {
        ctx->pc = 0x3BC0A4u;
        goto label_3bc0a4;
    }
    ctx->pc = 0x3BC09Cu;
    {
        const bool branch_taken_0x3bc09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc09c) {
            ctx->pc = 0x3BC0A8u;
            goto label_3bc0a8;
        }
    }
    ctx->pc = 0x3BC0A4u;
label_3bc0a4:
    // 0x3bc0a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3bc0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bc0a8:
    // 0x3bc0a8: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_3bc0ac:
    if (ctx->pc == 0x3BC0ACu) {
        ctx->pc = 0x3BC0ACu;
            // 0x3bc0ac: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3BC0B0u;
        goto label_3bc0b0;
    }
    ctx->pc = 0x3BC0A8u;
    {
        const bool branch_taken_0x3bc0a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc0a8) {
            ctx->pc = 0x3BC0ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC0A8u;
            // 0x3bc0ac: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BC0C8u;
            goto label_3bc0c8;
        }
    }
    ctx->pc = 0x3BC0B0u;
label_3bc0b0:
    // 0x3bc0b0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3bc0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3bc0b4:
    // 0x3bc0b4: 0x8e240d98  lw          $a0, 0xD98($s1)
    ctx->pc = 0x3bc0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_3bc0b8:
    // 0x3bc0b8: 0x8c633e58  lw          $v1, 0x3E58($v1)
    ctx->pc = 0x3bc0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15960)));
label_3bc0bc:
    // 0x3bc0bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3bc0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3bc0c0:
    // 0x3bc0c0: 0xa06000c0  sb          $zero, 0xC0($v1)
    ctx->pc = 0x3bc0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 192), (uint8_t)GPR_U32(ctx, 0));
label_3bc0c4:
    // 0x3bc0c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bc0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3bc0c8:
    // 0x3bc0c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bc0c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bc0cc:
    // 0x3bc0cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bc0ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3bc0d0:
    // 0x3bc0d0: 0x3e00008  jr          $ra
label_3bc0d4:
    if (ctx->pc == 0x3BC0D4u) {
        ctx->pc = 0x3BC0D4u;
            // 0x3bc0d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3BC0D8u;
        goto label_3bc0d8;
    }
    ctx->pc = 0x3BC0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BC0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC0D0u;
            // 0x3bc0d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BC0D8u;
label_3bc0d8:
    // 0x3bc0d8: 0x0  nop
    ctx->pc = 0x3bc0d8u;
    // NOP
label_3bc0dc:
    // 0x3bc0dc: 0x0  nop
    ctx->pc = 0x3bc0dcu;
    // NOP
}
