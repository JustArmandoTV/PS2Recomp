#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019E9D8
// Address: 0x19e9d8 - 0x19ea20
void sub_0019E9D8_0x19e9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E9D8_0x19e9d8");
#endif

    ctx->pc = 0x19e9d8u;

    // 0x19e9d8: 0x24a60007  addiu       $a2, $a1, 0x7
    ctx->pc = 0x19e9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x19e9dc: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x19e9dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x19e9e0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x19e9e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e9e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19e9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e9e8: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x19e9e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x19e9ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19e9ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e9f0: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x19e9f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x19e9f4: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x19e9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19e9f8: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x19e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x19e9fc: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x19e9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19ea00: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x19ea00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19ea04: 0x8cc300d0  lw          $v1, 0xD0($a2)
    ctx->pc = 0x19ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x19ea08: 0x14670002  bne         $v1, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x19EA08u;
    {
        const bool branch_taken_0x19ea08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x19EA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EA08u;
            // 0x19ea0c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ea08) {
            ctx->pc = 0x19EA14u;
            goto label_19ea14;
        }
    }
    ctx->pc = 0x19EA10u;
    // 0x19ea10: 0x8ca200e0  lw          $v0, 0xE0($a1)
    ctx->pc = 0x19ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
label_19ea14:
    // 0x19ea14: 0x3e00008  jr          $ra
    ctx->pc = 0x19EA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EA1Cu;
    // 0x19ea1c: 0x0  nop
    ctx->pc = 0x19ea1cu;
    // NOP
}
