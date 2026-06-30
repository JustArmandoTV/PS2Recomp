#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003460F0
// Address: 0x3460f0 - 0x3463a0
void sub_003460F0_0x3460f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003460F0_0x3460f0");
#endif

    switch (ctx->pc) {
        case 0x346140u: goto label_346140;
        case 0x346160u: goto label_346160;
        case 0x346174u: goto label_346174;
        case 0x346180u: goto label_346180;
        case 0x3461a8u: goto label_3461a8;
        case 0x3461c4u: goto label_3461c4;
        case 0x3461d0u: goto label_3461d0;
        case 0x346218u: goto label_346218;
        case 0x346278u: goto label_346278;
        case 0x3462d8u: goto label_3462d8;
        case 0x34633cu: goto label_34633c;
        default: break;
    }

    ctx->pc = 0x3460f0u;

    // 0x3460f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3460f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3460f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3460f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3460f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3460f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3460fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3460fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x346100: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x346100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x346104: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x346104u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346108: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x346108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34610c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34610cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x346110: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x346110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x346114: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x346114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x346118: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x346118u;
    {
        const bool branch_taken_0x346118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x34611Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346118u;
            // 0x34611c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346118) {
            ctx->pc = 0x346198u;
            goto label_346198;
        }
    }
    ctx->pc = 0x346120u;
    // 0x346120: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x346120u;
    {
        const bool branch_taken_0x346120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x346120) {
            ctx->pc = 0x346124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346120u;
            // 0x346124: 0x8e710004  lw          $s1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x346130u;
            goto label_346130;
        }
    }
    ctx->pc = 0x346128u;
    // 0x346128: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x346128u;
    {
        const bool branch_taken_0x346128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346128) {
            ctx->pc = 0x346350u;
            goto label_346350;
        }
    }
    ctx->pc = 0x346130u;
label_346130:
    // 0x346130: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x346130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x346134: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x346134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x346138: 0xc040138  jal         func_1004E0
    ctx->pc = 0x346138u;
    SET_GPR_U32(ctx, 31, 0x346140u);
    ctx->pc = 0x34613Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346138u;
            // 0x34613c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346140u; }
        if (ctx->pc != 0x346140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346140u; }
        if (ctx->pc != 0x346140u) { return; }
    }
    ctx->pc = 0x346140u;
label_346140:
    // 0x346140: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x346140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x346144: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x346144u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x346148: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x346148u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34614c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34614cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346150: 0x24a56370  addiu       $a1, $a1, 0x6370
    ctx->pc = 0x346150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25456));
    // 0x346154: 0x24c65a60  addiu       $a2, $a2, 0x5A60
    ctx->pc = 0x346154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23136));
    // 0x346158: 0xc040840  jal         func_102100
    ctx->pc = 0x346158u;
    SET_GPR_U32(ctx, 31, 0x346160u);
    ctx->pc = 0x34615Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346158u;
            // 0x34615c: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346160u; }
        if (ctx->pc != 0x346160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346160u; }
        if (ctx->pc != 0x346160u) { return; }
    }
    ctx->pc = 0x346160u;
label_346160:
    // 0x346160: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x346160u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x346164: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x346164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346168: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x346168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x34616c: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x34616cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x346170: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x346170u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_346174:
    // 0x346174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346178: 0xc0d191c  jal         func_346470
    ctx->pc = 0x346178u;
    SET_GPR_U32(ctx, 31, 0x346180u);
    ctx->pc = 0x34617Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346178u;
            // 0x34617c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x346470u;
    if (runtime->hasFunction(0x346470u)) {
        auto targetFn = runtime->lookupFunction(0x346470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346180u; }
        if (ctx->pc != 0x346180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00346470_0x346470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346180u; }
        if (ctx->pc != 0x346180u) { return; }
    }
    ctx->pc = 0x346180u;
label_346180:
    // 0x346180: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x346180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x346184: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x346184u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x346188: 0x1e40fffa  bgtz        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x346188u;
    {
        const bool branch_taken_0x346188 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x34618Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346188u;
            // 0x34618c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346188) {
            ctx->pc = 0x346174u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_346174;
        }
    }
    ctx->pc = 0x346190u;
    // 0x346190: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x346190u;
    {
        const bool branch_taken_0x346190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346190) {
            ctx->pc = 0x346350u;
            goto label_346350;
        }
    }
    ctx->pc = 0x346198u;
label_346198:
    // 0x346198: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x346198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x34619c: 0x26720010  addiu       $s2, $s3, 0x10
    ctx->pc = 0x34619cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x3461a0: 0xc040138  jal         func_1004E0
    ctx->pc = 0x3461A0u;
    SET_GPR_U32(ctx, 31, 0x3461A8u);
    ctx->pc = 0x3461A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3461A0u;
            // 0x3461a4: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3461A8u; }
        if (ctx->pc != 0x3461A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3461A8u; }
        if (ctx->pc != 0x3461A8u) { return; }
    }
    ctx->pc = 0x3461A8u;
label_3461a8:
    // 0x3461a8: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x3461a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x3461ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3461acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3461b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3461b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3461b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3461b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3461b8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3461b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3461bc: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3461BCu;
    SET_GPR_U32(ctx, 31, 0x3461C4u);
    ctx->pc = 0x3461C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3461BCu;
            // 0x3461c0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3461C4u; }
        if (ctx->pc != 0x3461C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3461C4u; }
        if (ctx->pc != 0x3461C4u) { return; }
    }
    ctx->pc = 0x3461C4u;
label_3461c4:
    // 0x3461c4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3461c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3461c8: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x3461c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x3461cc: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x3461ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3461d0:
    // 0x3461d0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3461d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3461d4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3461d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3461d8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3461d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3461dc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3461DCu;
    {
        const bool branch_taken_0x3461dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3461dc) {
            ctx->pc = 0x3461E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3461DCu;
            // 0x3461e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3461F4u;
            goto label_3461f4;
        }
    }
    ctx->pc = 0x3461E4u;
    // 0x3461e4: 0x28620013  slti        $v0, $v1, 0x13
    ctx->pc = 0x3461e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x3461e8: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3461E8u;
    {
        const bool branch_taken_0x3461e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3461e8) {
            ctx->pc = 0x3462D0u;
            goto label_3462d0;
        }
    }
    ctx->pc = 0x3461F0u;
    // 0x3461f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3461f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3461f4:
    // 0x3461f4: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3461F4u;
    {
        const bool branch_taken_0x3461f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3461f4) {
            ctx->pc = 0x346270u;
            goto label_346270;
        }
    }
    ctx->pc = 0x3461FCu;
    // 0x3461fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3461FCu;
    {
        const bool branch_taken_0x3461fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3461fc) {
            ctx->pc = 0x346210u;
            goto label_346210;
        }
    }
    ctx->pc = 0x346204u;
    // 0x346204: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x346204u;
    {
        const bool branch_taken_0x346204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346204) {
            ctx->pc = 0x346330u;
            goto label_346330;
        }
    }
    ctx->pc = 0x34620Cu;
    // 0x34620c: 0x0  nop
    ctx->pc = 0x34620cu;
    // NOP
label_346210:
    // 0x346210: 0xc040180  jal         func_100600
    ctx->pc = 0x346210u;
    SET_GPR_U32(ctx, 31, 0x346218u);
    ctx->pc = 0x346214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346210u;
            // 0x346214: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346218u; }
        if (ctx->pc != 0x346218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346218u; }
        if (ctx->pc != 0x346218u) { return; }
    }
    ctx->pc = 0x346218u;
label_346218:
    // 0x346218: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x346218u;
    {
        const bool branch_taken_0x346218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x346218) {
            ctx->pc = 0x346268u;
            goto label_346268;
        }
    }
    ctx->pc = 0x346220u;
    // 0x346220: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x346220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x346224: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x346224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x346228: 0x2463cfe0  addiu       $v1, $v1, -0x3020
    ctx->pc = 0x346228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954976));
    // 0x34622c: 0x248424a0  addiu       $a0, $a0, 0x24A0
    ctx->pc = 0x34622cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    // 0x346230: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x346230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x346234: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x346234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x346238: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x346238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x34623c: 0x24632460  addiu       $v1, $v1, 0x2460
    ctx->pc = 0x34623cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9312));
    // 0x346240: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x346240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x346244: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x346244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x346248: 0x248457b0  addiu       $a0, $a0, 0x57B0
    ctx->pc = 0x346248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22448));
    // 0x34624c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34624cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x346250: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x346250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x346254: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x346254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x346258: 0x246359c0  addiu       $v1, $v1, 0x59C0
    ctx->pc = 0x346258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22976));
    // 0x34625c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x34625cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x346260: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x346260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x346264: 0x0  nop
    ctx->pc = 0x346264u;
    // NOP
label_346268:
    // 0x346268: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x346268u;
    {
        const bool branch_taken_0x346268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34626Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346268u;
            // 0x34626c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346268) {
            ctx->pc = 0x346330u;
            goto label_346330;
        }
    }
    ctx->pc = 0x346270u;
label_346270:
    // 0x346270: 0xc040180  jal         func_100600
    ctx->pc = 0x346270u;
    SET_GPR_U32(ctx, 31, 0x346278u);
    ctx->pc = 0x346274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346270u;
            // 0x346274: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346278u; }
        if (ctx->pc != 0x346278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346278u; }
        if (ctx->pc != 0x346278u) { return; }
    }
    ctx->pc = 0x346278u;
label_346278:
    // 0x346278: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x346278u;
    {
        const bool branch_taken_0x346278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x346278) {
            ctx->pc = 0x3462C8u;
            goto label_3462c8;
        }
    }
    ctx->pc = 0x346280u;
    // 0x346280: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x346280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x346284: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x346284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x346288: 0x2463cfe0  addiu       $v1, $v1, -0x3020
    ctx->pc = 0x346288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954976));
    // 0x34628c: 0x248424a0  addiu       $a0, $a0, 0x24A0
    ctx->pc = 0x34628cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    // 0x346290: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x346290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x346294: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x346294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x346298: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x346298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x34629c: 0x24632460  addiu       $v1, $v1, 0x2460
    ctx->pc = 0x34629cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9312));
    // 0x3462a0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3462a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x3462a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3462a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3462a8: 0x248457b0  addiu       $a0, $a0, 0x57B0
    ctx->pc = 0x3462a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22448));
    // 0x3462ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3462acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3462b0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3462b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3462b4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3462b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3462b8: 0x24634390  addiu       $v1, $v1, 0x4390
    ctx->pc = 0x3462b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17296));
    // 0x3462bc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3462bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3462c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3462c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3462c4: 0x0  nop
    ctx->pc = 0x3462c4u;
    // NOP
label_3462c8:
    // 0x3462c8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3462C8u;
    {
        const bool branch_taken_0x3462c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3462CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3462C8u;
            // 0x3462cc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3462c8) {
            ctx->pc = 0x346330u;
            goto label_346330;
        }
    }
    ctx->pc = 0x3462D0u;
label_3462d0:
    // 0x3462d0: 0xc040180  jal         func_100600
    ctx->pc = 0x3462D0u;
    SET_GPR_U32(ctx, 31, 0x3462D8u);
    ctx->pc = 0x3462D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3462D0u;
            // 0x3462d4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3462D8u; }
        if (ctx->pc != 0x3462D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3462D8u; }
        if (ctx->pc != 0x3462D8u) { return; }
    }
    ctx->pc = 0x3462D8u;
label_3462d8:
    // 0x3462d8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3462D8u;
    {
        const bool branch_taken_0x3462d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3462d8) {
            ctx->pc = 0x346328u;
            goto label_346328;
        }
    }
    ctx->pc = 0x3462E0u;
    // 0x3462e0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3462e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3462e4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3462e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x3462e8: 0x2463cfe0  addiu       $v1, $v1, -0x3020
    ctx->pc = 0x3462e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954976));
    // 0x3462ec: 0x248424a0  addiu       $a0, $a0, 0x24A0
    ctx->pc = 0x3462ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    // 0x3462f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3462f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3462f4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3462f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3462f8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3462f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3462fc: 0x24632460  addiu       $v1, $v1, 0x2460
    ctx->pc = 0x3462fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9312));
    // 0x346300: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x346300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x346304: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x346304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x346308: 0x248457b0  addiu       $a0, $a0, 0x57B0
    ctx->pc = 0x346308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22448));
    // 0x34630c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34630cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x346310: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x346310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x346314: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x346314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x346318: 0x24638830  addiu       $v1, $v1, -0x77D0
    ctx->pc = 0x346318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936624));
    // 0x34631c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x34631cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x346320: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x346320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x346324: 0x0  nop
    ctx->pc = 0x346324u;
    // NOP
label_346328:
    // 0x346328: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x346328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x34632c: 0x0  nop
    ctx->pc = 0x34632cu;
    // NOP
label_346330:
    // 0x346330: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x346330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x346334: 0xc0d2648  jal         func_349920
    ctx->pc = 0x346334u;
    SET_GPR_U32(ctx, 31, 0x34633Cu);
    ctx->pc = 0x346338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346334u;
            // 0x346338: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x349920u;
    if (runtime->hasFunction(0x349920u)) {
        auto targetFn = runtime->lookupFunction(0x349920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34633Cu; }
        if (ctx->pc != 0x34633Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00349920_0x349920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34633Cu; }
        if (ctx->pc != 0x34633Cu) { return; }
    }
    ctx->pc = 0x34633Cu;
label_34633c:
    // 0x34633c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x34633cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x346340: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x346340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x346344: 0x1e00ffa2  bgtz        $s0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x346344u;
    {
        const bool branch_taken_0x346344 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x346348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346344u;
            // 0x346348: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346344) {
            ctx->pc = 0x3461D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3461d0;
        }
    }
    ctx->pc = 0x34634Cu;
    // 0x34634c: 0x0  nop
    ctx->pc = 0x34634cu;
    // NOP
label_346350:
    // 0x346350: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x346350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x346354: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x346354u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x346358: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x346358u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34635c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34635cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x346360: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x346360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x346364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346368: 0x3e00008  jr          $ra
    ctx->pc = 0x346368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34636Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346368u;
            // 0x34636c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x346370u;
    // 0x346370: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x346370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x346374: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x346374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x346378: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x346378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x34637c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34637cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x346380: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x346380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
    // 0x346384: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x346384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x346388: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x346388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x34638c: 0x244257f0  addiu       $v0, $v0, 0x57F0
    ctx->pc = 0x34638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22512));
    // 0x346390: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x346390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x346394: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x346394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346398: 0x3e00008  jr          $ra
    ctx->pc = 0x346398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34639Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346398u;
            // 0x34639c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3463A0u;
}
