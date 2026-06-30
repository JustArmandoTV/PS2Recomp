#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8150
// Address: 0x1b8150 - 0x1b81e8
void sub_001B8150_0x1b8150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8150_0x1b8150");
#endif

    switch (ctx->pc) {
        case 0x1b8194u: goto label_1b8194;
        case 0x1b81d0u: goto label_1b81d0;
        default: break;
    }

    ctx->pc = 0x1b8150u;

    // 0x1b8150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b8154: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1b8154u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8158: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b8158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b815c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8160: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b8160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b8164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b8164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b8168: 0x8c650950  lw          $a1, 0x950($v1)
    ctx->pc = 0x1b8168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2384)));
    // 0x1b816c: 0x24630d88  addiu       $v1, $v1, 0xD88
    ctx->pc = 0x1b816cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3464));
    // 0x1b8170: 0x8c700280  lw          $s0, 0x280($v1)
    ctx->pc = 0x1b8170u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x1b8174: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B8174u;
    {
        const bool branch_taken_0x1b8174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8174u;
            // 0x1b8178: 0x8c71027c  lw          $s1, 0x27C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8174) {
            ctx->pc = 0x1B81D4u;
            goto label_1b81d4;
        }
    }
    ctx->pc = 0x1B817Cu;
    // 0x1b817c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1b817cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1b8180: 0x12230014  beq         $s1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B8180u;
    {
        const bool branch_taken_0x1b8180 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B8184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8180u;
            // 0x1b8184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8180) {
            ctx->pc = 0x1B81D4u;
            goto label_1b81d4;
        }
    }
    ctx->pc = 0x1B8188u;
    // 0x1b8188: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b8188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b818c: 0xc06dbb6  jal         func_1B6ED8
    ctx->pc = 0x1B818Cu;
    SET_GPR_U32(ctx, 31, 0x1B8194u);
    ctx->pc = 0x1B8190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B818Cu;
            // 0x1b8190: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6ED8u;
    if (runtime->hasFunction(0x1B6ED8u)) {
        auto targetFn = runtime->lookupFunction(0x1B6ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8194u; }
        if (ctx->pc != 0x1B8194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6ED8_0x1b6ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8194u; }
        if (ctx->pc != 0x1B8194u) { return; }
    }
    ctx->pc = 0x1B8194u;
label_1b8194:
    // 0x1b8194: 0x3403ea24  ori         $v1, $zero, 0xEA24
    ctx->pc = 0x1b8194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59940);
    // 0x1b8198: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x1b8198u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1b819c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B819Cu;
    {
        const bool branch_taken_0x1b819c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b819c) {
            ctx->pc = 0x1B81A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B819Cu;
            // 0x1b81a0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B81A4u;
            goto label_1b81a4;
        }
    }
    ctx->pc = 0x1B81A4u;
label_1b81a4:
    // 0x1b81a4: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x1b81a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1b81a8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1b81a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b81ac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1b81acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b81b0: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1b81b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b81b4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1b81b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1b81b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b81b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81bc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1b81bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b81c0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1b81c0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b81c4: 0x2012  mflo        $a0
    ctx->pc = 0x1b81c4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1b81c8: 0xc062890  jal         func_18A240
    ctx->pc = 0x1B81C8u;
    SET_GPR_U32(ctx, 31, 0x1B81D0u);
    ctx->pc = 0x1B81CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B81C8u;
            // 0x1b81cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A240u;
    if (runtime->hasFunction(0x18A240u)) {
        auto targetFn = runtime->lookupFunction(0x18A240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81D0u; }
        if (ctx->pc != 0x1B81D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A240_0x18a240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81D0u; }
        if (ctx->pc != 0x1B81D0u) { return; }
    }
    ctx->pc = 0x1B81D0u;
label_1b81d0:
    // 0x1b81d0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b81d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b81d4:
    // 0x1b81d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b81d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b81d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b81d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b81dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b81dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b81e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B81E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B81E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B81E0u;
            // 0x1b81e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B81E8u;
}
