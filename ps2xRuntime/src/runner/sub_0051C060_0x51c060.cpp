#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051C060
// Address: 0x51c060 - 0x51c100
void sub_0051C060_0x51c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051C060_0x51c060");
#endif

    switch (ctx->pc) {
        case 0x51c0e0u: goto label_51c0e0;
        default: break;
    }

    ctx->pc = 0x51c060u;

    // 0x51c060: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c064: 0x244259e8  addiu       $v0, $v0, 0x59E8
    ctx->pc = 0x51c064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23016));
    // 0x51c068: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51c068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x51c06c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x51c070: 0xac4489d8  sw          $a0, -0x7628($v0)
    ctx->pc = 0x51c070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937048), GPR_U32(ctx, 4));
    // 0x51c074: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c078: 0x244259d8  addiu       $v0, $v0, 0x59D8
    ctx->pc = 0x51c078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23000));
    // 0x51c07c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x51c080: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x51c080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x51c084: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x51c084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x51c088: 0x3c023f6e  lui         $v0, 0x3F6E
    ctx->pc = 0x51c088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16238 << 16));
    // 0x51c08c: 0x3443eeef  ori         $v1, $v0, 0xEEEF
    ctx->pc = 0x51c08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x51c090: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x51c090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51c094: 0x3e00008  jr          $ra
    ctx->pc = 0x51C094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C094u;
            // 0x51c098: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C09Cu;
    // 0x51c09c: 0x0  nop
    ctx->pc = 0x51c09cu;
    // NOP
    // 0x51c0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51c0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51c0a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51c0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51c0a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51c0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51c0ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51c0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51c0b0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x51C0B0u;
    {
        const bool branch_taken_0x51c0b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51c0b0) {
            ctx->pc = 0x51C0B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51C0B0u;
            // 0x51c0b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51C0E4u;
            goto label_51c0e4;
        }
    }
    ctx->pc = 0x51C0B8u;
    // 0x51c0b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c0bc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x51c0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x51c0c0: 0x244259e8  addiu       $v0, $v0, 0x59E8
    ctx->pc = 0x51c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23016));
    // 0x51c0c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x51c0c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x51c0c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x51c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x51c0cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x51c0d0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x51C0D0u;
    {
        const bool branch_taken_0x51c0d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x51C0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C0D0u;
            // 0x51c0d4: 0xac4089d8  sw          $zero, -0x7628($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937048), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51c0d0) {
            ctx->pc = 0x51C0E0u;
            goto label_51c0e0;
        }
    }
    ctx->pc = 0x51C0D8u;
    // 0x51c0d8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51C0D8u;
    SET_GPR_U32(ctx, 31, 0x51C0E0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C0E0u; }
        if (ctx->pc != 0x51C0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C0E0u; }
        if (ctx->pc != 0x51C0E0u) { return; }
    }
    ctx->pc = 0x51C0E0u;
label_51c0e0:
    // 0x51c0e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51c0e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51c0e4:
    // 0x51c0e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51c0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51c0e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51c0e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51c0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x51C0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C0ECu;
            // 0x51c0f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C0F4u;
    // 0x51c0f4: 0x0  nop
    ctx->pc = 0x51c0f4u;
    // NOP
    // 0x51c0f8: 0x0  nop
    ctx->pc = 0x51c0f8u;
    // NOP
    // 0x51c0fc: 0x0  nop
    ctx->pc = 0x51c0fcu;
    // NOP
}
