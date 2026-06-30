#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00221AB0
// Address: 0x221ab0 - 0x221af0
void sub_00221AB0_0x221ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221AB0_0x221ab0");
#endif

    ctx->pc = 0x221ab0u;

    // 0x221ab0: 0x8ca80014  lw          $t0, 0x14($a1)
    ctx->pc = 0x221ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x221ab4: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x221ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x221ab8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x221ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x221abc: 0x15030002  bne         $t0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x221ABCu;
    {
        const bool branch_taken_0x221abc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x221AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221ABCu;
            // 0x221ac0: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221abc) {
            ctx->pc = 0x221AC8u;
            goto label_221ac8;
        }
    }
    ctx->pc = 0x221AC4u;
    // 0x221ac4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x221ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_221ac8:
    // 0x221ac8: 0x729c0  sll         $a1, $a3, 7
    ctx->pc = 0x221ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x221acc: 0x24c3fff0  addiu       $v1, $a2, -0x10
    ctx->pc = 0x221accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x221ad0: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x221ad0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x221ad4: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x221AD4u;
    {
        const bool branch_taken_0x221ad4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x221ad4) {
            ctx->pc = 0x221AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221AD4u;
            // 0x221ad8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x221AE4u;
            goto label_221ae4;
        }
    }
    ctx->pc = 0x221ADCu;
    // 0x221adc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x221ADCu;
    {
        const bool branch_taken_0x221adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221ADCu;
            // 0x221ae0: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221adc) {
            ctx->pc = 0x221AE8u;
            goto label_221ae8;
        }
    }
    ctx->pc = 0x221AE4u;
label_221ae4:
    // 0x221ae4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x221ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_221ae8:
    // 0x221ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x221AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221AF0u;
}
