#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010BC80
// Address: 0x10bc80 - 0x10bcf8
void sub_0010BC80_0x10bc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BC80_0x10bc80");
#endif

    switch (ctx->pc) {
        case 0x10bc94u: goto label_10bc94;
        default: break;
    }

    ctx->pc = 0x10bc80u;

    // 0x10bc80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10bc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10bc84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10bc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10bc88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10bc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10bc8c: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10BC8Cu;
    SET_GPR_U32(ctx, 31, 0x10BC94u);
    ctx->pc = 0x10BC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BC8Cu;
            // 0x10bc90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC94u; }
        if (ctx->pc != 0x10BC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC94u; }
        if (ctx->pc != 0x10BC94u) { return; }
    }
    ctx->pc = 0x10BC94u;
label_10bc94:
    // 0x10bc94: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10bc94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10bc98: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10bc98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10bc9c: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x10bc9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x10bca0: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x10bca0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x10bca4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10bca4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x10000000
    // 0x10bca8: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x10bca8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x10bcac: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10bcacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10bcb0: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x10bcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x10bcb4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x10bcb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x10bcb8: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x10bcb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x10bcbc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10bcc0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x10bcc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x10bcc4: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x10bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x10bcc8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10bccc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x10bcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x10bcd0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10bcd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10BCD4u;
    {
        const bool branch_taken_0x10bcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BCD4u;
            // 0x10bcd8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bcd4) {
            ctx->pc = 0x10BCE8u;
            goto label_10bce8;
        }
    }
    ctx->pc = 0x10BCDCu;
    // 0x10bcdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10bcdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bce0: 0x804597c  j           func_1165F0
    ctx->pc = 0x10BCE0u;
    ctx->pc = 0x10BCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BCE0u;
            // 0x10bce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001165F0_0x1165f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10BCE8u;
label_10bce8:
    // 0x10bce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10bce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bcec: 0x3e00008  jr          $ra
    ctx->pc = 0x10BCECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BCECu;
            // 0x10bcf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10BCF4u;
    // 0x10bcf4: 0x0  nop
    ctx->pc = 0x10bcf4u;
    // NOP
}
