#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EE000
// Address: 0x4ee000 - 0x4ee0f0
void sub_004EE000_0x4ee000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE000_0x4ee000");
#endif

    switch (ctx->pc) {
        case 0x4ee000u: goto label_4ee000;
        case 0x4ee004u: goto label_4ee004;
        case 0x4ee008u: goto label_4ee008;
        case 0x4ee00cu: goto label_4ee00c;
        case 0x4ee010u: goto label_4ee010;
        case 0x4ee014u: goto label_4ee014;
        case 0x4ee018u: goto label_4ee018;
        case 0x4ee01cu: goto label_4ee01c;
        case 0x4ee020u: goto label_4ee020;
        case 0x4ee024u: goto label_4ee024;
        case 0x4ee028u: goto label_4ee028;
        case 0x4ee02cu: goto label_4ee02c;
        case 0x4ee030u: goto label_4ee030;
        case 0x4ee034u: goto label_4ee034;
        case 0x4ee038u: goto label_4ee038;
        case 0x4ee03cu: goto label_4ee03c;
        case 0x4ee040u: goto label_4ee040;
        case 0x4ee044u: goto label_4ee044;
        case 0x4ee048u: goto label_4ee048;
        case 0x4ee04cu: goto label_4ee04c;
        case 0x4ee050u: goto label_4ee050;
        case 0x4ee054u: goto label_4ee054;
        case 0x4ee058u: goto label_4ee058;
        case 0x4ee05cu: goto label_4ee05c;
        case 0x4ee060u: goto label_4ee060;
        case 0x4ee064u: goto label_4ee064;
        case 0x4ee068u: goto label_4ee068;
        case 0x4ee06cu: goto label_4ee06c;
        case 0x4ee070u: goto label_4ee070;
        case 0x4ee074u: goto label_4ee074;
        case 0x4ee078u: goto label_4ee078;
        case 0x4ee07cu: goto label_4ee07c;
        case 0x4ee080u: goto label_4ee080;
        case 0x4ee084u: goto label_4ee084;
        case 0x4ee088u: goto label_4ee088;
        case 0x4ee08cu: goto label_4ee08c;
        case 0x4ee090u: goto label_4ee090;
        case 0x4ee094u: goto label_4ee094;
        case 0x4ee098u: goto label_4ee098;
        case 0x4ee09cu: goto label_4ee09c;
        case 0x4ee0a0u: goto label_4ee0a0;
        case 0x4ee0a4u: goto label_4ee0a4;
        case 0x4ee0a8u: goto label_4ee0a8;
        case 0x4ee0acu: goto label_4ee0ac;
        case 0x4ee0b0u: goto label_4ee0b0;
        case 0x4ee0b4u: goto label_4ee0b4;
        case 0x4ee0b8u: goto label_4ee0b8;
        case 0x4ee0bcu: goto label_4ee0bc;
        case 0x4ee0c0u: goto label_4ee0c0;
        case 0x4ee0c4u: goto label_4ee0c4;
        case 0x4ee0c8u: goto label_4ee0c8;
        case 0x4ee0ccu: goto label_4ee0cc;
        case 0x4ee0d0u: goto label_4ee0d0;
        case 0x4ee0d4u: goto label_4ee0d4;
        case 0x4ee0d8u: goto label_4ee0d8;
        case 0x4ee0dcu: goto label_4ee0dc;
        case 0x4ee0e0u: goto label_4ee0e0;
        case 0x4ee0e4u: goto label_4ee0e4;
        case 0x4ee0e8u: goto label_4ee0e8;
        case 0x4ee0ecu: goto label_4ee0ec;
        default: break;
    }

    ctx->pc = 0x4ee000u;

label_4ee000:
    // 0x4ee000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ee000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4ee004:
    // 0x4ee004: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ee004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4ee008:
    // 0x4ee008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ee008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ee00c:
    // 0x4ee00c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ee00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ee010:
    // 0x4ee010: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ee010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ee014:
    // 0x4ee014: 0x8ca40da0  lw          $a0, 0xDA0($a1)
    ctx->pc = 0x4ee014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3488)));
label_4ee018:
    // 0x4ee018: 0x30832200  andi        $v1, $a0, 0x2200
    ctx->pc = 0x4ee018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8704);
label_4ee01c:
    // 0x4ee01c: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
label_4ee020:
    if (ctx->pc == 0x4EE020u) {
        ctx->pc = 0x4EE020u;
            // 0x4ee020: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE024u;
        goto label_4ee024;
    }
    ctx->pc = 0x4EE01Cu;
    {
        const bool branch_taken_0x4ee01c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EE020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE01Cu;
            // 0x4ee020: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee01c) {
            ctx->pc = 0x4EE0D4u;
            goto label_4ee0d4;
        }
    }
    ctx->pc = 0x4EE024u;
label_4ee024:
    // 0x4ee024: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x4ee024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
label_4ee028:
    // 0x4ee028: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_4ee02c:
    if (ctx->pc == 0x4EE02Cu) {
        ctx->pc = 0x4EE02Cu;
            // 0x4ee02c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE030u;
        goto label_4ee030;
    }
    ctx->pc = 0x4EE028u;
    {
        const bool branch_taken_0x4ee028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee028) {
            ctx->pc = 0x4EE02Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE028u;
            // 0x4ee02c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EE048u;
            goto label_4ee048;
        }
    }
    ctx->pc = 0x4EE030u;
label_4ee030:
    // 0x4ee030: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ee030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ee034:
    // 0x4ee034: 0xc14b7d4  jal         func_52DF50
label_4ee038:
    if (ctx->pc == 0x4EE038u) {
        ctx->pc = 0x4EE038u;
            // 0x4ee038: 0x8c443fe8  lw          $a0, 0x3FE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16360)));
        ctx->pc = 0x4EE03Cu;
        goto label_4ee03c;
    }
    ctx->pc = 0x4EE034u;
    SET_GPR_U32(ctx, 31, 0x4EE03Cu);
    ctx->pc = 0x4EE038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE034u;
            // 0x4ee038: 0x8c443fe8  lw          $a0, 0x3FE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16360)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52DF50u;
    if (runtime->hasFunction(0x52DF50u)) {
        auto targetFn = runtime->lookupFunction(0x52DF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE03Cu; }
        if (ctx->pc != 0x4EE03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052DF50_0x52df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE03Cu; }
        if (ctx->pc != 0x4EE03Cu) { return; }
    }
    ctx->pc = 0x4EE03Cu;
label_4ee03c:
    // 0x4ee03c: 0x10000002  b           . + 4 + (0x2 << 2)
label_4ee040:
    if (ctx->pc == 0x4EE040u) {
        ctx->pc = 0x4EE040u;
            // 0x4ee040: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x4EE044u;
        goto label_4ee044;
    }
    ctx->pc = 0x4EE03Cu;
    {
        const bool branch_taken_0x4ee03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EE040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE03Cu;
            // 0x4ee040: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee03c) {
            ctx->pc = 0x4EE048u;
            goto label_4ee048;
        }
    }
    ctx->pc = 0x4EE044u;
label_4ee044:
    // 0x4ee044: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4ee044u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ee048:
    // 0x4ee048: 0x54600023  bnel        $v1, $zero, . + 4 + (0x23 << 2)
label_4ee04c:
    if (ctx->pc == 0x4EE04Cu) {
        ctx->pc = 0x4EE04Cu;
            // 0x4ee04c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4EE050u;
        goto label_4ee050;
    }
    ctx->pc = 0x4EE048u;
    {
        const bool branch_taken_0x4ee048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ee048) {
            ctx->pc = 0x4EE04Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE048u;
            // 0x4ee04c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EE0D8u;
            goto label_4ee0d8;
        }
    }
    ctx->pc = 0x4EE050u;
label_4ee050:
    // 0x4ee050: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x4ee050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_4ee054:
    // 0x4ee054: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x4ee054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4ee058:
    // 0x4ee058: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
label_4ee05c:
    if (ctx->pc == 0x4EE05Cu) {
        ctx->pc = 0x4EE05Cu;
            // 0x4ee05c: 0x8e040d98  lw          $a0, 0xD98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
        ctx->pc = 0x4EE060u;
        goto label_4ee060;
    }
    ctx->pc = 0x4EE058u;
    {
        const bool branch_taken_0x4ee058 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4ee058) {
            ctx->pc = 0x4EE05Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE058u;
            // 0x4ee05c: 0x8e040d98  lw          $a0, 0xD98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EE06Cu;
            goto label_4ee06c;
        }
    }
    ctx->pc = 0x4EE060u;
label_4ee060:
    // 0x4ee060: 0x1000001c  b           . + 4 + (0x1C << 2)
label_4ee064:
    if (ctx->pc == 0x4EE064u) {
        ctx->pc = 0x4EE068u;
        goto label_4ee068;
    }
    ctx->pc = 0x4EE060u;
    {
        const bool branch_taken_0x4ee060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee060) {
            ctx->pc = 0x4EE0D4u;
            goto label_4ee0d4;
        }
    }
    ctx->pc = 0x4EE068u;
label_4ee068:
    // 0x4ee068: 0x8e040d98  lw          $a0, 0xD98($s0)
    ctx->pc = 0x4ee068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4ee06c:
    // 0x4ee06c: 0x8e220cbc  lw          $v0, 0xCBC($s1)
    ctx->pc = 0x4ee06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3260)));
label_4ee070:
    // 0x4ee070: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x4ee070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4ee074:
    // 0x4ee074: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4ee074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4ee078:
    // 0x4ee078: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4ee078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4ee07c:
    // 0x4ee07c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x4ee07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ee080:
    // 0x4ee080: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ee080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ee084:
    // 0x4ee084: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ee084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ee088:
    // 0x4ee088: 0x320f809  jalr        $t9
label_4ee08c:
    if (ctx->pc == 0x4EE08Cu) {
        ctx->pc = 0x4EE090u;
        goto label_4ee090;
    }
    ctx->pc = 0x4EE088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EE090u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EE090u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EE090u; }
            if (ctx->pc != 0x4EE090u) { return; }
        }
        }
    }
    ctx->pc = 0x4EE090u;
label_4ee090:
    // 0x4ee090: 0x8e020a68  lw          $v0, 0xA68($s0)
    ctx->pc = 0x4ee090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
label_4ee094:
    // 0x4ee094: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4ee098:
    if (ctx->pc == 0x4EE098u) {
        ctx->pc = 0x4EE098u;
            // 0x4ee098: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4EE09Cu;
        goto label_4ee09c;
    }
    ctx->pc = 0x4EE094u;
    {
        const bool branch_taken_0x4ee094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee094) {
            ctx->pc = 0x4EE098u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE094u;
            // 0x4ee098: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EE0C4u;
            goto label_4ee0c4;
        }
    }
    ctx->pc = 0x4EE09Cu;
label_4ee09c:
    // 0x4ee09c: 0x8e020a68  lw          $v0, 0xA68($s0)
    ctx->pc = 0x4ee09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
label_4ee0a0:
    // 0x4ee0a0: 0x26030a50  addiu       $v1, $s0, 0xA50
    ctx->pc = 0x4ee0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_4ee0a4:
    // 0x4ee0a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ee0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ee0a8:
    // 0x4ee0a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ee0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ee0ac:
    // 0x4ee0ac: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4ee0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4ee0b0:
    // 0x4ee0b0: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x4ee0b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_4ee0b4:
    // 0x4ee0b4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4ee0b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4ee0b8:
    // 0x4ee0b8: 0x320f809  jalr        $t9
label_4ee0bc:
    if (ctx->pc == 0x4EE0BCu) {
        ctx->pc = 0x4EE0C0u;
        goto label_4ee0c0;
    }
    ctx->pc = 0x4EE0B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EE0C0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EE0C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EE0C0u; }
            if (ctx->pc != 0x4EE0C0u) { return; }
        }
        }
    }
    ctx->pc = 0x4EE0C0u;
label_4ee0c0:
    // 0x4ee0c0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4ee0c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ee0c4:
    // 0x4ee0c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ee0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ee0c8:
    // 0x4ee0c8: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4ee0c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4ee0cc:
    // 0x4ee0cc: 0x320f809  jalr        $t9
label_4ee0d0:
    if (ctx->pc == 0x4EE0D0u) {
        ctx->pc = 0x4EE0D0u;
            // 0x4ee0d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4EE0D4u;
        goto label_4ee0d4;
    }
    ctx->pc = 0x4EE0CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EE0D4u);
        ctx->pc = 0x4EE0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE0CCu;
            // 0x4ee0d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EE0D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EE0D4u; }
            if (ctx->pc != 0x4EE0D4u) { return; }
        }
        }
    }
    ctx->pc = 0x4EE0D4u;
label_4ee0d4:
    // 0x4ee0d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ee0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ee0d8:
    // 0x4ee0d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ee0d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ee0dc:
    // 0x4ee0dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ee0dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ee0e0:
    // 0x4ee0e0: 0x3e00008  jr          $ra
label_4ee0e4:
    if (ctx->pc == 0x4EE0E4u) {
        ctx->pc = 0x4EE0E4u;
            // 0x4ee0e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4EE0E8u;
        goto label_4ee0e8;
    }
    ctx->pc = 0x4EE0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE0E0u;
            // 0x4ee0e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EE0E8u;
label_4ee0e8:
    // 0x4ee0e8: 0x0  nop
    ctx->pc = 0x4ee0e8u;
    // NOP
label_4ee0ec:
    // 0x4ee0ec: 0x0  nop
    ctx->pc = 0x4ee0ecu;
    // NOP
}
