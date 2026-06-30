#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033BD80
// Address: 0x33bd80 - 0x33bde0
void sub_0033BD80_0x33bd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BD80_0x33bd80");
#endif

    switch (ctx->pc) {
        case 0x33bda4u: goto label_33bda4;
        case 0x33bdc0u: goto label_33bdc0;
        default: break;
    }

    ctx->pc = 0x33bd80u;

    // 0x33bd80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33bd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33bd84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33bd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33bd88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33bd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33bd8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33bd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33bd90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33bd90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bd94: 0x8c8202c8  lw          $v0, 0x2C8($a0)
    ctx->pc = 0x33bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 712)));
    // 0x33bd98: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x33bd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33bd9c: 0xc0a545c  jal         func_295170
    ctx->pc = 0x33BD9Cu;
    SET_GPR_U32(ctx, 31, 0x33BDA4u);
    ctx->pc = 0x33BDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BD9Cu;
            // 0x33bda0: 0xa28024  and         $s0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BDA4u; }
        if (ctx->pc != 0x33BDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BDA4u; }
        if (ctx->pc != 0x33BDA4u) { return; }
    }
    ctx->pc = 0x33BDA4u;
label_33bda4:
    // 0x33bda4: 0xac50002c  sw          $s0, 0x2C($v0)
    ctx->pc = 0x33bda4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 16));
    // 0x33bda8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x33bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x33bdac: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x33bdacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x33bdb0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x33bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x33bdb4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x33bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33bdb8: 0xc08bf20  jal         func_22FC80
    ctx->pc = 0x33BDB8u;
    SET_GPR_U32(ctx, 31, 0x33BDC0u);
    ctx->pc = 0x33BDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BDB8u;
            // 0x33bdbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BDC0u; }
        if (ctx->pc != 0x33BDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BDC0u; }
        if (ctx->pc != 0x33BDC0u) { return; }
    }
    ctx->pc = 0x33BDC0u;
label_33bdc0:
    // 0x33bdc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33bdc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33bdc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33bdc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33bdc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33bdc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bdcc: 0x3e00008  jr          $ra
    ctx->pc = 0x33BDCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BDCCu;
            // 0x33bdd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33BDD4u;
    // 0x33bdd4: 0x0  nop
    ctx->pc = 0x33bdd4u;
    // NOP
    // 0x33bdd8: 0x0  nop
    ctx->pc = 0x33bdd8u;
    // NOP
    // 0x33bddc: 0x0  nop
    ctx->pc = 0x33bddcu;
    // NOP
}
