#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D9190
// Address: 0x2d9190 - 0x2d9230
void sub_002D9190_0x2d9190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9190_0x2d9190");
#endif

    switch (ctx->pc) {
        case 0x2d91d0u: goto label_2d91d0;
        case 0x2d91fcu: goto label_2d91fc;
        default: break;
    }

    ctx->pc = 0x2d9190u;

    // 0x2d9190: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d9190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d9194: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d9194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d9198: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d9198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d919c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d919cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d91a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d91a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d91a4: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x2d91a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d91a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d91a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d91ac: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2d91acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d91b0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2d91b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2d91b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d91b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d91b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d91b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d91bc: 0x2239021  addu        $s2, $s1, $v1
    ctx->pc = 0x2d91bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2d91c0: 0x232082b  sltu        $at, $s1, $s2
    ctx->pc = 0x2d91c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2d91c4: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D91C4u;
    {
        const bool branch_taken_0x2d91c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d91c4) {
            ctx->pc = 0x2D9210u;
            goto label_2d9210;
        }
    }
    ctx->pc = 0x2D91CCu;
    // 0x2d91cc: 0x2652fff4  addiu       $s2, $s2, -0xC
    ctx->pc = 0x2d91ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967284));
label_2d91d0:
    // 0x2d91d0: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x2D91D0u;
    {
        const bool branch_taken_0x2d91d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d91d0) {
            ctx->pc = 0x2D9200u;
            goto label_2d9200;
        }
    }
    ctx->pc = 0x2D91D8u;
    // 0x2d91d8: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D91D8u;
    {
        const bool branch_taken_0x2d91d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d91d8) {
            ctx->pc = 0x2D9200u;
            goto label_2d9200;
        }
    }
    ctx->pc = 0x2D91E0u;
    // 0x2d91e0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D91E0u;
    {
        const bool branch_taken_0x2d91e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d91e0) {
            ctx->pc = 0x2D9200u;
            goto label_2d9200;
        }
    }
    ctx->pc = 0x2D91E8u;
    // 0x2d91e8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2d91e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d91ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D91ECu;
    {
        const bool branch_taken_0x2d91ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d91ec) {
            ctx->pc = 0x2D9200u;
            goto label_2d9200;
        }
    }
    ctx->pc = 0x2D91F4u;
    // 0x2d91f4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2D91F4u;
    SET_GPR_U32(ctx, 31, 0x2D91FCu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D91FCu; }
        if (ctx->pc != 0x2D91FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D91FCu; }
        if (ctx->pc != 0x2D91FCu) { return; }
    }
    ctx->pc = 0x2D91FCu;
label_2d91fc:
    // 0x2d91fc: 0x0  nop
    ctx->pc = 0x2d91fcu;
    // NOP
label_2d9200:
    // 0x2d9200: 0x232082b  sltu        $at, $s1, $s2
    ctx->pc = 0x2d9200u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2d9204: 0x5420fff2  bnel        $at, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2D9204u;
    {
        const bool branch_taken_0x2d9204 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9204) {
            ctx->pc = 0x2D9208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9204u;
            // 0x2d9208: 0x2652fff4  addiu       $s2, $s2, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967284));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D91D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d91d0;
        }
    }
    ctx->pc = 0x2D920Cu;
    // 0x2d920c: 0x0  nop
    ctx->pc = 0x2d920cu;
    // NOP
label_2d9210:
    // 0x2d9210: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2d9210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2d9214: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d9214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9218: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d9218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d921c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d921cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9220: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9224: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9224u;
            // 0x2d9228: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D922Cu;
    // 0x2d922c: 0x0  nop
    ctx->pc = 0x2d922cu;
    // NOP
}
