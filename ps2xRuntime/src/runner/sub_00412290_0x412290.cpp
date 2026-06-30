#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00412290
// Address: 0x412290 - 0x4122f0
void sub_00412290_0x412290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412290_0x412290");
#endif

    switch (ctx->pc) {
        case 0x4122c0u: goto label_4122c0;
        case 0x4122e0u: goto label_4122e0;
        default: break;
    }

    ctx->pc = 0x412290u;

    // 0x412290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x412290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x412294: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x412294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x412298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x412298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41229c: 0x248401f0  addiu       $a0, $a0, 0x1F0
    ctx->pc = 0x41229cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 496));
    // 0x4122a0: 0xafa6001c  sw          $a2, 0x1C($sp)
    ctx->pc = 0x4122a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 6));
    // 0x4122a4: 0x8cc700d4  lw          $a3, 0xD4($a2)
    ctx->pc = 0x4122a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x4122a8: 0x90c200f0  lbu         $v0, 0xF0($a2)
    ctx->pc = 0x4122a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 240)));
    // 0x4122ac: 0x28e50003  slti        $a1, $a3, 0x3
    ctx->pc = 0x4122acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4122b0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4122b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4122b4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4122b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4122b8: 0xc0b4588  jal         func_2D1620
    ctx->pc = 0x4122B8u;
    SET_GPR_U32(ctx, 31, 0x4122C0u);
    ctx->pc = 0x4122BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4122B8u;
            // 0x4122bc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1620u;
    if (runtime->hasFunction(0x2D1620u)) {
        auto targetFn = runtime->lookupFunction(0x2D1620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4122C0u; }
        if (ctx->pc != 0x4122C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1620_0x2d1620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4122C0u; }
        if (ctx->pc != 0x4122C0u) { return; }
    }
    ctx->pc = 0x4122C0u;
label_4122c0:
    // 0x4122c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4122c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4122c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4122c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4122c8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x4122c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x4122cc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4122ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4122d0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4122d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4122d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4122d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4122d8: 0xc0b4904  jal         func_2D2410
    ctx->pc = 0x4122D8u;
    SET_GPR_U32(ctx, 31, 0x4122E0u);
    ctx->pc = 0x4122DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4122D8u;
            // 0x4122dc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4122E0u; }
        if (ctx->pc != 0x4122E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4122E0u; }
        if (ctx->pc != 0x4122E0u) { return; }
    }
    ctx->pc = 0x4122E0u;
label_4122e0:
    // 0x4122e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4122e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4122e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4122E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4122E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4122E4u;
            // 0x4122e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4122ECu;
    // 0x4122ec: 0x0  nop
    ctx->pc = 0x4122ecu;
    // NOP
}
