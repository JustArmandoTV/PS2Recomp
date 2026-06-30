#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00167FF8
// Address: 0x167ff8 - 0x1680d0
void sub_00167FF8_0x167ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167FF8_0x167ff8");
#endif

    switch (ctx->pc) {
        case 0x168040u: goto label_168040;
        case 0x168054u: goto label_168054;
        case 0x168068u: goto label_168068;
        case 0x16807cu: goto label_16807c;
        default: break;
    }

    ctx->pc = 0x167ff8u;

    // 0x167ff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x167ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x167ffc: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x167ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x168000: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x168000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168004: 0x24907368  addiu       $s0, $a0, 0x7368
    ctx->pc = 0x168004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 29544));
    // 0x168008: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x168008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x16800c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x16800cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x168010: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x168010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168014: 0x2463d158  addiu       $v1, $v1, -0x2EA8
    ctx->pc = 0x168014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955352));
    // 0x168018: 0x24423338  addiu       $v0, $v0, 0x3338
    ctx->pc = 0x168018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13112));
    // 0x16801c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16801cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x168020: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x168020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x168024: 0x54800025  bnel        $a0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x168024u;
    {
        const bool branch_taken_0x168024 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x168024) {
            ctx->pc = 0x168028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x168024u;
            // 0x168028: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1680BCu;
            goto label_1680bc;
        }
    }
    ctx->pc = 0x16802Cu;
    // 0x16802c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x16802cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x168030: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168034: 0x24847370  addiu       $a0, $a0, 0x7370
    ctx->pc = 0x168034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29552));
    // 0x168038: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x168038u;
    SET_GPR_U32(ctx, 31, 0x168040u);
    ctx->pc = 0x16803Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168038u;
            // 0x16803c: 0x24060340  addiu       $a2, $zero, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168040u; }
        if (ctx->pc != 0x168040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168040u; }
        if (ctx->pc != 0x168040u) { return; }
    }
    ctx->pc = 0x168040u;
label_168040:
    // 0x168040: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x168040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x168044: 0x248476b0  addiu       $a0, $a0, 0x76B0
    ctx->pc = 0x168044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30384));
    // 0x168048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16804c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x16804Cu;
    SET_GPR_U32(ctx, 31, 0x168054u);
    ctx->pc = 0x168050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16804Cu;
            // 0x168050: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168054u; }
        if (ctx->pc != 0x168054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168054u; }
        if (ctx->pc != 0x168054u) { return; }
    }
    ctx->pc = 0x168054u;
label_168054:
    // 0x168054: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x168054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x168058: 0x24847ab8  addiu       $a0, $a0, 0x7AB8
    ctx->pc = 0x168058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31416));
    // 0x16805c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x16805cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x168060: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x168060u;
    SET_GPR_U32(ctx, 31, 0x168068u);
    ctx->pc = 0x168064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168060u;
            // 0x168064: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168068u; }
        if (ctx->pc != 0x168068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168068u; }
        if (ctx->pc != 0x168068u) { return; }
    }
    ctx->pc = 0x168068u;
label_168068:
    // 0x168068: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x168068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x16806c: 0x24847bb8  addiu       $a0, $a0, 0x7BB8
    ctx->pc = 0x16806cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31672));
    // 0x168070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168074: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x168074u;
    SET_GPR_U32(ctx, 31, 0x16807Cu);
    ctx->pc = 0x168078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168074u;
            // 0x168078: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16807Cu; }
        if (ctx->pc != 0x16807Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16807Cu; }
        if (ctx->pc != 0x16807Cu) { return; }
    }
    ctx->pc = 0x16807Cu;
label_16807c:
    // 0x16807c: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x16807cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
    // 0x168080: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x168080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x168084: 0x3c07005d  lui         $a3, 0x5D
    ctx->pc = 0x168084u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)93 << 16));
    // 0x168088: 0x3c08005d  lui         $t0, 0x5D
    ctx->pc = 0x168088u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)93 << 16));
    // 0x16808c: 0x3c09005d  lui         $t1, 0x5D
    ctx->pc = 0x16808cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)93 << 16));
    // 0x168090: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x168090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x168094: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x168094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x168098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16809c: 0xaca37be4  sw          $v1, 0x7BE4($a1)
    ctx->pc = 0x16809cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 31716), GPR_U32(ctx, 3));
    // 0x1680a0: 0xac827be8  sw          $v0, 0x7BE8($a0)
    ctx->pc = 0x1680a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31720), GPR_U32(ctx, 2));
    // 0x1680a4: 0xacc07bd8  sw          $zero, 0x7BD8($a2)
    ctx->pc = 0x1680a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 31704), GPR_U32(ctx, 0));
    // 0x1680a8: 0xace07ab0  sw          $zero, 0x7AB0($a3)
    ctx->pc = 0x1680a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 31408), GPR_U32(ctx, 0));
    // 0x1680ac: 0xad007bdc  sw          $zero, 0x7BDC($t0)
    ctx->pc = 0x1680acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 31708), GPR_U32(ctx, 0));
    // 0x1680b0: 0xad207be0  sw          $zero, 0x7BE0($t1)
    ctx->pc = 0x1680b0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 31712), GPR_U32(ctx, 0));
    // 0x1680b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1680b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1680b8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1680b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1680bc:
    // 0x1680bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1680bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1680c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1680c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1680c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1680c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1680c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1680C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1680CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1680C8u;
            // 0x1680cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1680D0u;
}
