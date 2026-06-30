#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A18E8
// Address: 0x1a18e8 - 0x1a1920
void sub_001A18E8_0x1a18e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A18E8_0x1a18e8");
#endif

    switch (ctx->pc) {
        case 0x1a190cu: goto label_1a190c;
        default: break;
    }

    ctx->pc = 0x1a18e8u;

    // 0x1a18e8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1a18e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a18ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a18f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a18f4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1a18f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18f8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1a18f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a18fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a18fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1904: 0xc062094  jal         func_188250
    ctx->pc = 0x1A1904u;
    SET_GPR_U32(ctx, 31, 0x1A190Cu);
    ctx->pc = 0x1A1908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1904u;
            // 0x1a1908: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188250u;
    if (runtime->hasFunction(0x188250u)) {
        auto targetFn = runtime->lookupFunction(0x188250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A190Cu; }
        if (ctx->pc != 0x1A190Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188250_0x188250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A190Cu; }
        if (ctx->pc != 0x1A190Cu) { return; }
    }
    ctx->pc = 0x1A190Cu;
label_1a190c:
    // 0x1a190c: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1a190cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1a1910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1914: 0xac62be88  sw          $v0, -0x4178($v1)
    ctx->pc = 0x1a1914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950536), GPR_U32(ctx, 2));
    // 0x1a1918: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A191Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1918u;
            // 0x1a191c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1920u;
}
