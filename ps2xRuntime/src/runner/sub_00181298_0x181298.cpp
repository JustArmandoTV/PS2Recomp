#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181298
// Address: 0x181298 - 0x1812c8
void sub_00181298_0x181298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181298_0x181298");
#endif

    ctx->pc = 0x181298u;

    // 0x181298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18129c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18129cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1812a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1812a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1812a4: 0x8061f7a  j           func_187DE8
    ctx->pc = 0x1812A4u;
    ctx->pc = 0x1812A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1812A4u;
            // 0x1812a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DE8u;
    if (runtime->hasFunction(0x187DE8u)) {
        auto targetFn = runtime->lookupFunction(0x187DE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187DE8_0x187de8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1812ACu;
    // 0x1812ac: 0x0  nop
    ctx->pc = 0x1812acu;
    // NOP
    // 0x1812b0: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1812b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1812b4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1812b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1812b8: 0x2463b480  addiu       $v1, $v1, -0x4B80
    ctx->pc = 0x1812b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947968));
    // 0x1812bc: 0x2442b490  addiu       $v0, $v0, -0x4B70
    ctx->pc = 0x1812bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947984));
    // 0x1812c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1812C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1812C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1812C0u;
            // 0x1812c4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1812C8u;
}
