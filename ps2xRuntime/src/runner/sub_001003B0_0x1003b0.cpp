#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001003B0
// Address: 0x1003b0 - 0x100430
void sub_001003B0_0x1003b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001003B0_0x1003b0");
#endif

    switch (ctx->pc) {
        case 0x1003e4u: goto label_1003e4;
        case 0x100408u: goto label_100408;
        case 0x100418u: goto label_100418;
        default: break;
    }

    ctx->pc = 0x1003b0u;

    // 0x1003b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1003b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1003b4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1003b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1003b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1003bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1003bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1003c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1003c4: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x1003c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x1003c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1003c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1003cc: 0x8c42e080  lw          $v0, -0x1F80($v0)
    ctx->pc = 0x1003ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959232)));
    // 0x1003d0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1003d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1003d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1003D4u;
    {
        const bool branch_taken_0x1003d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1003d4) {
            ctx->pc = 0x1003ECu;
            goto label_1003ec;
        }
    }
    ctx->pc = 0x1003DCu;
    // 0x1003dc: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x1003DCu;
    SET_GPR_U32(ctx, 31, 0x1003E4u);
    ctx->pc = 0x1003E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1003DCu;
            // 0x1003e0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1003E4u; }
        if (ctx->pc != 0x1003E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1003E4u; }
        if (ctx->pc != 0x1003E4u) { return; }
    }
    ctx->pc = 0x1003E4u;
label_1003e4:
    // 0x1003e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1003E4u;
    {
        const bool branch_taken_0x1003e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1003E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1003E4u;
            // 0x1003e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1003e4) {
            ctx->pc = 0x10041Cu;
            goto label_10041c;
        }
    }
    ctx->pc = 0x1003ECu;
label_1003ec:
    // 0x1003ec: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1003ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1003f0: 0x8c42e088  lw          $v0, -0x1F78($v0)
    ctx->pc = 0x1003f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959240)));
    // 0x1003f4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1003f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1003f8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1003F8u;
    {
        const bool branch_taken_0x1003f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1003f8) {
            ctx->pc = 0x1003FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1003F8u;
            // 0x1003fc: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100410u;
            goto label_100410;
        }
    }
    ctx->pc = 0x100400u;
    // 0x100400: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x100400u;
    SET_GPR_U32(ctx, 31, 0x100408u);
    ctx->pc = 0x100404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100400u;
            // 0x100404: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100408u; }
        if (ctx->pc != 0x100408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100408u; }
        if (ctx->pc != 0x100408u) { return; }
    }
    ctx->pc = 0x100408u;
label_100408:
    // 0x100408: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x100408u;
    {
        const bool branch_taken_0x100408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100408) {
            ctx->pc = 0x100418u;
            goto label_100418;
        }
    }
    ctx->pc = 0x100410u;
label_100410:
    // 0x100410: 0xc0fe41c  jal         func_3F9070
    ctx->pc = 0x100410u;
    SET_GPR_U32(ctx, 31, 0x100418u);
    ctx->pc = 0x3F9070u;
    if (runtime->hasFunction(0x3F9070u)) {
        auto targetFn = runtime->lookupFunction(0x3F9070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100418u; }
        if (ctx->pc != 0x100418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9070_0x3f9070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100418u; }
        if (ctx->pc != 0x100418u) { return; }
    }
    ctx->pc = 0x100418u;
label_100418:
    // 0x100418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10041c:
    // 0x10041c: 0x3e00008  jr          $ra
    ctx->pc = 0x10041Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10041Cu;
            // 0x100420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100424u;
    // 0x100424: 0x0  nop
    ctx->pc = 0x100424u;
    // NOP
    // 0x100428: 0x0  nop
    ctx->pc = 0x100428u;
    // NOP
    // 0x10042c: 0x0  nop
    ctx->pc = 0x10042cu;
    // NOP
}
