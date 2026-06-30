#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00556120
// Address: 0x556120 - 0x556370
void sub_00556120_0x556120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00556120_0x556120");
#endif

    switch (ctx->pc) {
        case 0x556164u: goto label_556164;
        case 0x556170u: goto label_556170;
        case 0x5561dcu: goto label_5561dc;
        case 0x5561f0u: goto label_5561f0;
        case 0x556208u: goto label_556208;
        case 0x5562c4u: goto label_5562c4;
        case 0x5562e4u: goto label_5562e4;
        case 0x556330u: goto label_556330;
        default: break;
    }

    ctx->pc = 0x556120u;

    // 0x556120: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x556120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x556124: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x556124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x556128: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x556128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x55612c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55612cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x556130: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x556130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x556134: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x556134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x556138: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x556138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x55613c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x55613cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x556140: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x556140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x556144: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x556144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x556148: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x556148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55614c: 0x8c630ec8  lw          $v1, 0xEC8($v1)
    ctx->pc = 0x55614cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
    // 0x556150: 0x8c538a08  lw          $s3, -0x75F8($v0)
    ctx->pc = 0x556150u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x556154: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x556154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x556158: 0x8c740008  lw          $s4, 0x8($v1)
    ctx->pc = 0x556158u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x55615c: 0xc0c9a58  jal         func_326960
    ctx->pc = 0x55615Cu;
    SET_GPR_U32(ctx, 31, 0x556164u);
    ctx->pc = 0x556160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55615Cu;
            // 0x556160: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556164u; }
        if (ctx->pc != 0x556164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556164u; }
        if (ctx->pc != 0x556164u) { return; }
    }
    ctx->pc = 0x556164u;
label_556164:
    // 0x556164: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x556164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x556168: 0xc123328  jal         func_48CCA0
    ctx->pc = 0x556168u;
    SET_GPR_U32(ctx, 31, 0x556170u);
    ctx->pc = 0x55616Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556168u;
            // 0x55616c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556170u; }
        if (ctx->pc != 0x556170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556170u; }
        if (ctx->pc != 0x556170u) { return; }
    }
    ctx->pc = 0x556170u;
label_556170:
    // 0x556170: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x556170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x556174: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x556174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556178: 0x54720005  bnel        $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x556178u;
    {
        const bool branch_taken_0x556178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x556178) {
            ctx->pc = 0x55617Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556178u;
            // 0x55617c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556190u;
            goto label_556190;
        }
    }
    ctx->pc = 0x556180u;
    // 0x556180: 0x9223005a  lbu         $v1, 0x5A($s1)
    ctx->pc = 0x556180u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
    // 0x556184: 0x50600070  beql        $v1, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x556184u;
    {
        const bool branch_taken_0x556184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x556184) {
            ctx->pc = 0x556188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556184u;
            // 0x556188: 0xae320068  sw          $s2, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556348u;
            goto label_556348;
        }
    }
    ctx->pc = 0x55618Cu;
    // 0x55618c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x55618cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_556190:
    // 0x556190: 0x1243001a  beq         $s2, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x556190u;
    {
        const bool branch_taken_0x556190 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x556194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556190u;
            // 0x556194: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x556190) {
            ctx->pc = 0x5561FCu;
            goto label_5561fc;
        }
    }
    ctx->pc = 0x556198u;
    // 0x556198: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x556198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x55619c: 0x52430012  beql        $s2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x55619Cu;
    {
        const bool branch_taken_0x55619c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x55619c) {
            ctx->pc = 0x5561A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55619Cu;
            // 0x5561a0: 0x26840060  addiu       $a0, $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5561E8u;
            goto label_5561e8;
        }
    }
    ctx->pc = 0x5561A4u;
    // 0x5561a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5561a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x5561a8: 0x5243000a  beql        $s2, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x5561A8u;
    {
        const bool branch_taken_0x5561a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x5561a8) {
            ctx->pc = 0x5561ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5561A8u;
            // 0x5561ac: 0x26840060  addiu       $a0, $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5561D4u;
            goto label_5561d4;
        }
    }
    ctx->pc = 0x5561B0u;
    // 0x5561b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5561b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5561b4: 0x52430005  beql        $s2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x5561B4u;
    {
        const bool branch_taken_0x5561b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x5561b4) {
            ctx->pc = 0x5561B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5561B4u;
            // 0x5561b8: 0x306700ff  andi        $a3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x5561CCu;
            goto label_5561cc;
        }
    }
    ctx->pc = 0x5561BCu;
    // 0x5561bc: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x5561BCu;
    {
        const bool branch_taken_0x5561bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x5561bc) {
            ctx->pc = 0x556210u;
            goto label_556210;
        }
    }
    ctx->pc = 0x5561C4u;
    // 0x5561c4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x5561C4u;
    {
        const bool branch_taken_0x5561c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5561c4) {
            ctx->pc = 0x556210u;
            goto label_556210;
        }
    }
    ctx->pc = 0x5561CCu;
label_5561cc:
    // 0x5561cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x5561CCu;
    {
        const bool branch_taken_0x5561cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5561D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5561CCu;
            // 0x5561d0: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5561cc) {
            ctx->pc = 0x556210u;
            goto label_556210;
        }
    }
    ctx->pc = 0x5561D4u;
label_5561d4:
    // 0x5561d4: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x5561D4u;
    SET_GPR_U32(ctx, 31, 0x5561DCu);
    ctx->pc = 0x5561D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5561D4u;
            // 0x5561d8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5561DCu; }
        if (ctx->pc != 0x5561DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5561DCu; }
        if (ctx->pc != 0x5561DCu) { return; }
    }
    ctx->pc = 0x5561DCu;
label_5561dc:
    // 0x5561dc: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x5561dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x5561e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x5561E0u;
    {
        const bool branch_taken_0x5561e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5561E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5561E0u;
            // 0x5561e4: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5561e0) {
            ctx->pc = 0x556210u;
            goto label_556210;
        }
    }
    ctx->pc = 0x5561E8u;
label_5561e8:
    // 0x5561e8: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x5561E8u;
    SET_GPR_U32(ctx, 31, 0x5561F0u);
    ctx->pc = 0x5561ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5561E8u;
            // 0x5561ec: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5561F0u; }
        if (ctx->pc != 0x5561F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5561F0u; }
        if (ctx->pc != 0x5561F0u) { return; }
    }
    ctx->pc = 0x5561F0u;
label_5561f0:
    // 0x5561f0: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x5561f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x5561f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x5561F4u;
    {
        const bool branch_taken_0x5561f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5561F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5561F4u;
            // 0x5561f8: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5561f4) {
            ctx->pc = 0x556210u;
            goto label_556210;
        }
    }
    ctx->pc = 0x5561FCu;
label_5561fc:
    // 0x5561fc: 0x26840060  addiu       $a0, $s4, 0x60
    ctx->pc = 0x5561fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x556200: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x556200u;
    SET_GPR_U32(ctx, 31, 0x556208u);
    ctx->pc = 0x556204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556200u;
            // 0x556204: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556208u; }
        if (ctx->pc != 0x556208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556208u; }
        if (ctx->pc != 0x556208u) { return; }
    }
    ctx->pc = 0x556208u;
label_556208:
    // 0x556208: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x556208u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x55620c: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x55620cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_556210:
    // 0x556210: 0x1240004c  beqz        $s2, . + 4 + (0x4C << 2)
    ctx->pc = 0x556210u;
    {
        const bool branch_taken_0x556210 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x556210) {
            ctx->pc = 0x556344u;
            goto label_556344;
        }
    }
    ctx->pc = 0x556218u;
    // 0x556218: 0x9223005a  lbu         $v1, 0x5A($s1)
    ctx->pc = 0x556218u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
    // 0x55621c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x55621Cu;
    {
        const bool branch_taken_0x55621c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x556220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55621Cu;
            // 0x556220: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55621c) {
            ctx->pc = 0x556230u;
            goto label_556230;
        }
    }
    ctx->pc = 0x556224u;
    // 0x556224: 0xae320060  sw          $s2, 0x60($s1)
    ctx->pc = 0x556224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 18));
    // 0x556228: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x556228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x55622c: 0xa223005a  sb          $v1, 0x5A($s1)
    ctx->pc = 0x55622cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 3));
label_556230:
    // 0x556230: 0x9223005c  lbu         $v1, 0x5C($s1)
    ctx->pc = 0x556230u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x556234: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x556234u;
    {
        const bool branch_taken_0x556234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x556234) {
            ctx->pc = 0x556344u;
            goto label_556344;
        }
    }
    ctx->pc = 0x55623Cu;
    // 0x55623c: 0x92230059  lbu         $v1, 0x59($s1)
    ctx->pc = 0x55623cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 89)));
    // 0x556240: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x556240u;
    {
        const bool branch_taken_0x556240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x556240) {
            ctx->pc = 0x556344u;
            goto label_556344;
        }
    }
    ctx->pc = 0x556248u;
    // 0x556248: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x556248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x55624c: 0x3c040300  lui         $a0, 0x300
    ctx->pc = 0x55624cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)768 << 16));
    // 0x556250: 0x8c659760  lw          $a1, -0x68A0($v1)
    ctx->pc = 0x556250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940512)));
    // 0x556254: 0x34830030  ori         $v1, $a0, 0x30
    ctx->pc = 0x556254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)48);
    // 0x556258: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x556258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x55625c: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x55625Cu;
    {
        const bool branch_taken_0x55625c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x55625c) {
            ctx->pc = 0x556344u;
            goto label_556344;
        }
    }
    ctx->pc = 0x556264u;
    // 0x556264: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x556264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x556268: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x556268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x55626c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x55626cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x556270: 0x0  nop
    ctx->pc = 0x556270u;
    // NOP
    // 0x556274: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x556274u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x556278: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x556278u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x55627c: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x55627Cu;
    {
        const bool branch_taken_0x55627c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x556280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55627Cu;
            // 0x556280: 0xe6210070  swc1        $f1, 0x70($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55627c) {
            ctx->pc = 0x556348u;
            goto label_556348;
        }
    }
    ctx->pc = 0x556284u;
    // 0x556284: 0x10e0002f  beqz        $a3, . + 4 + (0x2F << 2)
    ctx->pc = 0x556284u;
    {
        const bool branch_taken_0x556284 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x556284) {
            ctx->pc = 0x556344u;
            goto label_556344;
        }
    }
    ctx->pc = 0x55628Cu;
    // 0x55628c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55628cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x556290: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x556290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
    // 0x556294: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x556294u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
    // 0x556298: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x556298u;
    {
        const bool branch_taken_0x556298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x55629Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556298u;
            // 0x55629c: 0x24150061  addiu       $s5, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x556298) {
            ctx->pc = 0x5562A8u;
            goto label_5562a8;
        }
    }
    ctx->pc = 0x5562A0u;
    // 0x5562a0: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x5562a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x5562a4: 0x2406ffe4  addiu       $a2, $zero, -0x1C
    ctx->pc = 0x5562a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_5562a8:
    // 0x5562a8: 0x24c20037  addiu       $v0, $a2, 0x37
    ctx->pc = 0x5562a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 55));
    // 0x5562ac: 0x26840060  addiu       $a0, $s4, 0x60
    ctx->pc = 0x5562acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x5562b0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x5562b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x5562b4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x5562b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x5562b8: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x5562b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x5562bc: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x5562BCu;
    SET_GPR_U32(ctx, 31, 0x5562C4u);
    ctx->pc = 0x5562C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5562BCu;
            // 0x5562c0: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5562C4u; }
        if (ctx->pc != 0x5562C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5562C4u; }
        if (ctx->pc != 0x5562C4u) { return; }
    }
    ctx->pc = 0x5562C4u;
label_5562c4:
    // 0x5562c4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x5562C4u;
    {
        const bool branch_taken_0x5562c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5562c4) {
            ctx->pc = 0x5562C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5562C4u;
            // 0x5562c8: 0x24040170  addiu       $a0, $zero, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5562DCu;
            goto label_5562dc;
        }
    }
    ctx->pc = 0x5562CCu;
    // 0x5562cc: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x5562ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x5562d0: 0x34420030  ori         $v0, $v0, 0x30
    ctx->pc = 0x5562d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x5562d4: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x5562d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x5562d8: 0x24040170  addiu       $a0, $zero, 0x170
    ctx->pc = 0x5562d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
label_5562dc:
    // 0x5562dc: 0xc040180  jal         func_100600
    ctx->pc = 0x5562DCu;
    SET_GPR_U32(ctx, 31, 0x5562E4u);
    ctx->pc = 0x5562E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5562DCu;
            // 0x5562e0: 0xa220005c  sb          $zero, 0x5C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5562E4u; }
        if (ctx->pc != 0x5562E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5562E4u; }
        if (ctx->pc != 0x5562E4u) { return; }
    }
    ctx->pc = 0x5562E4u;
label_5562e4:
    // 0x5562e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x5562e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5562e8: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x5562E8u;
    {
        const bool branch_taken_0x5562e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5562e8) {
            ctx->pc = 0x5562ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5562E8u;
            // 0x5562ec: 0xae240090  sw          $a0, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556338u;
            goto label_556338;
        }
    }
    ctx->pc = 0x5562F0u;
    // 0x5562f0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x5562f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x5562f4: 0x2622005c  addiu       $v0, $s1, 0x5C
    ctx->pc = 0x5562f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x5562f8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x5562f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x5562fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x5562fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x556300: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x556300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x556304: 0xffa80010  sd          $t0, 0x10($sp)
    ctx->pc = 0x556304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 8));
    // 0x556308: 0x2402009d  addiu       $v0, $zero, 0x9D
    ctx->pc = 0x556308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x55630c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x55630cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x556310: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x556310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556314: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x556314u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556318: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x556318u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55631c: 0x24060136  addiu       $a2, $zero, 0x136
    ctx->pc = 0x55631cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
    // 0x556320: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x556320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x556324: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x556324u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556328: 0xc0f122c  jal         func_3C48B0
    ctx->pc = 0x556328u;
    SET_GPR_U32(ctx, 31, 0x556330u);
    ctx->pc = 0x55632Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556328u;
            // 0x55632c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C48B0u;
    if (runtime->hasFunction(0x3C48B0u)) {
        auto targetFn = runtime->lookupFunction(0x3C48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556330u; }
        if (ctx->pc != 0x556330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C48B0_0x3c48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556330u; }
        if (ctx->pc != 0x556330u) { return; }
    }
    ctx->pc = 0x556330u;
label_556330:
    // 0x556330: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x556330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556334: 0xae240090  sw          $a0, 0x90($s1)
    ctx->pc = 0x556334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 4));
label_556338:
    // 0x556338: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x556338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x55633c: 0xa220005a  sb          $zero, 0x5A($s1)
    ctx->pc = 0x55633cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x556340: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x556340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
label_556344:
    // 0x556344: 0xae320068  sw          $s2, 0x68($s1)
    ctx->pc = 0x556344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 18));
label_556348:
    // 0x556348: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x556348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x55634c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x55634cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x556350: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x556350u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x556354: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x556354u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x556358: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x556358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x55635c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x55635cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x556360: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x556360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x556364: 0x3e00008  jr          $ra
    ctx->pc = 0x556364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x556368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556364u;
            // 0x556368: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55636Cu;
    // 0x55636c: 0x0  nop
    ctx->pc = 0x55636cu;
    // NOP
}
