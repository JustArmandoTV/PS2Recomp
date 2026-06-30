#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001680D0
// Address: 0x1680d0 - 0x168198
void sub_001680D0_0x1680d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001680D0_0x1680d0");
#endif

    switch (ctx->pc) {
        case 0x1680f8u: goto label_1680f8;
        case 0x168144u: goto label_168144;
        case 0x168158u: goto label_168158;
        case 0x16816cu: goto label_16816c;
        default: break;
    }

    ctx->pc = 0x1680d0u;

    // 0x1680d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1680d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1680d4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1680d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1680d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1680d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1680dc: 0x24637368  addiu       $v1, $v1, 0x7368
    ctx->pc = 0x1680dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29544));
    // 0x1680e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1680e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1680e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1680e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1680e8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1680E8u;
    {
        const bool branch_taken_0x1680e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1680e8) {
            ctx->pc = 0x168188u;
            goto label_168188;
        }
    }
    ctx->pc = 0x1680F0u;
    // 0x1680f0: 0xc05a842  jal         func_16A108
    ctx->pc = 0x1680F0u;
    SET_GPR_U32(ctx, 31, 0x1680F8u);
    ctx->pc = 0x16A108u;
    if (runtime->hasFunction(0x16A108u)) {
        auto targetFn = runtime->lookupFunction(0x16A108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1680F8u; }
        if (ctx->pc != 0x1680F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A108_0x16a108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1680F8u; }
        if (ctx->pc != 0x1680F8u) { return; }
    }
    ctx->pc = 0x1680F8u;
label_1680f8:
    // 0x1680f8: 0x3c0c005d  lui         $t4, 0x5D
    ctx->pc = 0x1680f8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)93 << 16));
    // 0x1680fc: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1680fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x168100: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x168100u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168104: 0x3c0b005d  lui         $t3, 0x5D
    ctx->pc = 0x168104u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)93 << 16));
    // 0x168108: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x168108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x16810c: 0x3c07005d  lui         $a3, 0x5D
    ctx->pc = 0x16810cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)93 << 16));
    // 0x168110: 0x3c08005d  lui         $t0, 0x5D
    ctx->pc = 0x168110u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)93 << 16));
    // 0x168114: 0x3c09005d  lui         $t1, 0x5D
    ctx->pc = 0x168114u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)93 << 16));
    // 0x168118: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16811c: 0x24847bb8  addiu       $a0, $a0, 0x7BB8
    ctx->pc = 0x16811cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31672));
    // 0x168120: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x168120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x168124: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x168124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168128: 0xad8a7be8  sw          $t2, 0x7BE8($t4)
    ctx->pc = 0x168128u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 31720), GPR_U32(ctx, 10));
    // 0x16812c: 0xad627be4  sw          $v0, 0x7BE4($t3)
    ctx->pc = 0x16812cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 31716), GPR_U32(ctx, 2));
    // 0x168130: 0xac607be0  sw          $zero, 0x7BE0($v1)
    ctx->pc = 0x168130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31712), GPR_U32(ctx, 0));
    // 0x168134: 0xace07bdc  sw          $zero, 0x7BDC($a3)
    ctx->pc = 0x168134u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 31708), GPR_U32(ctx, 0));
    // 0x168138: 0xad007ab0  sw          $zero, 0x7AB0($t0)
    ctx->pc = 0x168138u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 31408), GPR_U32(ctx, 0));
    // 0x16813c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x16813Cu;
    SET_GPR_U32(ctx, 31, 0x168144u);
    ctx->pc = 0x168140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16813Cu;
            // 0x168140: 0xad207bd8  sw          $zero, 0x7BD8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 31704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168144u; }
        if (ctx->pc != 0x168144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168144u; }
        if (ctx->pc != 0x168144u) { return; }
    }
    ctx->pc = 0x168144u;
label_168144:
    // 0x168144: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x168144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x168148: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x168148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x16814c: 0x24847ab8  addiu       $a0, $a0, 0x7AB8
    ctx->pc = 0x16814cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31416));
    // 0x168150: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x168150u;
    SET_GPR_U32(ctx, 31, 0x168158u);
    ctx->pc = 0x168154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168150u;
            // 0x168154: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168158u; }
        if (ctx->pc != 0x168158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168158u; }
        if (ctx->pc != 0x168158u) { return; }
    }
    ctx->pc = 0x168158u;
label_168158:
    // 0x168158: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x168158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x16815c: 0x248476b0  addiu       $a0, $a0, 0x76B0
    ctx->pc = 0x16815cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30384));
    // 0x168160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168164: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x168164u;
    SET_GPR_U32(ctx, 31, 0x16816Cu);
    ctx->pc = 0x168168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168164u;
            // 0x168168: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16816Cu; }
        if (ctx->pc != 0x16816Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16816Cu; }
        if (ctx->pc != 0x16816Cu) { return; }
    }
    ctx->pc = 0x16816Cu;
label_16816c:
    // 0x16816c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x16816cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x168170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168174: 0x24847370  addiu       $a0, $a0, 0x7370
    ctx->pc = 0x168174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29552));
    // 0x168178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16817c: 0x24060340  addiu       $a2, $zero, 0x340
    ctx->pc = 0x16817cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 832));
    // 0x168180: 0x804a576  j           func_1295D8
    ctx->pc = 0x168180u;
    ctx->pc = 0x168184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168180u;
            // 0x168184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x168188u;
label_168188:
    // 0x168188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16818c: 0x3e00008  jr          $ra
    ctx->pc = 0x16818Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16818Cu;
            // 0x168190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168194u;
    // 0x168194: 0x0  nop
    ctx->pc = 0x168194u;
    // NOP
}
