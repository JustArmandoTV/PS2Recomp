#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010B968
// Address: 0x10b968 - 0x10b9e0
void sub_0010B968_0x10b968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B968_0x10b968");
#endif

    switch (ctx->pc) {
        case 0x10b97cu: goto label_10b97c;
        default: break;
    }

    ctx->pc = 0x10b968u;

    // 0x10b968: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b96c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b970: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b974: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10B974u;
    SET_GPR_U32(ctx, 31, 0x10B97Cu);
    ctx->pc = 0x10B978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B974u;
            // 0x10b978: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B97Cu; }
        if (ctx->pc != 0x10B97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B97Cu; }
        if (ctx->pc != 0x10B97Cu) { return; }
    }
    ctx->pc = 0x10B97Cu;
label_10b97c:
    // 0x10b97c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10b97cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10b980: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10b980u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10b984: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x10b984u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x10b988: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x10b988u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x10b98c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10b98cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x10000000
    // 0x10b990: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x10b990u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x10b994: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b998: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x10b998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x10b99c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x10b99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x10b9a0: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x10b9a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x10b9a4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10b9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10b9a8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x10b9a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x10b9ac: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x10b9acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x10b9b0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10b9b4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x10b9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x10b9b8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10b9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10b9bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B9BCu;
    {
        const bool branch_taken_0x10b9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B9BCu;
            // 0x10b9c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b9bc) {
            ctx->pc = 0x10B9D0u;
            goto label_10b9d0;
        }
    }
    ctx->pc = 0x10B9C4u;
    // 0x10b9c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b9c8: 0x804597c  j           func_1165F0
    ctx->pc = 0x10B9C8u;
    ctx->pc = 0x10B9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B9C8u;
            // 0x10b9cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001165F0_0x1165f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10B9D0u;
label_10b9d0:
    // 0x10b9d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b9d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x10B9D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B9D4u;
            // 0x10b9d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10B9DCu;
    // 0x10b9dc: 0x0  nop
    ctx->pc = 0x10b9dcu;
    // NOP
}
