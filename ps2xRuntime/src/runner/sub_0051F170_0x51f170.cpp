#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051F170
// Address: 0x51f170 - 0x51f220
void sub_0051F170_0x51f170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051F170_0x51f170");
#endif

    switch (ctx->pc) {
        case 0x51f19cu: goto label_51f19c;
        case 0x51f1dcu: goto label_51f1dc;
        case 0x51f204u: goto label_51f204;
        default: break;
    }

    ctx->pc = 0x51f170u;

    // 0x51f170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x51f170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x51f174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x51f174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51f178: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x51f178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x51f17c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51f17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x51f180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51f180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51f184: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x51f184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51f188: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x51f188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x51f18c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x51F18Cu;
    {
        const bool branch_taken_0x51f18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x51F190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F18Cu;
            // 0x51f190: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51f18c) {
            ctx->pc = 0x51F1F8u;
            goto label_51f1f8;
        }
    }
    ctx->pc = 0x51F194u;
    // 0x51f194: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x51f194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x51f198: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x51f198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_51f19c:
    // 0x51f19c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x51f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x51f1a0: 0x54500012  bnel        $v0, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x51F1A0u;
    {
        const bool branch_taken_0x51f1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x51f1a0) {
            ctx->pc = 0x51F1A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51F1A0u;
            // 0x51f1a4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51F1ECu;
            goto label_51f1ec;
        }
    }
    ctx->pc = 0x51F1A8u;
    // 0x51f1a8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x51f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x51f1ac: 0xc2082b  sltu        $at, $a2, $v0
    ctx->pc = 0x51f1acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x51f1b0: 0x5020000b  beql        $at, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x51F1B0u;
    {
        const bool branch_taken_0x51f1b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51f1b0) {
            ctx->pc = 0x51F1B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51F1B0u;
            // 0x51f1b4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51F1E0u;
            goto label_51f1e0;
        }
    }
    ctx->pc = 0x51F1B8u;
    // 0x51f1b8: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x51f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x51f1bc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x51f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x51f1c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x51f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x51f1c4: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x51f1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x51f1c8: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x51f1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x51f1cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x51f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x51f1d0: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x51f1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x51f1d4: 0xc04a508  jal         func_129420
    ctx->pc = 0x51F1D4u;
    SET_GPR_U32(ctx, 31, 0x51F1DCu);
    ctx->pc = 0x51F1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F1D4u;
            // 0x51f1d8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F1DCu; }
        if (ctx->pc != 0x51F1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F1DCu; }
        if (ctx->pc != 0x51F1DCu) { return; }
    }
    ctx->pc = 0x51F1DCu;
label_51f1dc:
    // 0x51f1dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x51f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_51f1e0:
    // 0x51f1e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x51f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x51f1e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x51F1E4u;
    {
        const bool branch_taken_0x51f1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51F1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F1E4u;
            // 0x51f1e8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51f1e4) {
            ctx->pc = 0x51F1F8u;
            goto label_51f1f8;
        }
    }
    ctx->pc = 0x51F1ECu;
label_51f1ec:
    // 0x51f1ec: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x51f1ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x51f1f0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x51F1F0u;
    {
        const bool branch_taken_0x51f1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x51F1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F1F0u;
            // 0x51f1f4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51f1f0) {
            ctx->pc = 0x51F19Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51f19c;
        }
    }
    ctx->pc = 0x51F1F8u;
label_51f1f8:
    // 0x51f1f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x51f1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51f1fc: 0xc147d00  jal         func_51F400
    ctx->pc = 0x51F1FCu;
    SET_GPR_U32(ctx, 31, 0x51F204u);
    ctx->pc = 0x51F200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F1FCu;
            // 0x51f200: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51F400u;
    if (runtime->hasFunction(0x51F400u)) {
        auto targetFn = runtime->lookupFunction(0x51F400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F204u; }
        if (ctx->pc != 0x51F204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051F400_0x51f400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F204u; }
        if (ctx->pc != 0x51F204u) { return; }
    }
    ctx->pc = 0x51F204u;
label_51f204:
    // 0x51f204: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x51f204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x51f208: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51f208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51f20c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51f20cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51f210: 0x3e00008  jr          $ra
    ctx->pc = 0x51F210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51F214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F210u;
            // 0x51f214: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51F218u;
    // 0x51f218: 0x0  nop
    ctx->pc = 0x51f218u;
    // NOP
    // 0x51f21c: 0x0  nop
    ctx->pc = 0x51f21cu;
    // NOP
}
