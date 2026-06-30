#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00245280
// Address: 0x245280 - 0x2452f0
void sub_00245280_0x245280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245280_0x245280");
#endif

    switch (ctx->pc) {
        case 0x2452acu: goto label_2452ac;
        case 0x2452d0u: goto label_2452d0;
        default: break;
    }

    ctx->pc = 0x245280u;

    // 0x245280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x245280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x245284: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x245284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x245288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x245288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24528c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24528cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x245290: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x245290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245294: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x245294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245298: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x245298u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x24529c: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x24529cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2452a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2452a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2452a4: 0xc092a38  jal         func_24A8E0
    ctx->pc = 0x2452A4u;
    SET_GPR_U32(ctx, 31, 0x2452ACu);
    ctx->pc = 0x2452A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2452A4u;
            // 0x2452a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24A8E0u;
    if (runtime->hasFunction(0x24A8E0u)) {
        auto targetFn = runtime->lookupFunction(0x24A8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2452ACu; }
        if (ctx->pc != 0x2452ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024A8E0_0x24a8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2452ACu; }
        if (ctx->pc != 0x2452ACu) { return; }
    }
    ctx->pc = 0x2452ACu;
label_2452ac:
    // 0x2452ac: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x2452acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2452b0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2452B0u;
    {
        const bool branch_taken_0x2452b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2452B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2452B0u;
            // 0x2452b4: 0xa2200006  sb          $zero, 0x6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2452b0) {
            ctx->pc = 0x2452C8u;
            goto label_2452c8;
        }
    }
    ctx->pc = 0x2452B8u;
    // 0x2452b8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2452b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2452bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2452bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2452c0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2452c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2452c4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2452c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2452c8:
    // 0x2452c8: 0xc0917e8  jal         func_245FA0
    ctx->pc = 0x2452C8u;
    SET_GPR_U32(ctx, 31, 0x2452D0u);
    ctx->pc = 0x2452CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2452C8u;
            // 0x2452cc: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245FA0u;
    if (runtime->hasFunction(0x245FA0u)) {
        auto targetFn = runtime->lookupFunction(0x245FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2452D0u; }
        if (ctx->pc != 0x2452D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245FA0_0x245fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2452D0u; }
        if (ctx->pc != 0x2452D0u) { return; }
    }
    ctx->pc = 0x2452D0u;
label_2452d0:
    // 0x2452d0: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x2452d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2452d4: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2452d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2452d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2452d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2452dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2452dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2452e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2452e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2452e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2452E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2452E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2452E4u;
            // 0x2452e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2452ECu;
    // 0x2452ec: 0x0  nop
    ctx->pc = 0x2452ecu;
    // NOP
}
