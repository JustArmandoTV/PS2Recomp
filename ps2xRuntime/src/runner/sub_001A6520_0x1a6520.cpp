#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6520
// Address: 0x1a6520 - 0x1a6558
void sub_001A6520_0x1a6520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6520_0x1a6520");
#endif

    ctx->pc = 0x1a6520u;

    // 0x1a6520: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a6520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6524: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1a6524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a6528: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1a6528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1a652c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a652cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6530: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1a6530u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a6534: 0x10c50005  beq         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6534u;
    {
        const bool branch_taken_0x1a6534 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A6538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6534u;
            // 0x1a6538: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6534) {
            ctx->pc = 0x1A654Cu;
            goto label_1a654c;
        }
    }
    ctx->pc = 0x1A653Cu;
    // 0x1a653c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a653cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a6540: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a6540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a6544: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a6544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a6548: 0x8c621388  lw          $v0, 0x1388($v1)
    ctx->pc = 0x1a6548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5000)));
label_1a654c:
    // 0x1a654c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A654Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6554u;
    // 0x1a6554: 0x0  nop
    ctx->pc = 0x1a6554u;
    // NOP
}
