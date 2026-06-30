#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048A9A0
// Address: 0x48a9a0 - 0x48ab70
void sub_0048A9A0_0x48a9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048A9A0_0x48a9a0");
#endif

    switch (ctx->pc) {
        case 0x48a9f4u: goto label_48a9f4;
        case 0x48aa04u: goto label_48aa04;
        case 0x48aa34u: goto label_48aa34;
        case 0x48aa44u: goto label_48aa44;
        case 0x48aa74u: goto label_48aa74;
        case 0x48aa84u: goto label_48aa84;
        case 0x48aab4u: goto label_48aab4;
        case 0x48aac4u: goto label_48aac4;
        case 0x48ab1cu: goto label_48ab1c;
        case 0x48ab2cu: goto label_48ab2c;
        case 0x48ab3cu: goto label_48ab3c;
        case 0x48ab54u: goto label_48ab54;
        default: break;
    }

    ctx->pc = 0x48a9a0u;

    // 0x48a9a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48a9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48a9a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48a9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x48a9a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48a9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48a9ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48a9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48a9b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48a9b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a9b4: 0x12200067  beqz        $s1, . + 4 + (0x67 << 2)
    ctx->pc = 0x48A9B4u;
    {
        const bool branch_taken_0x48a9b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A9B4u;
            // 0x48a9b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a9b4) {
            ctx->pc = 0x48AB54u;
            goto label_48ab54;
        }
    }
    ctx->pc = 0x48A9BCu;
    // 0x48a9bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x48a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x48a9c0: 0x2442f8f0  addiu       $v0, $v0, -0x710
    ctx->pc = 0x48a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965488));
    // 0x48a9c4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x48a9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x48a9c8: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x48a9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x48a9cc: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x48A9CCu;
    {
        const bool branch_taken_0x48a9cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a9cc) {
            ctx->pc = 0x48A9D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48A9CCu;
            // 0x48a9d0: 0x8e2500f4  lw          $a1, 0xF4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48AA0Cu;
            goto label_48aa0c;
        }
    }
    ctx->pc = 0x48A9D4u;
    // 0x48a9d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x48a9d8: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x48a9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x48a9dc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x48a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48a9e0: 0x45082b  sltu        $at, $v0, $a1
    ctx->pc = 0x48a9e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x48a9e4: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x48A9E4u;
    {
        const bool branch_taken_0x48a9e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x48a9e4) {
            ctx->pc = 0x48A9FCu;
            goto label_48a9fc;
        }
    }
    ctx->pc = 0x48A9ECu;
    // 0x48a9ec: 0xc0fe4e8  jal         func_3F93A0
    ctx->pc = 0x48A9ECu;
    SET_GPR_U32(ctx, 31, 0x48A9F4u);
    ctx->pc = 0x3F93A0u;
    if (runtime->hasFunction(0x3F93A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F93A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A9F4u; }
        if (ctx->pc != 0x48A9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F93A0_0x3f93a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A9F4u; }
        if (ctx->pc != 0x48A9F4u) { return; }
    }
    ctx->pc = 0x48A9F4u;
label_48a9f4:
    // 0x48a9f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48A9F4u;
    {
        const bool branch_taken_0x48a9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A9F4u;
            // 0x48a9f8: 0xae2000f0  sw          $zero, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a9f4) {
            ctx->pc = 0x48AA08u;
            goto label_48aa08;
        }
    }
    ctx->pc = 0x48A9FCu;
label_48a9fc:
    // 0x48a9fc: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x48A9FCu;
    SET_GPR_U32(ctx, 31, 0x48AA04u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AA04u; }
        if (ctx->pc != 0x48AA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AA04u; }
        if (ctx->pc != 0x48AA04u) { return; }
    }
    ctx->pc = 0x48AA04u;
label_48aa04:
    // 0x48aa04: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x48aa04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
label_48aa08:
    // 0x48aa08: 0x8e2500f4  lw          $a1, 0xF4($s1)
    ctx->pc = 0x48aa08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_48aa0c:
    // 0x48aa0c: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x48AA0Cu;
    {
        const bool branch_taken_0x48aa0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48aa0c) {
            ctx->pc = 0x48AA10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48AA0Cu;
            // 0x48aa10: 0x8e2500f8  lw          $a1, 0xF8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48AA4Cu;
            goto label_48aa4c;
        }
    }
    ctx->pc = 0x48AA14u;
    // 0x48aa14: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x48aa18: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x48aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x48aa1c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x48aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48aa20: 0x45082b  sltu        $at, $v0, $a1
    ctx->pc = 0x48aa20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x48aa24: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x48AA24u;
    {
        const bool branch_taken_0x48aa24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x48aa24) {
            ctx->pc = 0x48AA3Cu;
            goto label_48aa3c;
        }
    }
    ctx->pc = 0x48AA2Cu;
    // 0x48aa2c: 0xc0fe4e8  jal         func_3F93A0
    ctx->pc = 0x48AA2Cu;
    SET_GPR_U32(ctx, 31, 0x48AA34u);
    ctx->pc = 0x3F93A0u;
    if (runtime->hasFunction(0x3F93A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F93A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AA34u; }
        if (ctx->pc != 0x48AA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F93A0_0x3f93a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AA34u; }
        if (ctx->pc != 0x48AA34u) { return; }
    }
    ctx->pc = 0x48AA34u;
label_48aa34:
    // 0x48aa34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48AA34u;
    {
        const bool branch_taken_0x48aa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48AA34u;
            // 0x48aa38: 0xae2000f4  sw          $zero, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48aa34) {
            ctx->pc = 0x48AA48u;
            goto label_48aa48;
        }
    }
    ctx->pc = 0x48AA3Cu;
label_48aa3c:
    // 0x48aa3c: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x48AA3Cu;
    SET_GPR_U32(ctx, 31, 0x48AA44u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AA44u; }
        if (ctx->pc != 0x48AA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AA44u; }
        if (ctx->pc != 0x48AA44u) { return; }
    }
    ctx->pc = 0x48AA44u;
label_48aa44:
    // 0x48aa44: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x48aa44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_48aa48:
    // 0x48aa48: 0x8e2500f8  lw          $a1, 0xF8($s1)
    ctx->pc = 0x48aa48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_48aa4c:
    // 0x48aa4c: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x48AA4Cu;
    {
        const bool branch_taken_0x48aa4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48aa4c) {
            ctx->pc = 0x48AA50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48AA4Cu;
            // 0x48aa50: 0x8e2500fc  lw          $a1, 0xFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48AA8Cu;
            goto label_48aa8c;
        }
    }
    ctx->pc = 0x48AA54u;
    // 0x48aa54: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x48aa58: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x48aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x48aa5c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x48aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48aa60: 0x45082b  sltu        $at, $v0, $a1
    ctx->pc = 0x48aa60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x48aa64: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x48AA64u;
    {
        const bool branch_taken_0x48aa64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x48aa64) {
            ctx->pc = 0x48AA7Cu;
            goto label_48aa7c;
        }
    }
    ctx->pc = 0x48AA6Cu;
    // 0x48aa6c: 0xc0fe4e8  jal         func_3F93A0
    ctx->pc = 0x48AA6Cu;
    SET_GPR_U32(ctx, 31, 0x48AA74u);
    ctx->pc = 0x3F93A0u;
    if (runtime->hasFunction(0x3F93A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F93A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AA74u; }
        if (ctx->pc != 0x48AA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F93A0_0x3f93a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AA74u; }
        if (ctx->pc != 0x48AA74u) { return; }
    }
    ctx->pc = 0x48AA74u;
label_48aa74:
    // 0x48aa74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48AA74u;
    {
        const bool branch_taken_0x48aa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48AA74u;
            // 0x48aa78: 0xae2000f8  sw          $zero, 0xF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48aa74) {
            ctx->pc = 0x48AA88u;
            goto label_48aa88;
        }
    }
    ctx->pc = 0x48AA7Cu;
label_48aa7c:
    // 0x48aa7c: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x48AA7Cu;
    SET_GPR_U32(ctx, 31, 0x48AA84u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AA84u; }
        if (ctx->pc != 0x48AA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AA84u; }
        if (ctx->pc != 0x48AA84u) { return; }
    }
    ctx->pc = 0x48AA84u;
label_48aa84:
    // 0x48aa84: 0xae2000f8  sw          $zero, 0xF8($s1)
    ctx->pc = 0x48aa84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
label_48aa88:
    // 0x48aa88: 0x8e2500fc  lw          $a1, 0xFC($s1)
    ctx->pc = 0x48aa88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_48aa8c:
    // 0x48aa8c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x48AA8Cu;
    {
        const bool branch_taken_0x48aa8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48aa8c) {
            ctx->pc = 0x48AAC8u;
            goto label_48aac8;
        }
    }
    ctx->pc = 0x48AA94u;
    // 0x48aa94: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x48aa98: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x48aa98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x48aa9c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x48aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48aaa0: 0x45082b  sltu        $at, $v0, $a1
    ctx->pc = 0x48aaa0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x48aaa4: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x48AAA4u;
    {
        const bool branch_taken_0x48aaa4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x48aaa4) {
            ctx->pc = 0x48AABCu;
            goto label_48aabc;
        }
    }
    ctx->pc = 0x48AAACu;
    // 0x48aaac: 0xc0fe4e8  jal         func_3F93A0
    ctx->pc = 0x48AAACu;
    SET_GPR_U32(ctx, 31, 0x48AAB4u);
    ctx->pc = 0x3F93A0u;
    if (runtime->hasFunction(0x3F93A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F93A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AAB4u; }
        if (ctx->pc != 0x48AAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F93A0_0x3f93a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AAB4u; }
        if (ctx->pc != 0x48AAB4u) { return; }
    }
    ctx->pc = 0x48AAB4u;
label_48aab4:
    // 0x48aab4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48AAB4u;
    {
        const bool branch_taken_0x48aab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48AAB4u;
            // 0x48aab8: 0xae2000fc  sw          $zero, 0xFC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48aab4) {
            ctx->pc = 0x48AAC8u;
            goto label_48aac8;
        }
    }
    ctx->pc = 0x48AABCu;
label_48aabc:
    // 0x48aabc: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x48AABCu;
    SET_GPR_U32(ctx, 31, 0x48AAC4u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AAC4u; }
        if (ctx->pc != 0x48AAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AAC4u; }
        if (ctx->pc != 0x48AAC4u) { return; }
    }
    ctx->pc = 0x48AAC4u;
label_48aac4:
    // 0x48aac4: 0xae2000fc  sw          $zero, 0xFC($s1)
    ctx->pc = 0x48aac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
label_48aac8:
    // 0x48aac8: 0x5220001d  beql        $s1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x48AAC8u;
    {
        const bool branch_taken_0x48aac8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x48aac8) {
            ctx->pc = 0x48AACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48AAC8u;
            // 0x48aacc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48AB40u;
            goto label_48ab40;
        }
    }
    ctx->pc = 0x48AAD0u;
    // 0x48aad0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x48aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x48aad4: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x48aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x48aad8: 0x2463f8b0  addiu       $v1, $v1, -0x750
    ctx->pc = 0x48aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965424));
    // 0x48aadc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x48AADCu;
    {
        const bool branch_taken_0x48aadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48AADCu;
            // 0x48aae0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48aadc) {
            ctx->pc = 0x48AB3Cu;
            goto label_48ab3c;
        }
    }
    ctx->pc = 0x48AAE4u;
    // 0x48aae4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x48aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x48aae8: 0x2442f8d8  addiu       $v0, $v0, -0x728
    ctx->pc = 0x48aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965464));
    // 0x48aaec: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x48aaecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x48aaf0: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x48aaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x48aaf4: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x48AAF4u;
    {
        const bool branch_taken_0x48aaf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48aaf4) {
            ctx->pc = 0x48AAF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48AAF4u;
            // 0x48aaf8: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48AB34u;
            goto label_48ab34;
        }
    }
    ctx->pc = 0x48AAFCu;
    // 0x48aafc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x48ab00: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x48ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x48ab04: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x48ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48ab08: 0x45082b  sltu        $at, $v0, $a1
    ctx->pc = 0x48ab08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x48ab0c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x48AB0Cu;
    {
        const bool branch_taken_0x48ab0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x48ab0c) {
            ctx->pc = 0x48AB24u;
            goto label_48ab24;
        }
    }
    ctx->pc = 0x48AB14u;
    // 0x48ab14: 0xc0fe4e8  jal         func_3F93A0
    ctx->pc = 0x48AB14u;
    SET_GPR_U32(ctx, 31, 0x48AB1Cu);
    ctx->pc = 0x3F93A0u;
    if (runtime->hasFunction(0x3F93A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F93A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AB1Cu; }
        if (ctx->pc != 0x48AB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F93A0_0x3f93a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AB1Cu; }
        if (ctx->pc != 0x48AB1Cu) { return; }
    }
    ctx->pc = 0x48AB1Cu;
label_48ab1c:
    // 0x48ab1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48AB1Cu;
    {
        const bool branch_taken_0x48ab1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48AB1Cu;
            // 0x48ab20: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ab1c) {
            ctx->pc = 0x48AB30u;
            goto label_48ab30;
        }
    }
    ctx->pc = 0x48AB24u;
label_48ab24:
    // 0x48ab24: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x48AB24u;
    SET_GPR_U32(ctx, 31, 0x48AB2Cu);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AB2Cu; }
        if (ctx->pc != 0x48AB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AB2Cu; }
        if (ctx->pc != 0x48AB2Cu) { return; }
    }
    ctx->pc = 0x48AB2Cu;
label_48ab2c:
    // 0x48ab2c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x48ab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_48ab30:
    // 0x48ab30: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x48ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_48ab34:
    // 0x48ab34: 0xc04e7d4  jal         func_139F50
    ctx->pc = 0x48AB34u;
    SET_GPR_U32(ctx, 31, 0x48AB3Cu);
    ctx->pc = 0x48AB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AB34u;
            // 0x48ab38: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139F50u;
    if (runtime->hasFunction(0x139F50u)) {
        auto targetFn = runtime->lookupFunction(0x139F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AB3Cu; }
        if (ctx->pc != 0x48AB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139F50_0x139f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AB3Cu; }
        if (ctx->pc != 0x48AB3Cu) { return; }
    }
    ctx->pc = 0x48AB3Cu;
label_48ab3c:
    // 0x48ab3c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x48ab3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_48ab40:
    // 0x48ab40: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x48ab40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x48ab44: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48AB44u;
    {
        const bool branch_taken_0x48ab44 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x48ab44) {
            ctx->pc = 0x48AB48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48AB44u;
            // 0x48ab48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48AB58u;
            goto label_48ab58;
        }
    }
    ctx->pc = 0x48AB4Cu;
    // 0x48ab4c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x48AB4Cu;
    SET_GPR_U32(ctx, 31, 0x48AB54u);
    ctx->pc = 0x48AB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AB4Cu;
            // 0x48ab50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AB54u; }
        if (ctx->pc != 0x48AB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AB54u; }
        if (ctx->pc != 0x48AB54u) { return; }
    }
    ctx->pc = 0x48AB54u;
label_48ab54:
    // 0x48ab54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x48ab54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48ab58:
    // 0x48ab58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48ab58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48ab5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48ab5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48ab60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48ab60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ab64: 0x3e00008  jr          $ra
    ctx->pc = 0x48AB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48AB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48AB64u;
            // 0x48ab68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48AB6Cu;
    // 0x48ab6c: 0x0  nop
    ctx->pc = 0x48ab6cu;
    // NOP
}
