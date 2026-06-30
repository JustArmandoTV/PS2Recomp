#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00318410
// Address: 0x318410 - 0x3184a0
void sub_00318410_0x318410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318410_0x318410");
#endif

    switch (ctx->pc) {
        case 0x318430u: goto label_318430;
        default: break;
    }

    ctx->pc = 0x318410u;

    // 0x318410: 0xa4a00010  sh          $zero, 0x10($a1)
    ctx->pc = 0x318410u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x318414: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x318414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x318418: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x318418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x31841c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x31841cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x318420: 0x2488ffff  addiu       $t0, $a0, -0x1
    ctx->pc = 0x318420u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x318424: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x318424u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x318428: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x318428u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31842c: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x31842cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_318430:
    // 0x318430: 0x14c3000b  bne         $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x318430u;
    {
        const bool branch_taken_0x318430 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x318430) {
            ctx->pc = 0x318460u;
            goto label_318460;
        }
    }
    ctx->pc = 0x318438u;
    // 0x318438: 0x94a30010  lhu         $v1, 0x10($a1)
    ctx->pc = 0x318438u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x31843c: 0x95240002  lhu         $a0, 0x2($t1)
    ctx->pc = 0x31843cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x318440: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x318440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x318444: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x318444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x318448: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x318448u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x31844c: 0xa4a40012  sh          $a0, 0x12($a1)
    ctx->pc = 0x31844cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x318450: 0x94a30010  lhu         $v1, 0x10($a1)
    ctx->pc = 0x318450u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x318454: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x318458: 0xa4a30010  sh          $v1, 0x10($a1)
    ctx->pc = 0x318458u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x31845c: 0x0  nop
    ctx->pc = 0x31845cu;
    // NOP
label_318460:
    // 0x318460: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x318460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x318464: 0x95240000  lhu         $a0, 0x0($t1)
    ctx->pc = 0x318464u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x318468: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x318468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x31846c: 0x94a70010  lhu         $a3, 0x10($a1)
    ctx->pc = 0x31846cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x318470: 0x100182a  slt         $v1, $t0, $zero
    ctx->pc = 0x318470u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x318474: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x318474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x318478: 0x86202a  slt         $a0, $a0, $a2
    ctx->pc = 0x318478u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x31847c: 0x28e70008  slti        $a3, $a3, 0x8
    ctx->pc = 0x31847cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x318480: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x318480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x318484: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x318484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x318488: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x318488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x31848c: 0x5460ffe8  bnel        $v1, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x31848Cu;
    {
        const bool branch_taken_0x31848c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31848c) {
            ctx->pc = 0x318490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31848Cu;
            // 0x318490: 0x95230000  lhu         $v1, 0x0($t1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x318430u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_318430;
        }
    }
    ctx->pc = 0x318494u;
    // 0x318494: 0x3e00008  jr          $ra
    ctx->pc = 0x318494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31849Cu;
    // 0x31849c: 0x0  nop
    ctx->pc = 0x31849cu;
    // NOP
}
