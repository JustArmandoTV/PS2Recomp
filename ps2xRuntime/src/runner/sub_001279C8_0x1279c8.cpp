#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001279C8
// Address: 0x1279c8 - 0x127a48
void sub_001279C8_0x1279c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001279C8_0x1279c8");
#endif

    switch (ctx->pc) {
        case 0x127a14u: goto label_127a14;
        case 0x127a28u: goto label_127a28;
        default: break;
    }

    ctx->pc = 0x1279c8u;

    // 0x1279c8: 0x3c0f0012  lui         $t7, 0x12
    ctx->pc = 0x1279c8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)18 << 16));
    // 0x1279cc: 0xac8001d8  sw          $zero, 0x1D8($a0)
    ctx->pc = 0x1279ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 472), GPR_U32(ctx, 0));
    // 0x1279d0: 0x25ef7988  addiu       $t7, $t7, 0x7988
    ctx->pc = 0x1279d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 31112));
    // 0x1279d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1279d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1279d8: 0xac8f003c  sw          $t7, 0x3C($a0)
    ctx->pc = 0x1279d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 15));
    // 0x1279dc: 0x248e01e4  addiu       $t6, $a0, 0x1E4
    ctx->pc = 0x1279dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 484));
    // 0x1279e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1279e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1279e4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1279e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1279e8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1279e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1279ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1279ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1279f0: 0xac8f0038  sw          $t7, 0x38($a0)
    ctx->pc = 0x1279f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 15));
    // 0x1279f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1279f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1279f8: 0xac8e01e0  sw          $t6, 0x1E0($a0)
    ctx->pc = 0x1279f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 14));
    // 0x1279fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1279fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x127a00: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x127a00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127a04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x127a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a08: 0xac8f01dc  sw          $t7, 0x1DC($a0)
    ctx->pc = 0x127a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 476), GPR_U32(ctx, 15));
    // 0x127a0c: 0xc049df8  jal         func_1277E0
    ctx->pc = 0x127A0Cu;
    SET_GPR_U32(ctx, 31, 0x127A14u);
    ctx->pc = 0x127A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127A0Cu;
            // 0x127a10: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1277E0u;
    if (runtime->hasFunction(0x1277E0u)) {
        auto targetFn = runtime->lookupFunction(0x1277E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127A14u; }
        if (ctx->pc != 0x127A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001277E0_0x1277e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127A14u; }
        if (ctx->pc != 0x127A14u) { return; }
    }
    ctx->pc = 0x127A14u;
label_127a14:
    // 0x127a14: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x127a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x127a18: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x127a18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a1c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x127a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x127a20: 0xc049df8  jal         func_1277E0
    ctx->pc = 0x127A20u;
    SET_GPR_U32(ctx, 31, 0x127A28u);
    ctx->pc = 0x127A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127A20u;
            // 0x127a24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1277E0u;
    if (runtime->hasFunction(0x1277E0u)) {
        auto targetFn = runtime->lookupFunction(0x1277E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127A28u; }
        if (ctx->pc != 0x127A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001277E0_0x1277e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127A28u; }
        if (ctx->pc != 0x127A28u) { return; }
    }
    ctx->pc = 0x127A28u;
label_127a28:
    // 0x127a28: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x127a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x127a2c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x127a2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x127a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127a34: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x127a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x127a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127a3c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x127a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x127a40: 0x8049df8  j           func_1277E0
    ctx->pc = 0x127A40u;
    ctx->pc = 0x127A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127A40u;
            // 0x127a44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1277E0u;
    if (runtime->hasFunction(0x1277E0u)) {
        auto targetFn = runtime->lookupFunction(0x1277E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001277E0_0x1277e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x127A48u;
}
