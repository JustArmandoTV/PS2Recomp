#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DF020
// Address: 0x1df020 - 0x1df160
void sub_001DF020_0x1df020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF020_0x1df020");
#endif

    switch (ctx->pc) {
        case 0x1df05cu: goto label_1df05c;
        case 0x1df070u: goto label_1df070;
        case 0x1df090u: goto label_1df090;
        case 0x1df0a0u: goto label_1df0a0;
        case 0x1df0b4u: goto label_1df0b4;
        case 0x1df0ccu: goto label_1df0cc;
        case 0x1df12cu: goto label_1df12c;
        case 0x1df144u: goto label_1df144;
        default: break;
    }

    ctx->pc = 0x1df020u;

    // 0x1df020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1df020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1df024: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1df024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1df028: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1df028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1df02c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1df02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1df030: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1df030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df034: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF034u;
    {
        const bool branch_taken_0x1df034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF034u;
            // 0x1df038: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df034) {
            ctx->pc = 0x1DF050u;
            goto label_1df050;
        }
    }
    ctx->pc = 0x1DF03Cu;
    // 0x1df03c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1df03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1df040: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF040u;
    {
        const bool branch_taken_0x1df040 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1df040) {
            ctx->pc = 0x1DF044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF040u;
            // 0x1df044: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF054u;
            goto label_1df054;
        }
    }
    ctx->pc = 0x1DF048u;
    // 0x1df048: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DF048u;
    {
        const bool branch_taken_0x1df048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF048u;
            // 0x1df04c: 0x2404011c  addiu       $a0, $zero, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df048) {
            ctx->pc = 0x1DF098u;
            goto label_1df098;
        }
    }
    ctx->pc = 0x1DF050u;
label_1df050:
    // 0x1df050: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x1df050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_1df054:
    // 0x1df054: 0xc040180  jal         func_100600
    ctx->pc = 0x1DF054u;
    SET_GPR_U32(ctx, 31, 0x1DF05Cu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF05Cu; }
        if (ctx->pc != 0x1DF05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF05Cu; }
        if (ctx->pc != 0x1DF05Cu) { return; }
    }
    ctx->pc = 0x1DF05Cu;
label_1df05c:
    // 0x1df05c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DF05Cu;
    {
        const bool branch_taken_0x1df05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF05Cu;
            // 0x1df060: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df05c) {
            ctx->pc = 0x1DF090u;
            goto label_1df090;
        }
    }
    ctx->pc = 0x1DF064u;
    // 0x1df064: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1df064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df068: 0xc077c5c  jal         func_1DF170
    ctx->pc = 0x1DF068u;
    SET_GPR_U32(ctx, 31, 0x1DF070u);
    ctx->pc = 0x1DF06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF068u;
            // 0x1df06c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF170u;
    if (runtime->hasFunction(0x1DF170u)) {
        auto targetFn = runtime->lookupFunction(0x1DF170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF070u; }
        if (ctx->pc != 0x1DF070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF170_0x1df170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF070u; }
        if (ctx->pc != 0x1DF070u) { return; }
    }
    ctx->pc = 0x1DF070u;
label_1df070:
    // 0x1df070: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1df070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1df074: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1df074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1df078: 0x2463d0a0  addiu       $v1, $v1, -0x2F60
    ctx->pc = 0x1df078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955168));
    // 0x1df07c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1df07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1df080: 0xae230058  sw          $v1, 0x58($s1)
    ctx->pc = 0x1df080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
    // 0x1df084: 0x2484c890  addiu       $a0, $a0, -0x3770
    ctx->pc = 0x1df084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953104));
    // 0x1df088: 0xc077c58  jal         func_1DF160
    ctx->pc = 0x1DF088u;
    SET_GPR_U32(ctx, 31, 0x1DF090u);
    ctx->pc = 0x1DF08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF088u;
            // 0x1df08c: 0xae22011c  sw          $v0, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF160u;
    if (runtime->hasFunction(0x1DF160u)) {
        auto targetFn = runtime->lookupFunction(0x1DF160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF090u; }
        if (ctx->pc != 0x1DF090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF160_0x1df160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF090u; }
        if (ctx->pc != 0x1DF090u) { return; }
    }
    ctx->pc = 0x1DF090u;
label_1df090:
    // 0x1df090: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1DF090u;
    {
        const bool branch_taken_0x1df090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF090u;
            // 0x1df094: 0xae110550  sw          $s1, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df090) {
            ctx->pc = 0x1DF0D0u;
            goto label_1df0d0;
        }
    }
    ctx->pc = 0x1DF098u;
label_1df098:
    // 0x1df098: 0xc040180  jal         func_100600
    ctx->pc = 0x1DF098u;
    SET_GPR_U32(ctx, 31, 0x1DF0A0u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0A0u; }
        if (ctx->pc != 0x1DF0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0A0u; }
        if (ctx->pc != 0x1DF0A0u) { return; }
    }
    ctx->pc = 0x1DF0A0u;
label_1df0a0:
    // 0x1df0a0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DF0A0u;
    {
        const bool branch_taken_0x1df0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF0A0u;
            // 0x1df0a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df0a0) {
            ctx->pc = 0x1DF0CCu;
            goto label_1df0cc;
        }
    }
    ctx->pc = 0x1DF0A8u;
    // 0x1df0a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1df0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df0ac: 0xc077c5c  jal         func_1DF170
    ctx->pc = 0x1DF0ACu;
    SET_GPR_U32(ctx, 31, 0x1DF0B4u);
    ctx->pc = 0x1DF0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF0ACu;
            // 0x1df0b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF170u;
    if (runtime->hasFunction(0x1DF170u)) {
        auto targetFn = runtime->lookupFunction(0x1DF170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0B4u; }
        if (ctx->pc != 0x1DF0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF170_0x1df170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0B4u; }
        if (ctx->pc != 0x1DF0B4u) { return; }
    }
    ctx->pc = 0x1DF0B4u;
label_1df0b4:
    // 0x1df0b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1df0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1df0b8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1df0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1df0bc: 0x2442d070  addiu       $v0, $v0, -0x2F90
    ctx->pc = 0x1df0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955120));
    // 0x1df0c0: 0x2484c8a0  addiu       $a0, $a0, -0x3760
    ctx->pc = 0x1df0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953120));
    // 0x1df0c4: 0xc077c58  jal         func_1DF160
    ctx->pc = 0x1DF0C4u;
    SET_GPR_U32(ctx, 31, 0x1DF0CCu);
    ctx->pc = 0x1DF0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF0C4u;
            // 0x1df0c8: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF160u;
    if (runtime->hasFunction(0x1DF160u)) {
        auto targetFn = runtime->lookupFunction(0x1DF160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0CCu; }
        if (ctx->pc != 0x1DF0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF160_0x1df160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0CCu; }
        if (ctx->pc != 0x1DF0CCu) { return; }
    }
    ctx->pc = 0x1DF0CCu;
label_1df0cc:
    // 0x1df0cc: 0xae110550  sw          $s1, 0x550($s0)
    ctx->pc = 0x1df0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 17));
label_1df0d0:
    // 0x1df0d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1df0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df0d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1df0d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df0d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df0d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF0DCu;
            // 0x1df0e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DF0E4u;
    // 0x1df0e4: 0x0  nop
    ctx->pc = 0x1df0e4u;
    // NOP
    // 0x1df0e8: 0x0  nop
    ctx->pc = 0x1df0e8u;
    // NOP
    // 0x1df0ec: 0x0  nop
    ctx->pc = 0x1df0ecu;
    // NOP
    // 0x1df0f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1df0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1df0f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1df0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1df0f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1df0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1df0fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1df0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df100: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1df100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df104: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DF104u;
    {
        const bool branch_taken_0x1df104 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF104u;
            // 0x1df108: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df104) {
            ctx->pc = 0x1DF144u;
            goto label_1df144;
        }
    }
    ctx->pc = 0x1DF10Cu;
    // 0x1df10c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1df10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1df110: 0x2442d040  addiu       $v0, $v0, -0x2FC0
    ctx->pc = 0x1df110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955072));
    // 0x1df114: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF114u;
    {
        const bool branch_taken_0x1df114 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF114u;
            // 0x1df118: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df114) {
            ctx->pc = 0x1DF12Cu;
            goto label_1df12c;
        }
    }
    ctx->pc = 0x1DF11Cu;
    // 0x1df11c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1df11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1df120: 0x2442d020  addiu       $v0, $v0, -0x2FE0
    ctx->pc = 0x1df120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955040));
    // 0x1df124: 0xc0bfa40  jal         func_2FE900
    ctx->pc = 0x1DF124u;
    SET_GPR_U32(ctx, 31, 0x1DF12Cu);
    ctx->pc = 0x1DF128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF124u;
            // 0x1df128: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE900u;
    if (runtime->hasFunction(0x2FE900u)) {
        auto targetFn = runtime->lookupFunction(0x2FE900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF12Cu; }
        if (ctx->pc != 0x1DF12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE900_0x2fe900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF12Cu; }
        if (ctx->pc != 0x1DF12Cu) { return; }
    }
    ctx->pc = 0x1DF12Cu;
label_1df12c:
    // 0x1df12c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1df12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1df130: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1df130u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1df134: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF134u;
    {
        const bool branch_taken_0x1df134 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1df134) {
            ctx->pc = 0x1DF138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF134u;
            // 0x1df138: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF148u;
            goto label_1df148;
        }
    }
    ctx->pc = 0x1DF13Cu;
    // 0x1df13c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1DF13Cu;
    SET_GPR_U32(ctx, 31, 0x1DF144u);
    ctx->pc = 0x1DF140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF13Cu;
            // 0x1df140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF144u; }
        if (ctx->pc != 0x1DF144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF144u; }
        if (ctx->pc != 0x1DF144u) { return; }
    }
    ctx->pc = 0x1DF144u;
label_1df144:
    // 0x1df144: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1df144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1df148:
    // 0x1df148: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1df148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df14c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1df14cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df154: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF154u;
            // 0x1df158: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DF15Cu;
    // 0x1df15c: 0x0  nop
    ctx->pc = 0x1df15cu;
    // NOP
}
