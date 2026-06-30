#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E938
// Address: 0x17e938 - 0x17e970
void sub_0017E938_0x17e938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E938_0x17e938");
#endif

    switch (ctx->pc) {
        case 0x17e948u: goto label_17e948;
        default: break;
    }

    ctx->pc = 0x17e938u;

    // 0x17e938: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17e938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17e93c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e940: 0x24436760  addiu       $v1, $v0, 0x6760
    ctx->pc = 0x17e940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 26464));
    // 0x17e944: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x17e944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_17e948:
    // 0x17e948: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x17e948u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17e94c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x17e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x17e950: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x17e950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x17e954: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x17e954u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x17e958: 0x0  nop
    ctx->pc = 0x17e958u;
    // NOP
    // 0x17e95c: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17E95Cu;
    {
        const bool branch_taken_0x17e95c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x17E960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E95Cu;
            // 0x17e960: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e95c) {
            ctx->pc = 0x17E948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17e948;
        }
    }
    ctx->pc = 0x17E964u;
    // 0x17e964: 0x3e00008  jr          $ra
    ctx->pc = 0x17E964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E964u;
            // 0x17e968: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E96Cu;
    // 0x17e96c: 0x0  nop
    ctx->pc = 0x17e96cu;
    // NOP
}
