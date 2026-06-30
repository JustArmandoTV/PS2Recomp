#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024A510
// Address: 0x24a510 - 0x24a580
void sub_0024A510_0x24a510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A510_0x24a510");
#endif

    switch (ctx->pc) {
        case 0x24a550u: goto label_24a550;
        case 0x24a564u: goto label_24a564;
        default: break;
    }

    ctx->pc = 0x24a510u;

    // 0x24a510: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24a510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x24a514: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24a514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24a518: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24a518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24a51c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24a51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24a520: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24a520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a524: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24a524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24a528: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24a528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a52c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x24a52cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a530: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x24a530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24a534: 0xa3a0006c  sb          $zero, 0x6C($sp)
    ctx->pc = 0x24a534u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a538: 0xa3a0006d  sb          $zero, 0x6D($sp)
    ctx->pc = 0x24a538u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 109), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a53c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x24a53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x24a540: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x24a540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x24a544: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x24a544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x24a548: 0xc092928  jal         func_24A4A0
    ctx->pc = 0x24A548u;
    SET_GPR_U32(ctx, 31, 0x24A550u);
    ctx->pc = 0x24A54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A548u;
            // 0x24a54c: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A0u;
    if (runtime->hasFunction(0x24A4A0u)) {
        auto targetFn = runtime->lookupFunction(0x24A4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A550u; }
        if (ctx->pc != 0x24A550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024A4A0_0x24a4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A550u; }
        if (ctx->pc != 0x24A550u) { return; }
    }
    ctx->pc = 0x24A550u;
label_24a550:
    // 0x24a550: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a554: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24a554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a558: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x24a558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a55c: 0xc07ffd4  jal         func_1FFF50
    ctx->pc = 0x24A55Cu;
    SET_GPR_U32(ctx, 31, 0x24A564u);
    ctx->pc = 0x24A560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A55Cu;
            // 0x24a560: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF50u;
    if (runtime->hasFunction(0x1FFF50u)) {
        auto targetFn = runtime->lookupFunction(0x1FFF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A564u; }
        if (ctx->pc != 0x24A564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFF50_0x1fff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A564u; }
        if (ctx->pc != 0x24A564u) { return; }
    }
    ctx->pc = 0x24A564u;
label_24a564:
    // 0x24a564: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24a564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24a568: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24a568u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a56c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24a56cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a570: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24a570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a574: 0x3e00008  jr          $ra
    ctx->pc = 0x24A574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A574u;
            // 0x24a578: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24A57Cu;
    // 0x24a57c: 0x0  nop
    ctx->pc = 0x24a57cu;
    // NOP
}
