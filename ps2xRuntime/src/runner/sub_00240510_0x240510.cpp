#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00240510
// Address: 0x240510 - 0x2405a0
void sub_00240510_0x240510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240510_0x240510");
#endif

    switch (ctx->pc) {
        case 0x240548u: goto label_240548;
        case 0x24056cu: goto label_24056c;
        default: break;
    }

    ctx->pc = 0x240510u;

    // 0x240510: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x240510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x240514: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x240514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x240518: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x240518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24051c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24051cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x240520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x240520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x240524: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x240528: 0x808300c4  lb          $v1, 0xC4($a0)
    ctx->pc = 0x240528u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x24052c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x24052Cu;
    {
        const bool branch_taken_0x24052c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24052Cu;
            // 0x240530: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24052c) {
            ctx->pc = 0x240580u;
            goto label_240580;
        }
    }
    ctx->pc = 0x240534u;
    // 0x240534: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x240534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x240538: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x240538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x24053c: 0x6200010  bltz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x24053Cu;
    {
        const bool branch_taken_0x24053c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x240540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24053Cu;
            // 0x240540: 0x26720028  addiu       $s2, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24053c) {
            ctx->pc = 0x240580u;
            goto label_240580;
        }
    }
    ctx->pc = 0x240544u;
    // 0x240544: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x240544u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_240548:
    // 0x240548: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x240548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24054c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x24054cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x240550: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x240550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240554: 0x90a30027  lbu         $v1, 0x27($a1)
    ctx->pc = 0x240554u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 39)));
    // 0x240558: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x240558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x24055c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24055Cu;
    {
        const bool branch_taken_0x24055c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24055c) {
            ctx->pc = 0x240570u;
            goto label_240570;
        }
    }
    ctx->pc = 0x240564u;
    // 0x240564: 0xc0900ec  jal         func_2403B0
    ctx->pc = 0x240564u;
    SET_GPR_U32(ctx, 31, 0x24056Cu);
    ctx->pc = 0x240568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240564u;
            // 0x240568: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2403B0u;
    if (runtime->hasFunction(0x2403B0u)) {
        auto targetFn = runtime->lookupFunction(0x2403B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24056Cu; }
        if (ctx->pc != 0x24056Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002403B0_0x2403b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24056Cu; }
        if (ctx->pc != 0x24056Cu) { return; }
    }
    ctx->pc = 0x24056Cu;
label_24056c:
    // 0x24056c: 0x0  nop
    ctx->pc = 0x24056cu;
    // NOP
label_240570:
    // 0x240570: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x240570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x240574: 0x621fff4  bgez        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x240574u;
    {
        const bool branch_taken_0x240574 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x240578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240574u;
            // 0x240578: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240574) {
            ctx->pc = 0x240548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_240548;
        }
    }
    ctx->pc = 0x24057Cu;
    // 0x24057c: 0x0  nop
    ctx->pc = 0x24057cu;
    // NOP
label_240580:
    // 0x240580: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x240580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x240584: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x240584u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x240588: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x240588u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24058c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24058cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240590: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240594: 0x3e00008  jr          $ra
    ctx->pc = 0x240594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240594u;
            // 0x240598: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24059Cu;
    // 0x24059c: 0x0  nop
    ctx->pc = 0x24059cu;
    // NOP
}
