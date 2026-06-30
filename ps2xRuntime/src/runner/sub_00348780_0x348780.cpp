#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00348780
// Address: 0x348780 - 0x348840
void sub_00348780_0x348780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348780_0x348780");
#endif

    switch (ctx->pc) {
        case 0x3487acu: goto label_3487ac;
        case 0x3487ccu: goto label_3487cc;
        case 0x3487e0u: goto label_3487e0;
        case 0x3487fcu: goto label_3487fc;
        case 0x348828u: goto label_348828;
        default: break;
    }

    ctx->pc = 0x348780u;

    // 0x348780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x348780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x348784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x348784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x348788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x348788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34878c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34878cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x348790: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x348790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348794: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x348794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348798: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x348798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x34879c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34879cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3487a0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3487a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3487a4: 0xc040138  jal         func_1004E0
    ctx->pc = 0x3487A4u;
    SET_GPR_U32(ctx, 31, 0x3487ACu);
    ctx->pc = 0x3487A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3487A4u;
            // 0x3487a8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3487ACu; }
        if (ctx->pc != 0x3487ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3487ACu; }
        if (ctx->pc != 0x3487ACu) { return; }
    }
    ctx->pc = 0x3487ACu;
label_3487ac:
    // 0x3487ac: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x3487acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x3487b0: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x3487b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x3487b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3487b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3487b8: 0x24a58560  addiu       $a1, $a1, -0x7AA0
    ctx->pc = 0x3487b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935904));
    // 0x3487bc: 0x24c68490  addiu       $a2, $a2, -0x7B70
    ctx->pc = 0x3487bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935696));
    // 0x3487c0: 0x24070240  addiu       $a3, $zero, 0x240
    ctx->pc = 0x3487c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x3487c4: 0xc040840  jal         func_102100
    ctx->pc = 0x3487C4u;
    SET_GPR_U32(ctx, 31, 0x3487CCu);
    ctx->pc = 0x3487C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3487C4u;
            // 0x3487c8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3487CCu; }
        if (ctx->pc != 0x3487CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3487CCu; }
        if (ctx->pc != 0x3487CCu) { return; }
    }
    ctx->pc = 0x3487CCu;
label_3487cc:
    // 0x3487cc: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x3487ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x3487d0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x3487d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3487d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3487d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3487d8: 0xc040138  jal         func_1004E0
    ctx->pc = 0x3487D8u;
    SET_GPR_U32(ctx, 31, 0x3487E0u);
    ctx->pc = 0x3487DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3487D8u;
            // 0x3487dc: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3487E0u; }
        if (ctx->pc != 0x3487E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3487E0u; }
        if (ctx->pc != 0x3487E0u) { return; }
    }
    ctx->pc = 0x3487E0u;
label_3487e0:
    // 0x3487e0: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x3487e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x3487e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3487e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3487e8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x3487e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3487ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3487ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3487f0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3487f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3487f4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3487F4u;
    SET_GPR_U32(ctx, 31, 0x3487FCu);
    ctx->pc = 0x3487F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3487F4u;
            // 0x3487f8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3487FCu; }
        if (ctx->pc != 0x3487FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3487FCu; }
        if (ctx->pc != 0x3487FCu) { return; }
    }
    ctx->pc = 0x3487FCu;
label_3487fc:
    // 0x3487fc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3487fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x348800: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x348800u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x348804: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348808: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x348808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34880c: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x34880cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x348810: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x348810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x348814: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x348814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x348818: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x348818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x34881c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x34881cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x348820: 0xc0d2228  jal         func_3488A0
    ctx->pc = 0x348820u;
    SET_GPR_U32(ctx, 31, 0x348828u);
    ctx->pc = 0x348824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348820u;
            // 0x348824: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3488A0u;
    if (runtime->hasFunction(0x3488A0u)) {
        auto targetFn = runtime->lookupFunction(0x3488A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348828u; }
        if (ctx->pc != 0x348828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003488A0_0x3488a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348828u; }
        if (ctx->pc != 0x348828u) { return; }
    }
    ctx->pc = 0x348828u;
label_348828:
    // 0x348828: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x348828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34882c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34882cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348830: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x348830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348834: 0x3e00008  jr          $ra
    ctx->pc = 0x348834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348834u;
            // 0x348838: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34883Cu;
    // 0x34883c: 0x0  nop
    ctx->pc = 0x34883cu;
    // NOP
}
