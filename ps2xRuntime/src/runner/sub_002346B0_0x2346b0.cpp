#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002346B0
// Address: 0x2346b0 - 0x234710
void sub_002346B0_0x2346b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002346B0_0x2346b0");
#endif

    switch (ctx->pc) {
        case 0x2346ecu: goto label_2346ec;
        default: break;
    }

    ctx->pc = 0x2346b0u;

    // 0x2346b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2346b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2346b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2346b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2346b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2346b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2346bc: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2346bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2346c0: 0x2442df80  addiu       $v0, $v0, -0x2080
    ctx->pc = 0x2346c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958976));
    // 0x2346c4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2346c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2346c8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2346c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2346cc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2346ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2346d0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2346d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2346d4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2346d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2346d8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2346d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2346dc: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x2346dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2346e0: 0x8c670070  lw          $a3, 0x70($v1)
    ctx->pc = 0x2346e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x2346e4: 0xc07f6c0  jal         func_1FDB00
    ctx->pc = 0x2346E4u;
    SET_GPR_U32(ctx, 31, 0x2346ECu);
    ctx->pc = 0x2346E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2346E4u;
            // 0x2346e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDB00u;
    if (runtime->hasFunction(0x1FDB00u)) {
        auto targetFn = runtime->lookupFunction(0x1FDB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2346ECu; }
        if (ctx->pc != 0x2346ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDB00_0x1fdb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2346ECu; }
        if (ctx->pc != 0x2346ECu) { return; }
    }
    ctx->pc = 0x2346ECu;
label_2346ec:
    // 0x2346ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2346ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2346f0: 0x2463df90  addiu       $v1, $v1, -0x2070
    ctx->pc = 0x2346f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958992));
    // 0x2346f4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2346f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2346f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2346f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2346fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2346FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2346FCu;
            // 0x234700: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234704u;
    // 0x234704: 0x0  nop
    ctx->pc = 0x234704u;
    // NOP
    // 0x234708: 0x0  nop
    ctx->pc = 0x234708u;
    // NOP
    // 0x23470c: 0x0  nop
    ctx->pc = 0x23470cu;
    // NOP
}
