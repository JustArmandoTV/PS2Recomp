#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2890
// Address: 0x1a2890 - 0x1a28d8
void sub_001A2890_0x1a2890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2890_0x1a2890");
#endif

    switch (ctx->pc) {
        case 0x1a28acu: goto label_1a28ac;
        default: break;
    }

    ctx->pc = 0x1a2890u;

    // 0x1a2890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a2894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2898: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a2898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a289c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a289cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a28a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a28a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a28a4: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x1A28A4u;
    SET_GPR_U32(ctx, 31, 0x1A28ACu);
    ctx->pc = 0x1A28A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A28A4u;
            // 0x1a28a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A28ACu; }
        if (ctx->pc != 0x1A28ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A28ACu; }
        if (ctx->pc != 0x1A28ACu) { return; }
    }
    ctx->pc = 0x1A28ACu;
label_1a28ac:
    // 0x1a28ac: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A28ACu;
    {
        const bool branch_taken_0x1a28ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a28ac) {
            ctx->pc = 0x1A28B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A28ACu;
            // 0x1a28b0: 0xae110068  sw          $s1, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A28B4u;
            goto label_1a28b4;
        }
    }
    ctx->pc = 0x1A28B4u;
label_1a28b4:
    // 0x1a28b4: 0xac510024  sw          $s1, 0x24($v0)
    ctx->pc = 0x1a28b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 17));
    // 0x1a28b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a28b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a28bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a28bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a28c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a28c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a28c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A28C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A28C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A28C4u;
            // 0x1a28c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A28CCu;
    // 0x1a28cc: 0x0  nop
    ctx->pc = 0x1a28ccu;
    // NOP
    // 0x1a28d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A28D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A28D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A28D0u;
            // 0x1a28d4: 0x8c820068  lw          $v0, 0x68($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A28D8u;
}
