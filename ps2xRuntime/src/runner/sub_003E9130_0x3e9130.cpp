#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E9130
// Address: 0x3e9130 - 0x3e9160
void sub_003E9130_0x3e9130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9130_0x3e9130");
#endif

    ctx->pc = 0x3e9130u;

    // 0x3e9130: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3e9130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3e9134: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x3e9134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3e9138: 0x2485000a  addiu       $a1, $a0, 0xA
    ctx->pc = 0x3e9138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x3e913c: 0xac850050  sw          $a1, 0x50($a0)
    ctx->pc = 0x3e913cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
    // 0x3e9140: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x3e9140u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
    // 0x3e9144: 0xac86004c  sw          $a2, 0x4C($a0)
    ctx->pc = 0x3e9144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 6));
    // 0x3e9148: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x3e9148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x3e914c: 0xa085000a  sb          $a1, 0xA($a0)
    ctx->pc = 0x3e914cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 5));
    // 0x3e9150: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9150u;
            // 0x3e9154: 0xa083000b  sb          $v1, 0xB($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E9158u;
    // 0x3e9158: 0x0  nop
    ctx->pc = 0x3e9158u;
    // NOP
    // 0x3e915c: 0x0  nop
    ctx->pc = 0x3e915cu;
    // NOP
}
