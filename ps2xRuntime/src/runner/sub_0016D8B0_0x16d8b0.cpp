#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016D8B0
// Address: 0x16d8b0 - 0x16d980
void sub_0016D8B0_0x16d8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D8B0_0x16d8b0");
#endif

    switch (ctx->pc) {
        case 0x16d900u: goto label_16d900;
        case 0x16d910u: goto label_16d910;
        case 0x16d918u: goto label_16d918;
        case 0x16d920u: goto label_16d920;
        default: break;
    }

    ctx->pc = 0x16d8b0u;

    // 0x16d8b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16d8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16d8b4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x16d8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16d8b8: 0x3c16005e  lui         $s6, 0x5E
    ctx->pc = 0x16d8b8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
    // 0x16d8bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16d8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16d8c0: 0x26c3ab10  addiu       $v1, $s6, -0x54F0
    ctx->pc = 0x16d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945552));
    // 0x16d8c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16d8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16d8c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16d8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16d8cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16d8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16d8d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16d8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16d8d4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16d8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16d8d8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16d8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16d8dc: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x16d8dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d8e0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16D8E0u;
    {
        const bool branch_taken_0x16d8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D8E0u;
            // 0x16d8e4: 0x3c15005e  lui         $s5, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d8e0) {
            ctx->pc = 0x16D938u;
            goto label_16d938;
        }
    }
    ctx->pc = 0x16D8E8u;
    // 0x16d8e8: 0x3c14005e  lui         $s4, 0x5E
    ctx->pc = 0x16d8e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)94 << 16));
    // 0x16d8ec: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x16d8ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d8f0: 0x26b2ab08  addiu       $s2, $s5, -0x54F8
    ctx->pc = 0x16d8f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945544));
    // 0x16d8f4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x16d8f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d8f8: 0x2690aad0  addiu       $s0, $s4, -0x5530
    ctx->pc = 0x16d8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945488));
    // 0x16d8fc: 0x0  nop
    ctx->pc = 0x16d8fcu;
    // NOP
label_16d900:
    // 0x16d900: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x16d900u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x16d904: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16d904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d908: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x16D908u;
    SET_GPR_U32(ctx, 31, 0x16D910u);
    ctx->pc = 0x16D90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D908u;
            // 0x16d90c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1F0u;
    if (runtime->hasFunction(0x10C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D910u; }
        if (ctx->pc != 0x16D910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1F0_0x10c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D910u; }
        if (ctx->pc != 0x16D910u) { return; }
    }
    ctx->pc = 0x16D910u;
label_16d910:
    // 0x16d910: 0xc0430a4  jal         func_10C290
    ctx->pc = 0x16D910u;
    SET_GPR_U32(ctx, 31, 0x16D918u);
    ctx->pc = 0x16D914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D910u;
            // 0x16d914: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C290u;
    if (runtime->hasFunction(0x10C290u)) {
        auto targetFn = runtime->lookupFunction(0x10C290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D918u; }
        if (ctx->pc != 0x16D918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C290_0x10c290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D918u; }
        if (ctx->pc != 0x16D918u) { return; }
    }
    ctx->pc = 0x16D918u;
label_16d918:
    // 0x16d918: 0xc05b3f0  jal         func_16CFC0
    ctx->pc = 0x16D918u;
    SET_GPR_U32(ctx, 31, 0x16D920u);
    ctx->pc = 0x16D91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D918u;
            // 0x16d91c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16CFC0u;
    if (runtime->hasFunction(0x16CFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16CFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D920u; }
        if (ctx->pc != 0x16D920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CFC0_0x16cfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D920u; }
        if (ctx->pc != 0x16D920u) { return; }
    }
    ctx->pc = 0x16D920u;
label_16d920:
    // 0x16d920: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x16d920u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16d924: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x16D924u;
    {
        const bool branch_taken_0x16d924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D924u;
            // 0x16d928: 0x26c2ab10  addiu       $v0, $s6, -0x54F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d924) {
            ctx->pc = 0x16D900u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16d900;
        }
    }
    ctx->pc = 0x16D92Cu;
    // 0x16d92c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16D92Cu;
    {
        const bool branch_taken_0x16d92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D92Cu;
            // 0x16d930: 0xdfb60030  ld          $s6, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d92c) {
            ctx->pc = 0x16D944u;
            goto label_16d944;
        }
    }
    ctx->pc = 0x16D934u;
    // 0x16d934: 0x0  nop
    ctx->pc = 0x16d934u;
    // NOP
label_16d938:
    // 0x16d938: 0x3c14005e  lui         $s4, 0x5E
    ctx->pc = 0x16d938u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)94 << 16));
    // 0x16d93c: 0x26c2ab10  addiu       $v0, $s6, -0x54F0
    ctx->pc = 0x16d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945552));
    // 0x16d940: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x16d940u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16d944:
    // 0x16d944: 0x26a3ab08  addiu       $v1, $s5, -0x54F8
    ctx->pc = 0x16d944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945544));
    // 0x16d948: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16d948u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16d94c: 0x2684aad0  addiu       $a0, $s4, -0x5530
    ctx->pc = 0x16d94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945488));
    // 0x16d950: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16d950u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16d954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d958: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16d958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16d95c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16d95cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d960: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16d960u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d964: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16d964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16d968: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x16d968u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x16d96c: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x16d96cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x16d970: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x16d970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x16d974: 0x3e00008  jr          $ra
    ctx->pc = 0x16D974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D974u;
            // 0x16d978: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D97Cu;
    // 0x16d97c: 0x0  nop
    ctx->pc = 0x16d97cu;
    // NOP
}
