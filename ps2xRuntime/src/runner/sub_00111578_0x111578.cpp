#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00111578
// Address: 0x111578 - 0x111608
void sub_00111578_0x111578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111578_0x111578");
#endif

    switch (ctx->pc) {
        case 0x1115b4u: goto label_1115b4;
        case 0x1115ccu: goto label_1115cc;
        case 0x1115e0u: goto label_1115e0;
        default: break;
    }

    ctx->pc = 0x111578u;

    // 0x111578: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x111578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11157c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11157cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x111580: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x111580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x111584: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x111584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x111588: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x111588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11158c: 0x2453e38c  addiu       $s3, $v0, -0x1C74
    ctx->pc = 0x11158cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960012));
    // 0x111590: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x111590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x111594: 0x2471cb68  addiu       $s1, $v1, -0x3498
    ctx->pc = 0x111594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953832));
    // 0x111598: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x111598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11159c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11159cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1115a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1115a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1115a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1115a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115ac: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x1115ACu;
    SET_GPR_U32(ctx, 31, 0x1115B4u);
    ctx->pc = 0x1115B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1115ACu;
            // 0x1115b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1115B4u; }
        if (ctx->pc != 0x1115B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1115B4u; }
        if (ctx->pc != 0x1115B4u) { return; }
    }
    ctx->pc = 0x1115B4u;
label_1115b4:
    // 0x1115b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1115B4u;
    {
        const bool branch_taken_0x1115b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1115B4u;
            // 0x1115b8: 0x3c10005d  lui         $s0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115b4) {
            ctx->pc = 0x1115E4u;
            goto label_1115e4;
        }
    }
    ctx->pc = 0x1115BCu;
    // 0x1115bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1115bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115c0: 0x8e05e450  lw          $a1, -0x1BB0($s0)
    ctx->pc = 0x1115c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960208)));
    // 0x1115c4: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x1115C4u;
    SET_GPR_U32(ctx, 31, 0x1115CCu);
    ctx->pc = 0x1115C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1115C4u;
            // 0x1115c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1115CCu; }
        if (ctx->pc != 0x1115CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1115CCu; }
        if (ctx->pc != 0x1115CCu) { return; }
    }
    ctx->pc = 0x1115CCu;
label_1115cc:
    // 0x1115cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1115CCu;
    {
        const bool branch_taken_0x1115cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1115CCu;
            // 0x1115d0: 0x8e05e450  lw          $a1, -0x1BB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115cc) {
            ctx->pc = 0x1115E4u;
            goto label_1115e4;
        }
    }
    ctx->pc = 0x1115D4u;
    // 0x1115d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1115d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115d8: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x1115D8u;
    SET_GPR_U32(ctx, 31, 0x1115E0u);
    ctx->pc = 0x1115DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1115D8u;
            // 0x1115dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1115E0u; }
        if (ctx->pc != 0x1115E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1115E0u; }
        if (ctx->pc != 0x1115E0u) { return; }
    }
    ctx->pc = 0x1115E0u;
label_1115e0:
    // 0x1115e0: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x1115e0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1115e4:
    // 0x1115e4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1115e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1115e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1115ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1115ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1115f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1115f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1115f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1115f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1115f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1115f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1115fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1115FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1115FCu;
            // 0x111600: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x111604u;
    // 0x111604: 0x0  nop
    ctx->pc = 0x111604u;
    // NOP
}
