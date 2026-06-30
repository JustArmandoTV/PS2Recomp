#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00305640
// Address: 0x305640 - 0x305670
void sub_00305640_0x305640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305640_0x305640");
#endif

    ctx->pc = 0x305640u;

    // 0x305640: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x305640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x305644: 0xac830b24  sw          $v1, 0xB24($a0)
    ctx->pc = 0x305644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2852), GPR_U32(ctx, 3));
    // 0x305648: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x305648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x30564c: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x30564cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x305650: 0x3c033d8e  lui         $v1, 0x3D8E
    ctx->pc = 0x305650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15758 << 16));
    // 0x305654: 0xac850b34  sw          $a1, 0xB34($a0)
    ctx->pc = 0x305654u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2868), GPR_U32(ctx, 5));
    // 0x305658: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x305658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x30565c: 0x3e00008  jr          $ra
    ctx->pc = 0x30565Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30565Cu;
            // 0x305660: 0xac830b44  sw          $v1, 0xB44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2884), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x305664u;
    // 0x305664: 0x0  nop
    ctx->pc = 0x305664u;
    // NOP
    // 0x305668: 0x0  nop
    ctx->pc = 0x305668u;
    // NOP
    // 0x30566c: 0x0  nop
    ctx->pc = 0x30566cu;
    // NOP
}
