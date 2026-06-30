#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00547110
// Address: 0x547110 - 0x547190
void sub_00547110_0x547110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00547110_0x547110");
#endif

    switch (ctx->pc) {
        case 0x547144u: goto label_547144;
        case 0x547168u: goto label_547168;
        default: break;
    }

    ctx->pc = 0x547110u;

    // 0x547110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x547110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x547114: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x547114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x547118: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x547118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x54711c: 0x24427960  addiu       $v0, $v0, 0x7960
    ctx->pc = 0x54711cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31072));
    // 0x547120: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x547120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x547124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x547124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x547128: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x547128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x54712c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x54712cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x547130: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x547130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x547134: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x547134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x547138: 0xa0800054  sb          $zero, 0x54($a0)
    ctx->pc = 0x547138u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x54713c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x54713Cu;
    SET_GPR_U32(ctx, 31, 0x547144u);
    ctx->pc = 0x547140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54713Cu;
            // 0x547140: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547144u; }
        if (ctx->pc != 0x547144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547144u; }
        if (ctx->pc != 0x547144u) { return; }
    }
    ctx->pc = 0x547144u;
label_547144:
    // 0x547144: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x547144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x547148: 0xa2000024  sb          $zero, 0x24($s0)
    ctx->pc = 0x547148u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x54714c: 0x244278a0  addiu       $v0, $v0, 0x78A0
    ctx->pc = 0x54714cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30880));
    // 0x547150: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x547150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x547154: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x547154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x547158: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x547158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x54715c: 0x8c46de50  lw          $a2, -0x21B0($v0)
    ctx->pc = 0x54715cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958672)));
    // 0x547160: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x547160u;
    SET_GPR_U32(ctx, 31, 0x547168u);
    ctx->pc = 0x547164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547160u;
            // 0x547164: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547168u; }
        if (ctx->pc != 0x547168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547168u; }
        if (ctx->pc != 0x547168u) { return; }
    }
    ctx->pc = 0x547168u;
label_547168:
    // 0x547168: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x547168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x54716c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x54716cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x547170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x547170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x547174: 0x3e00008  jr          $ra
    ctx->pc = 0x547174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547174u;
            // 0x547178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x54717Cu;
    // 0x54717c: 0x0  nop
    ctx->pc = 0x54717cu;
    // NOP
    // 0x547180: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x547180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x547184: 0x3e00008  jr          $ra
    ctx->pc = 0x547184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547184u;
            // 0x547188: 0xa0830016  sb          $v1, 0x16($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x54718Cu;
    // 0x54718c: 0x0  nop
    ctx->pc = 0x54718cu;
    // NOP
}
