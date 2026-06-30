#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00547320
// Address: 0x547320 - 0x547350
void sub_00547320_0x547320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00547320_0x547320");
#endif

    ctx->pc = 0x547320u;

    // 0x547320: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x547320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
    // 0x547324: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x547324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x547328: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x547328u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x54732c: 0x2463b6f8  addiu       $v1, $v1, -0x4908
    ctx->pc = 0x54732cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948600));
    // 0x547330: 0x2442d618  addiu       $v0, $v0, -0x29E8
    ctx->pc = 0x547330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956568));
    // 0x547334: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x547334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x547338: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x547338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x54733c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x54733cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x547340: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x547340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x547344: 0x8c44b708  lw          $a0, -0x48F8($v0)
    ctx->pc = 0x547344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948616)));
    // 0x547348: 0x804a508  j           func_129420
    ctx->pc = 0x547348u;
    ctx->pc = 0x54734Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547348u;
            // 0x54734c: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00129420_0x129420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x547350u;
}
