#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8150
// Address: 0x1a8150 - 0x1a81e8
void sub_001A8150_0x1a8150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8150_0x1a8150");
#endif

    switch (ctx->pc) {
        case 0x1a8180u: goto label_1a8180;
        case 0x1a8198u: goto label_1a8198;
        case 0x1a81b0u: goto label_1a81b0;
        case 0x1a81c8u: goto label_1a81c8;
        default: break;
    }

    ctx->pc = 0x1a8150u;

    // 0x1a8150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a8154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8158: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a8158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a815c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a815cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8160: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a8160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8164: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a8164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a8168: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a8168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a816c: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A816Cu;
    {
        const bool branch_taken_0x1a816c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A816Cu;
            // 0x1a8170: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a816c) {
            ctx->pc = 0x1A81CCu;
            goto label_1a81cc;
        }
    }
    ctx->pc = 0x1A8174u;
    // 0x1a8174: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1a8174u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1a8178: 0xc06a0ee  jal         func_1A83B8
    ctx->pc = 0x1A8178u;
    SET_GPR_U32(ctx, 31, 0x1A8180u);
    ctx->pc = 0x1A817Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8178u;
            // 0x1a817c: 0x24c6ae48  addiu       $a2, $a2, -0x51B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A83B8u;
    if (runtime->hasFunction(0x1A83B8u)) {
        auto targetFn = runtime->lookupFunction(0x1A83B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8180u; }
        if (ctx->pc != 0x1A8180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A83B8_0x1a83b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8180u; }
        if (ctx->pc != 0x1A8180u) { return; }
    }
    ctx->pc = 0x1A8180u;
label_1a8180:
    // 0x1a8180: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1a8180u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1a8184: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a8184u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a8188: 0x24c6aea0  addiu       $a2, $a2, -0x5160
    ctx->pc = 0x1a8188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946464));
    // 0x1a818c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a818cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8190: 0xc06a0ee  jal         func_1A83B8
    ctx->pc = 0x1A8190u;
    SET_GPR_U32(ctx, 31, 0x1A8198u);
    ctx->pc = 0x1A8194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8190u;
            // 0x1a8194: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A83B8u;
    if (runtime->hasFunction(0x1A83B8u)) {
        auto targetFn = runtime->lookupFunction(0x1A83B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8198u; }
        if (ctx->pc != 0x1A8198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A83B8_0x1a83b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8198u; }
        if (ctx->pc != 0x1A8198u) { return; }
    }
    ctx->pc = 0x1A8198u;
label_1a8198:
    // 0x1a8198: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1a8198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1a819c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1a819cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1a81a0: 0x24c6aef8  addiu       $a2, $a2, -0x5108
    ctx->pc = 0x1a81a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946552));
    // 0x1a81a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a81a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a81a8: 0xc06a0ee  jal         func_1A83B8
    ctx->pc = 0x1A81A8u;
    SET_GPR_U32(ctx, 31, 0x1A81B0u);
    ctx->pc = 0x1A81ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A81A8u;
            // 0x1a81ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A83B8u;
    if (runtime->hasFunction(0x1A83B8u)) {
        auto targetFn = runtime->lookupFunction(0x1A83B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81B0u; }
        if (ctx->pc != 0x1A81B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A83B8_0x1a83b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81B0u; }
        if (ctx->pc != 0x1A81B0u) { return; }
    }
    ctx->pc = 0x1A81B0u;
label_1a81b0:
    // 0x1a81b0: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1a81b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1a81b4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1a81b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1a81b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a81b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a81bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a81bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a81c0: 0xc06a0ee  jal         func_1A83B8
    ctx->pc = 0x1A81C0u;
    SET_GPR_U32(ctx, 31, 0x1A81C8u);
    ctx->pc = 0x1A81C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A81C0u;
            // 0x1a81c4: 0x24c6af50  addiu       $a2, $a2, -0x50B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A83B8u;
    if (runtime->hasFunction(0x1A83B8u)) {
        auto targetFn = runtime->lookupFunction(0x1A83B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81C8u; }
        if (ctx->pc != 0x1A81C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A83B8_0x1a83b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81C8u; }
        if (ctx->pc != 0x1A81C8u) { return; }
    }
    ctx->pc = 0x1A81C8u;
label_1a81c8:
    // 0x1a81c8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1a81c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1a81cc:
    // 0x1a81cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a81ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a81d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a81d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a81d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a81d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a81d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a81d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a81dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A81DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A81E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A81DCu;
            // 0x1a81e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A81E4u;
    // 0x1a81e4: 0x0  nop
    ctx->pc = 0x1a81e4u;
    // NOP
}
