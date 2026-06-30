#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5858
// Address: 0x1a5858 - 0x1a5918
void sub_001A5858_0x1a5858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5858_0x1a5858");
#endif

    switch (ctx->pc) {
        case 0x1a5870u: goto label_1a5870;
        case 0x1a58e0u: goto label_1a58e0;
        default: break;
    }

    ctx->pc = 0x1a5858u;

    // 0x1a5858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a5858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a585c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a585cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a5864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a5864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5868: 0x806961c  j           func_1A5870
    ctx->pc = 0x1A5868u;
    ctx->pc = 0x1A586Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5868u;
            // 0x1a586c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5870u;
    goto label_1a5870;
    ctx->pc = 0x1A5870u;
label_1a5870:
    // 0x1a5870: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a5870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a5874: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5878: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1a5878u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a587c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a587cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a5880: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5884: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a5884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5888: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a5888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a588c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1a588cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5890: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a5890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a5894: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5898: 0x24841380  addiu       $a0, $a0, 0x1380
    ctx->pc = 0x1a5898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4992));
    // 0x1a589c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a589cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1a58a0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a58a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a58a4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a58a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a58a8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1a58a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1a58ac: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1a58acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1a58b0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a58b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1a58b4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a58b8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1a58b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1a58bc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1a58bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1a58c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A58C0u;
    {
        const bool branch_taken_0x1a58c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A58C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A58C0u;
            // 0x1a58c4: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a58c0) {
            ctx->pc = 0x1A58D0u;
            goto label_1a58d0;
        }
    }
    ctx->pc = 0x1A58C8u;
    // 0x1a58c8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A58C8u;
    {
        const bool branch_taken_0x1a58c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A58CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A58C8u;
            // 0x1a58cc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a58c8) {
            ctx->pc = 0x1A58D8u;
            goto label_1a58d8;
        }
    }
    ctx->pc = 0x1A58D0u;
label_1a58d0:
    // 0x1a58d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A58D0u;
    {
        const bool branch_taken_0x1a58d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A58D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A58D0u;
            // 0x1a58d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a58d0) {
            ctx->pc = 0x1A5904u;
            goto label_1a5904;
        }
    }
    ctx->pc = 0x1A58D8u;
label_1a58d8:
    // 0x1a58d8: 0xc0696ca  jal         func_1A5B28
    ctx->pc = 0x1A58D8u;
    SET_GPR_U32(ctx, 31, 0x1A58E0u);
    ctx->pc = 0x1A58DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A58D8u;
            // 0x1a58dc: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5B28u;
    if (runtime->hasFunction(0x1A5B28u)) {
        auto targetFn = runtime->lookupFunction(0x1A5B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A58E0u; }
        if (ctx->pc != 0x1A58E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5B28_0x1a5b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A58E0u; }
        if (ctx->pc != 0x1A58E0u) { return; }
    }
    ctx->pc = 0x1A58E0u;
label_1a58e0:
    // 0x1a58e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a58e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a58e4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1a58e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a58e8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1a58e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a58ec: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1a58ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a58f0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1a58f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1a58f4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1a58f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1a58f8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1a58f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1a58fc: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1a58fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x1a5900: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x1a5900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
label_1a5904:
    // 0x1a5904: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a5904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5908: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a5908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a590c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A590Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A590Cu;
            // 0x1a5910: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5914u;
    // 0x1a5914: 0x0  nop
    ctx->pc = 0x1a5914u;
    // NOP
}
