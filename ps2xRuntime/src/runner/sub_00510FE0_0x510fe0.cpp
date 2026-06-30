#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00510FE0
// Address: 0x510fe0 - 0x511110
void sub_00510FE0_0x510fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510FE0_0x510fe0");
#endif

    switch (ctx->pc) {
        case 0x510fe0u: goto label_510fe0;
        case 0x510fe4u: goto label_510fe4;
        case 0x510fe8u: goto label_510fe8;
        case 0x510fecu: goto label_510fec;
        case 0x510ff0u: goto label_510ff0;
        case 0x510ff4u: goto label_510ff4;
        case 0x510ff8u: goto label_510ff8;
        case 0x510ffcu: goto label_510ffc;
        case 0x511000u: goto label_511000;
        case 0x511004u: goto label_511004;
        case 0x511008u: goto label_511008;
        case 0x51100cu: goto label_51100c;
        case 0x511010u: goto label_511010;
        case 0x511014u: goto label_511014;
        case 0x511018u: goto label_511018;
        case 0x51101cu: goto label_51101c;
        case 0x511020u: goto label_511020;
        case 0x511024u: goto label_511024;
        case 0x511028u: goto label_511028;
        case 0x51102cu: goto label_51102c;
        case 0x511030u: goto label_511030;
        case 0x511034u: goto label_511034;
        case 0x511038u: goto label_511038;
        case 0x51103cu: goto label_51103c;
        case 0x511040u: goto label_511040;
        case 0x511044u: goto label_511044;
        case 0x511048u: goto label_511048;
        case 0x51104cu: goto label_51104c;
        case 0x511050u: goto label_511050;
        case 0x511054u: goto label_511054;
        case 0x511058u: goto label_511058;
        case 0x51105cu: goto label_51105c;
        case 0x511060u: goto label_511060;
        case 0x511064u: goto label_511064;
        case 0x511068u: goto label_511068;
        case 0x51106cu: goto label_51106c;
        case 0x511070u: goto label_511070;
        case 0x511074u: goto label_511074;
        case 0x511078u: goto label_511078;
        case 0x51107cu: goto label_51107c;
        case 0x511080u: goto label_511080;
        case 0x511084u: goto label_511084;
        case 0x511088u: goto label_511088;
        case 0x51108cu: goto label_51108c;
        case 0x511090u: goto label_511090;
        case 0x511094u: goto label_511094;
        case 0x511098u: goto label_511098;
        case 0x51109cu: goto label_51109c;
        case 0x5110a0u: goto label_5110a0;
        case 0x5110a4u: goto label_5110a4;
        case 0x5110a8u: goto label_5110a8;
        case 0x5110acu: goto label_5110ac;
        case 0x5110b0u: goto label_5110b0;
        case 0x5110b4u: goto label_5110b4;
        case 0x5110b8u: goto label_5110b8;
        case 0x5110bcu: goto label_5110bc;
        case 0x5110c0u: goto label_5110c0;
        case 0x5110c4u: goto label_5110c4;
        case 0x5110c8u: goto label_5110c8;
        case 0x5110ccu: goto label_5110cc;
        case 0x5110d0u: goto label_5110d0;
        case 0x5110d4u: goto label_5110d4;
        case 0x5110d8u: goto label_5110d8;
        case 0x5110dcu: goto label_5110dc;
        case 0x5110e0u: goto label_5110e0;
        case 0x5110e4u: goto label_5110e4;
        case 0x5110e8u: goto label_5110e8;
        case 0x5110ecu: goto label_5110ec;
        case 0x5110f0u: goto label_5110f0;
        case 0x5110f4u: goto label_5110f4;
        case 0x5110f8u: goto label_5110f8;
        case 0x5110fcu: goto label_5110fc;
        case 0x511100u: goto label_511100;
        case 0x511104u: goto label_511104;
        case 0x511108u: goto label_511108;
        case 0x51110cu: goto label_51110c;
        default: break;
    }

    ctx->pc = 0x510fe0u;

label_510fe0:
    // 0x510fe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x510fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_510fe4:
    // 0x510fe4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x510fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_510fe8:
    // 0x510fe8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x510fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_510fec:
    // 0x510fec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x510fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_510ff0:
    // 0x510ff0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x510ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_510ff4:
    // 0x510ff4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x510ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_510ff8:
    // 0x510ff8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x510ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_510ffc:
    // 0x510ffc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x510ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_511000:
    // 0x511000: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x511000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_511004:
    // 0x511004: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x511004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_511008:
    // 0x511008: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x511008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_51100c:
    // 0x51100c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x51100cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_511010:
    // 0x511010: 0x24700090  addiu       $s0, $v1, 0x90
    ctx->pc = 0x511010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_511014:
    // 0x511014: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x511014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_511018:
    // 0x511018: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x511018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_51101c:
    // 0x51101c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_511020:
    if (ctx->pc == 0x511020u) {
        ctx->pc = 0x511024u;
        goto label_511024;
    }
    ctx->pc = 0x51101Cu;
    {
        const bool branch_taken_0x51101c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51101c) {
            ctx->pc = 0x511038u;
            goto label_511038;
        }
    }
    ctx->pc = 0x511024u;
label_511024:
    // 0x511024: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x511024u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_511028:
    // 0x511028: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x511028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_51102c:
    // 0x51102c: 0x320f809  jalr        $t9
label_511030:
    if (ctx->pc == 0x511030u) {
        ctx->pc = 0x511034u;
        goto label_511034;
    }
    ctx->pc = 0x51102Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x511034u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x511034u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x511034u; }
            if (ctx->pc != 0x511034u) { return; }
        }
        }
    }
    ctx->pc = 0x511034u;
label_511034:
    // 0x511034: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x511034u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_511038:
    // 0x511038: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x511038u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_51103c:
    // 0x51103c: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x51103cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_511040:
    // 0x511040: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_511044:
    if (ctx->pc == 0x511044u) {
        ctx->pc = 0x511044u;
            // 0x511044: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x511048u;
        goto label_511048;
    }
    ctx->pc = 0x511040u;
    {
        const bool branch_taken_0x511040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x511044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511040u;
            // 0x511044: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511040) {
            ctx->pc = 0x511018u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_511018;
        }
    }
    ctx->pc = 0x511048u;
label_511048:
    // 0x511048: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x511048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_51104c:
    // 0x51104c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_511050:
    if (ctx->pc == 0x511050u) {
        ctx->pc = 0x511050u;
            // 0x511050: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x511054u;
        goto label_511054;
    }
    ctx->pc = 0x51104Cu;
    {
        const bool branch_taken_0x51104c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51104c) {
            ctx->pc = 0x511050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51104Cu;
            // 0x511050: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51106Cu;
            goto label_51106c;
        }
    }
    ctx->pc = 0x511054u;
label_511054:
    // 0x511054: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x511054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_511058:
    // 0x511058: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x511058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_51105c:
    // 0x51105c: 0x320f809  jalr        $t9
label_511060:
    if (ctx->pc == 0x511060u) {
        ctx->pc = 0x511060u;
            // 0x511060: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511064u;
        goto label_511064;
    }
    ctx->pc = 0x51105Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x511064u);
        ctx->pc = 0x511060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51105Cu;
            // 0x511060: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x511064u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x511064u; }
            if (ctx->pc != 0x511064u) { return; }
        }
        }
    }
    ctx->pc = 0x511064u;
label_511064:
    // 0x511064: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x511064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_511068:
    // 0x511068: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x511068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_51106c:
    // 0x51106c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_511070:
    if (ctx->pc == 0x511070u) {
        ctx->pc = 0x511070u;
            // 0x511070: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x511074u;
        goto label_511074;
    }
    ctx->pc = 0x51106Cu;
    {
        const bool branch_taken_0x51106c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51106c) {
            ctx->pc = 0x511070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51106Cu;
            // 0x511070: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51108Cu;
            goto label_51108c;
        }
    }
    ctx->pc = 0x511074u;
label_511074:
    // 0x511074: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x511074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_511078:
    // 0x511078: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x511078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_51107c:
    // 0x51107c: 0x320f809  jalr        $t9
label_511080:
    if (ctx->pc == 0x511080u) {
        ctx->pc = 0x511080u;
            // 0x511080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511084u;
        goto label_511084;
    }
    ctx->pc = 0x51107Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x511084u);
        ctx->pc = 0x511080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51107Cu;
            // 0x511080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x511084u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x511084u; }
            if (ctx->pc != 0x511084u) { return; }
        }
        }
    }
    ctx->pc = 0x511084u;
label_511084:
    // 0x511084: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x511084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_511088:
    // 0x511088: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x511088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_51108c:
    // 0x51108c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_511090:
    if (ctx->pc == 0x511090u) {
        ctx->pc = 0x511090u;
            // 0x511090: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511094u;
        goto label_511094;
    }
    ctx->pc = 0x51108Cu;
    {
        const bool branch_taken_0x51108c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51108c) {
            ctx->pc = 0x511090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51108Cu;
            // 0x511090: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5110ACu;
            goto label_5110ac;
        }
    }
    ctx->pc = 0x511094u;
label_511094:
    // 0x511094: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x511094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_511098:
    // 0x511098: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x511098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_51109c:
    // 0x51109c: 0x320f809  jalr        $t9
label_5110a0:
    if (ctx->pc == 0x5110A0u) {
        ctx->pc = 0x5110A0u;
            // 0x5110a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5110A4u;
        goto label_5110a4;
    }
    ctx->pc = 0x51109Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5110A4u);
        ctx->pc = 0x5110A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51109Cu;
            // 0x5110a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5110A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5110A4u; }
            if (ctx->pc != 0x5110A4u) { return; }
        }
        }
    }
    ctx->pc = 0x5110A4u;
label_5110a4:
    // 0x5110a4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x5110a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_5110a8:
    // 0x5110a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x5110a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5110ac:
    // 0x5110ac: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x5110acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5110b0:
    // 0x5110b0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x5110b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_5110b4:
    // 0x5110b4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_5110b8:
    if (ctx->pc == 0x5110B8u) {
        ctx->pc = 0x5110BCu;
        goto label_5110bc;
    }
    ctx->pc = 0x5110B4u;
    {
        const bool branch_taken_0x5110b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5110b4) {
            ctx->pc = 0x5110D0u;
            goto label_5110d0;
        }
    }
    ctx->pc = 0x5110BCu;
label_5110bc:
    // 0x5110bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5110bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5110c0:
    // 0x5110c0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x5110c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_5110c4:
    // 0x5110c4: 0x320f809  jalr        $t9
label_5110c8:
    if (ctx->pc == 0x5110C8u) {
        ctx->pc = 0x5110C8u;
            // 0x5110c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5110CCu;
        goto label_5110cc;
    }
    ctx->pc = 0x5110C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5110CCu);
        ctx->pc = 0x5110C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5110C4u;
            // 0x5110c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5110CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5110CCu; }
            if (ctx->pc != 0x5110CCu) { return; }
        }
        }
    }
    ctx->pc = 0x5110CCu;
label_5110cc:
    // 0x5110cc: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x5110ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_5110d0:
    // 0x5110d0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5110d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5110d4:
    // 0x5110d4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x5110d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_5110d8:
    // 0x5110d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x5110d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_5110dc:
    // 0x5110dc: 0x8c63077c  lw          $v1, 0x77C($v1)
    ctx->pc = 0x5110dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
label_5110e0:
    // 0x5110e0: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x5110e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_5110e4:
    // 0x5110e4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_5110e8:
    if (ctx->pc == 0x5110E8u) {
        ctx->pc = 0x5110E8u;
            // 0x5110e8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x5110ECu;
        goto label_5110ec;
    }
    ctx->pc = 0x5110E4u;
    {
        const bool branch_taken_0x5110e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5110E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5110E4u;
            // 0x5110e8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5110e4) {
            ctx->pc = 0x5110B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5110b0;
        }
    }
    ctx->pc = 0x5110ECu;
label_5110ec:
    // 0x5110ec: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x5110ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_5110f0:
    // 0x5110f0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x5110f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_5110f4:
    // 0x5110f4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x5110f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_5110f8:
    // 0x5110f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x5110f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_5110fc:
    // 0x5110fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5110fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_511100:
    // 0x511100: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x511100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_511104:
    // 0x511104: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x511104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_511108:
    // 0x511108: 0x3e00008  jr          $ra
label_51110c:
    if (ctx->pc == 0x51110Cu) {
        ctx->pc = 0x51110Cu;
            // 0x51110c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x511110u;
        goto label_fallthrough_0x511108;
    }
    ctx->pc = 0x511108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51110Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511108u;
            // 0x51110c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x511108:
    ctx->pc = 0x511110u;
}
