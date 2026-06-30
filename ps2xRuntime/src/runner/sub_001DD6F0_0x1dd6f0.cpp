#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD6F0
// Address: 0x1dd6f0 - 0x1dd760
void sub_001DD6F0_0x1dd6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD6F0_0x1dd6f0");
#endif

    switch (ctx->pc) {
        case 0x1dd728u: goto label_1dd728;
        case 0x1dd744u: goto label_1dd744;
        default: break;
    }

    ctx->pc = 0x1dd6f0u;

    // 0x1dd6f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dd6f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dd6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd6f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dd6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dd6fc: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x1dd6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dd700: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dd700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dd704: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dd704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dd708: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1dd708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1dd70c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd70cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd710: 0x8c8202c8  lw          $v0, 0x2C8($a0)
    ctx->pc = 0x1dd710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 712)));
    // 0x1dd714: 0x8cc5002c  lw          $a1, 0x2C($a2)
    ctx->pc = 0x1dd714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1dd718: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1dd718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1dd71c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1dd71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1dd720: 0xc0a545c  jal         func_295170
    ctx->pc = 0x1DD720u;
    SET_GPR_U32(ctx, 31, 0x1DD728u);
    ctx->pc = 0x1DD724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD720u;
            // 0x1dd724: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD728u; }
        if (ctx->pc != 0x1DD728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD728u; }
        if (ctx->pc != 0x1DD728u) { return; }
    }
    ctx->pc = 0x1DD728u;
label_1dd728:
    // 0x1dd728: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x1dd728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
    // 0x1dd72c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1dd72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1dd730: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1dd730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1dd734: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x1dd734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x1dd738: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1dd738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dd73c: 0xc08bf20  jal         func_22FC80
    ctx->pc = 0x1DD73Cu;
    SET_GPR_U32(ctx, 31, 0x1DD744u);
    ctx->pc = 0x1DD740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD73Cu;
            // 0x1dd740: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD744u; }
        if (ctx->pc != 0x1DD744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD744u; }
        if (ctx->pc != 0x1DD744u) { return; }
    }
    ctx->pc = 0x1DD744u;
label_1dd744:
    // 0x1dd744: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dd744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dd748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd74c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dd74cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd750: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD750u;
            // 0x1dd754: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD758u;
    // 0x1dd758: 0x0  nop
    ctx->pc = 0x1dd758u;
    // NOP
    // 0x1dd75c: 0x0  nop
    ctx->pc = 0x1dd75cu;
    // NOP
}
