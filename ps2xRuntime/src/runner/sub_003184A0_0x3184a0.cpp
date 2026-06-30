#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003184A0
// Address: 0x3184a0 - 0x318530
void sub_003184A0_0x3184a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003184A0_0x3184a0");
#endif

    switch (ctx->pc) {
        case 0x3184c0u: goto label_3184c0;
        default: break;
    }

    ctx->pc = 0x3184a0u;

    // 0x3184a0: 0xa4a00010  sh          $zero, 0x10($a1)
    ctx->pc = 0x3184a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x3184a4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3184a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3184a8: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x3184a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3184ac: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x3184acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3184b0: 0x2488ffff  addiu       $t0, $a0, -0x1
    ctx->pc = 0x3184b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3184b4: 0x82180  sll         $a0, $t0, 6
    ctx->pc = 0x3184b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x3184b8: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x3184b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3184bc: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x3184bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_3184c0:
    // 0x3184c0: 0x14c30009  bne         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3184C0u;
    {
        const bool branch_taken_0x3184c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x3184c0) {
            ctx->pc = 0x3184E8u;
            goto label_3184e8;
        }
    }
    ctx->pc = 0x3184C8u;
    // 0x3184c8: 0x94a30010  lhu         $v1, 0x10($a1)
    ctx->pc = 0x3184c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3184cc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3184ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3184d0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3184d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3184d4: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x3184d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x3184d8: 0xa4a80012  sh          $t0, 0x12($a1)
    ctx->pc = 0x3184d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 8));
    // 0x3184dc: 0x94a30010  lhu         $v1, 0x10($a1)
    ctx->pc = 0x3184dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3184e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3184e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3184e4: 0xa4a30010  sh          $v1, 0x10($a1)
    ctx->pc = 0x3184e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 3));
label_3184e8:
    // 0x3184e8: 0x2529ffc0  addiu       $t1, $t1, -0x40
    ctx->pc = 0x3184e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967232));
    // 0x3184ec: 0x95240000  lhu         $a0, 0x0($t1)
    ctx->pc = 0x3184ecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3184f0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3184f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3184f4: 0x94a70010  lhu         $a3, 0x10($a1)
    ctx->pc = 0x3184f4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3184f8: 0x100182a  slt         $v1, $t0, $zero
    ctx->pc = 0x3184f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x3184fc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3184fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x318500: 0x86202a  slt         $a0, $a0, $a2
    ctx->pc = 0x318500u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x318504: 0x28e70008  slti        $a3, $a3, 0x8
    ctx->pc = 0x318504u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x318508: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x318508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x31850c: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x31850cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x318510: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x318510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x318514: 0x5460ffea  bnel        $v1, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x318514u;
    {
        const bool branch_taken_0x318514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x318514) {
            ctx->pc = 0x318518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x318514u;
            // 0x318518: 0x95230000  lhu         $v1, 0x0($t1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3184C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3184c0;
        }
    }
    ctx->pc = 0x31851Cu;
    // 0x31851c: 0x3e00008  jr          $ra
    ctx->pc = 0x31851Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x318524u;
    // 0x318524: 0x0  nop
    ctx->pc = 0x318524u;
    // NOP
    // 0x318528: 0x0  nop
    ctx->pc = 0x318528u;
    // NOP
    // 0x31852c: 0x0  nop
    ctx->pc = 0x31852cu;
    // NOP
}
