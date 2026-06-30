#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0048
// Address: 0x1b0048 - 0x1b01c0
void sub_001B0048_0x1b0048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0048_0x1b0048");
#endif

    switch (ctx->pc) {
        case 0x1b0094u: goto label_1b0094;
        case 0x1b00c4u: goto label_1b00c4;
        case 0x1b00dcu: goto label_1b00dc;
        case 0x1b0134u: goto label_1b0134;
        case 0x1b0164u: goto label_1b0164;
        case 0x1b017cu: goto label_1b017c;
        default: break;
    }

    ctx->pc = 0x1b0048u;

    // 0x1b0048: 0x8c833720  lw          $v1, 0x3720($a0)
    ctx->pc = 0x1b0048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14112)));
    // 0x1b004c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b004cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0050: 0x8c842030  lw          $a0, 0x2030($a0)
    ctx->pc = 0x1b0050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x1b0054: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0054u;
    {
        const bool branch_taken_0x1b0054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0054u;
            // 0x1b0058: 0x24650ad0  addiu       $a1, $v1, 0xAD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0054) {
            ctx->pc = 0x1B0070u;
            goto label_1b0070;
        }
    }
    ctx->pc = 0x1B005Cu;
    // 0x1b005c: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x1b005cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1b0060: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b0060u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0064: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1b0064u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b0068: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b0068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b006c: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x1b006cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_1b0070:
    // 0x1b0070: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0078u;
    // 0x1b0078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b007c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b007cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0084: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b0088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b008c: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B008Cu;
    SET_GPR_U32(ctx, 31, 0x1B0094u);
    ctx->pc = 0x1B0090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B008Cu;
            // 0x1b0090: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0094u; }
        if (ctx->pc != 0x1B0094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0094u; }
        if (ctx->pc != 0x1B0094u) { return; }
    }
    ctx->pc = 0x1B0094u;
label_1b0094:
    // 0x1b0094: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b0094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b0098: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0098u;
    {
        const bool branch_taken_0x1b0098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B009Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0098u;
            // 0x1b009c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0098) {
            ctx->pc = 0x1B00B8u;
            goto label_1b00b8;
        }
    }
    ctx->pc = 0x1B00A0u;
    // 0x1b00a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b00a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b00a4: 0x34a50188  ori         $a1, $a1, 0x188
    ctx->pc = 0x1b00a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)392);
    // 0x1b00a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b00a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b00ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b00acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b00b0: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B00B0u;
    ctx->pc = 0x1B00B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B00B0u;
            // 0x1b00b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B00B8u;
label_1b00b8:
    // 0x1b00b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b00b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b00bc: 0xc06c070  jal         func_1B01C0
    ctx->pc = 0x1B00BCu;
    SET_GPR_U32(ctx, 31, 0x1B00C4u);
    ctx->pc = 0x1B00C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B00BCu;
            // 0x1b00c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B01C0u;
    if (runtime->hasFunction(0x1B01C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B01C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B00C4u; }
        if (ctx->pc != 0x1B00C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01C0_0x1b01c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B00C4u; }
        if (ctx->pc != 0x1B00C4u) { return; }
    }
    ctx->pc = 0x1B00C4u;
label_1b00c4:
    // 0x1b00c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b00c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b00c8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b00c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b00cc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B00CCu;
    {
        const bool branch_taken_0x1b00cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B00D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B00CCu;
            // 0x1b00d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b00cc) {
            ctx->pc = 0x1B00E8u;
            goto label_1b00e8;
        }
    }
    ctx->pc = 0x1B00D4u;
    // 0x1b00d4: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1B00D4u;
    SET_GPR_U32(ctx, 31, 0x1B00DCu);
    ctx->pc = 0x1B00D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B00D4u;
            // 0x1b00d8: 0x34a50f30  ori         $a1, $a1, 0xF30 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3888);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B00DCu; }
        if (ctx->pc != 0x1B00DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B00DCu; }
        if (ctx->pc != 0x1B00DCu) { return; }
    }
    ctx->pc = 0x1B00DCu;
label_1b00dc:
    // 0x1b00dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B00DCu;
    {
        const bool branch_taken_0x1b00dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B00E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B00DCu;
            // 0x1b00e0: 0x8e020980  lw          $v0, 0x980($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b00dc) {
            ctx->pc = 0x1B00F8u;
            goto label_1b00f8;
        }
    }
    ctx->pc = 0x1B00E4u;
    // 0x1b00e4: 0x0  nop
    ctx->pc = 0x1b00e4u;
    // NOP
label_1b00e8:
    // 0x1b00e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1b00e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b00ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b00ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b00f0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b00f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1b00f4: 0x8e020980  lw          $v0, 0x980($s0)
    ctx->pc = 0x1b00f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2432)));
label_1b00f8:
    // 0x1b00f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b00f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b00fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b00fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b0100: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b0100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0104: 0xae020980  sw          $v0, 0x980($s0)
    ctx->pc = 0x1b0104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
    // 0x1b0108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b010c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B010Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B010Cu;
            // 0x1b0110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0114u;
    // 0x1b0114: 0x0  nop
    ctx->pc = 0x1b0114u;
    // NOP
    // 0x1b0118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b011c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b011cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0120: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0124: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0128: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b0128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b012c: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B012Cu;
    SET_GPR_U32(ctx, 31, 0x1B0134u);
    ctx->pc = 0x1B0130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B012Cu;
            // 0x1b0130: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0134u; }
        if (ctx->pc != 0x1B0134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0134u; }
        if (ctx->pc != 0x1B0134u) { return; }
    }
    ctx->pc = 0x1B0134u;
label_1b0134:
    // 0x1b0134: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b0134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b0138: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0138u;
    {
        const bool branch_taken_0x1b0138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B013Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0138u;
            // 0x1b013c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0138) {
            ctx->pc = 0x1B0158u;
            goto label_1b0158;
        }
    }
    ctx->pc = 0x1B0140u;
    // 0x1b0140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0144: 0x34a50189  ori         $a1, $a1, 0x189
    ctx->pc = 0x1b0144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)393);
    // 0x1b0148: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b014c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b014cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0150: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B0150u;
    ctx->pc = 0x1B0154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0150u;
            // 0x1b0154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B0158u;
label_1b0158:
    // 0x1b0158: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b0158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b015c: 0xc06c070  jal         func_1B01C0
    ctx->pc = 0x1B015Cu;
    SET_GPR_U32(ctx, 31, 0x1B0164u);
    ctx->pc = 0x1B0160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B015Cu;
            // 0x1b0160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B01C0u;
    if (runtime->hasFunction(0x1B01C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B01C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0164u; }
        if (ctx->pc != 0x1B0164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01C0_0x1b01c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0164u; }
        if (ctx->pc != 0x1B0164u) { return; }
    }
    ctx->pc = 0x1B0164u;
label_1b0164:
    // 0x1b0164: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b0164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0168: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b0168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b016c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B016Cu;
    {
        const bool branch_taken_0x1b016c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B016Cu;
            // 0x1b0170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b016c) {
            ctx->pc = 0x1B0188u;
            goto label_1b0188;
        }
    }
    ctx->pc = 0x1B0174u;
    // 0x1b0174: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1B0174u;
    SET_GPR_U32(ctx, 31, 0x1B017Cu);
    ctx->pc = 0x1B0178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0174u;
            // 0x1b0178: 0x34a50f31  ori         $a1, $a1, 0xF31 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3889);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B017Cu; }
        if (ctx->pc != 0x1B017Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B017Cu; }
        if (ctx->pc != 0x1B017Cu) { return; }
    }
    ctx->pc = 0x1B017Cu;
label_1b017c:
    // 0x1b017c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B017Cu;
    {
        const bool branch_taken_0x1b017c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B017Cu;
            // 0x1b0180: 0x8e020980  lw          $v0, 0x980($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b017c) {
            ctx->pc = 0x1B01A0u;
            goto label_1b01a0;
        }
    }
    ctx->pc = 0x1B0184u;
    // 0x1b0184: 0x0  nop
    ctx->pc = 0x1b0184u;
    // NOP
label_1b0188:
    // 0x1b0188: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1b0188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1b018c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b018cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b0190: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1b0190u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1b0194: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1b0194u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1b0198: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1b0198u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1b019c: 0x8e020980  lw          $v0, 0x980($s0)
    ctx->pc = 0x1b019cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2432)));
label_1b01a0:
    // 0x1b01a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b01a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b01a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b01a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b01a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b01a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b01ac: 0xae020980  sw          $v0, 0x980($s0)
    ctx->pc = 0x1b01acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
    // 0x1b01b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b01b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b01b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B01B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B01B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B01B4u;
            // 0x1b01b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B01BCu;
    // 0x1b01bc: 0x0  nop
    ctx->pc = 0x1b01bcu;
    // NOP
}
