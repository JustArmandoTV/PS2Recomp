#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005472C0
// Address: 0x5472c0 - 0x547300
void sub_005472C0_0x5472c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005472C0_0x5472c0");
#endif

    switch (ctx->pc) {
        case 0x5472e4u: goto label_5472e4;
        default: break;
    }

    ctx->pc = 0x5472c0u;

    // 0x5472c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5472c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5472c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5472c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x5472c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5472c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5472cc: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x5472ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x5472d0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5472d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x5472d4: 0x8c45d610  lw          $a1, -0x29F0($v0)
    ctx->pc = 0x5472d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956560)));
    // 0x5472d8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x5472d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x5472dc: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x5472DCu;
    SET_GPR_U32(ctx, 31, 0x5472E4u);
    ctx->pc = 0x5472E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5472DCu;
            // 0x5472e0: 0x8c46b6b0  lw          $a2, -0x4950($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5472E4u; }
        if (ctx->pc != 0x5472E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5472E4u; }
        if (ctx->pc != 0x5472E4u) { return; }
    }
    ctx->pc = 0x5472E4u;
label_5472e4:
    // 0x5472e4: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x5472e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
    // 0x5472e8: 0xac62b708  sw          $v0, -0x48F8($v1)
    ctx->pc = 0x5472e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948616), GPR_U32(ctx, 2));
    // 0x5472ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x5472ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5472f0: 0x3e00008  jr          $ra
    ctx->pc = 0x5472F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5472F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5472F0u;
            // 0x5472f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5472F8u;
    // 0x5472f8: 0x0  nop
    ctx->pc = 0x5472f8u;
    // NOP
    // 0x5472fc: 0x0  nop
    ctx->pc = 0x5472fcu;
    // NOP
}
