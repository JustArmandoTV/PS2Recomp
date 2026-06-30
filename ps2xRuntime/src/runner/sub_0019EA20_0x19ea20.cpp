#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019EA20
// Address: 0x19ea20 - 0x19ea68
void sub_0019EA20_0x19ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EA20_0x19ea20");
#endif

    ctx->pc = 0x19ea20u;

    // 0x19ea20: 0x24a60007  addiu       $a2, $a1, 0x7
    ctx->pc = 0x19ea20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x19ea24: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x19ea24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x19ea28: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x19ea28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19ea2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ea30: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x19ea30u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x19ea34: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x19ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x19ea38: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x19ea38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x19ea3c: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x19ea3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19ea40: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x19ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x19ea44: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x19ea44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19ea48: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x19ea48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19ea4c: 0x8cc300d0  lw          $v1, 0xD0($a2)
    ctx->pc = 0x19ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x19ea50: 0x14670002  bne         $v1, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x19EA50u;
    {
        const bool branch_taken_0x19ea50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x19EA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EA50u;
            // 0x19ea54: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ea50) {
            ctx->pc = 0x19EA5Cu;
            goto label_19ea5c;
        }
    }
    ctx->pc = 0x19EA58u;
    // 0x19ea58: 0x8ca200e8  lw          $v0, 0xE8($a1)
    ctx->pc = 0x19ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 232)));
label_19ea5c:
    // 0x19ea5c: 0x3e00008  jr          $ra
    ctx->pc = 0x19EA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EA64u;
    // 0x19ea64: 0x0  nop
    ctx->pc = 0x19ea64u;
    // NOP
}
