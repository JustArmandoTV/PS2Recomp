#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00399FF0
// Address: 0x399ff0 - 0x39a0f0
void sub_00399FF0_0x399ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399FF0_0x399ff0");
#endif

    switch (ctx->pc) {
        case 0x399ff0u: goto label_399ff0;
        case 0x399ff4u: goto label_399ff4;
        case 0x399ff8u: goto label_399ff8;
        case 0x399ffcu: goto label_399ffc;
        case 0x39a000u: goto label_39a000;
        case 0x39a004u: goto label_39a004;
        case 0x39a008u: goto label_39a008;
        case 0x39a00cu: goto label_39a00c;
        case 0x39a010u: goto label_39a010;
        case 0x39a014u: goto label_39a014;
        case 0x39a018u: goto label_39a018;
        case 0x39a01cu: goto label_39a01c;
        case 0x39a020u: goto label_39a020;
        case 0x39a024u: goto label_39a024;
        case 0x39a028u: goto label_39a028;
        case 0x39a02cu: goto label_39a02c;
        case 0x39a030u: goto label_39a030;
        case 0x39a034u: goto label_39a034;
        case 0x39a038u: goto label_39a038;
        case 0x39a03cu: goto label_39a03c;
        case 0x39a040u: goto label_39a040;
        case 0x39a044u: goto label_39a044;
        case 0x39a048u: goto label_39a048;
        case 0x39a04cu: goto label_39a04c;
        case 0x39a050u: goto label_39a050;
        case 0x39a054u: goto label_39a054;
        case 0x39a058u: goto label_39a058;
        case 0x39a05cu: goto label_39a05c;
        case 0x39a060u: goto label_39a060;
        case 0x39a064u: goto label_39a064;
        case 0x39a068u: goto label_39a068;
        case 0x39a06cu: goto label_39a06c;
        case 0x39a070u: goto label_39a070;
        case 0x39a074u: goto label_39a074;
        case 0x39a078u: goto label_39a078;
        case 0x39a07cu: goto label_39a07c;
        case 0x39a080u: goto label_39a080;
        case 0x39a084u: goto label_39a084;
        case 0x39a088u: goto label_39a088;
        case 0x39a08cu: goto label_39a08c;
        case 0x39a090u: goto label_39a090;
        case 0x39a094u: goto label_39a094;
        case 0x39a098u: goto label_39a098;
        case 0x39a09cu: goto label_39a09c;
        case 0x39a0a0u: goto label_39a0a0;
        case 0x39a0a4u: goto label_39a0a4;
        case 0x39a0a8u: goto label_39a0a8;
        case 0x39a0acu: goto label_39a0ac;
        case 0x39a0b0u: goto label_39a0b0;
        case 0x39a0b4u: goto label_39a0b4;
        case 0x39a0b8u: goto label_39a0b8;
        case 0x39a0bcu: goto label_39a0bc;
        case 0x39a0c0u: goto label_39a0c0;
        case 0x39a0c4u: goto label_39a0c4;
        case 0x39a0c8u: goto label_39a0c8;
        case 0x39a0ccu: goto label_39a0cc;
        case 0x39a0d0u: goto label_39a0d0;
        case 0x39a0d4u: goto label_39a0d4;
        case 0x39a0d8u: goto label_39a0d8;
        case 0x39a0dcu: goto label_39a0dc;
        case 0x39a0e0u: goto label_39a0e0;
        case 0x39a0e4u: goto label_39a0e4;
        case 0x39a0e8u: goto label_39a0e8;
        case 0x39a0ecu: goto label_39a0ec;
        default: break;
    }

    ctx->pc = 0x399ff0u;

label_399ff0:
    // 0x399ff0: 0x3e00008  jr          $ra
label_399ff4:
    if (ctx->pc == 0x399FF4u) {
        ctx->pc = 0x399FF4u;
            // 0x399ff4: 0x8c820084  lw          $v0, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->pc = 0x399FF8u;
        goto label_399ff8;
    }
    ctx->pc = 0x399FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399FF0u;
            // 0x399ff4: 0x8c820084  lw          $v0, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x399FF8u;
label_399ff8:
    // 0x399ff8: 0x0  nop
    ctx->pc = 0x399ff8u;
    // NOP
label_399ffc:
    // 0x399ffc: 0x0  nop
    ctx->pc = 0x399ffcu;
    // NOP
label_39a000:
    // 0x39a000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39a000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_39a004:
    // 0x39a004: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39a004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39a008:
    // 0x39a008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39a00c:
    // 0x39a00c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x39a00cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_39a010:
    // 0x39a010: 0x50a3000d  beql        $a1, $v1, . + 4 + (0xD << 2)
label_39a014:
    if (ctx->pc == 0x39A014u) {
        ctx->pc = 0x39A014u;
            // 0x39a014: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x39A018u;
        goto label_39a018;
    }
    ctx->pc = 0x39A010u;
    {
        const bool branch_taken_0x39a010 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x39a010) {
            ctx->pc = 0x39A014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39A010u;
            // 0x39a014: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39A048u;
            goto label_39a048;
        }
    }
    ctx->pc = 0x39A018u;
label_39a018:
    // 0x39a018: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39a018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39a01c:
    // 0x39a01c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_39a020:
    if (ctx->pc == 0x39A020u) {
        ctx->pc = 0x39A020u;
            // 0x39a020: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x39A024u;
        goto label_39a024;
    }
    ctx->pc = 0x39A01Cu;
    {
        const bool branch_taken_0x39a01c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x39a01c) {
            ctx->pc = 0x39A020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39A01Cu;
            // 0x39a020: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39A038u;
            goto label_39a038;
        }
    }
    ctx->pc = 0x39A024u;
label_39a024:
    // 0x39a024: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39a024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39a028:
    // 0x39a028: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_39a02c:
    if (ctx->pc == 0x39A02Cu) {
        ctx->pc = 0x39A030u;
        goto label_39a030;
    }
    ctx->pc = 0x39A028u;
    {
        const bool branch_taken_0x39a028 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x39a028) {
            ctx->pc = 0x39A044u;
            goto label_39a044;
        }
    }
    ctx->pc = 0x39A030u;
label_39a030:
    // 0x39a030: 0x10000004  b           . + 4 + (0x4 << 2)
label_39a034:
    if (ctx->pc == 0x39A034u) {
        ctx->pc = 0x39A038u;
        goto label_39a038;
    }
    ctx->pc = 0x39A030u;
    {
        const bool branch_taken_0x39a030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a030) {
            ctx->pc = 0x39A044u;
            goto label_39a044;
        }
    }
    ctx->pc = 0x39A038u;
label_39a038:
    // 0x39a038: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x39a038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_39a03c:
    // 0x39a03c: 0x320f809  jalr        $t9
label_39a040:
    if (ctx->pc == 0x39A040u) {
        ctx->pc = 0x39A044u;
        goto label_39a044;
    }
    ctx->pc = 0x39A03Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39A044u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x39A044u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39A044u; }
            if (ctx->pc != 0x39A044u) { return; }
        }
        }
    }
    ctx->pc = 0x39A044u;
label_39a044:
    // 0x39a044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39a048:
    // 0x39a048: 0x3e00008  jr          $ra
label_39a04c:
    if (ctx->pc == 0x39A04Cu) {
        ctx->pc = 0x39A04Cu;
            // 0x39a04c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x39A050u;
        goto label_39a050;
    }
    ctx->pc = 0x39A048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A048u;
            // 0x39a04c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39A050u;
label_39a050:
    // 0x39a050: 0x80e66c4  j           func_399B10
label_39a054:
    if (ctx->pc == 0x39A054u) {
        ctx->pc = 0x39A054u;
            // 0x39a054: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x39A058u;
        goto label_39a058;
    }
    ctx->pc = 0x39A050u;
    ctx->pc = 0x39A054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A050u;
            // 0x39a054: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x399B10u;
    {
        auto targetFn = runtime->lookupFunction(0x399B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x39A058u;
label_39a058:
    // 0x39a058: 0x0  nop
    ctx->pc = 0x39a058u;
    // NOP
label_39a05c:
    // 0x39a05c: 0x0  nop
    ctx->pc = 0x39a05cu;
    // NOP
label_39a060:
    // 0x39a060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39a060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39a064:
    // 0x39a064: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39a064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39a068:
    // 0x39a068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39a068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39a06c:
    // 0x39a06c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39a06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39a070:
    // 0x39a070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39a070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39a074:
    // 0x39a074: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_39a078:
    if (ctx->pc == 0x39A078u) {
        ctx->pc = 0x39A078u;
            // 0x39a078: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39A07Cu;
        goto label_39a07c;
    }
    ctx->pc = 0x39A074u;
    {
        const bool branch_taken_0x39a074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A074u;
            // 0x39a078: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a074) {
            ctx->pc = 0x39A0D0u;
            goto label_39a0d0;
        }
    }
    ctx->pc = 0x39A07Cu;
label_39a07c:
    // 0x39a07c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_39a080:
    // 0x39a080: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39a080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_39a084:
    // 0x39a084: 0x246382c0  addiu       $v1, $v1, -0x7D40
    ctx->pc = 0x39a084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935232));
label_39a088:
    // 0x39a088: 0x244282f8  addiu       $v0, $v0, -0x7D08
    ctx->pc = 0x39a088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935288));
label_39a08c:
    // 0x39a08c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x39a08cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_39a090:
    // 0x39a090: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_39a094:
    if (ctx->pc == 0x39A094u) {
        ctx->pc = 0x39A094u;
            // 0x39a094: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x39A098u;
        goto label_39a098;
    }
    ctx->pc = 0x39A090u;
    {
        const bool branch_taken_0x39a090 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A090u;
            // 0x39a094: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a090) {
            ctx->pc = 0x39A0B8u;
            goto label_39a0b8;
        }
    }
    ctx->pc = 0x39A098u;
label_39a098:
    // 0x39a098: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39a098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_39a09c:
    // 0x39a09c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_39a0a0:
    // 0x39a0a0: 0x24638370  addiu       $v1, $v1, -0x7C90
    ctx->pc = 0x39a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935408));
label_39a0a4:
    // 0x39a0a4: 0x244283a8  addiu       $v0, $v0, -0x7C58
    ctx->pc = 0x39a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935464));
label_39a0a8:
    // 0x39a0a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x39a0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_39a0ac:
    // 0x39a0ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39a0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a0b0:
    // 0x39a0b0: 0xc0e683c  jal         func_39A0F0
label_39a0b4:
    if (ctx->pc == 0x39A0B4u) {
        ctx->pc = 0x39A0B4u;
            // 0x39a0b4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x39A0B8u;
        goto label_39a0b8;
    }
    ctx->pc = 0x39A0B0u;
    SET_GPR_U32(ctx, 31, 0x39A0B8u);
    ctx->pc = 0x39A0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A0B0u;
            // 0x39a0b4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39A0F0u;
    if (runtime->hasFunction(0x39A0F0u)) {
        auto targetFn = runtime->lookupFunction(0x39A0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A0B8u; }
        if (ctx->pc != 0x39A0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039A0F0_0x39a0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A0B8u; }
        if (ctx->pc != 0x39A0B8u) { return; }
    }
    ctx->pc = 0x39A0B8u;
label_39a0b8:
    // 0x39a0b8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x39a0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_39a0bc:
    // 0x39a0bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x39a0bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_39a0c0:
    // 0x39a0c0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_39a0c4:
    if (ctx->pc == 0x39A0C4u) {
        ctx->pc = 0x39A0C4u;
            // 0x39a0c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39A0C8u;
        goto label_39a0c8;
    }
    ctx->pc = 0x39A0C0u;
    {
        const bool branch_taken_0x39a0c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x39a0c0) {
            ctx->pc = 0x39A0C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39A0C0u;
            // 0x39a0c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39A0D4u;
            goto label_39a0d4;
        }
    }
    ctx->pc = 0x39A0C8u;
label_39a0c8:
    // 0x39a0c8: 0xc0400a8  jal         func_1002A0
label_39a0cc:
    if (ctx->pc == 0x39A0CCu) {
        ctx->pc = 0x39A0CCu;
            // 0x39a0cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39A0D0u;
        goto label_39a0d0;
    }
    ctx->pc = 0x39A0C8u;
    SET_GPR_U32(ctx, 31, 0x39A0D0u);
    ctx->pc = 0x39A0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A0C8u;
            // 0x39a0cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A0D0u; }
        if (ctx->pc != 0x39A0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A0D0u; }
        if (ctx->pc != 0x39A0D0u) { return; }
    }
    ctx->pc = 0x39A0D0u;
label_39a0d0:
    // 0x39a0d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39a0d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39a0d4:
    // 0x39a0d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39a0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39a0d8:
    // 0x39a0d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39a0d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39a0dc:
    // 0x39a0dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39a0dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39a0e0:
    // 0x39a0e0: 0x3e00008  jr          $ra
label_39a0e4:
    if (ctx->pc == 0x39A0E4u) {
        ctx->pc = 0x39A0E4u;
            // 0x39a0e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x39A0E8u;
        goto label_39a0e8;
    }
    ctx->pc = 0x39A0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A0E0u;
            // 0x39a0e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39A0E8u;
label_39a0e8:
    // 0x39a0e8: 0x0  nop
    ctx->pc = 0x39a0e8u;
    // NOP
label_39a0ec:
    // 0x39a0ec: 0x0  nop
    ctx->pc = 0x39a0ecu;
    // NOP
}
