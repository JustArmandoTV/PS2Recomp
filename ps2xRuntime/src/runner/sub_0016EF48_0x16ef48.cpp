#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016EF48
// Address: 0x16ef48 - 0x16ef98
void sub_0016EF48_0x16ef48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EF48_0x16ef48");
#endif

    switch (ctx->pc) {
        case 0x16ef6cu: goto label_16ef6c;
        default: break;
    }

    ctx->pc = 0x16ef48u;

    // 0x16ef48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ef48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ef4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ef4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ef50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16ef50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ef54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16ef54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16ef58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16ef58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ef5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16ef5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16ef60: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x16ef60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x16ef64: 0xc058b9a  jal         func_162E68
    ctx->pc = 0x16EF64u;
    SET_GPR_U32(ctx, 31, 0x16EF6Cu);
    ctx->pc = 0x16EF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EF64u;
            // 0x16ef68: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162E68u;
    if (runtime->hasFunction(0x162E68u)) {
        auto targetFn = runtime->lookupFunction(0x162E68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EF6Cu; }
        if (ctx->pc != 0x16EF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00162E68_0x162e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EF6Cu; }
        if (ctx->pc != 0x16EF6Cu) { return; }
    }
    ctx->pc = 0x16EF6Cu;
label_16ef6c:
    // 0x16ef6c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x16ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16ef70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16ef70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ef74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16ef74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ef78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ef78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ef7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16ef7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ef80: 0x8058b20  j           func_162C80
    ctx->pc = 0x16EF80u;
    ctx->pc = 0x16EF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EF80u;
            // 0x16ef84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162C80u;
    {
        auto targetFn = runtime->lookupFunction(0x162C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16EF88u;
    // 0x16ef88: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x16ef88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16ef8c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16ef90: 0x3e00008  jr          $ra
    ctx->pc = 0x16EF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EF90u;
            // 0x16ef94: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16EF98u;
}
