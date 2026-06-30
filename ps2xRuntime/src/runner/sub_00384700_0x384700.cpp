#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00384700
// Address: 0x384700 - 0x384720
void sub_00384700_0x384700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384700_0x384700");
#endif

    ctx->pc = 0x384700u;

    // 0x384700: 0x8c860d9c  lw          $a2, 0xD9C($a0)
    ctx->pc = 0x384700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3484)));
    // 0x384704: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x384704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x384708: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x384708u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x38470c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x38470cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x384710: 0x3e00008  jr          $ra
    ctx->pc = 0x384710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384710u;
            // 0x384714: 0xac830d9c  sw          $v1, 0xD9C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x384718u;
    // 0x384718: 0x0  nop
    ctx->pc = 0x384718u;
    // NOP
    // 0x38471c: 0x0  nop
    ctx->pc = 0x38471cu;
    // NOP
}
