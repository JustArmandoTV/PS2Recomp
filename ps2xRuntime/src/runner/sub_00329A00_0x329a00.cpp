#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00329A00
// Address: 0x329a00 - 0x329ad0
void sub_00329A00_0x329a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329A00_0x329a00");
#endif

    switch (ctx->pc) {
        case 0x329a14u: goto label_329a14;
        default: break;
    }

    ctx->pc = 0x329a00u;

    // 0x329a00: 0x8c8c000c  lw          $t4, 0xC($a0)
    ctx->pc = 0x329a00u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x329a04: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x329a04u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329a08: 0x8c8b0030  lw          $t3, 0x30($a0)
    ctx->pc = 0x329a08u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x329a0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x329a0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329a10: 0x3407ea60  ori         $a3, $zero, 0xEA60
    ctx->pc = 0x329a10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_329a14:
    // 0x329a14: 0xd2080  sll         $a0, $t5, 2
    ctx->pc = 0x329a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x329a18: 0x1843021  addu        $a2, $t4, $a0
    ctx->pc = 0x329a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x329a1c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x329a1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x329a20: 0x90c90001  lbu         $t1, 0x1($a2)
    ctx->pc = 0x329a20u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x329a24: 0x1ab202a  slt         $a0, $t5, $t3
    ctx->pc = 0x329a24u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x329a28: 0x94ca0002  lhu         $t2, 0x2($a2)
    ctx->pc = 0x329a28u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x329a2c: 0x94140  sll         $t0, $t1, 5
    ctx->pc = 0x329a2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x329a30: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x329a30u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x329a34: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x329a34u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x329a38: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x329a38u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x329a3c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x329a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x329a40: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x329a40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x329a44: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x329a44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x329a48: 0x1484021  addu        $t0, $t2, $t0
    ctx->pc = 0x329a48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x329a4c: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x329a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x329a50: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x329A50u;
    {
        const bool branch_taken_0x329a50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x329A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329A50u;
            // 0x329a54: 0x661821  addu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a50) {
            ctx->pc = 0x329A14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_329a14;
        }
    }
    ctx->pc = 0x329A58u;
    // 0x329a58: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x329a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x329a5c: 0x3c041062  lui         $a0, 0x1062
    ctx->pc = 0x329a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4194 << 16));
    // 0x329a60: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x329a60u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x329a64: 0x34874dd3  ori         $a3, $a0, 0x4DD3
    ctx->pc = 0x329a64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19923);
    // 0x329a68: 0x3c048888  lui         $a0, 0x8888
    ctx->pc = 0x329a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34952 << 16));
    // 0x329a6c: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x329a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x329a70: 0x4010  mfhi        $t0
    ctx->pc = 0x329a70u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x329a74: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x329a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x329a78: 0xe30019  multu       $a3, $v1
    ctx->pc = 0x329a78u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 7) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x329a7c: 0xa4a80002  sh          $t0, 0x2($a1)
    ctx->pc = 0x329a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x329a80: 0x0  nop
    ctx->pc = 0x329a80u;
    // NOP
    // 0x329a84: 0x1810  mfhi        $v1
    ctx->pc = 0x329a84u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x329a88: 0x33982  srl         $a3, $v1, 6
    ctx->pc = 0x329a88u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x329a8c: 0x870019  multu       $a0, $a3
    ctx->pc = 0x329a8cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x329a90: 0x1810  mfhi        $v1
    ctx->pc = 0x329a90u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x329a94: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x329a94u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x329a98: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x329a98u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x329a9c: 0x28810100  slti        $at, $a0, 0x100
    ctx->pc = 0x329a9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x329aa0: 0x1810  mfhi        $v1
    ctx->pc = 0x329aa0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x329aa4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x329AA4u;
    {
        const bool branch_taken_0x329aa4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x329AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329AA4u;
            // 0x329aa8: 0xa0a30001  sb          $v1, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329aa4) {
            ctx->pc = 0x329AC0u;
            goto label_329ac0;
        }
    }
    ctx->pc = 0x329AACu;
    // 0x329aac: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x329aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x329ab0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x329ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x329ab4: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x329ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x329ab8: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x329ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x329abc: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x329abcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_329ac0:
    // 0x329ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x329AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329AC0u;
            // 0x329ac4: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x329AC8u;
    // 0x329ac8: 0x0  nop
    ctx->pc = 0x329ac8u;
    // NOP
    // 0x329acc: 0x0  nop
    ctx->pc = 0x329accu;
    // NOP
}
