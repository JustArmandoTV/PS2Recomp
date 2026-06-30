#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016D628
// Address: 0x16d628 - 0x16d678
void sub_0016D628_0x16d628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D628_0x16d628");
#endif

    ctx->pc = 0x16d628u;

    // 0x16d628: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16d628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16d62c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x16d62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x16d630: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x16d630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x16d634: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x16d634u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x16d638: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x16d638u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x16d63c: 0x3c08005e  lui         $t0, 0x5E
    ctx->pc = 0x16d63cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)94 << 16));
    // 0x16d640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d644: 0x2463aae8  addiu       $v1, $v1, -0x5518
    ctx->pc = 0x16d644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945512));
    // 0x16d648: 0x2484aaf8  addiu       $a0, $a0, -0x5508
    ctx->pc = 0x16d648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945528));
    // 0x16d64c: 0x24a5ab08  addiu       $a1, $a1, -0x54F8
    ctx->pc = 0x16d64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945544));
    // 0x16d650: 0x24c6ab18  addiu       $a2, $a2, -0x54E8
    ctx->pc = 0x16d650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945560));
    // 0x16d654: 0x24e7ab28  addiu       $a3, $a3, -0x54D8
    ctx->pc = 0x16d654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945576));
    // 0x16d658: 0x2508ab38  addiu       $t0, $t0, -0x54C8
    ctx->pc = 0x16d658u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294945592));
    // 0x16d65c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x16d65cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x16d660: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x16d660u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x16d664: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x16d664u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x16d668: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x16d668u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x16d66c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x16d66cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x16d670: 0x3e00008  jr          $ra
    ctx->pc = 0x16D670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D670u;
            // 0x16d674: 0xfd020000  sd          $v0, 0x0($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D678u;
}
