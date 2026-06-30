#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016D7E0
// Address: 0x16d7e0 - 0x16d8b0
void sub_0016D7E0_0x16d7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D7E0_0x16d7e0");
#endif

    switch (ctx->pc) {
        case 0x16d830u: goto label_16d830;
        case 0x16d840u: goto label_16d840;
        case 0x16d848u: goto label_16d848;
        case 0x16d850u: goto label_16d850;
        default: break;
    }

    ctx->pc = 0x16d7e0u;

    // 0x16d7e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16d7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16d7e4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x16d7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16d7e8: 0x3c16005e  lui         $s6, 0x5E
    ctx->pc = 0x16d7e8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
    // 0x16d7ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16d7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16d7f0: 0x26c3ab30  addiu       $v1, $s6, -0x54D0
    ctx->pc = 0x16d7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945584));
    // 0x16d7f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16d7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16d7f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16d7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16d7fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16d7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16d800: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16d800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16d804: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16d804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16d808: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16d808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16d80c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x16d80cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d810: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16D810u;
    {
        const bool branch_taken_0x16d810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D810u;
            // 0x16d814: 0x3c15005e  lui         $s5, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d810) {
            ctx->pc = 0x16D868u;
            goto label_16d868;
        }
    }
    ctx->pc = 0x16D818u;
    // 0x16d818: 0x3c14005e  lui         $s4, 0x5E
    ctx->pc = 0x16d818u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)94 << 16));
    // 0x16d81c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x16d81cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d820: 0x26b2ab28  addiu       $s2, $s5, -0x54D8
    ctx->pc = 0x16d820u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945576));
    // 0x16d824: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x16d824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d828: 0x2690aadc  addiu       $s0, $s4, -0x5524
    ctx->pc = 0x16d828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945500));
    // 0x16d82c: 0x0  nop
    ctx->pc = 0x16d82cu;
    // NOP
label_16d830:
    // 0x16d830: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x16d830u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x16d834: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16d834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d838: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x16D838u;
    SET_GPR_U32(ctx, 31, 0x16D840u);
    ctx->pc = 0x16D83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D838u;
            // 0x16d83c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1F0u;
    if (runtime->hasFunction(0x10C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D840u; }
        if (ctx->pc != 0x16D840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1F0_0x10c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D840u; }
        if (ctx->pc != 0x16D840u) { return; }
    }
    ctx->pc = 0x16D840u;
label_16d840:
    // 0x16d840: 0xc0430a4  jal         func_10C290
    ctx->pc = 0x16D840u;
    SET_GPR_U32(ctx, 31, 0x16D848u);
    ctx->pc = 0x16D844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D840u;
            // 0x16d844: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C290u;
    if (runtime->hasFunction(0x10C290u)) {
        auto targetFn = runtime->lookupFunction(0x10C290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D848u; }
        if (ctx->pc != 0x16D848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C290_0x10c290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D848u; }
        if (ctx->pc != 0x16D848u) { return; }
    }
    ctx->pc = 0x16D848u;
label_16d848:
    // 0x16d848: 0xc05b3f0  jal         func_16CFC0
    ctx->pc = 0x16D848u;
    SET_GPR_U32(ctx, 31, 0x16D850u);
    ctx->pc = 0x16D84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D848u;
            // 0x16d84c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16CFC0u;
    if (runtime->hasFunction(0x16CFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16CFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D850u; }
        if (ctx->pc != 0x16D850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CFC0_0x16cfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D850u; }
        if (ctx->pc != 0x16D850u) { return; }
    }
    ctx->pc = 0x16D850u;
label_16d850:
    // 0x16d850: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x16d850u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16d854: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x16D854u;
    {
        const bool branch_taken_0x16d854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D854u;
            // 0x16d858: 0x26c2ab30  addiu       $v0, $s6, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d854) {
            ctx->pc = 0x16D830u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16d830;
        }
    }
    ctx->pc = 0x16D85Cu;
    // 0x16d85c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16D85Cu;
    {
        const bool branch_taken_0x16d85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D85Cu;
            // 0x16d860: 0xdfb60030  ld          $s6, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d85c) {
            ctx->pc = 0x16D874u;
            goto label_16d874;
        }
    }
    ctx->pc = 0x16D864u;
    // 0x16d864: 0x0  nop
    ctx->pc = 0x16d864u;
    // NOP
label_16d868:
    // 0x16d868: 0x3c14005e  lui         $s4, 0x5E
    ctx->pc = 0x16d868u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)94 << 16));
    // 0x16d86c: 0x26c2ab30  addiu       $v0, $s6, -0x54D0
    ctx->pc = 0x16d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945584));
    // 0x16d870: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x16d870u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16d874:
    // 0x16d874: 0x26a3ab28  addiu       $v1, $s5, -0x54D8
    ctx->pc = 0x16d874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945576));
    // 0x16d878: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16d878u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16d87c: 0x2684aadc  addiu       $a0, $s4, -0x5524
    ctx->pc = 0x16d87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945500));
    // 0x16d880: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16d880u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16d884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d888: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16d888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16d88c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16d88cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d890: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16d890u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d894: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16d894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16d898: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x16d898u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x16d89c: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x16d89cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x16d8a0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x16d8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x16d8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x16D8A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D8A4u;
            // 0x16d8a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D8ACu;
    // 0x16d8ac: 0x0  nop
    ctx->pc = 0x16d8acu;
    // NOP
}
