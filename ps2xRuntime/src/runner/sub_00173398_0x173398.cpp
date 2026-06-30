#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173398
// Address: 0x173398 - 0x173420
void sub_00173398_0x173398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173398_0x173398");
#endif

    switch (ctx->pc) {
        case 0x1733f4u: goto label_1733f4;
        case 0x173404u: goto label_173404;
        default: break;
    }

    ctx->pc = 0x173398u;

    // 0x173398: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17339c: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17339Cu;
    {
        const bool branch_taken_0x17339c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x17339c) {
            ctx->pc = 0x1733A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17339Cu;
            // 0x1733a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1733B0u;
            goto label_1733b0;
        }
    }
    ctx->pc = 0x1733A4u;
    // 0x1733a4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1733a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1733a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1733A8u;
    {
        const bool branch_taken_0x1733a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1733ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1733A8u;
            // 0x1733ac: 0x2402176a  addiu       $v0, $zero, 0x176A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5994));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1733a8) {
            ctx->pc = 0x1733C0u;
            goto label_1733c0;
        }
    }
    ctx->pc = 0x1733B0u;
label_1733b0:
    // 0x1733b0: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1733B0u;
    {
        const bool branch_taken_0x1733b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1733b0) {
            ctx->pc = 0x1733B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1733B0u;
            // 0x1733b4: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1733C8u;
            goto label_1733c8;
        }
    }
    ctx->pc = 0x1733B8u;
    // 0x1733b8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1733b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1733bc: 0x24021388  addiu       $v0, $zero, 0x1388
    ctx->pc = 0x1733bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
label_1733c0:
    // 0x1733c0: 0xac623f68  sw          $v0, 0x3F68($v1)
    ctx->pc = 0x1733c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16232), GPR_U32(ctx, 2));
    // 0x1733c4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1733c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1733c8:
    // 0x1733c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1733C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1733CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1733C8u;
            // 0x1733cc: 0xac443f1c  sw          $a0, 0x3F1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16156), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1733D0u;
    // 0x1733d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1733d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1733d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1733d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1733d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1733d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1733dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1733dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1733e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1733e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1733e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1733e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1733e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1733e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1733ec: 0xc0599de  jal         func_166778
    ctx->pc = 0x1733ECu;
    SET_GPR_U32(ctx, 31, 0x1733F4u);
    ctx->pc = 0x1733F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1733ECu;
            // 0x1733f0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1733F4u; }
        if (ctx->pc != 0x1733F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1733F4u; }
        if (ctx->pc != 0x1733F4u) { return; }
    }
    ctx->pc = 0x1733F4u;
label_1733f4:
    // 0x1733f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1733f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1733f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1733f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1733fc: 0xc05cd08  jal         func_173420
    ctx->pc = 0x1733FCu;
    SET_GPR_U32(ctx, 31, 0x173404u);
    ctx->pc = 0x173400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1733FCu;
            // 0x173400: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173420u;
    if (runtime->hasFunction(0x173420u)) {
        auto targetFn = runtime->lookupFunction(0x173420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173404u; }
        if (ctx->pc != 0x173404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173420_0x173420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173404u; }
        if (ctx->pc != 0x173404u) { return; }
    }
    ctx->pc = 0x173404u;
label_173404:
    // 0x173404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x173408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17340c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17340cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173410: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x173410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x173414: 0x80599e0  j           func_166780
    ctx->pc = 0x173414u;
    ctx->pc = 0x173418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173414u;
            // 0x173418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17341Cu;
    // 0x17341c: 0x0  nop
    ctx->pc = 0x17341cu;
    // NOP
}
