#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00164740
// Address: 0x164740 - 0x164778
void sub_00164740_0x164740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164740_0x164740");
#endif

    ctx->pc = 0x164740u;

    // 0x164740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164744: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x164744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16474c: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x16474cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x164750: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x164750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x164754: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x164758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16475c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x16475cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x164760: 0xa44300e4  sh          $v1, 0xE4($v0)
    ctx->pc = 0x164760u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 228), (uint16_t)GPR_U32(ctx, 3));
    // 0x164764: 0xac4000cc  sw          $zero, 0xCC($v0)
    ctx->pc = 0x164764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 0));
    // 0x164768: 0xa44000e0  sh          $zero, 0xE0($v0)
    ctx->pc = 0x164768u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 224), (uint16_t)GPR_U32(ctx, 0));
    // 0x16476c: 0xa44300e2  sh          $v1, 0xE2($v0)
    ctx->pc = 0x16476cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 226), (uint16_t)GPR_U32(ctx, 3));
    // 0x164770: 0x804a576  j           func_1295D8
    ctx->pc = 0x164770u;
    ctx->pc = 0x164774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164770u;
            // 0x164774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x164778u;
}
