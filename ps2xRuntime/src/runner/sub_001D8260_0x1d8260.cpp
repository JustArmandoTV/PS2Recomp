#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8260
// Address: 0x1d8260 - 0x1d82a0
void sub_001D8260_0x1d8260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8260_0x1d8260");
#endif

    ctx->pc = 0x1d8260u;

    // 0x1d8260: 0x8c830d68  lw          $v1, 0xD68($a0)
    ctx->pc = 0x1d8260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3432)));
    // 0x1d8264: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D8264u;
    {
        const bool branch_taken_0x1d8264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8264) {
            ctx->pc = 0x1D8290u;
            goto label_1d8290;
        }
    }
    ctx->pc = 0x1D826Cu;
    // 0x1d826c: 0x8c860d64  lw          $a2, 0xD64($a0)
    ctx->pc = 0x1d826cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3428)));
    // 0x1d8270: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d8270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8274: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1d8274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1d8278: 0xac860d60  sw          $a2, 0xD60($a0)
    ctx->pc = 0x1d8278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3424), GPR_U32(ctx, 6));
    // 0x1d827c: 0xac850e34  sw          $a1, 0xE34($a0)
    ctx->pc = 0x1d827cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3636), GPR_U32(ctx, 5));
    // 0x1d8280: 0x8c850a78  lw          $a1, 0xA78($a0)
    ctx->pc = 0x1d8280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2680)));
    // 0x1d8284: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1d8284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d8288: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1d8288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1d828c: 0xac830a78  sw          $v1, 0xA78($a0)
    ctx->pc = 0x1d828cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2680), GPR_U32(ctx, 3));
label_1d8290:
    // 0x1d8290: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8298u;
    // 0x1d8298: 0x0  nop
    ctx->pc = 0x1d8298u;
    // NOP
    // 0x1d829c: 0x0  nop
    ctx->pc = 0x1d829cu;
    // NOP
}
