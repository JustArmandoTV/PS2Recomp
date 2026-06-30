#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B94A8
// Address: 0x1b94a8 - 0x1b9508
void sub_001B94A8_0x1b94a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B94A8_0x1b94a8");
#endif

    switch (ctx->pc) {
        case 0x1b94ecu: goto label_1b94ec;
        default: break;
    }

    ctx->pc = 0x1b94a8u;

    // 0x1b94a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b94a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b94ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b94acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b94b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b94b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b94b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b94b8: 0x26070014  addiu       $a3, $s0, 0x14
    ctx->pc = 0x1b94b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1b94bc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1b94bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b94c0: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x1b94c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b94c4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B94C4u;
    {
        const bool branch_taken_0x1b94c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b94c4) {
            ctx->pc = 0x1B94C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B94C4u;
            // 0x1b94c8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B94CCu;
            goto label_1b94cc;
        }
    }
    ctx->pc = 0x1B94CCu;
label_1b94cc:
    // 0x1b94cc: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x1b94ccu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b94d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b94d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b94d4: 0x1010  mfhi        $v0
    ctx->pc = 0x1b94d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b94d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b94dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b94dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b94e0: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x1b94e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x1b94e4: 0xc06e55a  jal         func_1B9568
    ctx->pc = 0x1B94E4u;
    SET_GPR_U32(ctx, 31, 0x1B94ECu);
    ctx->pc = 0x1B94E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B94E4u;
            // 0x1b94e8: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9568u;
    if (runtime->hasFunction(0x1B9568u)) {
        auto targetFn = runtime->lookupFunction(0x1B9568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B94ECu; }
        if (ctx->pc != 0x1B94ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9568_0x1b9568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B94ECu; }
        if (ctx->pc != 0x1B94ECu) { return; }
    }
    ctx->pc = 0x1B94ECu;
label_1b94ec:
    // 0x1b94ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b94ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b94f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b94f4: 0xae0301a8  sw          $v1, 0x1A8($s0)
    ctx->pc = 0x1b94f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 3));
    // 0x1b94f8: 0xae0301a4  sw          $v1, 0x1A4($s0)
    ctx->pc = 0x1b94f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 3));
    // 0x1b94fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b94fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9500: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9500u;
            // 0x1b9504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9508u;
}
