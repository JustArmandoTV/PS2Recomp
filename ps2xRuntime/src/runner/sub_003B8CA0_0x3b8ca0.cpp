#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B8CA0
// Address: 0x3b8ca0 - 0x3b8cd0
void sub_003B8CA0_0x3b8ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8CA0_0x3b8ca0");
#endif

    ctx->pc = 0x3b8ca0u;

    // 0x3b8ca0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3b8ca0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b8ca4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3b8ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3b8ca8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3b8ca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3b8cac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B8CACu;
    {
        const bool branch_taken_0x3b8cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8cac) {
            ctx->pc = 0x3B8CC0u;
            goto label_3b8cc0;
        }
    }
    ctx->pc = 0x3B8CB4u;
    // 0x3b8cb4: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x3b8cb4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3b8cb8: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x3b8cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x3b8cbc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3b8cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3b8cc0:
    // 0x3b8cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B8CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B8CC8u;
    // 0x3b8cc8: 0x0  nop
    ctx->pc = 0x3b8cc8u;
    // NOP
    // 0x3b8ccc: 0x0  nop
    ctx->pc = 0x3b8cccu;
    // NOP
}
