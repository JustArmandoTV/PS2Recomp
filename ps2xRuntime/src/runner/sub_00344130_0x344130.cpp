#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00344130
// Address: 0x344130 - 0x344170
void sub_00344130_0x344130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344130_0x344130");
#endif

    ctx->pc = 0x344130u;

    // 0x344130: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x344130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x344134: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x344134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x344138: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x344138u;
    {
        const bool branch_taken_0x344138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x344138) {
            ctx->pc = 0x344154u;
            goto label_344154;
        }
    }
    ctx->pc = 0x344140u;
    // 0x344140: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x344140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x344144: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x344144u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
    // 0x344148: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x344148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x34414c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34414Cu;
    {
        const bool branch_taken_0x34414c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34414Cu;
            // 0x344150: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34414c) {
            ctx->pc = 0x344164u;
            goto label_344164;
        }
    }
    ctx->pc = 0x344154u;
label_344154:
    // 0x344154: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x344154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x344158: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x344158u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
    // 0x34415c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x34415cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x344160: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x344160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_344164:
    // 0x344164: 0x3e00008  jr          $ra
    ctx->pc = 0x344164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34416Cu;
    // 0x34416c: 0x0  nop
    ctx->pc = 0x34416cu;
    // NOP
}
