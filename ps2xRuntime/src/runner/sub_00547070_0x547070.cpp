#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00547070
// Address: 0x547070 - 0x547110
void sub_00547070_0x547070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00547070_0x547070");
#endif

    switch (ctx->pc) {
        case 0x5470a4u: goto label_5470a4;
        case 0x5470c8u: goto label_5470c8;
        default: break;
    }

    ctx->pc = 0x547070u;

    // 0x547070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x547070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x547074: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x547074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x547078: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x547078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x54707c: 0x24427960  addiu       $v0, $v0, 0x7960
    ctx->pc = 0x54707cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31072));
    // 0x547080: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x547080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x547084: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x547084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x547088: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x547088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x54708c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x54708cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x547090: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x547090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x547094: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x547094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x547098: 0xa0800054  sb          $zero, 0x54($a0)
    ctx->pc = 0x547098u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x54709c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x54709Cu;
    SET_GPR_U32(ctx, 31, 0x5470A4u);
    ctx->pc = 0x5470A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54709Cu;
            // 0x5470a0: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5470A4u; }
        if (ctx->pc != 0x5470A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5470A4u; }
        if (ctx->pc != 0x5470A4u) { return; }
    }
    ctx->pc = 0x5470A4u;
label_5470a4:
    // 0x5470a4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5470a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5470a8: 0xa2000024  sb          $zero, 0x24($s0)
    ctx->pc = 0x5470a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x5470ac: 0x244278e0  addiu       $v0, $v0, 0x78E0
    ctx->pc = 0x5470acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30944));
    // 0x5470b0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x5470b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x5470b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x5470b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x5470b8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5470b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x5470bc: 0x8c46d950  lw          $a2, -0x26B0($v0)
    ctx->pc = 0x5470bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957392)));
    // 0x5470c0: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x5470C0u;
    SET_GPR_U32(ctx, 31, 0x5470C8u);
    ctx->pc = 0x5470C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5470C0u;
            // 0x5470c4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5470C8u; }
        if (ctx->pc != 0x5470C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5470C8u; }
        if (ctx->pc != 0x5470C8u) { return; }
    }
    ctx->pc = 0x5470C8u;
label_5470c8:
    // 0x5470c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5470c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5470cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5470ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5470d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5470d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5470d4: 0x3e00008  jr          $ra
    ctx->pc = 0x5470D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5470D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5470D4u;
            // 0x5470d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5470DCu;
    // 0x5470dc: 0x0  nop
    ctx->pc = 0x5470dcu;
    // NOP
    // 0x5470e0: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x5470e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x5470e4: 0xa0860054  sb          $a2, 0x54($a0)
    ctx->pc = 0x5470e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 6));
    // 0x5470e8: 0xa0830016  sb          $v1, 0x16($a0)
    ctx->pc = 0x5470e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 3));
    // 0x5470ec: 0x28c3000a  slti        $v1, $a2, 0xA
    ctx->pc = 0x5470ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x5470f0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x5470F0u;
    {
        const bool branch_taken_0x5470f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5470F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5470F0u;
            // 0x5470f4: 0x24c50030  addiu       $a1, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5470f0) {
            ctx->pc = 0x5470FCu;
            goto label_5470fc;
        }
    }
    ctx->pc = 0x5470F8u;
    // 0x5470f8: 0x24c50057  addiu       $a1, $a2, 0x57
    ctx->pc = 0x5470f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 87));
label_5470fc:
    // 0x5470fc: 0x3e00008  jr          $ra
    ctx->pc = 0x5470FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5470FCu;
            // 0x547100: 0xa0850015  sb          $a1, 0x15($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547104u;
    // 0x547104: 0x0  nop
    ctx->pc = 0x547104u;
    // NOP
    // 0x547108: 0x0  nop
    ctx->pc = 0x547108u;
    // NOP
    // 0x54710c: 0x0  nop
    ctx->pc = 0x54710cu;
    // NOP
}
