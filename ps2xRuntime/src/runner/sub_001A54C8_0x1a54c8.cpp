#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A54C8
// Address: 0x1a54c8 - 0x1a5518
void sub_001A54C8_0x1a54c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A54C8_0x1a54c8");
#endif

    switch (ctx->pc) {
        case 0x1a5500u: goto label_1a5500;
        default: break;
    }

    ctx->pc = 0x1a54c8u;

    // 0x1a54c8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1a54c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1a54cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a54ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a54d0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1a54d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a54d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a54d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a54d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a54dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a54dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a54e0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1a54e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a54e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a54e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a54e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a54e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a54ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a54ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a54f0: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1a54f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a54f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a54f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a54f8: 0xc069546  jal         func_1A5518
    ctx->pc = 0x1A54F8u;
    SET_GPR_U32(ctx, 31, 0x1A5500u);
    ctx->pc = 0x1A54FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A54F8u;
            // 0x1a54fc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5518u;
    if (runtime->hasFunction(0x1A5518u)) {
        auto targetFn = runtime->lookupFunction(0x1A5518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5500u; }
        if (ctx->pc != 0x1A5500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5518_0x1a5518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5500u; }
        if (ctx->pc != 0x1A5500u) { return; }
    }
    ctx->pc = 0x1A5500u;
label_1a5500:
    // 0x1a5500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5504: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a5504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a5508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a550c: 0x806954e  j           func_1A5538
    ctx->pc = 0x1A550Cu;
    ctx->pc = 0x1A5510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A550Cu;
            // 0x1a5510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5538u;
    {
        auto targetFn = runtime->lookupFunction(0x1A5538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A5514u;
    // 0x1a5514: 0x0  nop
    ctx->pc = 0x1a5514u;
    // NOP
}
