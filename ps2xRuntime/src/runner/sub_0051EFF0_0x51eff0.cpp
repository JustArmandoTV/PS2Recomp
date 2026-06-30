#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051EFF0
// Address: 0x51eff0 - 0x51f0b0
void sub_0051EFF0_0x51eff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051EFF0_0x51eff0");
#endif

    switch (ctx->pc) {
        case 0x51f01cu: goto label_51f01c;
        case 0x51f03cu: goto label_51f03c;
        case 0x51f050u: goto label_51f050;
        case 0x51f06cu: goto label_51f06c;
        case 0x51f098u: goto label_51f098;
        default: break;
    }

    ctx->pc = 0x51eff0u;

    // 0x51eff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x51eff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x51eff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x51eff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x51eff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51eff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x51effc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51effcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51f000: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x51f000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51f004: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x51f004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51f008: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x51f008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x51f00c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x51f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x51f010: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x51f010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x51f014: 0xc040138  jal         func_1004E0
    ctx->pc = 0x51F014u;
    SET_GPR_U32(ctx, 31, 0x51F01Cu);
    ctx->pc = 0x51F018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F014u;
            // 0x51f018: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F01Cu; }
        if (ctx->pc != 0x51F01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F01Cu; }
        if (ctx->pc != 0x51F01Cu) { return; }
    }
    ctx->pc = 0x51F01Cu;
label_51f01c:
    // 0x51f01c: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x51f01cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
    // 0x51f020: 0x3c06002e  lui         $a2, 0x2E
    ctx->pc = 0x51f020u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)46 << 16));
    // 0x51f024: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51f024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51f028: 0x24a5f290  addiu       $a1, $a1, -0xD70
    ctx->pc = 0x51f028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963856));
    // 0x51f02c: 0x24c687b0  addiu       $a2, $a2, -0x7850
    ctx->pc = 0x51f02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936496));
    // 0x51f030: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x51f030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x51f034: 0xc040840  jal         func_102100
    ctx->pc = 0x51F034u;
    SET_GPR_U32(ctx, 31, 0x51F03Cu);
    ctx->pc = 0x51F038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F034u;
            // 0x51f038: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F03Cu; }
        if (ctx->pc != 0x51F03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F03Cu; }
        if (ctx->pc != 0x51F03Cu) { return; }
    }
    ctx->pc = 0x51F03Cu;
label_51f03c:
    // 0x51f03c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x51f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x51f040: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x51f040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x51f044: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x51f044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x51f048: 0xc040138  jal         func_1004E0
    ctx->pc = 0x51F048u;
    SET_GPR_U32(ctx, 31, 0x51F050u);
    ctx->pc = 0x51F04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F048u;
            // 0x51f04c: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F050u; }
        if (ctx->pc != 0x51F050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F050u; }
        if (ctx->pc != 0x51F050u) { return; }
    }
    ctx->pc = 0x51F050u;
label_51f050:
    // 0x51f050: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x51f050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x51f054: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51f054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51f058: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x51f058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x51f05c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51f05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51f060: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x51f060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x51f064: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x51F064u;
    SET_GPR_U32(ctx, 31, 0x51F06Cu);
    ctx->pc = 0x51F068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F064u;
            // 0x51f068: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F06Cu; }
        if (ctx->pc != 0x51F06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F06Cu; }
        if (ctx->pc != 0x51F06Cu) { return; }
    }
    ctx->pc = 0x51F06Cu;
label_51f06c:
    // 0x51f06c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x51f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x51f070: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x51f070u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x51f074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x51f074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51f078: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x51f078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x51f07c: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x51f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x51f080: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x51f080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x51f084: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x51f084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x51f088: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x51f088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x51f08c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x51f08cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x51f090: 0xc147c2c  jal         func_51F0B0
    ctx->pc = 0x51F090u;
    SET_GPR_U32(ctx, 31, 0x51F098u);
    ctx->pc = 0x51F094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F090u;
            // 0x51f094: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51F0B0u;
    if (runtime->hasFunction(0x51F0B0u)) {
        auto targetFn = runtime->lookupFunction(0x51F0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F098u; }
        if (ctx->pc != 0x51F098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051F0B0_0x51f0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F098u; }
        if (ctx->pc != 0x51F098u) { return; }
    }
    ctx->pc = 0x51F098u;
label_51f098:
    // 0x51f098: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x51f098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x51f09c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51f09cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51f0a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51f0a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51f0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x51F0A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51F0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F0A4u;
            // 0x51f0a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51F0ACu;
    // 0x51f0ac: 0x0  nop
    ctx->pc = 0x51f0acu;
    // NOP
}
